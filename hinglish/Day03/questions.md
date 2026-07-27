# Day 03 — 5 Tricky Sawaal

> Code chalaye **bina** aur `answers.md` me jhaanke bina try karo. Apna guess kaagaz par / comment me likho, *phir* compile karke check karo.

---

### Q1. Reference vs value

```cpp
#include <iostream>
void foo(int x)  { x = 10; }
void bar(int& x) { x = 10; }
int main() {
    int n = 1;
    foo(n);
    std::cout << n << ' ';
    bar(n);
    std::cout << n << '\n';
    return 0;
}
```

Kya print hota hai?

---

### Q2. Default argument ka jaal

```cpp
#include <iostream>
void f(int a, int b = 2) { std::cout << a + b << '\n'; }
void f(int a)            { std::cout << a << '\n'; }
int main() {
    f(5);
    return 0;
}
```

Kya ye compile hota hai? Agar haan to kya print hota hai? Agar nahi to kyun?

---

### Q3. Overload resolution

```cpp
#include <iostream>
void print(int x)    { std::cout << "int " << x << '\n'; }
void print(double x) { std::cout << "double " << x << '\n'; }
int main() {
    print(5);
    print(5.0);
    print('5');
    return 0;
}
```

Teeno lines me kya print hota hai?

---

### Q4. Recursive paheli

```cpp
#include <iostream>
int mystery(int n) {
    if (n <= 0) return 0;
    return n + mystery(n - 2);
}
int main() {
    std::cout << mystery(7) << '\n';
    return 0;
}
```

`mystery(7)` kya return karta hai? Calls kaagaz par trace karo.

---

### Q5. Local ka reference return karna

```cpp
#include <iostream>
int& bad() {
    int x = 42;
    return x;
}
int main() {
    int& r = bad();
    std::cout << r << '\n';
    return 0;
}
```

Kya ye compile hota hai? Runtime par kya ho sakta hai? `bad()` ko iski jagah kya return karna chahiye?

---

Jab paanchon ka jawab apne shabdon me de do, tab `answers.md` kholo.
