# Day 08 — Templates & Type Deduction

Today's goal: write generic code once that works for many types, and understand how the compiler figures out types for you with `auto` and `decltype`.

| # | Concept |
|--:|---------|
| 1 | Function templates — generic functions |
| 2 | Template type parameters & function overloading |
| 3 | Class templates — generic types |
| 4 | Template specialization (intro) |
| 5 | `auto` — let the compiler deduce the type |
| 6 | `decltype` — ask for the type of an expression |
| 7 | `auto` return types & trailing return type |
| 8 | Template argument deduction rules (basics) |
| 9 | Non-type template parameters |
| 10 | Putting it together — a generic utility |

---

## 1. Function templates — generic functions

A **function template** is a blueprint the compiler instantiates for each type you use:

```cpp
template<typename T>
T max_val(T a, T b) {
    return (a > b) ? a : b;
}

int m1 = max_val(3, 7);           // T = int
double m2 = max_val(3.14, 2.71);  // T = double
```

The compiler generates `max_val<int>` and `max_val<double>` at compile time. No runtime cost compared to hand-written overloads.

## 2. Template type parameters & function overloading

You can have multiple template parameters:

```cpp
template<typename T, typename U>
void print_pair(T a, U b) { /* ... */ }
```

Templates can coexist with ordinary functions. If a non-template function is an equally good match, it wins. Otherwise the compiler picks the best template specialization.

Explicit specification (rarely needed):

```cpp
max_val<double>(3, 7.5);   // forces T = double
```

## 3. Class templates — generic types

Just as functions can be generic, so can classes:

```cpp
template<typename T>
class Box {
    T value;
public:
    explicit Box(T v) : value(v) {}
    T get() const { return value; }
};

Box<int> ib(42);
Box<std::string> sb("hello");
```

Each `Box<T>` is a **separate type** at compile time. `Box<int>` and `Box<double>` share no code unless the compiler merges identical instantiations.

## 4. Template specialization (intro)

The primary template handles the general case. A **specialization** customises behaviour for a specific type:

```cpp
template<typename T>
class Printer {
public:
    void print(T v) { std::cout << v; }
};

template<>
class Printer<bool> {
public:
    void print(bool v) { std::cout << (v ? "true" : "false"); }
};
```

- **Full specialization**: `template<>` with all parameters specified.
- **Partial specialization**: only for class templates, not function templates (C++ limitation).

Use specialization sparingly — often a plain overload or `if constexpr` (C++17) is cleaner.

## 5. `auto` — let the compiler deduce the type

```cpp
auto x = 42;              // int
auto y = 3.14;            // double
auto s = std::string("hi"); // std::string
```

Rules:
- `auto` drops top-level `const` and references: `const int ci = 0; auto a = ci;` → `a` is `int`, not `const int`.
- Use `const auto&` when you want a reference without copying: `for (const auto& item : vec)`.
- `auto` cannot be used for function parameters in C++17 without making the function a template (C++20 adds `auto` parameters).

## 6. `decltype` — ask for the type of an expression

```cpp
int x = 0;
decltype(x) a = 5;         // int
decltype((x)) b = x;       // int&  — (x) is an lvalue expression
```

Common pattern — declare a variable with the same type as an expression's result:

```cpp
template<typename T, typename U>
auto add(T a, U b) -> decltype(a + b) {
    return a + b;
}
```

C++14 simplified this: `auto add(T a, U b) { return a + b; }` deduces the return type. But `decltype` is still needed when the return type depends on parameters and isn't visible at the function signature line.

## 7. `auto` return types & trailing return type

```cpp
template<typename T, typename U>
auto multiply(T a, U b) -> decltype(a * b) {
    return a * b;
}
```

C++14 trailing return type is optional when the body has `return` statements the compiler can analyse. C++17 `if constexpr` helps inside templates.

## 8. Template argument deduction rules (basics)

When you call `func(args...)`:
1. The compiler tries to deduce `T` from the arguments.
2. All occurrences of `T` in the signature must match the **same** deduced type (unless separate template parameters).
3. `{42}` may deduce `std::initializer_list<int>` in some contexts — watch for surprises.

```cpp
template<typename T>
void foo(T a, T b);   // both args must be same T

foo(1, 2);      // OK: T = int
// foo(1, 2.0); // ERROR: T deduced as int AND double
```

Pass-by-reference can preserve const and avoid copies:

```cpp
template<typename T>
void inspect(const T& x) { /* ... */ }
```

## 9. Non-type template parameters

Templates can take **values**, not just types:

```cpp
template<typename T, int N>
class FixedArray {
    T data[N];
public:
    int size() const { return N; }
};

FixedArray<int, 10> arr;
```

Non-type parameters must be compile-time constants (`constexpr`, enum values, pointer to function with linkage, etc.).

## 10. Putting it together — a generic utility

Modern C++ combines templates with `auto`:

```cpp
template<typename Container>
void print_all(const Container& c) {
    for (const auto& elem : c) {
        std::cout << elem << ' ';
    }
    std::cout << '\n';
}
```

This works with `std::vector<int>`, `std::list<std::string>`, or any type with `begin()`/`end()` — no inheritance required.

---

## What you should be able to do after Day 08

- Write a function template and a class template.
- Explain when to use `auto`, `const auto&`, and `decltype`.
- Describe what template specialization does and when you'd reach for it.
- Predict deduced types for simple `auto` declarations.

Now move to `examples/` and run each program. Then attempt `questions.md`.
