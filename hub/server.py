#!/usr/bin/env python3
"""Badsha private learning hub — stdlib only."""
from __future__ import annotations

import json
import os
import re
import shutil
import subprocess
import tempfile
import threading
import urllib.parse
from http.server import SimpleHTTPRequestHandler, ThreadingHTTPServer
from pathlib import Path

ROOT = Path(__file__).resolve().parents[1]
STATIC = Path(__file__).resolve().parent / "static"
PORT = int(os.environ.get("BADSHA_PORT", "8765"))

DAY_RE = re.compile(r"^Day(\d+)$")
TITLE_RE = re.compile(r"^#\s+Day\s+\d+\s*[-—–]+\s*(.+)$", re.M)

HELP_GLOSSARY: dict[str, dict[str, str]] = {
    "pointer": {
        "title": "Pointers",
        "body": "A pointer stores a memory address. `int* p = &x;` means p holds where x lives. Use `*p` to read/write the value. Prefer references for simple aliasing; use pointers when nullability or reseating matters. Always initialize; prefer `nullptr` over `0`/`NULL`.",
    },
    "reference": {
        "title": "References",
        "body": "A reference is another name for an existing object: `int& r = x;`. It cannot be null and cannot be reseated. Pass large objects as `const T&` to avoid copies. Dangling references (bound to destroyed temporaries/locals) are undefined behaviour.",
    },
    "ub": {
        "title": "Undefined behaviour (UB)",
        "body": "UB means the standard makes no promise: signed overflow, out-of-bounds access, use-after-free, data races, uninitialized reads. Compilers may delete 'impossible' code. Fix by keeping invariants (bounds, lifetimes, initialized values) and using sanitizers when available.",
    },
    "undefined": {
        "title": "Undefined behaviour (UB)",
        "body": "UB means the standard makes no promise: signed overflow, out-of-bounds access, use-after-free, data races, uninitialized reads. Compilers may delete 'impossible' code. Fix by keeping invariants (bounds, lifetimes, initialized values) and using sanitizers when available.",
    },
    "move": {
        "title": "Move semantics",
        "body": "`std::move(x)` casts to an rvalue so move constructors/assignment can steal resources (buffers, ownership). After a move, the source is valid but unspecified — usually empty. Prefer moves for unique ownership (`unique_ptr`, large strings/vectors).",
    },
    "raii": {
        "title": "RAII",
        "body": "Resource Acquisition Is Initialization: acquire in a constructor, release in the destructor. File handles, mutex locks, and smart pointers all follow this. When the object goes out of scope — including via exceptions — cleanup still runs.",
    },
    "const": {
        "title": "const correctness",
        "body": "`const` means 'I will not modify this through this name'. Prefer `const T&` parameters, `const` member functions for observers, and `constexpr` for true compile-time values. `const_cast` to remove const is almost always a design smell.",
    },
    "virtual": {
        "title": "Virtual functions",
        "body": "Mark a base method `virtual` so calls through a base pointer/reference dispatch to the derived override. Always give polymorphic bases a virtual destructor. Use `override` so the compiler catches signature mismatches.",
    },
    "template": {
        "title": "Templates",
        "body": "Templates generate code for each type you use. Write the generic algorithm once (`template<typename T> ...`). Errors often appear at the call site. Keep templates in headers. Concepts (C++20) make constraints readable.",
    },
    "stl": {
        "title": "STL containers",
        "body": "Prefer `std::vector` for sequences, `std::unordered_map` for average O(1) keyed lookup, `std::map` when you need sorted keys. Know iterator invalidation rules. Pass containers by `const&`; mutate carefully with `reserve`/`emplace`.",
    },
    "vector": {
        "title": "std::vector",
        "body": "Dynamic array: contiguous storage, O(1) random access. Growth may reallocate and invalidate iterators/pointers/references. Call `reserve` when you know the size. Prefer `emplace_back` when constructing in place.",
    },
    "thread": {
        "title": "Threads & races",
        "body": "Shared mutable data needs synchronization (`mutex`, atomics). A data race is UB. Prefer `lock_guard`/`unique_lock`/`scoped_lock`. Join threads before destroying them. Start simple: one mutex around shared state.",
    },
    "exception": {
        "title": "Exceptions",
        "body": "Throw for exceptional failures; catch by `const&`. Use RAII so resources release during stack unwinding. Mark non-throwing moves `noexcept`. Don't throw across C ABI boundaries.",
    },
    "header": {
        "title": "Headers & ODR",
        "body": "Put declarations in headers, definitions in `.cpp` (templates/inline excepted). Include guards or `#pragma once`. Never `using namespace std;` in headers. One definition rule: one non-inline definition across the whole program.",
    },
    "compile": {
        "title": "Compile errors vs linker errors",
        "body": "'was not declared' / type errors = compiler. 'undefined reference' = linker (missing `.cpp` or definition). 'multiple definition' = same symbol defined twice. Fix the stage that failed.",
    },
    "string": {
        "title": "std::string",
        "body": "Owning, growable character sequence. Prefer `std::string` over C-strings for safety. Use `std::string_view` for non-owning read-only views — never return a view into a temporary. Prefer `'\n'` over `endl` unless you need a flush.",
    },
}


