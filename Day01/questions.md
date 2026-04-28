# Day 01 — 5 Tricky Questions

> Try **without** running the code or peeking at `answers.md`. Write your guess on paper / in a comment, *then* compile and check.

---

### Q1. Predict the output

```cpp
#include <iostream>
int main() {
    int a = 5;
    int b = 2;
    double c = a / b + 0.0;
    std::cout << c << '\n';
    return 0;
}
```

What does this print and **why** isn't it `2.5`?

---

### Q2. Macro mayhem

```cpp
#include <iostream>
#define SQR(x) x * x

int main() {
    int r = SQR(2 + 3);
    std::cout << r << '\n';
    return 0;
}
```

What does this print? What value did the author *probably* intend, and how would you fix the macro? (Bonus: name a C++ feature that removes the need for this macro entirely.)

---

### Q3. The infinite loop trap

```cpp
#include <iostream>
int main() {
    for (unsigned int i = 5; i >= 0; --i) {
        std::cout << i << ' ';
        if (i == 0) break;   // intentionally NOT here -- remove this line in your head
    }
}
```

Now mentally remove the `if (i == 0) break;` line. What happens and why? What single keyword change to the type fixes it?

---

### Q4. Pre vs post increment in one expression

```cpp
#include <iostream>
int main() {
    int i = 1;
    int x = i++ + ++i;
    std::cout << "x = " << x << ", i = " << i << '\n';
    return 0;
}
```

Pre-C++17, this was **undefined behaviour**. From C++17 onwards the order is well-defined for some operators but **not** `+`. So:

(a) Is the result deterministic in C++17?
(b) What value does the author *probably* believe `x` has?
(c) What's the safe rewrite?

---

### Q5. Compiler error or linker error?

You write two files:

`math.cpp`
```cpp
int add(int a, int b) { return a + b; }
```

`main.cpp`
```cpp
#include <iostream>
int subtract(int a, int b);
int main() {
    std::cout << subtract(10, 3) << '\n';
    return 0;
}
```

You compile with: `g++ main.cpp math.cpp -o app`

Which error do you get and **at which stage of the pipeline** — compiler or linker? What if instead `main.cpp` called `add(10, 3)` but you forgot to put `math.cpp` on the command line?

---

When you've answered all 5 in your own words, open `answers.md`.
