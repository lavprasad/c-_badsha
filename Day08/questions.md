# Day 08 — 5 Tricky Questions

> Try **without** running the code or peeking at `answers.md`. Write your guess on paper / in a comment, *then* compile and check.

---

### Q1. Deduced type of `auto`

```cpp
#include <iostream>

int main() {
    const int x = 10;
    auto a = x;
    const auto& b = x;
    auto& c = x;

    ++a;
    // ++b;   // legal?
    ++c;

    std::cout << x << ' ' << a << ' ' << c << '\n';
    return 0;
}
```

What are the types of `a`, `b`, and `c`? Does `++a` affect `x`? Does `++c` affect `x`?

---

### Q2. Template deduction failure

```cpp
#include <iostream>

template<typename T>
T add(T a, T b) {
    return a + b;
}

int main() {
    std::cout << add(1, 2) << '\n';
    // std::cout << add(1, 2.0) << '\n';   // uncomment mentally
    return 0;
}
```

Why does `add(1, 2)` work but `add(1, 2.0)` would fail? Give two different fixes.

---

### Q3. `decltype` surprise

```cpp
#include <iostream>
#include <type_traits>

int main() {
    int x = 5;
    decltype(x) a = 1;
    decltype((x)) b = x;

    static_assert(std::is_same_v<decltype(a), int>);
    static_assert(std::is_same_v<decltype(b), int&>);

    b = 99;
    std::cout << x << '\n';
    return 0;
}
```

What does this print? Why is `decltype((x))` different from `decltype(x)`?

---

### Q4. Specialization vs overload

```cpp
#include <iostream>

template<typename T>
void show(T v) {
    std::cout << "generic: " << v << '\n';
}

template<>
void show<bool>(bool v) {
    std::cout << "specialized: " << (v ? "true" : "false") << '\n';
}

int main() {
    show(42);
    show(true);
    show(3.14);
    return 0;
}
```

Which calls use the primary template and which use the specialization? What would `show<int>(true)` call?

---

### Q5. Class template default

```cpp
#include <iostream>

template<typename T, typename U = T>
class Pair {
public:
    T first;
    U second;
};

int main() {
    Pair<int> p1;
    p1.first = 1;
    p1.second = 2;

    Pair<int, double> p2;
    p2.first = 3;
    p2.second = 4.5;

    std::cout << p1.first << ' ' << p1.second << ' '
              << p2.first << ' ' << p2.second << '\n';
    return 0;
}
```

What is the type of `p1.second`? Can you write `Pair<int, int>` as just `Pair<int>`? Why?

---

When you've answered all 5 in your own words, open `answers.md`.
