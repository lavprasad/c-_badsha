# Day 06 — Answers (read AFTER you've tried)

---

### A1. Default access

- **`f.x = 5;`** — **No**, compile error. `x` is **private by default** in a `class`.
- **`b.y = 10;`** — **Yes**. `y` is **public by default** in a `struct`.

You can call `f.get()` because `get()` is public and can access private `x` on behalf of the caller.

---

### A2. Constructor order

Members are **initialised in declaration order** (`a_` then `b_`), **not** the order in the initialiser list.

So `b_(2), a_(1)` still initialises `a_` first (to `1`), then `b_` (to `2`). The list order is misleading — keep declaration and list order aligned to avoid surprises.

The constructor body runs after all members are initialised.

---

### A3. const correctness

**Output: `0 1`**

- `w` is non-const → calls `int value()` → returns `n_` = `0`.
- `cw` is `const Widget` → can only call `const` member functions → `int value() const` → returns `n_ + 1` = `1`.

Non-const overload is not callable on `const` objects.

---

### A4. this and chaining

**Output: `6`**

`add` returns `Builder&` (reference to `*this`) so you can chain calls: `1 + 2 + 3 = 6`.

This pattern is called **fluent interface** / method chaining. Returning by reference avoids copies and modifies the same object.

---

### A5. Destructor timing

**Output: `ABBCA`** (as one continuous string)

Order:
1. Construct `a` → `A`
2. Enter block, construct `b` → `B`
3. Leave block, destroy `b` → `B`
4. Construct `c` → `C`
5. End of `main`, destroy `c` → `C`, destroy `a` → `A`

Destructors run in **reverse order of construction** for objects with the same storage duration.

---

## Self-scoring

- 5/5: classes are clicking — let me know and we move to **Day 07 (inheritance & polymorphism)**.
- 3–4: re-read constructors, destructors, and `const` members in `notes.md`.
- 0–2: re-run `examples/`, especially `04_destructors.cpp` and `10_small_class.cpp`.

Tell me your score and any concept you want me to deep-dive before Day 07.
