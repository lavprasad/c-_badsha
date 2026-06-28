# Day 05 — Pointers & Dynamic Memory

Today's goal: control memory explicitly, understand heap vs stack, and learn the RAII mindset that prevents leaks.

| # | Concept |
|--:|---------|
| 1 | Pointer syntax deep dive |
| 2 | Address-of (`&`) and dereference (`*`) |
| 3 | `nullptr` |
| 4 | Dynamic allocation with `new` |
| 5 | Dynamic deallocation with `delete` |
| 6 | Dynamic arrays: `new[]` / `delete[]` |
| 7 | Memory leaks |
| 8 | Dangling pointers |
| 9 | RAII (introduction) |
| 10 | Pointer best practices |

---

## 1. Pointer syntax deep dive

```cpp
int x = 42;
int* p = &x;        // p points to x
int* q = p;         // q is a copy of the address
```

- `int* p` and `int *p` are equivalent — spacing is style. Be consistent.
- Multiple declarations on one line are tricky: `int* a, b;` — only `a` is a pointer; `b` is an `int`.
- Pointers have a **type**: `int*` vs `double*` tells the compiler how many bytes to step when you do pointer arithmetic.

## 2. Address-of (`&`) and dereference (`*`)

```cpp
int x = 10;
int* p = &x;    // &x  = address of x
*p = 20;        // *p  = value at the address p holds
```

- `&` on a variable → address-of operator.
- `*` on a pointer → dereference (follow the address).
- `&` on a type in a declaration → reference (different meaning — context matters).

## 3. `nullptr`

```cpp
int* p = nullptr;   // C++11 — typed null pointer
if (p == nullptr) { ... }
```

- Replaces C's `NULL` macro and literal `0` for pointers.
- Type-safe: `nullptr` is `std::nullptr_t`, converts to any pointer type but not to `int`.
- Always initialise pointers — uninitialised pointers are UB if dereferenced.

## 4. Dynamic allocation with `new`

```cpp
int* p = new int(42);   // one int on the heap, initialised to 42
```

- **Stack** (automatic storage): local variables, freed when scope ends.
- **Heap** (free store): `new` allocates; memory lives until you `delete` it.
- `new` returns a pointer to the allocated object, or throws `std::bad_alloc` on failure (by default).
- Never mix stack and heap semantics — don't `delete` a stack variable.

## 5. Dynamic deallocation with `delete`

```cpp
delete p;
p = nullptr;   // good habit — avoids accidental double-delete via stale pointer
```

- Every `new` must have exactly one matching `delete`.
- **Double delete** → undefined behaviour (often crash).
- **Delete after use** — using `*p` after `delete` is UB (dangling pointer).

## 6. Dynamic arrays: `new[]` / `delete[]`

```cpp
int* arr = new int[5]{};   // 5 ints, zero-initialised
delete[] arr;              // MUST use delete[], not delete
```

- `new[]` / `delete[]` are paired — using `delete` on an array is UB.
- Prefer `std::vector` (later) over raw `new[]` for dynamic arrays.
- You still own the memory — no garbage collection.

## 7. Memory leaks

A **leak** happens when heap memory is never freed:

```cpp
void leak() {
    int* p = new int(100);
    // forgot delete p;
}   // p destroyed, but the int on the heap remains allocated forever
```

- The program loses the only pointer to the block → memory unreachable until process exit.
- Leaks accumulate in long-running servers and embedded systems.
- Tools: Valgrind, AddressSanitizer (`-fsanitize=address`), Visual Studio leak detector.

## 8. Dangling pointers

A pointer that doesn't point to valid memory:

```cpp
int* p = new int(5);
delete p;
// *p = 10;   // UB — p is dangling

int* q;
{ int x = 99; q = &x; }
// *q         // UB — x is gone
```

- Set pointers to `nullptr` after `delete` if they might be used again.
- Never return a pointer to a local stack variable from a function.

## 9. RAII (introduction)

**Resource Acquisition Is Initialization** — tie resource lifetime to object lifetime:

```cpp
struct IntHolder {
    int* p;
    IntHolder(int val) : p(new int(val)) {}
    ~IntHolder() { delete p; }   // always runs when holder goes out of scope
};
```

- Constructor acquires; destructor releases — even if an exception is thrown or you `return` early.
- This is the foundation for smart pointers (`unique_ptr`, `shared_ptr` — later days).
- **Rule:** who allocates must deallocate, preferably in the same scope via RAII.

## 10. Pointer best practices

1. Initialise every pointer (`nullptr` if "no object yet").
2. Prefer stack objects and `std::string` / `std::vector` over raw `new`.
3. If you must `new`, pair with `delete` in the same logical owner — or wrap in RAII.
4. Never `delete` twice; never `delete` something you didn't `new`.
5. Use `-Wall -Wextra` and sanitizers during development.

Raw owning pointers are a code smell in modern C++. You'll still see them in legacy code and low-level APIs — know them, then prefer abstractions.

---

## What you should be able to do after Day 05

- Allocate and free single objects and arrays on the heap correctly.
- Explain stack vs heap and why leaks happen.
- Identify dangling pointer and double-delete bugs.
- Sketch a simple RAII wrapper that prevents a leak.
- Use `nullptr` instead of `NULL` or `0`.

Now move to `examples/` and run each program. Then attempt `questions.md`.
