# Day 12 -- 5 Tricky Sawaal

> Theme: **File I/O with fstream**
> `answers.md` me **jhaanke bina** try karo. Pehle apna guess likho, phir compile/check karo.

---

### Q1. Predict / samjhao

Sambandhit: `Opening files with ifstream/ofstream`

```cpp
#include <iostream>
int main() {
    // Sketch: "Opening files with ifstream/ofstream" ke rules ignore karo to kya galat ho sakta hai?
    std::cout << "think about lifetimes, ownership, or complexity\n";
    return 0;
}
```

`Opening files with ifstream/ofstream` ke aas-paas sabse aam bug kaunsa hai, aur aap use kaise rokoge?

---

### Q2. Design choice

Sambandhit: `Writing formatted output`

Pehle ke dinon ke kisi simple alternative ke bajaye aap `Writing formatted output` kab chunoge? Ek thos scenario aur ek ulta scenario batao.

---

### Q3. Compile ya runtime?

Sambandhit: `Checking fail/eof/bad bits`

`Checking fail/eof/bad bits` ki galti se **compile error**, **linker error**, **runtime bug** ya **undefined behaviour** — kaunsa zyada mumkin hai? Ek example ke saath justify karo.

---

### Q4. Complexity / cost

Sambandhit: `Seeking with seekg/seekp/tellg`

`Seeking with seekg/seekp/tellg` ko seedha-saada use karne ka typical time/space cost kya hai, aur ek optimisation ya behtar API choice kya hogi?

---

### Q5. Teen concepts jodo

`Opening files with ifstream/ofstream`, `Checking fail/eof/bad bits` aur `Working with paths as strings` ko 15-30 line ke program me jodo jo kisi asli tool me dikh sakta ho (CLI, parser, container wrapper, ya concurrency sketch). Kaunse invariants sach rehne chahiye?

---

Jab paanchon ka jawab apne shabdon me de do, tab `answers.md` kholo.
