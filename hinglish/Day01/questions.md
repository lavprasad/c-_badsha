# Day 01 — 5 Tricky Sawaal

> Code chalaye **bina** aur `answers.md` me jhaanke bina try karo. Apna guess kaagaz par / comment me likho, *phir* compile karke check karo.

---

### Q1. Output predict karo

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

Ye kya print karta hai aur **kyun** `2.5` nahi aata?

---

### Q2. Macro ka bawaal

```cpp
#include <iostream>
#define SQR(x) x * x

int main() {
    int r = SQR(2 + 3);
    std::cout << r << '\n';
    return 0;
}
```

Ye kya print karta hai? Likhne wale ne *shayad* kaunsi value chaahi thi, aur aap macro kaise theek karoge? (Bonus: wo C++ feature batao jo is macro ki zaroorat hi khatam kar deta hai.)

---

### Q3. Infinite loop ka jaal

```cpp
#include <iostream>
int main() {
    for (unsigned int i = 5; i >= 0; --i) {
        std::cout << i << ' ';
        if (i == 0) break;   // jaan-boojh kar yahan NAHI hai -- dimaag me is line ko hata do
    }
}
```

Ab dimaag me `if (i == 0) break;` line hata do. Kya hoga aur kyun? Type me sirf ek keyword ka kya badlav ise theek karta hai?

---

### Q4. Ek hi expression me pre vs post increment

```cpp
#include <iostream>
int main() {
    int i = 1;
    int x = i++ + ++i;
    std::cout << "x = " << x << ", i = " << i << '\n';
    return 0;
}
```

C++17 se pehle ye **undefined behaviour** tha. C++17 se kuch operators ke liye order well-defined hai par `+` ke liye **nahi**. To:

(a) Kya C++17 me result deterministic hai?
(b) Likhne wala *shayad* `x` ki kya value maan raha hai?
(c) Safe rewrite kya hai?

---

### Q5. Compiler error ya linker error?

Aap do files likhte ho:

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

Aap compile karte ho: `g++ main.cpp math.cpp -o app`

Kaunsa error milega aur **pipeline ke kaunse stage par** — compiler ya linker? Aur agar `main.cpp` `add(10, 3)` call karta par aap `math.cpp` command line par daalna bhool jaate, tab kya?

---

Jab paanchon ka jawab apne shabdon me de do, tab `answers.md` kholo.
