# Day 05 — 5 Tricky Questions

> Try **without** running the code or peeking at `answers.md`. Write your guess on paper / in a comment, *then* compile and check.

---

### Q1. delete vs delete[]

```cpp
#include <iostream>
int main() {
    int* arr = new int[3]{1, 2, 3};
    delete arr;   // note: delete, NOT delete[]
    return 0;
}
```

What kind of error is this (compile-time, undefined behaviour at runtime, or always safe)? What is the correct deallocator?

---

### Q2. Double delete

```cpp
#include <iostream>
int main() {
    int* p = new int(42);
    delete p;
    delete p;
    return 0;
}
```

What happens at runtime? Is it defined behaviour?

---

### Q3. Pointer arithmetic

```cpp
#include <iostream>
int main() {
    int arr[] = {10, 20, 30};
    int* p = arr;
    std::cout << *(p + 1) << '\n';
    std::cout << p[2] << '\n';
    return 0;
}
```

What two numbers print?

---

### Q4. Stack vs heap lifetime

```cpp
#include <iostream>
int* make() {
    int x = 99;
    return &x;
}
int main() {
    int* p = make();
    std::cout << *p << '\n';
    return 0;
}
```

Does it compile? What might print? Is this safe?

---

### Q5. nullptr comparison

```cpp
#include <iostream>
int main() {
    int* p = nullptr;
    if (p) {
        std::cout << "non-null\n";
    } else {
        std::cout << "null\n";
    }
    int* q = new int(5);
    if (q) {
        std::cout << "allocated\n";
    }
    delete q;
    return 0;
}
```

What two lines print?

---

When you've answered all 5 in your own words, open `answers.md`.
