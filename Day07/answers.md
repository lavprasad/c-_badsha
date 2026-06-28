# Day 07 — Answers (read AFTER you've tried)

---

### A1. Static dispatch without `virtual`

**Output: `Base`**.

`p` points to a `Derived` object, but `Base::speak()` is **not virtual**. The compiler resolves the call at compile time based on the **static type** of `p` (`Base*`), so `Base::speak()` runs.

**Fix:** add `virtual`:

```cpp
virtual void speak() { std::cout << "Base\n"; }
```

Now the call goes through the vtable and prints `Derived`.

Lesson: overriding a non-virtual function **hides** the base version; it does **not** enable polymorphism.

---

### A2. Signature mismatch — hiding, not overriding

**Output: `Base 3`**.

`Derived::process(double x)` does **not** override `Base::process(int x)` — the parameter types differ. Instead, `Derived::process(double)` **hides** the base overload. Through a `Base*`, only `Base::process(int)` is visible.

If you wrote:

```cpp
void process(double x) override { ... }   // compile ERROR
```

The compiler would reject it immediately: no matching virtual function in `Base`.

**Fix:**

```cpp
void process(int x) override { std::cout << "Derived " << x << '\n'; }
```

Lesson: `override` is your safety net. Always use it.

---

### A3. Object slicing via pass-by-value

**Output: `Animal`** — not `Cat`.

`print_name(Animal a)` takes its argument **by value**. Copying `Cat c` into `Animal a` **slices** off the `Cat` portion. The copy is a plain `Animal`, so `Animal::name()` runs.

**Fix:** pass by `const` reference:

```cpp
void print_name(const Animal& a) {
    a.name();   // prints "Cat"
}
```

No copy → no slicing → virtual dispatch works.

---

### A4. Non-virtual destructor leak

**Output: only `~Base`** (you will **not** see `~Derived`).

Because `~Base()` is not virtual, `delete p` calls only `~Base()`. The `Derived` destructor never runs, so `delete[] data` is never executed → **memory leak** (100 ints).

This is undefined behaviour in general when the derived class has non-trivial destruction.

**Fix:**

```cpp
virtual ~Base() { std::cout << "~Base\n"; }
```

Now `delete p` calls `~Derived()` first (which frees `data`), then `~Base()`.

Rule: **any class used as a polymorphic base must have a virtual destructor.**

---

### A5. Abstract base, concrete derived

(a) **Yes**, this compiles. `Button` implements the pure virtual `draw()`, so `Button` is concrete.

(b) **No.** `Widget` has a pure virtual function (`draw() = 0`), making it **abstract**. `Widget w2;` would be a **compile error**: "cannot declare variable 'w2' to be of abstract type 'Widget'".

(c) `Button` must implement **every** pure virtual function from its base(s). Here that's only `draw()`. It does **not** need to override `resize()` — the base provides a default implementation.

Quick reference:

| Pure virtual count in class | Can instantiate? |
|----------------------------|------------------|
| ≥ 1                        | No (abstract)    |
| 0                          | Yes (concrete)   |

---

## Self-scoring

- 5/5: solid on inheritance & polymorphism — move to **Day 08 (templates)**.
- 3–4: re-read sections on virtual functions, slicing, and destructors in `notes.md`.
- 0–2: re-run every program in `examples/`, especially `08_slicing.cpp` and `09_virtual_destructor.cpp`. Modify them and predict output before running.

Tell me your score and any concept you want me to deep-dive before Day 08.
