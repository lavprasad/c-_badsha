# Day 04 — Answers (read AFTER you've tried)

---

### A1. sizeof array vs pointer

Typical output:

```
40
8
```

- In `main`, `data` is a true array of 10 `int`s → `sizeof(data) = 10 × 4 = 40`.
- In `f`, parameter `arr` **decays** to `int*` → `sizeof(arr) = 8` (pointer size on 64-bit).

This is why you cannot use `sizeof` on a function parameter to get array length.

---

### A2. C-string length

**Output: `5`**

`strlen` counts characters **before** the null terminator — `"Hello"` has 5 chars.

`buf` occupies **6 bytes** in memory: `'H','e','l','l','o','\0'`. The array size is 6; the string length is 5.

---

### A3. Reference rebinding

**Output: `a=2 b=2 r=2`**

`r` still refers to **`a`**. References cannot be reseated. `r = b` is **assignment** — it writes `b`'s value (`2`) into `a`. Both `a` and `r` become `2`; `b` was already `2`.

This is a classic confusion between reference assignment and pointer reassignment.

---

### A4. String indexing

```
Cx+
3
```

`s[1]` changes the second character from `'+'` to `'x'`. Size is unchanged at 3.

---

### A5. Array initialisation

**Output: `1 2 3 0 0`**

When you provide fewer initialisers than elements, the rest are **value-initialised** to zero (for scalar types like `int`).

---

## Self-scoring

- 5/5: arrays and strings are solid — let me know and we move to **Day 05 (pointers & dynamic memory)**.
- 3–4: re-read array decay and references in `notes.md`.
- 0–2: re-run `examples/`, especially `09_array_decay.cpp`.

Tell me your score and any concept you want me to deep-dive before Day 05.
