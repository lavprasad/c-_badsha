# Day 02 — Answers (read AFTER you've tried)

---

### A1. Dangling else

**Output: `B`** (nothing else).

The `else` binds to the **nearest** preceding `if` — the inner `if (x < 3)`, not the outer `if (x > 0)`.

Trace:
- `x > 0` is true → enter outer block.
- `x < 3` is false (5 is not less than 3) → skip the inner body.
- The inner `if`'s `else` runs → prints `B`.

The misleading indentation suggests the `else` pairs with the outer `if`, but C++ ignores indentation for binding. **Fix:** always use braces:

```cpp
if (x > 0) {
    if (x < 3) {
        std::cout << "A\n";
    } else {
        std::cout << "B\n";
    }
}
```

---

### A2. Switch fall-through

**Output: `23D`** (characters `2`, `3`, and `D`).

When `n == 2`, execution jumps to `case 2:` and **falls through** every following case because there is no `break`. So it prints `2`, then `3`, then hits `default` and prints `D`.

**Fix:** add `break;` at the end of each case (except perhaps the last before `default`):

```cpp
case 2: std::cout << '2'; break;
```

Intentional fall-through (e.g. grouping cases) should be documented with `[[fallthrough]];` in C++17.

---

### A3. The unsigned countdown

The loop **never terminates** — it runs until you kill the process (or run out of patience).

`i >= 0` is **always true** for `unsigned int`. When `i` is `0` and `--i` runs, it wraps to `UINT_MAX` (typically 4294967295), prints that huge number, and keeps going.

The last value printed before wrap is `0`, then `4294967295`, then `4294967294`, … forever. `"done\n"` never prints.

**Fix:** use `int`:

```cpp
for (int i = 3; i >= 0; --i) { ... }
```

---

### A4. continue in a while loop

**Output: `1 2 4 5`** (space-separated, then newline).

Trace:
- `i` goes 0→1, print `1`
- `i` goes 1→2, print `2`
- `i` goes 2→3, `continue` skips the print — **but `++i` already ran at the top of this iteration**
- `i` goes 3→4, print `4`
- `i` goes 4→5, print `5`
- `i` goes 5→6, condition `i < 5` fails, loop ends

`continue` jumps to the **next** condition check; it does **not** re-run statements earlier in the body on the same iteration. The `++i` at the top always runs every time through.

---

### A5. Assignment in a condition

**Output:**

```
yes
x = 5
```

`x = 5` is an **assignment**, not a comparison. It stores `5` into `x` and the expression's value is `5`, which converts to `true`. So the `if` branch runs.

With `g++ -std=c++17 -Wall -Wextra`, you get a warning like:

```
warning: suggest parentheses around assignment used as truth value [-Wparentheses]
```

**Fix:** use `==` for comparison:

```cpp
if (x == 5) { ... }
```

Some teams enable `-Werror=parentheses` to make this a hard error.

---

## Self-scoring

- 5/5: solid control flow — let me know and we move to **Day 03 (functions)**.
- 3–4: re-read the relevant section in `notes.md`, then ask me about anything fuzzy.
- 0–2: re-run every program in `examples/`, especially `10_pitfalls.cpp`. Modify loop types and predict output before running.

Tell me your score and any concept you want me to deep-dive before Day 03.
