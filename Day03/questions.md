# Day 03 — 5 Tricky Questions

> Try **without** running the code or peeking at `answers.md`. Write your guess on paper / in a comment, *then* compile and check.

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

What prints?

---

### Q2. Default argument trap

```cpp
#include <iostream>
void f(int a, int b = 2) { std::cout << a + b << '\n'; }
void f(int a)            { std::cout << a << '\n'; }
int main() {
    f(5);
    return 0;
}
```

Does this compile? If yes, what prints? If no, why?

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

What three lines print?

---

### Q4. Recursive mystery

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

What does `mystery(7)` return? Trace the calls on paper.

---

### Q5. Returning a reference to local

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

Does this compile? What might happen at runtime? What should `bad()` return instead?

---

When you've answered all 5 in your own words, open `answers.md`.
