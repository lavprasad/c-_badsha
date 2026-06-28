# Day 10 — Answers (read AFTER you've tried)

---

### A1. Strict weak ordering requires `<`, not `<=`

Using `a <= b` violates the **strict weak ordering** requirement of `std::sort`. When `a == b`, both `comp(a,b)` and `comp(b,a)` return `true`, which is inconsistent.

**Consequences:** undefined behaviour in theory; in practice you may see elements "reordered" unpredictably or duplicate handling bugs.

**Fix:** use strict `<`:

```cpp
[](int a, int b) { return a < b; }
```

Rule: comparators for sort must define a **strict** ordering: if `comp(a,b)` then `!comp(b,a)`.

---

### A2. Dangling reference capture

**Undefined behaviour** — likely prints garbage or crashes.

`make_adder` returns a lambda capturing `x` **by reference**, but `x` is a **local variable** destroyed when `make_adder` returns. `fn()` dereferences a dangling reference.

**Fix — capture by value:**

```cpp
return [x]() { return x + 1; };   // prints 11 safely
```

Or C++14 init capture:

```cpp
return [val = x]() { return val + 1; };
```

Never `[&]` capture locals unless the lambda's lifetime is provably shorter than the locals.

---

### A3. Empty destination — writing past the end

**Undefined behaviour.** `dst` is **empty** (`size() == 0`), but `transform` writes through `dst.begin()` without growing `dst`.

**Fix 1 — size destination first:**

```cpp
std::vector<int> dst(src.size());
std::transform(src.begin(), src.end(), dst.begin(), ...);
```

**Fix 2 — use back_inserter:**

```cpp
#include <iterator>
std::transform(src.begin(), src.end(), std::back_inserter(dst), ...);
```

---

### A4. Wrong algorithm — `find` needs a value, not a predicate

**Does not compile.** `std::find` expects a **value** to compare with `==`, not a callable.

**Fix — use `std::find_if`:**

```cpp
auto it = std::find_if(v.begin(), v.end(),
                       [](const std::string& s) { return s.size() > 5; });
```

Prints `banana` (first string with length > 5).

---

### A5. Sort then unique removes duplicates

**Output: `1 2 3 4 5 6 9`**

Steps:
1. Sort → `{1, 1, 2, 3, 3, 4, 5, 5, 6, 9}`
2. `unique` moves duplicates to end, returns iterator to new logical end → `{1, 2, 3, 4, 5, 6, 9, ?, ?, ?}`
3. `erase` shrinks to 7 elements.

**Why sort first?** `std::unique` only removes **adjacent** duplicates. Without sorting, `{3, 1, 4, 1, 5}` would keep both `1`s because they're not adjacent.

Classic idiom: **sort → unique → erase** for deduplication.

---

## Self-scoring

- 5/5: algorithms & lambdas are solid — move to **Day 11 (move semantics & smart pointers)**.
- 3–4: re-read lambda capture and iterator ranges in `notes.md`.
- 0–2: re-run every program in `examples/`, especially `05_lambdas.cpp` and `10_algorithm_pipeline.cpp`.

Tell me your score and any concept you want me to deep-dive before Day 11.
