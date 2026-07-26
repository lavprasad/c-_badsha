# Day 115 -- std::span

Today's goal: build a working mental model of **std::span** and practice it with small, compile-ready examples.

| # | Concept |
|--:|---------|
| 1 | Non-owning contiguous view |
| 2 | span from array/vector |
| 3 | subspan |
| 4 | Dynamic vs static extent |
| 5 | API boundaries |
| 6 | vs string_view |
| 7 | Lifetime safety |
| 8 | Iteration |
| 9 | const span |
| 10 | Sum a span |

---

## 1. Non-owning contiguous view

Focus for this concept: understand **what problem `Non-owning contiguous view` solves**, the **rules the language imposes**, and the **failure modes** you'll hit in real code.

Key points:
- Define the idea in one sentence: what is `Non-owning contiguous view` for?
- Name the types / functions / keywords involved.
- State one invariant you must preserve (ownership, lifetime, complexity, or const).
- State one common bug and how to spot it.
- Tie it back to earlier days (types, RAII, STL, templates, concurrency -- whichever applies).

Practice prompt:
- Open `examples/01_*.cpp`, predict the output, then change one line and re-predict.

## 2. span from array/vector

Focus for this concept: understand **what problem `span from array/vector` solves**, the **rules the language imposes**, and the **failure modes** you'll hit in real code.

Key points:
- Define the idea in one sentence: what is `span from array/vector` for?
- Name the types / functions / keywords involved.
- State one invariant you must preserve (ownership, lifetime, complexity, or const).
- State one common bug and how to spot it.
- Tie it back to earlier days (types, RAII, STL, templates, concurrency -- whichever applies).

Practice prompt:
- Open `examples/02_*.cpp`, predict the output, then change one line and re-predict.

## 3. subspan

Focus for this concept: understand **what problem `subspan` solves**, the **rules the language imposes**, and the **failure modes** you'll hit in real code.

Key points:
- Define the idea in one sentence: what is `subspan` for?
- Name the types / functions / keywords involved.
- State one invariant you must preserve (ownership, lifetime, complexity, or const).
- State one common bug and how to spot it.
- Tie it back to earlier days (types, RAII, STL, templates, concurrency -- whichever applies).

Practice prompt:
- Open `examples/03_*.cpp`, predict the output, then change one line and re-predict.

## 4. Dynamic vs static extent

Focus for this concept: understand **what problem `Dynamic vs static extent` solves**, the **rules the language imposes**, and the **failure modes** you'll hit in real code.

Key points:
- Define the idea in one sentence: what is `Dynamic vs static extent` for?
- Name the types / functions / keywords involved.
- State one invariant you must preserve (ownership, lifetime, complexity, or const).
- State one common bug and how to spot it.
- Tie it back to earlier days (types, RAII, STL, templates, concurrency -- whichever applies).

Practice prompt:
- Open `examples/04_*.cpp`, predict the output, then change one line and re-predict.

## 5. API boundaries

Focus for this concept: understand **what problem `API boundaries` solves**, the **rules the language imposes**, and the **failure modes** you'll hit in real code.

Key points:
- Define the idea in one sentence: what is `API boundaries` for?
- Name the types / functions / keywords involved.
- State one invariant you must preserve (ownership, lifetime, complexity, or const).
- State one common bug and how to spot it.
- Tie it back to earlier days (types, RAII, STL, templates, concurrency -- whichever applies).

Practice prompt:
- Open `examples/05_*.cpp`, predict the output, then change one line and re-predict.

## 6. vs string_view

Focus for this concept: understand **what problem `vs string_view` solves**, the **rules the language imposes**, and the **failure modes** you'll hit in real code.

Key points:
- Define the idea in one sentence: what is `vs string_view` for?
- Name the types / functions / keywords involved.
- State one invariant you must preserve (ownership, lifetime, complexity, or const).
- State one common bug and how to spot it.
- Tie it back to earlier days (types, RAII, STL, templates, concurrency -- whichever applies).

Practice prompt:
- Open `examples/06_*.cpp`, predict the output, then change one line and re-predict.

## 7. Lifetime safety

Focus for this concept: understand **what problem `Lifetime safety` solves**, the **rules the language imposes**, and the **failure modes** you'll hit in real code.

Key points:
- Define the idea in one sentence: what is `Lifetime safety` for?
- Name the types / functions / keywords involved.
- State one invariant you must preserve (ownership, lifetime, complexity, or const).
- State one common bug and how to spot it.
- Tie it back to earlier days (types, RAII, STL, templates, concurrency -- whichever applies).

Practice prompt:
- Open `examples/07_*.cpp`, predict the output, then change one line and re-predict.

## 8. Iteration

Focus for this concept: understand **what problem `Iteration` solves**, the **rules the language imposes**, and the **failure modes** you'll hit in real code.

Key points:
- Define the idea in one sentence: what is `Iteration` for?
- Name the types / functions / keywords involved.
- State one invariant you must preserve (ownership, lifetime, complexity, or const).
- State one common bug and how to spot it.
- Tie it back to earlier days (types, RAII, STL, templates, concurrency -- whichever applies).

Practice prompt:
- Open `examples/08_*.cpp`, predict the output, then change one line and re-predict.

## 9. const span

Focus for this concept: understand **what problem `const span` solves**, the **rules the language imposes**, and the **failure modes** you'll hit in real code.

Key points:
- Define the idea in one sentence: what is `const span` for?
- Name the types / functions / keywords involved.
- State one invariant you must preserve (ownership, lifetime, complexity, or const).
- State one common bug and how to spot it.
- Tie it back to earlier days (types, RAII, STL, templates, concurrency -- whichever applies).

Practice prompt:
- Open `examples/09_*.cpp`, predict the output, then change one line and re-predict.

## 10. Sum a span

Focus for this concept: understand **what problem `Sum a span` solves**, the **rules the language imposes**, and the **failure modes** you'll hit in real code.

Key points:
- Define the idea in one sentence: what is `Sum a span` for?
- Name the types / functions / keywords involved.
- State one invariant you must preserve (ownership, lifetime, complexity, or const).
- State one common bug and how to spot it.
- Tie it back to earlier days (types, RAII, STL, templates, concurrency -- whichever applies).

Practice prompt:
- Open `examples/10_*.cpp`, predict the output, then change one line and re-predict.

---

## What you should be able to do after Day 115

- Explain `std::span` to a peer without looking at notes.
- Compile and run all 10 examples with `-std=c++17 -Wall -Wextra` (use newer flags only when the day requires C++20+ features).
- Answer the 5 questions in `questions.md` before peeking at `answers.md`.
- Write one tiny extra program that combines at least 3 of today's concepts.

Now move to `examples/` and run each program. Then attempt `questions.md`.
