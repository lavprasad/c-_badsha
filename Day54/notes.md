# Day 54 -- Multiple inheritance

Today's goal: build a working mental model of **Multiple inheritance** and practice it with small, compile-ready examples.

| # | Concept |
|--:|---------|
| 1 | Why MI exists |
| 2 | Ambiguity |
| 3 | Virtual base classes |
| 4 | Diamond problem |
| 5 | Interface MI |
| 6 | Layout intuition |
| 7 | When to avoid MI |
| 8 | Mixin idea |
| 9 | Casting across bases |
| 10 | A device+logger mix |

---

## 1. Why MI exists

Focus for this concept: understand **what problem `Why MI exists` solves**, the **rules the language imposes**, and the **failure modes** you'll hit in real code.

Key points:
- Define the idea in one sentence: what is `Why MI exists` for?
- Name the types / functions / keywords involved.
- State one invariant you must preserve (ownership, lifetime, complexity, or const).
- State one common bug and how to spot it.
- Tie it back to earlier days (types, RAII, STL, templates, concurrency -- whichever applies).

Practice prompt:
- Open `examples/01_*.cpp`, predict the output, then change one line and re-predict.

## 2. Ambiguity

Focus for this concept: understand **what problem `Ambiguity` solves**, the **rules the language imposes**, and the **failure modes** you'll hit in real code.

Key points:
- Define the idea in one sentence: what is `Ambiguity` for?
- Name the types / functions / keywords involved.
- State one invariant you must preserve (ownership, lifetime, complexity, or const).
- State one common bug and how to spot it.
- Tie it back to earlier days (types, RAII, STL, templates, concurrency -- whichever applies).

Practice prompt:
- Open `examples/02_*.cpp`, predict the output, then change one line and re-predict.

## 3. Virtual base classes

Focus for this concept: understand **what problem `Virtual base classes` solves**, the **rules the language imposes**, and the **failure modes** you'll hit in real code.

Key points:
- Define the idea in one sentence: what is `Virtual base classes` for?
- Name the types / functions / keywords involved.
- State one invariant you must preserve (ownership, lifetime, complexity, or const).
- State one common bug and how to spot it.
- Tie it back to earlier days (types, RAII, STL, templates, concurrency -- whichever applies).

Practice prompt:
- Open `examples/03_*.cpp`, predict the output, then change one line and re-predict.

## 4. Diamond problem

Focus for this concept: understand **what problem `Diamond problem` solves**, the **rules the language imposes**, and the **failure modes** you'll hit in real code.

Key points:
- Define the idea in one sentence: what is `Diamond problem` for?
- Name the types / functions / keywords involved.
- State one invariant you must preserve (ownership, lifetime, complexity, or const).
- State one common bug and how to spot it.
- Tie it back to earlier days (types, RAII, STL, templates, concurrency -- whichever applies).

Practice prompt:
- Open `examples/04_*.cpp`, predict the output, then change one line and re-predict.

## 5. Interface MI

Focus for this concept: understand **what problem `Interface MI` solves**, the **rules the language imposes**, and the **failure modes** you'll hit in real code.

Key points:
- Define the idea in one sentence: what is `Interface MI` for?
- Name the types / functions / keywords involved.
- State one invariant you must preserve (ownership, lifetime, complexity, or const).
- State one common bug and how to spot it.
- Tie it back to earlier days (types, RAII, STL, templates, concurrency -- whichever applies).

Practice prompt:
- Open `examples/05_*.cpp`, predict the output, then change one line and re-predict.

## 6. Layout intuition

Focus for this concept: understand **what problem `Layout intuition` solves**, the **rules the language imposes**, and the **failure modes** you'll hit in real code.

Key points:
- Define the idea in one sentence: what is `Layout intuition` for?
- Name the types / functions / keywords involved.
- State one invariant you must preserve (ownership, lifetime, complexity, or const).
- State one common bug and how to spot it.
- Tie it back to earlier days (types, RAII, STL, templates, concurrency -- whichever applies).

Practice prompt:
- Open `examples/06_*.cpp`, predict the output, then change one line and re-predict.

## 7. When to avoid MI

Focus for this concept: understand **what problem `When to avoid MI` solves**, the **rules the language imposes**, and the **failure modes** you'll hit in real code.

Key points:
- Define the idea in one sentence: what is `When to avoid MI` for?
- Name the types / functions / keywords involved.
- State one invariant you must preserve (ownership, lifetime, complexity, or const).
- State one common bug and how to spot it.
- Tie it back to earlier days (types, RAII, STL, templates, concurrency -- whichever applies).

Practice prompt:
- Open `examples/07_*.cpp`, predict the output, then change one line and re-predict.

## 8. Mixin idea

Focus for this concept: understand **what problem `Mixin idea` solves**, the **rules the language imposes**, and the **failure modes** you'll hit in real code.

Key points:
- Define the idea in one sentence: what is `Mixin idea` for?
- Name the types / functions / keywords involved.
- State one invariant you must preserve (ownership, lifetime, complexity, or const).
- State one common bug and how to spot it.
- Tie it back to earlier days (types, RAII, STL, templates, concurrency -- whichever applies).

Practice prompt:
- Open `examples/08_*.cpp`, predict the output, then change one line and re-predict.

## 9. Casting across bases

Focus for this concept: understand **what problem `Casting across bases` solves**, the **rules the language imposes**, and the **failure modes** you'll hit in real code.

Key points:
- Define the idea in one sentence: what is `Casting across bases` for?
- Name the types / functions / keywords involved.
- State one invariant you must preserve (ownership, lifetime, complexity, or const).
- State one common bug and how to spot it.
- Tie it back to earlier days (types, RAII, STL, templates, concurrency -- whichever applies).

Practice prompt:
- Open `examples/09_*.cpp`, predict the output, then change one line and re-predict.

## 10. A device+logger mix

Focus for this concept: understand **what problem `A device+logger mix` solves**, the **rules the language imposes**, and the **failure modes** you'll hit in real code.

Key points:
- Define the idea in one sentence: what is `A device+logger mix` for?
- Name the types / functions / keywords involved.
- State one invariant you must preserve (ownership, lifetime, complexity, or const).
- State one common bug and how to spot it.
- Tie it back to earlier days (types, RAII, STL, templates, concurrency -- whichever applies).

Practice prompt:
- Open `examples/10_*.cpp`, predict the output, then change one line and re-predict.

---

## What you should be able to do after Day 54

- Explain `Multiple inheritance` to a peer without looking at notes.
- Compile and run all 10 examples with `-std=c++17 -Wall -Wextra` (use newer flags only when the day requires C++20+ features).
- Answer the 5 questions in `questions.md` before peeking at `answers.md`.
- Write one tiny extra program that combines at least 3 of today's concepts.

Now move to `examples/` and run each program. Then attempt `questions.md`.
