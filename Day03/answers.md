# Day 03 — Answers (read AFTER you've tried)

---

### A1. Reference vs value

**Output: `1 10`**

- `foo(n)` takes a **copy**. Setting `x = 10` inside `foo` does not change `n`.
- `bar(n)` takes a **reference**. `x = 10` modifies the caller's `n`.

This is the fundamental reason to use references when you need in-out parameters.

---

### A2. Default argument trap

**Does not compile.**

Both overloads can be called as `f(5)`:
- `void f(int a, int b = 2)` — match with `a=5`, default `b=2`.
- `void f(int a)` — match with `a=5`.

The call is **ambiguous** — the compiler error says something like "call of overloaded 'f(int)' is ambiguous".

**Rule:** default arguments can create hidden ambiguities with other overloads. Design overload sets carefully; sometimes use different names instead.

---

### A3. Overload resolution

```
int 5
double 5
int 53
```

- `print(5)` — literal `5` is `int`.
- `print(5.0)` — literal `5.0` is `double`.
- `print('5')` — character `'5'` promotes to `int` (ASCII value 53), not to `double`. So the `int` overload wins.

Surprise: `'5'` prints `53`, not `5`. To print the character as a digit you'd need different overloads or cast.

---

### A4. Recursive mystery

**Output: `16`**

Trace:
- `mystery(7)` = 7 + `mystery(5)`
- `mystery(5)` = 5 + `mystery(3)`
- `mystery(3)` = 3 + `mystery(1)`
- `mystery(1)` = 1 + `mystery(-1)`
- `mystery(-1)` → base case (`n <= 0`) → 0

Working back up: 1 + 0 = 1, then 3 + 1 = 4, then 5 + 4 = 9, then 7 + 9 = **16**.

Pattern: sums odd numbers from n down by 2 until n <= 0: 7 + 5 + 3 + 1 = 16.

---

### A5. Returning a reference to local

**Compiles** (with a warning from `-Wall`: "reference to local variable 'x' returned").

At runtime: **undefined behaviour**. `x` is destroyed when `bad()` returns; `r` refers to dead stack memory. You might still see `42`, then garbage, or crash.

**Fix:** return by value:

```cpp
int good() {
    int x = 42;
    return x;   // copy (or elision) — safe
}
```

Or return a reference to something that outlives the function (static, parameter, member, heap — each has its own rules).

---

## Self-scoring

- 5/5: functions are yours — let me know and we move to **Day 04 (arrays & strings)**.
- 3–4: re-read pass-by-reference and overloading in `notes.md`.
- 0–2: re-run `examples/`, write your own `swap` and `factorial`, trace them on paper.

Tell me your score and any concept you want me to deep-dive before Day 04.
