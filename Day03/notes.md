# Day 03 — Functions

Today's goal: break programs into reusable pieces, pass data correctly, and understand what happens on the stack when you call a function.

| # | Concept |
|--:|---------|
| 1 | Declarations vs definitions |
| 2 | Pass by value |
| 3 | Pass by reference |
| 4 | Pass by const reference |
| 5 | Return values and return types |
| 6 | Function overloading |
| 7 | Default arguments |
| 8 | `inline` functions |
| 9 | Recursion (introduction) |
| 10 | Function pointers (introduction) |

---

## 1. Declarations vs definitions

A **declaration** tells the compiler a name exists and its signature:

```cpp
int add(int a, int b);   // declaration — no body
```

A **definition** provides the body (implementation):

```cpp
int add(int a, int b) { return a + b; }   // definition
```

- You can declare many times but define **once** per program (ODR — One Definition Rule).
- Callers only need a declaration (via `#include` of a header or a forward declaration).
- If the linker can't find a definition → `undefined reference` error (Day 01, Q5).

Parameter names in declarations are optional and ignored: `int add(int, int);` is fine.

## 2. Pass by value

The callee receives a **copy** of the argument:

```cpp
void increment(int x) { ++x; }

int main() {
    int n = 5;
    increment(n);   // n is still 5
}
```

- Cheap for small types (`int`, `double`, pointers).
- Expensive for large objects (you'll prefer `const&` later).
- Changes inside the function do **not** affect the caller's variable.

## 3. Pass by reference

The callee receives an **alias** to the original object:

```cpp
void increment(int& x) { ++x; }

int main() {
    int n = 5;
    increment(n);   // n is now 6
}
```

- No copy is made; the function works on the caller's variable directly.
- Use when the function must modify the argument, or when copying would be expensive (and `const&` isn't enough because you need to write).

## 4. Pass by const reference

Read-only access without copying:

```cpp
void print(const std::string& s) {
    std::cout << s << '\n';
    // s.push_back('!');  // error — const
}
```

- **`const T&`** is the default choice for large read-only parameters.
- Binds to temporaries: `print("hello");` works — the temporary `string` lives for the call.
- Never return a reference to a local variable — it dangles when the function returns.

## 5. Return values and return types

```cpp
int square(int x) { return x * x; }

double divide(int a, int b) {
    if (b == 0) return 0.0;   // early return
    return static_cast<double>(a) / b;
}
```

- `return` exits the function immediately and optionally provides a value.
- Return type must match (or be convertible). `void` functions return nothing.
- Returning by value creates a copy (or move in C++11+) of the result — the compiler often elides this (RVO/NRVO).
- **`[[nodiscard]]`** (C++17) on a function warns if the caller ignores the return value.

## 6. Function overloading

Same name, different parameter lists — the compiler picks the best match:

```cpp
int add(int a, int b)       { return a + b; }
double add(double a, double b) { return a + b; }
```

- Overloading is resolved at **compile time** based on argument types and count.
- Return type alone is **not** enough to overload — `int foo()` and `double foo()` is illegal.
- Ambiguous calls (two equally good matches) are compile errors.

## 7. Default arguments

Supply defaults for trailing parameters:

```cpp
void greet(const std::string& name, const std::string& prefix = "Hello") {
    std::cout << prefix << ", " << name << '\n';
}

greet("Ada");              // Hello, Ada
greet("Ada", "Hi");        // Hi, Ada
```

- Defaults must be on the **right** — you can't skip the middle argument without naming later ones (until C++20 designated initializers for structs).
- Put defaults in the **declaration** (usually the header), not duplicated in the definition.
- Default arguments are applied at the **call site**, not inside the function body.

## 8. `inline` functions

```cpp
inline int sqr(int x) { return x * x; }
```

- Suggests the compiler **may** replace the call with the function body at the call site (no call overhead).
- Modern compilers inline aggressively regardless of the keyword.
- **`inline` on a function in a header** also allows the definition in the header without violating ODR — the linker merges identical inline definitions.
- Don't use `inline` to force speed; use it for header-defined small functions.

## 9. Recursion (introduction)

A function that calls itself:

```cpp
int factorial(int n) {
    if (n <= 1) return 1;          // base case
    return n * factorial(n - 1);   // recursive step
}
```

- Every recursive function needs a **base case** or it runs until stack overflow.
- Each call gets its own stack frame (local variables, return address).
- Depth is limited by stack size — deep recursion can crash; iteration or explicit stack is safer for large `n`.
- Same problem can often be solved iteratively; recursion shines on tree/graph structures.

## 10. Function pointers (introduction)

A variable that holds the address of a function:

```cpp
int add(int a, int b) { return a + b; }

int main() {
    int (*fp)(int, int) = &add;   // or just add
    std::cout << fp(3, 4) << '\n';   // 7
}
```

- Syntax is ugly: `return_type (*name)(param_types)`.
- C++11 alternative: `auto fp = add;` or `std::function` (later day).
- Used for callbacks, strategy patterns, and C APIs.
- Function pointer type must match exactly — same return type and parameter types.

---

## What you should be able to do after Day 03

- Split code across `.h` / `.cpp` with correct declarations and definitions.
- Choose value vs reference vs const reference for parameters.
- Write and call overloaded functions and functions with default arguments.
- Trace a simple recursive function and identify the base case.
- Declare and invoke a function through a function pointer.

Now move to `examples/` and run each program. Then attempt `questions.md`.
