# Day 08 — Answers (read AFTER you've tried)

---

### A1. `auto` strips const; references preserve it

Types:
- `a` → `int` (`auto` drops `const`)
- `b` → `const int&`
- `c` → `int&`

`++a` modifies the **copy** `a`, not `x`. `x` stays `10`.

`++b` would be a **compile error** — you cannot modify through a `const` reference.

`++c` modifies `x` directly because `c` is a reference bound to `x`.

**Output: `10 11 11`** (assuming you only increment `a` and `c`).

Lesson: `auto` copies by default. Use `const auto&` for read-only views, `auto&` when you need to mutate the original.

---

### A2. Conflicting deduction for single `T`

`add(1, 2)` works: both arguments are `int`, so `T = int`.

`add(1, 2.0)` fails: the compiler tries to deduce `T` as both `int` (from `1`) and `double` (from `2.0`) — **conflicting types**.

**Fix 1 — two template parameters:**

```cpp
template<typename T, typename U>
auto add(T a, U b) -> decltype(a + b) { return a + b; }
```

**Fix 2 — explicit argument:**

```cpp
add<double>(1, 2.0);
```

**Fix 3 — cast at call site:**

```cpp
add(1.0, 2.0);
```

---

### A3. Parentheses turn an lvalue into a reference type

**Output: `99`**.

- `decltype(x)` — `x` is an **identifier** (not parenthesised), so the type is `int`.
- `decltype((x))` — `(x)` is a **parenthesised expression**, which is an **lvalue**, so `decltype` yields `int&`.

Because `b` is `int&` bound to `x`, `b = 99` changes `x`.

Rule of thumb:
- `decltype(expr)` where `expr` is an identifier → type as declared.
- `decltype((expr))` with extra parens → may become a reference if `expr` is an lvalue.

---

### A4. Full specialization for `bool`

| Call | Template used |
|------|---------------|
| `show(42)` | primary → `T = int` |
| `show(true)` | **specialization** `show<bool>` |
| `show(3.14)` | primary → `T = double` |

`show<int>(true)` **explicitly** calls the primary template with `T = int`. The argument `true` converts to `int` (`1`), so output is `generic: 1` — **not** the bool specialization.

Specialization is chosen by the **template argument**, not by the "logical" type of the value after conversions.

---

### A5. Default template type parameter

`p1.second` has type **`int`**.

`Pair<int>` is valid because the second template parameter `U` defaults to `T`:

```cpp
Pair<int>   →   Pair<int, int>
```

Default template parameters let you omit trailing arguments when the defaults suffice — same idea as default function arguments.

---

## Self-scoring

- 5/5: templates & deduction are clicking — move to **Day 09 (STL containers)**.
- 3–4: re-read `auto`/`decltype` and deduction rules in `notes.md`.
- 0–2: re-run every program in `examples/`, especially `05_auto.cpp` and `06_decltype.cpp`.

Tell me your score and any concept you want me to deep-dive before Day 09.
