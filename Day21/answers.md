# Day 21 -- Answers (read AFTER you've tried)

Theme: **Error handling without exceptions**

---

### A1. Common bug around `Return codes`

Most learners skip an invariant (ownership, lifetime, const, complexity, or error checking). Prevention: state the invariant in a comment, use RAII / strong types where possible, and add one assert/self-check.

---

### A2. When `Optional-like patterns (pre-optional)` wins

Choose it when the problem's constraints match its strengths (clarity, safety, performance, or API fit). Avoid it when a simpler Day 01-11 tool already covers the need (YAGNI).

---

### A3. Failure mode for `Assert for invariants`

Classify failures deliberately:
- **Compile** -- type/constraint mismatch
- **Link** -- missing definition / ODR
- **Runtime** -- logic / state bug
- **UB** -- lifetime, overflow, data race, invalid iterator

Knowing the stage focuses the fix.

---

### A4. Cost of `Fail-fast vs recover`

Naive use often hides allocations, copies, locks, or O(n²) patterns. Prefer algorithms/containers that match access patterns; measure before micro-optimising.

---

### A5. Integration sketch

A solid answer names:
1. ownership of resources,
2. how errors surface,
3. what remains true after each operation,
4. how you'd test it with one assert-based check.

---

## Self-scoring

- 5/5: strong -- proceed to **Day 22**.
- 3-4: re-run the weak concept's example and re-answer that question.
- 0-2: re-read `notes.md` sections for concepts 1, 3, 5 and write one extra mini-program.

Tell yourself the score; keep a short note of anything still fuzzy.
