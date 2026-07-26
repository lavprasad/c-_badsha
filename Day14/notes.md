# Day 14 -- Operator overloading basics

Today's goal: build a working mental model of **Operator overloading basics** and practice it with small, compile-ready examples.

| # | Concept |
|--:|---------|
| 1 | Why overload operators |
| 2 | operator+ as member vs free function |
| 3 | operator<< for ostream |
| 4 | operator== and != |
| 5 | operator[] for containers |
| 6 | operator() functors |
| 7 | Conversion operators |
| 8 | Rules of thumb for overloads |
| 9 | Avoiding surprising overloads |
| 10 | A small Vector2 demo |

---

## 1. Why overload operators

Focus for this concept: understand **what problem `Why overload operators` solves**, the **rules the language imposes**, and the **failure modes** you'll hit in real code.

Key points:
- Define the idea in one sentence: what is `Why overload operators` for?
- Name the types / functions / keywords involved.
- State one invariant you must preserve (ownership, lifetime, complexity, or const).
- State one common bug and how to spot it.
- Tie it back to earlier days (types, RAII, STL, templates, concurrency -- whichever applies).

Practice prompt:
- Open `examples/01_*.cpp`, predict the output, then change one line and re-predict.

## 2. operator+ as member vs free function

Focus for this concept: understand **what problem `operator+ as member vs free function` solves**, the **rules the language imposes**, and the **failure modes** you'll hit in real code.

Key points:
- Define the idea in one sentence: what is `operator+ as member vs free function` for?
- Name the types / functions / keywords involved.
- State one invariant you must preserve (ownership, lifetime, complexity, or const).
- State one common bug and how to spot it.
- Tie it back to earlier days (types, RAII, STL, templates, concurrency -- whichever applies).

Practice prompt:
- Open `examples/02_*.cpp`, predict the output, then change one line and re-predict.

## 3. operator<< for ostream

Focus for this concept: understand **what problem `operator<< for ostream` solves**, the **rules the language imposes**, and the **failure modes** you'll hit in real code.

Key points:
- Define the idea in one sentence: what is `operator<< for ostream` for?
- Name the types / functions / keywords involved.
- State one invariant you must preserve (ownership, lifetime, complexity, or const).
- State one common bug and how to spot it.
- Tie it back to earlier days (types, RAII, STL, templates, concurrency -- whichever applies).

Practice prompt:
- Open `examples/03_*.cpp`, predict the output, then change one line and re-predict.

## 4. operator== and !=

Focus for this concept: understand **what problem `operator== and !=` solves**, the **rules the language imposes**, and the **failure modes** you'll hit in real code.

Key points:
- Define the idea in one sentence: what is `operator== and !=` for?
- Name the types / functions / keywords involved.
- State one invariant you must preserve (ownership, lifetime, complexity, or const).
- State one common bug and how to spot it.
- Tie it back to earlier days (types, RAII, STL, templates, concurrency -- whichever applies).

Practice prompt:
- Open `examples/04_*.cpp`, predict the output, then change one line and re-predict.

## 5. operator[] for containers

Focus for this concept: understand **what problem `operator[] for containers` solves**, the **rules the language imposes**, and the **failure modes** you'll hit in real code.

Key points:
- Define the idea in one sentence: what is `operator[] for containers` for?
- Name the types / functions / keywords involved.
- State one invariant you must preserve (ownership, lifetime, complexity, or const).
- State one common bug and how to spot it.
- Tie it back to earlier days (types, RAII, STL, templates, concurrency -- whichever applies).

Practice prompt:
- Open `examples/05_*.cpp`, predict the output, then change one line and re-predict.

## 6. operator() functors

Focus for this concept: understand **what problem `operator() functors` solves**, the **rules the language imposes**, and the **failure modes** you'll hit in real code.

Key points:
- Define the idea in one sentence: what is `operator() functors` for?
- Name the types / functions / keywords involved.
- State one invariant you must preserve (ownership, lifetime, complexity, or const).
- State one common bug and how to spot it.
- Tie it back to earlier days (types, RAII, STL, templates, concurrency -- whichever applies).

Practice prompt:
- Open `examples/06_*.cpp`, predict the output, then change one line and re-predict.

## 7. Conversion operators

Focus for this concept: understand **what problem `Conversion operators` solves**, the **rules the language imposes**, and the **failure modes** you'll hit in real code.

Key points:
- Define the idea in one sentence: what is `Conversion operators` for?
- Name the types / functions / keywords involved.
- State one invariant you must preserve (ownership, lifetime, complexity, or const).
- State one common bug and how to spot it.
- Tie it back to earlier days (types, RAII, STL, templates, concurrency -- whichever applies).

Practice prompt:
- Open `examples/07_*.cpp`, predict the output, then change one line and re-predict.

## 8. Rules of thumb for overloads

Focus for this concept: understand **what problem `Rules of thumb for overloads` solves**, the **rules the language imposes**, and the **failure modes** you'll hit in real code.

Key points:
- Define the idea in one sentence: what is `Rules of thumb for overloads` for?
- Name the types / functions / keywords involved.
- State one invariant you must preserve (ownership, lifetime, complexity, or const).
- State one common bug and how to spot it.
- Tie it back to earlier days (types, RAII, STL, templates, concurrency -- whichever applies).

Practice prompt:
- Open `examples/08_*.cpp`, predict the output, then change one line and re-predict.

## 9. Avoiding surprising overloads

Focus for this concept: understand **what problem `Avoiding surprising overloads` solves**, the **rules the language imposes**, and the **failure modes** you'll hit in real code.

Key points:
- Define the idea in one sentence: what is `Avoiding surprising overloads` for?
- Name the types / functions / keywords involved.
- State one invariant you must preserve (ownership, lifetime, complexity, or const).
- State one common bug and how to spot it.
- Tie it back to earlier days (types, RAII, STL, templates, concurrency -- whichever applies).

Practice prompt:
- Open `examples/09_*.cpp`, predict the output, then change one line and re-predict.

## 10. A small Vector2 demo

Focus for this concept: understand **what problem `A small Vector2 demo` solves**, the **rules the language imposes**, and the **failure modes** you'll hit in real code.

Key points:
- Define the idea in one sentence: what is `A small Vector2 demo` for?
- Name the types / functions / keywords involved.
- State one invariant you must preserve (ownership, lifetime, complexity, or const).
- State one common bug and how to spot it.
- Tie it back to earlier days (types, RAII, STL, templates, concurrency -- whichever applies).

Practice prompt:
- Open `examples/10_*.cpp`, predict the output, then change one line and re-predict.

---

## What you should be able to do after Day 14

- Explain `Operator overloading basics` to a peer without looking at notes.
- Compile and run all 10 examples with `-std=c++17 -Wall -Wextra` (use newer flags only when the day requires C++20+ features).
- Answer the 5 questions in `questions.md` before peeking at `answers.md`.
- Write one tiny extra program that combines at least 3 of today's concepts.

Now move to `examples/` and run each program. Then attempt `questions.md`.
