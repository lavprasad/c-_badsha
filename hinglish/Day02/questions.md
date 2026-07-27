# Day 02 — 5 Tricky Sawaal

> Code chalaye **bina** aur `answers.md` me jhaanke bina try karo. Apna guess kaagaz par / comment me likho, *phir* compile karke check karo.

---

### Q1. Dangling else

```cpp
#include <iostream>
int main() {
    int x = 5;
    if (x > 0)
        if (x < 3)
            std::cout << "A\n";
    else
        std::cout << "B\n";
    return 0;
}
```

Kya print hota hai? `else` kis `if` ka hai?

---

### Q2. Switch fall-through

```cpp
#include <iostream>
int main() {
    int n = 2;
    switch (n) {
        case 1: std::cout << '1';
        case 2: std::cout << '2';
        case 3: std::cout << '3';
        default: std::cout << 'D';
    }
    std::cout << '\n';
    return 0;
}
```

`n == 2` par kya print hota hai? Har case par kaunsa ek keyword output badal dega?

---

### Q3. Unsigned countdown (phir se)

```cpp
#include <iostream>
int main() {
    for (unsigned int i = 3; i >= 0; --i) {
        std::cout << i << ' ';
    }
    std::cout << "done\n";
    return 0;
}
```

Program marne (ya hamesha latakne) se pehle kitne numbers print hote hain? `i` ki *aakhri* print hui value kya hai?

---

### Q4. while loop me continue

```cpp
#include <iostream>
int main() {
    int i = 0;
    while (i < 5) {
        ++i;
        if (i == 3) continue;
        std::cout << i << ' ';
    }
    std::cout << '\n';
    return 0;
}
```

Kya print hota hai? Kya `continue` agli iteration ka `++i` skip kar deta hai?

---

### Q5. Condition ke andar assignment

```cpp
#include <iostream>
int main() {
    int x = 0;
    if (x = 5) {
        std::cout << "yes\n";
    } else {
        std::cout << "no\n";
    }
    std::cout << "x = " << x << '\n';
    return 0;
}
```

Kya print hota hai? Kya g++ `-Wall -Wextra` ke saath iska warning deta hai? Sahi comparison operator kaunsa hai?

---

Jab paanchon ka jawab apne shabdon me de do, tab `answers.md` kholo.
