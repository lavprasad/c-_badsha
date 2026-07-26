# Day 89 -- Parallel algorithms mindset

Today's goal: build a working mental model of **Parallel algorithms mindset** and practice it with small, compile-ready examples.

| # | Concept |
|--:|---------|
| 1 | Embarrassingly parallel |
| 2 | Partitioning work |
| 3 | Reduction |
| 4 | False sharing |
| 5 | Load balance |
| 6 | Oversubscription |
| 7 | Measuring speedup |
| 8 | Amdahl intuition |
| 9 | C++17 parallel policies idea |
| 10 | Parallel sum |

---

## 1. Embarrassingly parallel

Focus for this concept: understand **what problem `Embarrassingly parallel` solves**, the **rules the language imposes**, and the **failure modes** you'll hit in real code.

Key points:
- Define the idea in one sentence: what is `Embarrassingly parallel` for?
- Name the types / functions / keywords involved.
- State one invariant you must preserve (ownership, lifetime, complexity, or const).
- State one common bug and how to spot it.
- Tie it back to earlier days (types, RAII, STL, templates, concurrency -- whichever applies).

Practice prompt:
- Open `examples/01_*.cpp`, predict the output, then change one line and re-predict.

## 2. Partitioning work

Focus for this concept: understand **what problem `Partitioning work` solves**, the **rules the language imposes**, and the **failure modes** you'll hit in real code.

Key points:
- Define the idea in one sentence: what is `Partitioning work` for?
- Name the types / functions / keywords involved.
- State one invariant you must preserve (ownership, lifetime, complexity, or const).
- State one common bug and how to spot it.
- Tie it back to earlier days (types, RAII, STL, templates, concurrency -- whichever applies).

Practice prompt:
- Open `examples/02_*.cpp`, predict the output, then change one line and re-predict.

## 3. Reduction

Focus for this concept: understand **what problem `Reduction` solves**, the **rules the language imposes**, and the **failure modes** you'll hit in real code.

Key points:
- Define the idea in one sentence: what is `Reduction` for?
- Name the types / functions / keywords involved.
- State one invariant you must preserve (ownership, lifetime, complexity, or const).
- State one common bug and how to spot it.
- Tie it back to earlier days (types, RAII, STL, templates, concurrency -- whichever applies).

Practice prompt:
- Open `examples/03_*.cpp`, predict the output, then change one line and re-predict.

## 4. False sharing

Focus for this concept: understand **what problem `False sharing` solves**, the **rules the language imposes**, and the **failure modes** you'll hit in real code.

Key points:
- Define the idea in one sentence: what is `False sharing` for?
- Name the types / functions / keywords involved.
- State one invariant you must preserve (ownership, lifetime, complexity, or const).
- State one common bug and how to spot it.
- Tie it back to earlier days (types, RAII, STL, templates, concurrency -- whichever applies).

Practice prompt:
- Open `examples/04_*.cpp`, predict the output, then change one line and re-predict.

## 5. Load balance

Focus for this concept: understand **what problem `Load balance` solves**, the **rules the language imposes**, and the **failure modes** you'll hit in real code.

Key points:
- Define the idea in one sentence: what is `Load balance` for?
- Name the types / functions / keywords involved.
- State one invariant you must preserve (ownership, lifetime, complexity, or const).
- State one common bug and how to spot it.
- Tie it back to earlier days (types, RAII, STL, templates, concurrency -- whichever applies).

Practice prompt:
- Open `examples/05_*.cpp`, predict the output, then change one line and re-predict.

## 6. Oversubscription

Focus for this concept: understand **what problem `Oversubscription` solves**, the **rules the language imposes**, and the **failure modes** you'll hit in real code.

Key points:
- Define the idea in one sentence: what is `Oversubscription` for?
- Name the types / functions / keywords involved.
- State one invariant you must preserve (ownership, lifetime, complexity, or const).
- State one common bug and how to spot it.
- Tie it back to earlier days (types, RAII, STL, templates, concurrency -- whichever applies).

Practice prompt:
- Open `examples/06_*.cpp`, predict the output, then change one line and re-predict.

## 7. Measuring speedup

Focus for this concept: understand **what problem `Measuring speedup` solves**, the **rules the language imposes**, and the **failure modes** you'll hit in real code.

Key points:
- Define the idea in one sentence: what is `Measuring speedup` for?
- Name the types / functions / keywords involved.
- State one invariant you must preserve (ownership, lifetime, complexity, or const).
- State one common bug and how to spot it.
- Tie it back to earlier days (types, RAII, STL, templates, concurrency -- whichever applies).

Practice prompt:
- Open `examples/07_*.cpp`, predict the output, then change one line and re-predict.

## 8. Amdahl intuition

Focus for this concept: understand **what problem `Amdahl intuition` solves**, the **rules the language imposes**, and the **failure modes** you'll hit in real code.

Key points:
- Define the idea in one sentence: what is `Amdahl intuition` for?
- Name the types / functions / keywords involved.
- State one invariant you must preserve (ownership, lifetime, complexity, or const).
- State one common bug and how to spot it.
- Tie it back to earlier days (types, RAII, STL, templates, concurrency -- whichever applies).

Practice prompt:
- Open `examples/08_*.cpp`, predict the output, then change one line and re-predict.

## 9. C++17 parallel policies idea

Focus for this concept: understand **what problem `C++17 parallel policies idea` solves**, the **rules the language imposes**, and the **failure modes** you'll hit in real code.

Key points:
- Define the idea in one sentence: what is `C++17 parallel policies idea` for?
- Name the types / functions / keywords involved.
- State one invariant you must preserve (ownership, lifetime, complexity, or const).
- State one common bug and how to spot it.
- Tie it back to earlier days (types, RAII, STL, templates, concurrency -- whichever applies).

Practice prompt:
- Open `examples/09_*.cpp`, predict the output, then change one line and re-predict.

## 10. Parallel sum

Focus for this concept: understand **what problem `Parallel sum` solves**, the **rules the language imposes**, and the **failure modes** you'll hit in real code.

Key points:
- Define the idea in one sentence: what is `Parallel sum` for?
- Name the types / functions / keywords involved.
- State one invariant you must preserve (ownership, lifetime, complexity, or const).
- State one common bug and how to spot it.
- Tie it back to earlier days (types, RAII, STL, templates, concurrency -- whichever applies).

Practice prompt:
- Open `examples/10_*.cpp`, predict the output, then change one line and re-predict.

---

## What you should be able to do after Day 89

- Explain `Parallel algorithms mindset` to a peer without looking at notes.
- Compile and run all 10 examples with `-std=c++17 -Wall -Wextra` (use newer flags only when the day requires C++20+ features).
- Answer the 5 questions in `questions.md` before peeking at `answers.md`.
- Write one tiny extra program that combines at least 3 of today's concepts.

Now move to `examples/` and run each program. Then attempt `questions.md`.
