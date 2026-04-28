# Day 01 — Answers (read AFTER you've tried)

---

### A1. Integer division strikes first

**Output: `2`** (printed as `2` since `cout` doesn't show trailing `.0` by default).

`a / b` is computed first. Both operands are `int`, so this is **integer division** → `5 / 2 = 2`. *Then* `2 + 0.0` promotes the result to `double` (`2.0`). Adding `0.0` doesn't make division floating-point — it only changes the type *after* the division has already lost the fractional part.

**Fix:** force at least one operand to be a `double` *before* division:

```cpp
double c = static_cast<double>(a) / b;   // 2.5
```

Lesson: the conversion has to happen *before* the operator runs.

---

### A2. Macro precedence trap

**Output: `11`**.

The preprocessor literally substitutes text:

```cpp
SQR(2 + 3)   →   2 + 3 * 2 + 3   →   2 + 6 + 3   →   11
```

Author probably wanted `25` (`5 * 5`).

**Fix the macro** by parenthesising every argument *and* the whole expression:

```cpp
#define SQR(x) ((x) * (x))
```

Now `SQR(2+3)` becomes `((2+3) * (2+3)) = 25`. There's still another bug: `SQR(i++)` would increment `i` twice. **The real fix** is don't use macros for this. Use a `constexpr` function:

```cpp
constexpr int sqr(int x) { return x * x; }
```

It's type-checked, evaluates `x` once, and works at compile-time when given a constant.

---

### A3. The unsigned underflow trap

With the `break` removed, the loop is **infinite**.

`i` is `unsigned int`, so `i >= 0` is *always* `true` — an unsigned value can never be negative. When `i` is `0` and you do `--i`, it wraps around to `UINT_MAX` (≈ 4.29 × 10⁹) and the loop keeps running. This is the classic "unsigned underflow" bug.

**One-keyword fix:** change `unsigned int` to `int`:

```cpp
for (int i = 5; i >= 0; --i) { ... }   // terminates at i == -1
```

Lesson: use `unsigned` only when you genuinely model a non-negative quantity (sizes, indices into arrays you know are positive). For loop counters that may go negative or be compared with `>= 0`, **use `int`**.

---

### A4. Sequenced or not?

(a) **No, still implementation-defined / unspecified for `+`.** C++17 fixed evaluation order for *some* operators (e.g. `<<`, `>>`, `.`, `->`, `[]`, assignment, function-call arguments are sequenced before the call) but **not** for the operands of `+`, `-`, `*`, `/`, etc.

So `i++ + ++i` reads & modifies `i` twice with no defined order between the two sub-expressions → **undefined behaviour**. With g++ on x86-64 you'll likely see `x = 4, i = 3`, but the standard makes no promise — a different compiler / version / optimisation level may give a different value.

(b) The author probably *thinks*: "`i++` gives 1 (then i=2), `++i` makes i=3 and returns 3, so x = 1+3 = 4". That reasoning assumes a left-to-right order that the standard does **not** guarantee for `+`.

(c) **Safe rewrite — split into separate statements:**

```cpp
int x = i;       // captures old value
++i;             // i is now 2
++i;             // i is now 3
x += i;          // x = 1 + 3 = 4
```

Each statement is its own full expression, so all side-effects are sequenced.

Rule of thumb: **never modify the same variable more than once in the same expression.** It's almost always UB, even in modern C++.

---

### A5. Compiler vs linker

Calling `subtract(10, 3)`:

- `main.cpp` *declared* `int subtract(int, int);` so the **compiler** is happy — it sees a name with a matching signature.
- Nobody ever **defined** `subtract`. So when the **linker** tries to glue the object files together it can't find the function body.
- Result: **linker error** — `undefined reference to 'subtract(int, int)'`.

Calling `add(10, 3)` but forgetting `math.cpp` on the command line:

- The compiler still needs a *declaration* of `add` in `main.cpp`. If you have it, compilation succeeds; if not, you get a **compiler error** (`'add' was not declared in this scope`).
- Assuming the declaration exists, the **linker** then fails because no object file containing `add`'s definition was provided. Same error message: `undefined reference to 'add(int, int)'`.

Quick mental model:

| Symptom | Stage | Cause |
|---------|-------|-------|
| `'foo' was not declared in this scope` | Compiler | Missing `#include` or forward declaration |
| `undefined reference to 'foo'` | Linker   | Missing definition / `.cpp` file / library |
| `multiple definition of 'foo'`         | Linker   | Same non-`inline` function defined in 2 TUs |

---

## Self-scoring

- 5/5: solid foundation — let me know and we move to **Day 02 (control flow)**.
- 3–4: re-read the relevant section in `notes.md`, then ask me about anything fuzzy.
- 0–2: that's totally fine for day one — re-run every program in `examples/`, modify the values, *predict* the output before running. We'll go again.

Tell me your score and any concept you want me to deep-dive before Day 02.
