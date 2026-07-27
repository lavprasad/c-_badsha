# Day 08 — 5 Tricky Sawaal

> Code chalaye **bina** aur `answers.md` me jhaanke bina try karo. Apna guess kaagaz par / comment me likho, *phir* compile karke check karo.

---

### Q1. `auto` ka deduced type

```cpp
#include <iostream>

int main() {
    const int x = 10;
    auto a = x;
    const auto& b = x;
    auto& c = x;

    ++a;
    // ++b;   // legal hai?
    ++c;

    std::cout << x << ' ' << a << ' ' << c << '\n';
    return 0;
}
```

`a`, `b` aur `c` ke types kya hain? Kya `++a` `x` par asar karta hai? Kya `++c` `x` par asar karta hai?

---

### Q2. Template deduction fail

```cpp
#include <iostream>

template<typename T>
T add(T a, T b) {
    return a + b;
}

int main() {
    std::cout << add(1, 2) << '\n';
    // std::cout << add(1, 2.0) << '\n';   // dimaag me uncomment karo
    return 0;
}
```

`add(1, 2)` kyun chalta hai par `add(1, 2.0)` fail hota? Do alag fixes batao.

---

### Q3. `decltype` ka jhatka

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

Ye kya print karta hai? `decltype((x))` `decltype(x)` se alag kyun hai?

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

Kaunsi calls primary template use karti hain aur kaunsi specialization? `show<int>(true)` kya call karega?

---

### Q5. Class template ka default

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

`p1.second` ka type kya hai? Kya aap `Pair<int, int>` ko sirf `Pair<int>` likh sakte ho? Kyun?

---

Jab paanchon ka jawab apne shabdon me de do, tab `answers.md` kholo.
