# Day 02 — Control Flow

Today's goal: make your programs *decide* and *repeat* — and never fall into the classic loop/branch traps.

| # | Concept |
|--:|---------|
| 1 | `if`, `else if`, and `else` |
| 2 | The ternary operator `? :` |
| 3 | `switch`, `case`, and `default` |
| 4 | The `for` loop |
| 5 | The `while` loop |
| 6 | The `do-while` loop |
| 7 | `break` and `continue` |
| 8 | Nested loops |
| 9 | Block scope and lifetime |
| 10 | Control-flow pitfalls |

---

## 1. `if`, `else if`, and `else`

The simplest way to branch on a condition:

```cpp
if (score >= 90) {
    std::cout << "A\n";
} else if (score >= 80) {
    std::cout << "B\n";
} else {
    std::cout << "Below B\n";
}
```

- The condition inside `( )` must be **convertible to `bool`**. Zero, null pointers, and `false` are "false"; everything else is "true".
- **Always use braces** `{ }` around the body, even for one-liners. A missing brace has caused countless production bugs when someone adds a second line later.
- Conditions are evaluated top-to-bottom; the **first** true branch runs and the rest are skipped.

## 2. The ternary operator `? :`

A compact expression that picks one of two values:

```cpp
int abs_val = (x >= 0) ? x : -x;
```

Syntax: `condition ? value_if_true : value_if_false`

- It is an **expression** (has a value), not a statement. You can assign it, return it, or nest it (sparingly).
- Prefer a plain `if/else` when either branch has side effects or more than one statement.
- Both branches must be compatible types (or implicitly convertible).

## 3. `switch`, `case`, and `default`

When you compare one integral value against many constants:

```cpp
switch (day) {
    case 1: std::cout << "Mon\n"; break;
    case 2: std::cout << "Tue\n"; break;
    default: std::cout << "Other\n"; break;
}
```

- The **switch expression** must be an integral or enum type (`int`, `char`, `enum`, …). You cannot `switch` on `std::string` or floating-point types.
- Each `case` is a **label**, not a scope. Without `break`, execution **falls through** to the next case.
- `default` catches anything that didn't match. Put it last for readability.
- C++17 allows `[[fallthrough]];` to document intentional fall-through.

## 4. The `for` loop

The workhorse for counted iteration:

```cpp
for (int i = 0; i < 10; ++i) {
    std::cout << i << ' ';
}
```

Three parts in `( )`, separated by `;`:
1. **Init** — runs once before the loop.
2. **Condition** — checked before each iteration; loop stops when false.
3. **Update** — runs after each iteration.

Range-based `for` (preview — you'll use it heavily later):

```cpp
int arr[] = {1, 2, 3};
for (int n : arr) { std::cout << n << ' '; }
```

## 5. The `while` loop

Repeat while a condition is true; condition checked **before** the body:

```cpp
int n = 100;
while (n > 1) {
    n /= 2;
}
```

Use `while` when you don't know how many iterations you need — reading input until a sentinel, searching, etc.

**Danger:** if the condition starts false, the body never runs. Make sure something inside the body eventually makes the condition false, or you get an infinite loop.

## 6. The `do-while` loop

Like `while`, but the condition is checked **after** the body — so the body runs **at least once**:

```cpp
int choice;
do {
    std::cout << "Enter 1-3: ";
    std::cin >> choice;
} while (choice < 1 || choice > 3);
```

Syntax note: the `while` line ends with a semicolon: `} while (cond);`

## 7. `break` and `continue`

- **`break`** — immediately exit the innermost loop or `switch`.
- **`continue`** — skip the rest of the current iteration and jump to the next condition check.

```cpp
for (int i = 0; i < 10; ++i) {
    if (i % 2 == 0) continue;   // skip evens
    if (i > 7) break;           // stop early
    std::cout << i << ' ';
}
```

`break` only breaks **one** level of nesting. To exit nested loops, use a flag, a `goto` (rare), or refactor into a function with `return`.

## 8. Nested loops

A loop inside another loop — common for grids, tables, and brute-force search:

```cpp
for (int row = 0; row < 3; ++row) {
    for (int col = 0; col < 3; ++col) {
        std::cout << '(' << row << ',' << col << ") ";
    }
    std::cout << '\n';
}
```

Total iterations = outer × inner. Watch performance: three nested loops over large ranges can be slow.

## 9. Block scope and lifetime

Every `{ }` block creates a **scope**. Names declared inside are visible only within that block:

```cpp
if (true) {
    int x = 5;       // x exists only inside this block
}
// x is not visible here — compiler error if you use it
```

- Loop variables declared in the `for` init (`for (int i = 0; ...)`) are scoped to the loop body in C++ (unlike old C).
- Reusing the same name in an inner block **shadows** the outer name — legal but confusing; avoid it while learning.

## 10. Control-flow pitfalls

| Pitfall | What goes wrong | Fix |
|---------|-----------------|-----|
| Dangling `else` | `else` binds to the nearest `if` — indentation lies | Always use braces |
| Missing `break` in `switch` | Unintended fall-through | Add `break` or `[[fallthrough]]` |
| `for (unsigned i = n; i >= 0; --i)` | Infinite loop when `i` wraps at 0 | Use `int`, or loop `i < n` upward |
| `if (x = 5)` instead of `if (x == 5)` | Assignment, always "true" | Use `==`; enable `-Wall` (g++ warns) |
| Empty loop body | `while (cond);` — semicolon ends the loop | Put body in `{ }` or comment deliberately |

The unsigned countdown trap (from Day 01 Question 3) is the single most common loop bug in C++. When in doubt, use `int` for loop counters.

---

## What you should be able to do after Day 02

- Write programs that branch on user input and repeat until a condition is met.
- Choose between `if/else`, ternary, and `switch` appropriately.
- Predict when a loop terminates — especially with unsigned types.
- Explain what `break` and `continue` do in nested loops.
- Spot missing braces and fall-through bugs in code review.

Now move to `examples/` and run each program. Then attempt `questions.md`.
