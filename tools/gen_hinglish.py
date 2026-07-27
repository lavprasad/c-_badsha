#!/usr/bin/env python3
"""Generate the Hinglish mirror of Day12-Day211 under hinglish/.

Days 01-11 are hand-written and live in hinglish/Day01..Day11 already — this
script never touches them. Examples (.cpp) are not mirrored; the hub falls back
to the English examples because code is code.

ponytail: search index + help glossary stay English-only (build_catalog.py only
walks Day*/). Index the hinglish/ mirror too if search in Hinglish is wanted.
"""
from __future__ import annotations

import sys
from pathlib import Path

ROOT = Path(__file__).resolve().parents[1]
sys.path.insert(0, str(Path(__file__).resolve().parent))
from gen_days import CURRICULUM  # noqa: E402
from teach_hi import teach_hi  # noqa: E402

OUT = ROOT / "hinglish"


def notes_md(day: int, theme: str, concepts: list[str]) -> str:
    lines = [
        f"# Day {day:02d} -- {theme}",
        "",
        f"Aaj ka goal: **{theme}** ko aasan Hinglish me samajhna, har idea ka chhota code sample dekhna, "
        f"phir `examples/` me practice karna.",
        "",
        "Is din ko padhne ka tarika:",
        "1. Har concept ka **Aasan Bhasha** section padho.",
        "2. Code sample par nazar daalo -- pehle predict karo ki output kya aayega.",
        "3. `examples/` me us concept ki file chalao.",
        "4. Uske baad hi `questions.md` kholo.",
        "",
        "| # | Concept |",
        "|--:|---------|",
    ]
    for i, c in enumerate(concepts, 1):
        lines.append(f"| {i} | {c} |")
    lines += ["", "---", ""]
    for i, c in enumerate(concepts, 1):
        t = teach_hi(c, theme)
        lines += [
            f"## {i}. {c}",
            "",
            "### Aasan Bhasha",
            "",
            t["plain"],
            "",
            "### Chhota code",
            "",
            "```cpp",
            t["code"],
            "```",
            "",
            f"- **Yaad rakho:** {t['remember']}",
            f"- **Aam galti:** {t['mistake']}",
            "",
            f"Practice: `examples/{i:02d}_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.",
            "",
        ]
    lines += [
        "---",
        "",
        f"## Day {day:02d} ke baad aapko ye aana chahiye",
        "",
        f"- `{theme}` ko bina notes dekhe kisi dost ko samjha sakna.",
        "- Saare 10 examples `-std=c++17 -Wall -Wextra` ke saath compile aur run karna "
        "(naye flags sirf tab jab din ko C++20+ chahiye).",
        "- `answers.md` dekhne se pehle `questions.md` ke 5 sawaal answer karna.",
        "- Ek chhota extra program likhna jo aaj ke kam se kam 3 concepts jodta ho.",
        "",
        "Ya is din ko **Badsha hub** me kholo (`python3 hub/server.py`) aur Learn / Practice / Quiz tabs use karo.",
        "",
    ]
    return "\n".join(lines)


