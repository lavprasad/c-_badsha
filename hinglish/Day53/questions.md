# Day 53 -- 5 Tricky Sawaal

> Theme: **Virtuals & polymorphism patterns**
> `answers.md` me **jhaanke bina** try karo. Pehle apna guess likho, phir compile/check karo.

---

### Q1. Predict / samjhao

Sambandhit: `Dynamic dispatch costs`

```cpp
#include <iostream>
int main() {
    // Sketch: "Dynamic dispatch costs" ke rules ignore karo to kya galat ho sakta hai?
    std::cout << "think about lifetimes, ownership, or complexity\n";
    return 0;
}
```

`Dynamic dispatch costs` ke aas-paas sabse aam bug kaunsa hai, aur aap use kaise rokoge?

---

### Q2. Design choice

Sambandhit: `Pure virtual with body`

Pehle ke dinon ke kisi simple alternative ke bajaye aap `Pure virtual with body` kab chunoge? Ek thos scenario aur ek ulta scenario batao.

---

### Q3. Compile ya runtime?

Sambandhit: `Virtual assignment pitfalls`

`Virtual assignment pitfalls` ki galti se **compile error**, **linker error**, **runtime bug** ya **undefined behaviour** — kaunsa zyada mumkin hai? Ek example ke saath justify karo.

---

### Q4. Complexity / cost

Sambandhit: `Type erasure vs inheritance`

`Type erasure vs inheritance` ko seedha-saada use karne ka typical time/space cost kya hai, aur ek optimisation ya behtar API choice kya hogi?

---

### Q5. Teen concepts jodo

`Dynamic dispatch costs`, `Virtual assignment pitfalls` aur `Avoiding dynamic_cast spam` ko 15-30 line ke program me jodo jo kisi asli tool me dikh sakta ho (CLI, parser, container wrapper, ya concurrency sketch). Kaunse invariants sach rehne chahiye?

---

Jab paanchon ka jawab apne shabdon me de do, tab `answers.md` kholo.
