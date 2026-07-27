# Day 27 -- 5 Tricky Sawaal

> Theme: **Time & chrono basics**
> `answers.md` me **jhaanke bina** try karo. Pehle apna guess likho, phir compile/check karo.

---

### Q1. Predict / samjhao

Sambandhit: `std::chrono clocks`

```cpp
#include <iostream>
int main() {
    // Sketch: "std::chrono clocks" ke rules ignore karo to kya galat ho sakta hai?
    std::cout << "think about lifetimes, ownership, or complexity\n";
    return 0;
}
```

`std::chrono clocks` ke aas-paas sabse aam bug kaunsa hai, aur aap use kaise rokoge?

---

### Q2. Design choice

Sambandhit: `Measuring elapsed time`

Pehle ke dinon ke kisi simple alternative ke bajaye aap `Measuring elapsed time` kab chunoge? Ek thos scenario aur ek ulta scenario batao.

---

### Q3. Compile ya runtime?

Sambandhit: `Casting durations`

`Casting durations` ki galti se **compile error**, **linker error**, **runtime bug** ya **undefined behaviour** — kaunsa zyada mumkin hai? Ek example ke saath justify karo.

---

### Q4. Complexity / cost

Sambandhit: `Formatting time (C++17 limits)`

`Formatting time (C++17 limits)` ko seedha-saada use karne ka typical time/space cost kya hai, aur ek optimisation ya behtar API choice kya hogi?

---

### Q5. Teen concepts jodo

`std::chrono clocks`, `Casting durations` aur `Avoiding clock skew` ko 15-30 line ke program me jodo jo kisi asli tool me dikh sakta ho (CLI, parser, container wrapper, ya concurrency sketch). Kaunse invariants sach rehne chahiye?

---

Jab paanchon ka jawab apne shabdon me de do, tab `answers.md` kholo.