class CourseIndex:
    def __init__(self, root: Path) -> None:
        self.root = root
        self.days: list[dict] = []
        self.search_docs: list[dict] = []
        self._lock = threading.Lock()
        self.rebuild()

    def rebuild(self) -> None:
        days: list[dict] = []
        docs: list[dict] = []
        for path in sorted(self.root.iterdir()):
            if not path.is_dir():
                continue
            m = DAY_RE.match(path.name)
            if not m:
                continue
            num = int(m.group(1))
            notes = path / "notes.md"
            theme = f"Day {num:02d}"
            text = ""
            if notes.exists():
                text = notes.read_text(encoding="utf-8", errors="replace")
                tm = TITLE_RE.search(text)
                if tm:
                    theme = tm.group(1).strip()
            days.append({"n": num, "id": path.name, "theme": theme})
            for name in ("notes.md", "questions.md", "answers.md"):
                f = path / name
                if f.exists():
                    body = f.read_text(encoding="utf-8", errors="replace")
                    docs.append(
                        {
                            "day": num,
                            "file": name,
                            "theme": theme,
                            "text": body,
                            "lower": body.lower(),
                        }
                    )
        days.sort(key=lambda d: d["n"])
        with self._lock:
            self.days = days
            self.search_docs = docs

    def list_days(self) -> list[dict]:
        with self._lock:
            return list(self.days)

    def day_payload(self, n: int, lang: str = "en") -> dict | None:
        ddir = self.root / f"Day{n:02d}"
        if not ddir.is_dir():
            ddir = self.root / f"Day{n}"
            if not ddir.is_dir():
                return None
        # Hinglish mirror holds only the .md files; examples stay English.
        hidir = self.root / "hinglish" / ddir.name

        def md(name: str) -> str:
            for d in ((hidir,) if lang == "hi" else ()) + (ddir,):
                f = d / name
                if f.exists():
                    return f.read_text(encoding="utf-8", errors="replace")
            return ""

        theme = f"Day {n:02d}"
        notes = md("notes.md")
        questions = md("questions.md")
        answers = md("answers.md")
        if notes:
            tm = TITLE_RE.search(notes)
            if tm:
                theme = tm.group(1).strip()
        examples = []
        exdir = ddir / "examples"
        if exdir.is_dir():
            for f in sorted(exdir.glob("*.cpp")):
                examples.append(
                    {
                        "name": f.name,
                        "source": f.read_text(encoding="utf-8", errors="replace"),
                    }
                )
        return {
            "n": n,
            "id": ddir.name,
            "theme": theme,
            "notes": notes,
            "questions": questions,
            "answers": answers,
            "examples": examples,
        }

    def search(self, q: str, limit: int = 40) -> list[dict]:
        q = q.strip().lower()
        if not q:
            return []
        terms = [t for t in re.split(r"\s+", q) if t]
        hits: list[dict] = []
        with self._lock:
            docs = list(self.search_docs)
        for doc in docs:
            low = doc["lower"]
            if not all(t in low for t in terms):
                continue
            # snippet around first term
            idx = low.find(terms[0])
            start = max(0, idx - 60)
            end = min(len(doc["text"]), idx + 140)
            snippet = doc["text"][start:end].replace("\n", " ")
            if start > 0:
                snippet = "…" + snippet
            if end < len(doc["text"]):
                snippet = snippet + "…"
            hits.append(
                {
                    "day": doc["day"],
                    "file": doc["file"],
                    "theme": doc["theme"],
                    "snippet": snippet,
                }
            )
            if len(hits) >= limit:
                break
        return hits


INDEX = CourseIndex(ROOT)


def find_gpp() -> str | None:
    return shutil.which("g++") or shutil.which("g++.exe")


def compile_and_run(source: str, timeout: float = 8.0) -> dict:
    gpp = find_gpp()
    if not gpp:
        return {
            "ok": False,
            "exit_code": -1,
            "stdout": "",
            "stderr": "g++ not found on PATH. Install MSYS2/MinGW (Windows) or g++ (Linux), then restart the hub.",
            "compiler": None,
        }
    with tempfile.TemporaryDirectory(prefix="badsha_") as tmp:
        tdir = Path(tmp)
        src = tdir / "main.cpp"
        exe = tdir / ("main.exe" if os.name == "nt" else "main")
        src.write_text(source, encoding="utf-8")
        try:
            c = subprocess.run(
                [gpp, "-std=c++17", "-Wall", "-Wextra", str(src), "-o", str(exe)],
                capture_output=True,
                text=True,
                timeout=timeout,
            )
        except subprocess.TimeoutExpired:
            return {
                "ok": False,
                "exit_code": -1,
                "stdout": "",
                "stderr": "Compile timed out.",
                "compiler": gpp,
            }
        if c.returncode != 0:
            return {
                "ok": False,
                "exit_code": c.returncode,
                "stdout": c.stdout,
                "stderr": c.stderr,
                "compiler": gpp,
            }
        try:
            r = subprocess.run(
                [str(exe)],
                capture_output=True,
                text=True,
                timeout=timeout,
            )
        except subprocess.TimeoutExpired:
            return {
                "ok": False,
                "exit_code": -1,
                "stdout": "",
                "stderr": "Program timed out (possible infinite loop).",
                "compiler": gpp,
            }
        return {
            "ok": r.returncode == 0,
            "exit_code": r.returncode,
            "stdout": r.stdout,
            "stderr": r.stderr,
            "compiler": gpp,
        }


