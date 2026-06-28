# Day 11 — Move Semantics, Smart Pointers & Exceptions

Today's goal: move instead of copy when you can, manage memory with smart pointers, and handle errors with exceptions without leaking resources.

| # | Concept |
|--:|---------|
| 1 | Lvalues vs rvalues — names vs temporaries |
| 2 | Rvalue references (`T&&`) & `std::move` |
| 3 | Move constructor & move assignment |
| 4 | `std::unique_ptr` — exclusive ownership |
| 5 | `std::shared_ptr` — shared ownership with reference counting |
| 6 | `try` / `catch` / `throw` — exception basics |
| 7 | Exception safety guarantees (basics) |
| 8 | `noexcept` — promising not to throw |
| 9 | Rule of five / zero — special member functions |
| 10 | Putting it together — RAII with smart pointers |

---

## 1. Lvalues vs rvalues — names vs temporaries

- **Lvalue**: has a name, persists beyond the expression (`int x = 5;` — `x` is an lvalue).
- **Rvalue**: temporary, about to be destroyed (`5`, `x + 1`, return value of a function).

```cpp
int x = 5;        // x is lvalue
int y = x + 1;    // (x + 1) is rvalue
```

You can bind lvalues to `T&` and rvalues to `T&&` (rvalue reference).

## 2. Rvalue references (`T&&`) & `std::move`

```cpp
std::string s = "hello";
std::string t = std::move(s);   // move: steal s's buffer instead of copying
// s is now in valid-but-unspecified state (often empty)
```

`std::move(x)` is a **cast** to rvalue reference — it doesn't move by itself. It tells the compiler "I'm done with `x`, you may steal its resources."

Move is cheap for types that own heap memory (string, vector, unique_ptr).

## 3. Move constructor & move assignment

```cpp
class Buffer {
    int* data;
    std::size_t len;
public:
    Buffer(Buffer&& other) noexcept
        : data(other.data), len(other.len) {
        other.data = nullptr;
        other.len = 0;
    }
    Buffer& operator=(Buffer&& other) noexcept {
        if (this != &other) {
            delete[] data;
            data = other.data;
            len = other.len;
            other.data = nullptr;
            other.len = 0;
        }
        return *this;
    }
};
```

After a move, the source must remain **valid** (usually empty/null) so its destructor is safe.

## 4. `std::unique_ptr` — exclusive ownership

```cpp
auto p = std::make_unique<int>(42);
// auto q = p;              // ERROR: cannot copy
auto q = std::move(p);      // OK: transfer ownership
```

- Exactly **one** owner at a time.
- Automatically `delete`s when destroyed.
- Prefer `std::make_unique<T>(args)` over `unique_ptr<T>(new T(args))`.

Use `unique_ptr` by default whenever you need heap allocation.

## 5. `std::shared_ptr` — shared ownership

```cpp
auto a = std::make_shared<int>(42);
auto b = a;   // both share ownership; ref count = 2
```

- Reference-counted — destroyed when last `shared_ptr` goes away.
- Slightly more overhead (control block + atomic ref count).
- Use when **multiple** owners genuinely need the same object.

Avoid `shared_ptr` when `unique_ptr` suffices — it's cheaper and clearer.

## 6. `try` / `catch` / `throw` — exception basics

```cpp
try {
    if (bad) throw std::runtime_error("something failed");
    // ...
} catch (const std::exception& e) {
    std::cerr << e.what() << '\n';
} catch (...) {
    std::cerr << "unknown error\n";
}
```

- Throw by value, catch by **const reference**.
- Stack unwinding destroys local objects (RAII) — destructors run on the way out.
- Don't throw in destructors (std::terminate if another exception is active).

## 7. Exception safety guarantees (basics)

| Guarantee | Meaning |
|-----------|---------|
| No-throw | Operation never fails |
| Strong | If it fails, state unchanged |
| Basic | If it fails, no leaks; invariants hold |
| None | Leaks or corruption possible |

RAII (smart pointers, lock guards) makes **basic** guarantee easy. Design APIs to either succeed fully or roll back cleanly.

## 8. `noexcept` — promising not to throw

```cpp
void swap(int& a, int& b) noexcept {
    // if this throws, std::terminate is called
}
```

- Mark move constructors `noexcept` when possible — containers use move only if move is `noexcept`.
- `noexcept(expr)` is a compile-time check.

## 9. Rule of five / zero — special member functions

If you define **any** of these, consider all five:
1. Destructor
2. Copy constructor
3. Copy assignment
4. Move constructor
5. Move assignment

**Rule of zero:** if your class only holds RAII types (string, vector, unique_ptr), define **none** — compiler-generated versions are correct.

## 10. Putting it together — RAII with smart pointers

```cpp
void process() {
    auto file = std::make_unique<FileHandle>("data.txt");
    auto buffer = std::vector<int>(1000);
    // if anything throws, file and buffer clean up automatically
}
```

Modern C++ philosophy: **no raw `new`/`delete`** in application code. Use smart pointers and containers; let RAII handle cleanup.

---

## What you should be able to do after Day 11

- Explain when to copy vs move and what `std::move` really does.
- Choose between `unique_ptr` and `shared_ptr`.
- Write try/catch blocks that catch by const reference.
- Apply the rule of zero in new code.

Now move to `examples/` and run each program. Then attempt `questions.md`.
