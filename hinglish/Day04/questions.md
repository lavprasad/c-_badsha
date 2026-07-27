# Day 04 — 5 Tricky Sawaal

> Code chalaye **bina** aur `answers.md` me jhaanke bina try karo. Apna guess kaagaz par / comment me likho, *phir* compile karke check karo.

---

### Q1. sizeof array vs pointer

```cpp
#include <iostream>
void f(int arr[10]) {
    std::cout << sizeof(arr) << '\n';
}
int main() {
    int data[10];
    std::cout << sizeof(data) << '\n';
    f(data);
    return 0;
}
```

Ek typical 64-bit system par (jahan `int` 4 bytes aur pointers 8 bytes hain) kaunse do numbers print honge?

---

### Q2. C-string ki length

```cpp
#include <iostream>
#include <cstring>
int main() {
    char buf[6] = "Hello";
    std::cout << strlen(buf) << '\n';
    return 0;
}
```

Kya print hota hai? `buf` memory me kitne bytes ghera hai?

---

### Q3. Reference rebinding

```cpp
#include <iostream>
int main() {
    int a = 1, b = 2;
    int& r = a;
    r = b;
    std::cout << "a=" << a << " b=" << b << " r=" << r << '\n';
    return 0;
}
```

`r = b` ke baad `r` `b` ko point karta hai ya ab bhi `a` ko? Kya print hota hai?

---

### Q4. String indexing

```cpp
#include <iostream>
#include <string>
int main() {
    std::string s = "C++";
    s[1] = 'x';
    std::cout << s << '\n';
    std::cout << s.size() << '\n';
    return 0;
}
```

Kaunsi do lines print hongi?

---

### Q5. Array initialisation

```cpp
#include <iostream>
int main() {
    int arr[5] = {1, 2, 3};
    for (int i = 0; i < 5; ++i)
        std::cout << arr[i] << ' ';
    std::cout << '\n';
    return 0;
}
```

Kya print hota hai? Bache hue elements kaunsa niyam bharta hai?

---

Jab paanchon ka jawab apne shabdon me de do, tab `answers.md` kholo.