def help_lookup(topic: str) -> dict:
    t = topic.strip().lower()
    if not t:
        return {
            "title": "Help topics",
            "body": "Try: pointer, reference, ub, move, raii, const, virtual, template, stl, vector, thread, exception, header, compile, string",
            "matches": list(HELP_GLOSSARY.keys()),
        }
    if t in HELP_GLOSSARY:
        item = HELP_GLOSSARY[t]
        return {"title": item["title"], "body": item["body"], "matches": [t]}
    matches = [k for k in HELP_GLOSSARY if t in k or t in HELP_GLOSSARY[k]["title"].lower()]
    if len(matches) == 1:
        item = HELP_GLOSSARY[matches[0]]
        return {"title": item["title"], "body": item["body"], "matches": matches}
    if matches:
        return {
            "title": "Several topics matched",
            "body": "Pick one: " + ", ".join(matches),
            "matches": matches,
        }
    # fuzzy: search course
    hits = INDEX.search(t, limit=8)
    return {
        "title": f"No glossary entry for '{topic}'",
        "body": "Search the course instead, or try: pointer, move, raii, virtual, ub.",
        "matches": [],
        "search_hits": hits,
    }


class HubHandler(SimpleHTTPRequestHandler):
    def __init__(self, *args, **kwargs):
        super().__init__(*args, directory=str(STATIC), **kwargs)

    def log_message(self, fmt: str, *args) -> None:
        print(f"[badsha] {self.address_string()} {fmt % args}")

    def _json(self, code: int, payload: dict | list) -> None:
        data = json.dumps(payload).encode("utf-8")
        self.send_response(code)
        self.send_header("Content-Type", "application/json; charset=utf-8")
        self.send_header("Content-Length", str(len(data)))
        self.send_header("Cache-Control", "no-store")
        self.end_headers()
        self.wfile.write(data)

    def _read_json(self) -> dict:
        length = int(self.headers.get("Content-Length", "0") or 0)
        raw = self.rfile.read(length) if length else b"{}"
        try:
            return json.loads(raw.decode("utf-8"))
        except json.JSONDecodeError:
            return {}

    def do_GET(self) -> None:
        parsed = urllib.parse.urlparse(self.path)
        path = parsed.path
        qs = urllib.parse.parse_qs(parsed.query)

        if path == "/api/days":
            self._json(200, {"days": INDEX.list_days(), "gpp": find_gpp()})
            return
        if path.startswith("/api/day/"):
            try:
                n = int(path.split("/")[-1])
            except ValueError:
                self._json(400, {"error": "bad day"})
                return
            payload = INDEX.day_payload(n, (qs.get("lang") or ["en"])[0])
            if not payload:
                self._json(404, {"error": "day not found"})
                return
            self._json(200, payload)
            return
        if path == "/api/search":
            q = (qs.get("q") or [""])[0]
            self._json(200, {"q": q, "hits": INDEX.search(q)})
            return
        if path == "/api/help":
            topic = (qs.get("topic") or [""])[0]
            self._json(200, help_lookup(topic))
            return
        if path == "/api/health":
            self._json(200, {"ok": True, "root": str(ROOT), "gpp": find_gpp()})
            return
        if path in ("/", ""):
            self.path = "/index.html"
        return SimpleHTTPRequestHandler.do_GET(self)

    def do_POST(self) -> None:
        parsed = urllib.parse.urlparse(self.path)
        if parsed.path == "/api/compile":
            body = self._read_json()
            source = body.get("source", "")
            if not isinstance(source, str) or not source.strip():
                self._json(400, {"error": "source required"})
                return
            if len(source) > 200_000:
                self._json(400, {"error": "source too large"})
                return
            self._json(200, compile_and_run(source))
            return
        self._json(404, {"error": "not found"})


def main() -> None:
    if not STATIC.is_dir():
        raise SystemExit(f"missing static dir: {STATIC}")
    server = ThreadingHTTPServer(("127.0.0.1", PORT), HubHandler)
    print(f"Badsha hub -> http://127.0.0.1:{PORT}", flush=True)
    print(f"Course root: {ROOT}", flush=True)
    print(f"g++: {find_gpp() or 'NOT FOUND'}", flush=True)
    try:
        server.serve_forever()
    except KeyboardInterrupt:
        print("\nbye")


if __name__ == "__main__":
    main()
