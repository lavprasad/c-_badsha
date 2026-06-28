# Day 05 — Answers (read AFTER you've tried)

---

### A1. delete vs delete[]

**Undefined behaviour at runtime** — compiles fine, but `delete` on memory allocated with `new[]` is UB. May appear to work, may corrupt the heap, may crash later.

**Correct deallocator:** `delete[] arr;`

Rule: `new` ↔ `delete`, `new[]` ↔ `delete[]`. Never mix.

---

### A2. Double delete

**Undefined behaviour** — typically a crash (heap corruption detected) or silent corruption. The second `delete p` frees memory that is already freed.

Some debug allocators catch this immediately; optimised builds may fail unpredictably later.

**Fix:** delete once, then `p = nullptr;`.

---

### A3. Pointer arithmetic

**Output:**

```
20
30
```

`p + 1` points to the second element (`20`). `p[2]` is subscript notation for `*(p + 2)` → third element (`30`).

Pointer arithmetic scales by the pointed-to type size (`sizeof(int)`).

---

### A4. Stack vs heap lifetime

**Compiles** (with `-Wall` warning: returning address of local variable).

Might print `99` today and garbage tomorrow — **undefined behaviour**. `x` is destroyed when `make()` returns; `p` points to dead stack memory.

**Fix:** return by value, return `new int(99)` (and document ownership), or use RAII / smart pointers.

---

### A5. nullptr comparison

**Output:**

```
null
allocated
```

`nullptr` converts to `false` in a boolean context. A valid pointer from `new` is non-null → `true`.

Note: after `delete q`, using `q` in a condition without setting it to `nullptr` is dangerous — the pointer may still be non-null while the object is gone.

---

## Self-scoring

- 5/5: pointers and memory are clear — let me know and we move to **Day 06 (structs & classes)**.
- 3–4: re-read RAII and new/delete pairing in `notes.md`.
- 0–2: re-run `examples/`, draw stack/heap diagrams for `09_raii.cpp`.

Tell me your score and any concept you want me to deep-dive before Day 06.
