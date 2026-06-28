# Day 02 — 5 Tricky Questions

> Try **without** running the code or peeking at `answers.md`. Write your guess on paper / in a comment, *then* compile and check.

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

What prints? Which `if` does the `else` belong to?

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

What prints when `n == 2`? What single keyword on each case would change the output?

---

### Q3. The unsigned countdown (again)

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

How many numbers print before the program is killed (or hangs forever)? What is the *last* value of `i` printed?

---

### Q4. continue in a while loop

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

What prints? Does `continue` skip the `++i` on the next iteration?

---

### Q5. Assignment in a condition

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

What prints? Does g++ with `-Wall -Wextra` warn about this? What is the correct comparison operator?

---

When you've answered all 5 in your own words, open `answers.md`.
