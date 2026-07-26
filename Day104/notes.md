# Day 104 -- Custom allocators intro

Today's goal: build a working mental model of **Custom allocators intro** and practice it with small, compile-ready examples.

| # | Concept |
|--:|---------|
| 1 | Allocator requirements idea |
| 2 | std::allocator |
| 3 | Stateful allocators |
| 4 | Arena/bump allocators |
| 5 | Pool allocators |
| 6 | PMR overview (C++17) |
| 7 | monotonic_buffer_resource |
| 8 | When custom allocators |
| 9 | Debugging allocators |
| 10 | Arena demo |

---

## 1. Allocator requirements idea

Focus for this concept: understand **what problem `Allocator requirements idea` solves**, the **rules the language imposes**, and the **failure modes** you'll hit in real code.

Key points:
- Define the idea in one sentence: what is `Allocator requirements idea` for?
- Name the types / functions / keywords involved.
- State one invariant you must preserve (ownership, lifetime, complexity, or const).
- State one common bug and how to spot it.
- Tie it back to earlier days (types, RAII, STL, templates, concurrency -- whichever applies).

Practice prompt:
- Open `examples/01_*.cpp`, predict the output, then change one line and re-predict.

## 2. std::allocator

Focus for this concept: understand **what problem `std::allocator` solves**, the **rules the language imposes**, and the **failure modes** you'll hit in real code.

Key points:
- Define the idea in one sentence: what is `std::allocator` for?
- Name the types / functions / keywords involved.
- State one invariant you must preserve (ownership, lifetime, complexity, or const).
- State one common bug and how to spot it.
- Tie it back to earlier days (types, RAII, STL, templates, concurrency -- whichever applies).

Practice prompt:
- Open `examples/02_*.cpp`, predict the output, then change one line and re-predict.

## 3. Stateful allocators

Focus for this concept: understand **what problem `Stateful allocators` solves**, the **rules the language imposes**, and the **failure modes** you'll hit in real code.

Key points:
- Define the idea in one sentence: what is `Stateful allocators` for?
- Name the types / functions / keywords involved.
- State one invariant you must preserve (ownership, lifetime, complexity, or const).
- State one common bug and how to spot it.
- Tie it back to earlier days (types, RAII, STL, templates, concurrency -- whichever applies).

Practice prompt:
- Open `examples/03_*.cpp`, predict the output, then change one line and re-predict.

## 4. Arena/bump allocators

Focus for this concept: understand **what problem `Arena/bump allocators` solves**, the **rules the language imposes**, and the **failure modes** you'll hit in real code.

Key points:
- Define the idea in one sentence: what is `Arena/bump allocators` for?
- Name the types / functions / keywords involved.
- State one invariant you must preserve (ownership, lifetime, complexity, or const).
- State one common bug and how to spot it.
- Tie it back to earlier days (types, RAII, STL, templates, concurrency -- whichever applies).

Practice prompt:
- Open `examples/04_*.cpp`, predict the output, then change one line and re-predict.

## 5. Pool allocators

Focus for this concept: understand **what problem `Pool allocators` solves**, the **rules the language imposes**, and the **failure modes** you'll hit in real code.

Key points:
- Define the idea in one sentence: what is `Pool allocators` for?
- Name the types / functions / keywords involved.
- State one invariant you must preserve (ownership, lifetime, complexity, or const).
- State one common bug and how to spot it.
- Tie it back to earlier days (types, RAII, STL, templates, concurrency -- whichever applies).

Practice prompt:
- Open `examples/05_*.cpp`, predict the output, then change one line and re-predict.

## 6. PMR overview (C++17)

Focus for this concept: understand **what problem `PMR overview (C++17)` solves**, the **rules the language imposes**, and the **failure modes** you'll hit in real code.

Key points:
- Define the idea in one sentence: what is `PMR overview (C++17)` for?
- Name the types / functions / keywords involved.
- State one invariant you must preserve (ownership, lifetime, complexity, or const).
- State one common bug and how to spot it.
- Tie it back to earlier days (types, RAII, STL, templates, concurrency -- whichever applies).

Practice prompt:
- Open `examples/06_*.cpp`, predict the output, then change one line and re-predict.

## 7. monotonic_buffer_resource

Focus for this concept: understand **what problem `monotonic_buffer_resource` solves**, the **rules the language imposes**, and the **failure modes** you'll hit in real code.

Key points:
- Define the idea in one sentence: what is `monotonic_buffer_resource` for?
- Name the types / functions / keywords involved.
- State one invariant you must preserve (ownership, lifetime, complexity, or const).
- State one common bug and how to spot it.
- Tie it back to earlier days (types, RAII, STL, templates, concurrency -- whichever applies).

Practice prompt:
- Open `examples/07_*.cpp`, predict the output, then change one line and re-predict.

## 8. When custom allocators

Focus for this concept: understand **what problem `When custom allocators` solves**, the **rules the language imposes**, and the **failure modes** you'll hit in real code.

Key points:
- Define the idea in one sentence: what is `When custom allocators` for?
- Name the types / functions / keywords involved.
- State one invariant you must preserve (ownership, lifetime, complexity, or const).
- State one common bug and how to spot it.
- Tie it back to earlier days (types, RAII, STL, templates, concurrency -- whichever applies).

Practice prompt:
- Open `examples/08_*.cpp`, predict the output, then change one line and re-predict.

## 9. Debugging allocators

Focus for this concept: understand **what problem `Debugging allocators` solves**, the **rules the language imposes**, and the **failure modes** you'll hit in real code.

Key points:
- Define the idea in one sentence: what is `Debugging allocators` for?
- Name the types / functions / keywords involved.
- State one invariant you must preserve (ownership, lifetime, complexity, or const).
- State one common bug and how to spot it.
- Tie it back to earlier days (types, RAII, STL, templates, concurrency -- whichever applies).

Practice prompt:
- Open `examples/09_*.cpp`, predict the output, then change one line and re-predict.

## 10. Arena demo

Focus for this concept: understand **what problem `Arena demo` solves**, the **rules the language imposes**, and the **failure modes** you'll hit in real code.

Key points:
- Define the idea in one sentence: what is `Arena demo` for?
- Name the types / functions / keywords involved.
- State one invariant you must preserve (ownership, lifetime, complexity, or const).
- State one common bug and how to spot it.
- Tie it back to earlier days (types, RAII, STL, templates, concurrency -- whichever applies).

Practice prompt:
- Open `examples/10_*.cpp`, predict the output, then change one line and re-predict.

---

## What you should be able to do after Day 104

- Explain `Custom allocators intro` to a peer without looking at notes.
- Compile and run all 10 examples with `-std=c++17 -Wall -Wextra` (use newer flags only when the day requires C++20+ features).
- Answer the 5 questions in `questions.md` before peeking at `answers.md`.
- Write one tiny extra program that combines at least 3 of today's concepts.

Now move to `examples/` and run each program. Then attempt `questions.md`.