def questions_md(day: int, theme: str, concepts: list[str]) -> str:
    c0, c1, c2, c3, c4 = concepts[0], concepts[2], concepts[4], concepts[6], concepts[8]
    return f'''# Day {day:02d} -- 5 Tricky Sawaal

> Theme: **{theme}**
> `answers.md` me **jhaanke bina** try karo. Pehle apna guess likho, phir compile/check karo.

---

### Q1. Predict / samjhao

Sambandhit: `{c0}`

```cpp
#include <iostream>
int main() {{
    // Sketch: "{c0}" ke rules ignore karo to kya galat ho sakta hai?
    std::cout << "think about lifetimes, ownership, or complexity\\n";
    return 0;
}}
```

`{c0}` ke aas-paas sabse aam bug kaunsa hai, aur aap use kaise rokoge?

---

### Q2. Design choice

Sambandhit: `{c1}`

Pehle ke dinon ke kisi simple alternative ke bajaye aap `{c1}` kab chunoge? Ek thos scenario aur ek ulta scenario batao.

---

### Q3. Compile ya runtime?

Sambandhit: `{c2}`

`{c2}` ki galti se **compile error**, **linker error**, **runtime bug** ya **undefined behaviour** — kaunsa zyada mumkin hai? Ek example ke saath justify karo.

---

### Q4. Complexity / cost

Sambandhit: `{c3}`

`{c3}` ko seedha-saada use karne ka typical time/space cost kya hai, aur ek optimisation ya behtar API choice kya hogi?

---

### Q5. Teen concepts jodo

`{c0}`, `{c2}` aur `{c4}` ko 15-30 line ke program me jodo jo kisi asli tool me dikh sakta ho (CLI, parser, container wrapper, ya concurrency sketch). Kaunse invariants sach rehne chahiye?

---

Jab paanchon ka jawab apne shabdon me de do, tab `answers.md` kholo.
'''


def answers_md(day: int, theme: str, concepts: list[str], next_day: int | None) -> str:
    nxt = f"Day {next_day:02d}" if next_day else "ek personal project / review week"
    return f'''# Day {day:02d} -- Answers (try karne ke BAAD padho)

Theme: **{theme}**

---

### A1. `{concepts[0]}` ke aas-paas aam bug

Zyadatar log koi invariant chhod dete hain (ownership, lifetime, const, complexity, ya error checking). Bachne ka tarika: invariant ko comment me likho, jahan ho sake RAII / strong types use karo, aur ek assert/self-check add karo.

---

### A2. `{concepts[2]}` kab jeetta hai

Ise tab chuno jab problem ki constraints iski strengths se match karein (clarity, safety, performance, ya API fit). Tab avoid karo jab Day 01-11 ka koi simple tool hi kaam kar deta ho (YAGNI).

---

### A3. `{concepts[4]}` ka failure mode

Failures ko soch-samajh kar classify karo:
- **Compile** -- type/constraint mismatch
- **Link** -- missing definition / ODR
- **Runtime** -- logic / state bug
- **UB** -- lifetime, overflow, data race, invalid iterator

Stage pata hone se fix ka focus mil jaata hai.

---

### A4. `{concepts[6]}` ka cost

Seedha-saada use aksar allocations, copies, locks ya O(n²) patterns chhupa leta hai. Aise algorithms/containers chuno jo access pattern se match karein; micro-optimise karne se pehle naapo.

---

### A5. Integration sketch

Ek solid answer ye naam leta hai:
1. resources ka ownership,
2. errors kaise saamne aate hain,
3. har operation ke baad kya sach rehta hai,
4. ek assert-based check se aap ise kaise test karoge.

---

## Khud ki scoring

- 5/5: strong -- **{nxt}** par badho.
- 3-4: kamzor concept ka example dobara chalao aur wahi sawaal dobara answer karo.
- 0-2: concepts 1, 3, 5 ke `notes.md` sections dobara padho aur ek extra mini-program likho.

Apna score khud ko batao; jo abhi bhi dhundhla hai uska chhota note rakho.
'''


def main() -> None:
    for i, (day, theme, concepts) in enumerate(CURRICULUM):
        nxt = CURRICULUM[i + 1][0] if i + 1 < len(CURRICULUM) else None
        ddir = OUT / f"Day{day:02d}"
        ddir.mkdir(parents=True, exist_ok=True)
        (ddir / "notes.md").write_text(notes_md(day, theme, concepts), encoding="utf-8")
        (ddir / "questions.md").write_text(questions_md(day, theme, concepts), encoding="utf-8")
        (ddir / "answers.md").write_text(
            answers_md(day, theme, concepts, nxt), encoding="utf-8"
        )
    print(f"hinglish: {len(CURRICULUM)} days ({CURRICULUM[0][0]}-{CURRICULUM[-1][0]}) -> {OUT}")


if __name__ == "__main__":
    main()
