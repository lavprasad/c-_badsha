# Day 01 — The Foundations

Today's goal: understand *every line* of a small C++ program and never feel "magic" about it again.

| # | Concept |
|--:|---------|
| 1 | Anatomy of a C++ program & `main()` |
| 2 | Preprocessor & `#include` |
| 3 | Namespaces & `std::` |
| 4 | Variables & primitive data types |
| 5 | Type sizes, signed vs unsigned, overflow |
| 6 | Constants: `const`, `constexpr`, `#define` |
| 7 | Standard I/O: `std::cin`, `std::cout`, `std::endl` vs `"\n"` |
| 8 | Operators: arithmetic, relational, logical, bitwise, assignment |
| 9 | Implicit vs explicit type conversion (casts) |
| 10 | Comments, formatting, and the C++ compilation pipeline |

---

## 1. Anatomy of a C++ program & `main()`

Every C++ program starts execution at exactly **one** function: `main`. The OS calls it for you.

```cpp
#include <iostream>          // line A: preprocessor directive

int main() {                 // line B: program entry-point
    std::cout << "Hi\n";     // line C: statement
    return 0;                // line D: exit status to OS
}
```

- The return type of `main` **must** be `int` (do not write `void main()` — it's non-standard).
- Returning `0` means "success" to the OS. Any non-zero is treated as an error.
- If you omit `return 0;`, the standard says `main` (and *only* `main`) implicitly returns `0`. You should still write it for clarity.
- Two valid signatures: `int main()` and `int main(int argc, char* argv[])`. The second one receives command-line arguments.

## 2. Preprocessor & `#include`

Lines starting with `#` are handled by the **preprocessor** *before* the compiler even sees the code. They are not C++ statements.

- `#include <iostream>` — copy-pastes the contents of the standard header `iostream` into your file. Angle brackets = search system paths. Quotes (`"foo.h"`) = search current directory first, then system paths.
- `#define PI 3.14` — text substitution. Avoid in modern C++; use `constexpr` instead.
- `#ifdef / #ifndef / #endif` — conditional compilation, used for include guards in headers.

## 3. Namespaces & `std::`

A namespace is a labelled scope that prevents name collisions. The C++ standard library lives in the `std` namespace.

```cpp
std::cout << "hello";   // fully qualified — preferred
```

```cpp
using namespace std;    // pulls EVERYTHING from std into the current scope
cout << "hello";        // works, but causes name clashes in larger code
```

Best practice: in `.cpp` files, write `std::` explicitly or do narrow `using std::cout;`. **Never** write `using namespace std;` in a header file — it leaks into every file that includes it.

## 4. Variables & primitive data types

| Category  | Types |
|-----------|-------|
| Integer   | `short`, `int`, `long`, `long long` (each may be `signed` / `unsigned`) |
| Character | `char`, `wchar_t`, `char16_t`, `char32_t` |
| Floating  | `float`, `double`, `long double` |
| Boolean   | `bool` (values `true` / `false`) |
| Void      | `void` (no value) |

Declaration vs initialization:

```cpp
int a;          // declaration only — value is INDETERMINATE for local vars
int b = 5;      // copy-init
int c(5);       // direct-init
int d{5};       // brace-init (C++11) — recommended; warns on narrowing conversions
int e{};        // value-init to 0
```

> Reading an uninitialised local variable is **undefined behaviour**. Always initialise.

## 5. Type sizes, signed vs unsigned, overflow

- The standard guarantees minimums (`char` ≥ 8 bits, `int` ≥ 16 bits, `long` ≥ 32 bits, `long long` ≥ 64 bits) but **not** exact sizes. Use `<cstdint>` (`int32_t`, `uint64_t`, …) when the size matters.
- Use `sizeof(type)` to query bytes at compile time.
- **Signed overflow is undefined behaviour.** Compilers can and do exploit this for optimisation.
- **Unsigned overflow is well-defined**: it wraps modulo `2^N`. That sounds nice, but it bites — see Question 3.

## 6. Constants: `const`, `constexpr`, `#define`

```cpp
const int MAX = 100;          // value cannot change after init; computed at runtime if needed
constexpr int SIZE = 4 * 25;  // compile-time constant; can be used where a constant expression is required (array sizes, template args)
#define BAD 100               // text substitution, no type-checking, no scope; avoid
```

Rule of thumb: prefer `constexpr` > `const` > `#define`.

## 7. Standard I/O: `std::cin`, `std::cout`, `std::endl` vs `"\n"`

```cpp
int x;
std::cout << "Enter a number: ";
std::cin  >> x;
std::cout << "You typed " << x << '\n';
```

- `<<` is the **insertion** operator (output), `>>` the **extraction** operator (input).
- `std::endl` = `'\n'` **plus a flush** of the output buffer. Flushing is expensive; prefer `'\n'` in tight loops.
- After `std::cin >> x`, the newline you typed remains in the input buffer. If you mix `>>` and `std::getline`, you'll need `std::cin.ignore()`.

## 8. Operators

| Group        | Examples |
|--------------|----------|
| Arithmetic   | `+ - * / %` (modulo only on integers) |
| Relational   | `== != < > <= >=` (return `bool`) |
| Logical      | `&& \|\| !` — short-circuit evaluation |
| Bitwise      | `& \| ^ ~ << >>` — operate on bits of integers |
| Assignment   | `= += -= *= /= %= &= \|= ^= <<= >>=` |
| Increment    | `++a` (pre) vs `a++` (post) |

Subtleties:
- Integer division truncates toward zero: `7 / 2 == 3`, `-7 / 2 == -3`.
- `&` vs `&&`: `&` is bitwise, `&&` is logical. Mixing them up is a classic bug.
- Pre-increment is generally as fast or faster than post-increment (post must keep the old value around). For built-in `int` the optimiser erases the difference; for user-defined types (iterators) it can matter.

## 9. Implicit vs explicit type conversion (casts)

```cpp
int a = 7, b = 2;
double r = a / b;          // r == 3.0 — division done in int FIRST, then converted
double r2 = (double)a / b; // C-style cast — r2 == 3.5
double r3 = static_cast<double>(a) / b;   // C++ way — preferred
```

Four C++ casts:
- `static_cast<T>(x)` — safe, compile-time-checked conversions (numeric, up/down inheritance without RTTI).
- `dynamic_cast<T>(x)` — runtime-checked downcast in polymorphic class hierarchies.
- `const_cast<T>(x)` — adds/removes `const` (rarely needed; smell of design issue).
- `reinterpret_cast<T>(x)` — bit-level reinterpretation (dangerous; avoid).

Avoid C-style casts `(T)x` — they silently pick the most permissive of the four.

## 10. Comments, formatting, and the compilation pipeline

```cpp
// single-line comment
/* multi-line
   comment — does NOT nest */
```

The compilation pipeline (knowing this saves you when builds break):

1. **Preprocessor** — handles `#include`, `#define`, `#ifdef`. Output: a single big translation unit (`.i`).
2. **Compiler (front-end + back-end)** — turns C++ into assembly, then into machine code (`.o` / `.obj` object files).
3. **Linker** — stitches object files + libraries into the final executable. *"Undefined reference"* errors come from this stage.

When you see:

- *"`xyz` was not declared in this scope"* → compiler stage (missing `#include` or typo).
- *"undefined reference to `xyz`"* → linker stage (forgot to compile/link a `.cpp`, or only declared a function and never defined it).

---

## What you should be able to do after Day 01

- Write, compile, and run a C++ program from the command line.
- Explain every line of `01_hello.cpp` to a friend.
- Predict the output of integer division, mixed-type arithmetic, and increments.
- Choose between `const` and `constexpr` correctly.
- Distinguish compiler errors from linker errors.

Now move to `examples/` and run each program. Then attempt `questions.md`.
