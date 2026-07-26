#!/usr/bin/env python3
"""Build catalog + search index for GitHub Pages static hub."""
from __future__ import annotations

import json
import re
from pathlib import Path

ROOT = Path(__file__).resolve().parents[1]
OUT = ROOT / "hub" / "data"
OUT_STATIC = ROOT / "hub" / "static" / "data"
DAY_RE = re.compile(r"^Day(\d+)$")
TITLE_RE = re.compile(r"^#\s+Day\s+\d+\s*[-—–]+\s*(.+)$", re.M)

HELP = {
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
        "body": "Owning, growable character sequence. Prefer `std::string` over C-strings for safety. Use `std::string_view` for non-owning read-only views — never return a view into a temporary. Prefer `'\\n'` over `endl` unless you need a flush.",
    },
}


def main() -> None:
    OUT.mkdir(parents=True, exist_ok=True)
    OUT_STATIC.mkdir(parents=True, exist_ok=True)
    days = []
    search_docs = []
    for path in sorted(ROOT.iterdir()):
        if not path.is_dir():
            continue
        m = DAY_RE.match(path.name)
        if not m:
            continue
        n = int(m.group(1))
        theme = f"Day {n:02d}"
        notes_path = path / "notes.md"
        notes = ""
        if notes_path.exists():
            notes = notes_path.read_text(encoding="utf-8", errors="replace")
            tm = TITLE_RE.search(notes)
            if tm:
                theme = tm.group(1).strip()
        examples = []
        exdir = path / "examples"
        if exdir.is_dir():
            examples = sorted(p.name for p in exdir.glob("*.cpp"))
        days.append({"n": n, "id": path.name, "theme": theme, "examples": examples})
        for name in ("notes.md", "questions.md", "answers.md"):
            f = path / name
            if not f.exists():
                continue
            body = f.read_text(encoding="utf-8", errors="replace")
            search_docs.append(
                {
                    "day": n,
                    "file": name,
                    "theme": theme,
                    "text": body[:12000],
                }
            )

    days.sort(key=lambda d: d["n"])
    catalog = json.dumps({"days": days}, ensure_ascii=False)
    search = json.dumps({"docs": search_docs}, ensure_ascii=False)
    help_json = json.dumps(HELP, ensure_ascii=False, indent=2)
    for dest in (OUT, OUT_STATIC):
        (dest / "catalog.json").write_text(catalog, encoding="utf-8")
        (dest / "search_index.json").write_text(search, encoding="utf-8")
        (dest / "help.json").write_text(help_json, encoding="utf-8")
    print(f"wrote {len(days)} days -> {OUT} and {OUT_STATIC}")


if __name__ == "__main__":
    main()
