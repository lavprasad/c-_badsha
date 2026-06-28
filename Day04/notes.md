# Day 04 — Arrays, C-Strings & std::string

Today's goal: store collections of data, work with text safely, and understand when to use references vs pointers.

| # | Concept |
|--:|---------|
| 1 | C-style arrays |
| 2 | Array size, bounds, and the `sizeof` trick |
| 3 | C-strings (`char` arrays) |
| 4 | `std::string` basics |
| 5 | Common `std::string` operations |
| 6 | References — syntax and rules |
| 7 | Pointers — syntax refresher |
| 8 | References vs pointers |
| 9 | Arrays decay to pointers |
| 10 | String and array pitfalls |

---

## 1. C-style arrays

Fixed-size contiguous sequence on the stack (or static storage):

```cpp
int scores[5] = {90, 85, 72, 88, 95};
int zeros[3]{};          // all elements value-initialised to 0
```

- Indexing starts at **0**. Valid indices: `0` to `size - 1`.
- Size must be known at compile time for stack arrays (unless using `new[]` — Day 05).
- No built-in bounds checking — out-of-range access is **undefined behaviour**.

## 2. Array size, bounds, and the `sizeof` trick

```cpp
int arr[] = {10, 20, 30, 40};
std::size_t n = sizeof(arr) / sizeof(arr[0]);   // 4
```

- `sizeof(arr)` is the total bytes of the array object — **only when `arr` is a true array**, not a pointer.
- Prefer range-based `for` or track size in a `constexpr` variable.
- `<array>` (std::array) — preview for a later day — wraps a C array with size in the type.

## 3. C-strings (`char` arrays)

A C-string is a `char` array ending with **`'\0'`** (null terminator):

```cpp
char name[] = "Ada";     // {'A','d','a','\0'} — compiler adds '\0'
char buf[10] = "Hi";     // remaining bytes are '\0'
```

- `"Ada"` in source code is a string **literal** — stored in read-only memory; `char*` to it is deprecated; use `const char*`.
- `<cstring>` provides `std::strlen`, `std::strcpy`, `std::strcmp` — easy to misuse (buffer overflows). Prefer `std::string`.

## 4. `std::string` basics

```cpp
#include <string>
std::string s = "Hello";
s = "World";
```

- Dynamic size — grows and shrinks automatically.
- Owns its character data (unlike a raw pointer to a literal).
- Works naturally with `std::cout`, `std::cin`, `+`, `==`, etc.
- Include `<string>` — it is **not** pulled in by `<iostream>` (though many implementations include it transitively; don't rely on that).

## 5. Common `std::string` operations

```cpp
std::string s = "Hello";
s.size();              // 5
s += ", C++";          // append
s[0] = 'h';            // mutable indexing
s.substr(0, 4);        // "Hell"
s.find("ll");          // 2 (or string::npos if not found)
```

- `.at(i)` throws `std::out_of_range` on bad index; `operator[]` does not check (UB).
- Pass strings to functions as **`const std::string&`** for read-only, **`std::string&`** to modify.

## 6. References — syntax and rules

```cpp
int x = 10;
int& ref = x;      // ref is an alias for x
ref = 20;          // x is now 20
```

- Must be **initialised** at declaration — no null references.
- Cannot be reseated to refer to a different object (unlike pointers).
- Cannot have a reference to a reference; no `int& &`.
- `T&` and `T` are the same type for overload resolution in most cases.

## 7. Pointers — syntax refresher

```cpp
int x = 10;
int* p = &x;       // p holds the address of x
*p = 20;           // dereference — x is now 20
```

- Can be null (`nullptr`), uninitialised (dangerous), or point to valid memory.
- Pointer arithmetic: `p + 1` moves to the next `int` in memory (if pointing into an array).
- Full deep dive tomorrow (Day 05); today we compare with references.

## 8. References vs pointers

| | Reference | Pointer |
|---|-----------|---------|
| Syntax | `T& r = x;` | `T* p = &x;` |
| Null | No | Yes (`nullptr`) |
| Reseat | No | Yes |
| Indirection | Automatic | Explicit `*p` |
| Use when | Function params, aliases | Optional values, arrays, dynamic memory |

Rule of thumb: prefer references when the object **must** exist; prefer pointers when null or reseating is meaningful.

## 9. Arrays decay to pointers

When you pass an array to a function, it **decays** to a pointer to its first element:

```cpp
void print(int arr[]) { ... }   // really void print(int* arr)
```

- Inside the function, `sizeof(arr)` is the size of the **pointer**, not the array.
- Pass size explicitly: `void print(const int* arr, std::size_t n)`.
- Or pass by reference to preserve size: `void print(int (&arr)[5])` — size is baked into the type.

## 10. String and array pitfalls

| Pitfall | Problem | Fix |
|---------|---------|-----|
| Buffer overflow | `char buf[4]; strcpy(buf, "Hello");` | Use `std::string` or bounded copy |
| Off-by-one | Loop `i <= n` instead of `i < n` | Use `< size` |
| Array decay | Lost size info in function | Pass `size` or use reference-to-array |
| Modifying string literal | `char* s = "hi"; s[0]='H';` | Use `const char*` or `std::string` |
| Dangling reference to temporary | `const string& r = string("a") + "b";` | OK — temporary lives until end of full expression |

---

## What you should be able to do after Day 04

- Declare, initialise, and iterate C-style arrays.
- Work with C-strings and explain why null termination matters.
- Use `std::string` for everyday text processing.
- Explain references vs pointers and when to use each.
- Pass arrays to functions without losing size information.

Now move to `examples/` and run each program. Then attempt `questions.md`.
