# Day 05 — 5 Tricky Sawaal

> Code chalaye **bina** aur `answers.md` me jhaanke bina try karo. Apna guess kaagaz par / comment me likho, *phir* compile karke check karo.

---

### Q1. delete vs delete[]

```cpp
#include <iostream>
int main() {
    int* arr = new int[3]{1, 2, 3};
    delete arr;   // dhyan do: delete, delete[] NAHI
    return 0;
}
```

Ye kaunsi tarah ki galti hai (compile-time, runtime par undefined behaviour, ya hamesha safe)? Sahi deallocator kaunsa hai?

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

Runtime par kya hota hai? Kya ye defined behaviour hai?

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

Kaunse do numbers print honge?

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

Kya ye compile hota hai? Kya print ho sakta hai? Kya ye safe hai?

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

Kaunsi do lines print hongi?

---

Jab paanchon ka jawab apne shabdon me de do, tab `answers.md` kholo.
