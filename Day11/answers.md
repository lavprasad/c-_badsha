# Day 11 — Answers (read AFTER you've tried)

---

### A1. Moved-from string is valid but unspecified

Typical output: `a.size()=0 b=hello world` (exact `a.size()` is **unspecified** — often 0 for libstdc++/libc++).

**Safe to use `a` after move?** Yes, it's in a **valid but unspecified state**. You can:
- Assign to it: `a = "new value";`
- Destroy it (destructor runs fine)
- Call member functions that don't require a specific value (e.g. `clear()`, `size()`)

You must **not** assume it still holds the old data.

Lesson: `std::move` doesn't "empty" — it **transfers ownership** if the type supports move. The source is left valid-but-empty-ish for well-behaved types.

---

### A2. unique_ptr is move-only

**Does not compile.** `unique_ptr` deletes its copy constructor and copy assignment.

**Correct transfer:**

```cpp
auto p2 = std::move(p1);   // p1 is now nullptr
```

Or:

```cpp
std::unique_ptr<int> p2;
p2 = std::move(p1);
```

After move, `p1` is empty — don't dereference it without checking.

---

### A3. Reference cycle prevents destruction

**Destructors do NOT run** (for typical implementations — memory leak).

- `a` holds a `shared_ptr` to `b` → b's ref count ≥ 1 from `a`.
- `b` holds a `shared_ptr` to `a` → a's ref count ≥ 1 from `b`.
- When locals go out of scope, each node's ref count drops to 1 (the other node still points to it). Neither reaches 0 → neither is destroyed.

**Fix (when needed):** use `std::weak_ptr` for back-references:

```cpp
std::weak_ptr<Node> next;   // doesn't keep Node alive
```

Lesson: `shared_ptr` cycles are a classic leak. Break cycles with `weak_ptr`.

---

### A4. Catch by const reference

It **works** but is **bad practice**.

Catching by value (`std::runtime_error e`) **slices** the exception object and **copies** it — extra allocation/copy and you lose derived-class information if the thrown type is a subclass.

**Idiomatic:**

```cpp
catch (const std::exception& e) {
    std::cout << e.what() << '\n';
}
```

Or `catch (const std::runtime_error& e)` if you only care about that type.

Rule: **throw by value, catch by const reference.**

---

### A5. noexcept move lets vector use move on reallocation

`vector` growth reallocates: it needs to move existing elements to new memory.

- If move is **`noexcept`**, vector **moves** elements (fast, no copy).
- If move **may throw**, vector falls back to **copying** (so it can leave the old array intact if a move throws mid-way — strong exception guarantee).

For move-only types (deleted copy), a throwing move would make `vector<MoveOnly>` **non-growable** or fail to compile/use copy.

Marking move `noexcept` when it truly cannot throw:
1. Enables optimal vector reallocation.
2. Documents the contract.

---

## Self-scoring

- 5/5: move semantics, smart pointers, and exceptions are solid — you've completed the Day 07–11 block!
- 3–4: re-read move/noexcept and smart pointer ownership in `notes.md`.
- 0–2: re-run every program in `examples/`, especially `03_move_constructor.cpp` and `04_unique_ptr.cpp`.

Tell me your score and any concept you want me to deep-dive next.
