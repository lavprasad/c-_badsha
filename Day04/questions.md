# Day 04 — 5 Tricky Questions

> Try **without** running the code or peeking at `answers.md`. Write your guess on paper / in a comment, *then* compile and check.

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

What two numbers print on a typical 64-bit system (where `int` is 4 bytes and pointers are 8 bytes)?

---

### Q2. C-string length

```cpp
#include <iostream>
#include <cstring>
int main() {
    char buf[6] = "Hello";
    std::cout << strlen(buf) << '\n';
    return 0;
}
```

What prints? How many bytes does `buf` occupy in memory?

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

After `r = b`, does `r` refer to `b` or still to `a`? What prints?

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

What two lines print?

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

What prints? What rule fills the remaining elements?

---

When you've answered all 5 in your own words, open `answers.md`.
