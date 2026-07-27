# Day 101 -- Optimization principles

Aaj ka goal: **Optimization principles** ko aasan Hinglish me samajhna, har idea ka chhota code sample dekhna, phir `examples/` me practice karna.

Is din ko padhne ka tarika:
1. Har concept ka **Aasan Bhasha** section padho.
2. Code sample par nazar daalo -- pehle predict karo ki output kya aayega.
3. `examples/` me us concept ki file chalao.
4. Uske baad hi `questions.md` kholo.

| # | Concept |
|--:|---------|
| 1 | Asymptotics first |
| 2 | Constants matter |
| 3 | Allocations hurt |
| 4 | Branch prediction |
| 5 | Inlining |
| 6 | Data layout |
| 7 | Algorithm choice |
| 8 | Readability tradeoff |
| 9 | ponytail ceilings |
| 10 | Optimize a hot loop |

---

## 1. Asymptotics first

### Aasan Bhasha

Aaj ka idea — **Asymptotics first** — Optimization principles ke bade theme ke andar aata hai. Ise ek tool ki tarah padho: ye kaam kya karta hai, kaunse rules enforce karta hai, aur un rules ko ignore karne par kya tootta hai?

### Chhota code

```cpp
// Explore: Asymptotics first
#include <iostream>
int main() {
  std::cout << "practice: Asymptotics first\n";
  return 0;
}
```

- **Yaad rakho:** `Asymptotics first` use karne wala code likhne se pehle ek invariant bolo.
- **Aam galti:** `Asymptotics first` ko copy-paste se use karna bina jaane ki wo kya own karta hai ya kab valid hai.

Practice: `examples/01_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 2. Constants matter

### Aasan Bhasha

Aaj ka idea — **Constants matter** — Optimization principles ke bade theme ke andar aata hai. Ise ek tool ki tarah padho: ye kaam kya karta hai, kaunse rules enforce karta hai, aur un rules ko ignore karne par kya tootta hai?

### Chhota code

```cpp
// Explore: Constants matter
#include <iostream>
int main() {
  std::cout << "practice: Constants matter\n";
  return 0;
}
```

- **Yaad rakho:** `Constants matter` use karne wala code likhne se pehle ek invariant bolo.
- **Aam galti:** `Constants matter` ko copy-paste se use karna bina jaane ki wo kya own karta hai ya kab valid hai.

Practice: `examples/02_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 3. Allocations hurt

### Aasan Bhasha

Aaj ka idea — **Allocations hurt** — Optimization principles ke bade theme ke andar aata hai. Ise ek tool ki tarah padho: ye kaam kya karta hai, kaunse rules enforce karta hai, aur un rules ko ignore karne par kya tootta hai?

### Chhota code

```cpp
// Explore: Allocations hurt
#include <iostream>
int main() {
  std::cout << "practice: Allocations hurt\n";
  return 0;
}
```

- **Yaad rakho:** `Allocations hurt` use karne wala code likhne se pehle ek invariant bolo.
- **Aam galti:** `Allocations hurt` ko copy-paste se use karna bina jaane ki wo kya own karta hai ya kab valid hai.

Practice: `examples/03_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 4. Branch prediction

### Aasan Bhasha

Aaj ka idea — **Branch prediction** — Optimization principles ke bade theme ke andar aata hai. Ise ek tool ki tarah padho: ye kaam kya karta hai, kaunse rules enforce karta hai, aur un rules ko ignore karne par kya tootta hai?

### Chhota code

```cpp
// Explore: Branch prediction
#include <iostream>
int main() {
  std::cout << "practice: Branch prediction\n";
  return 0;
}
```

- **Yaad rakho:** `Branch prediction` use karne wala code likhne se pehle ek invariant bolo.
- **Aam galti:** `Branch prediction` ko copy-paste se use karna bina jaane ki wo kya own karta hai ya kab valid hai.

Practice: `examples/04_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 5. Inlining

### Aasan Bhasha

Aaj ka idea — **Inlining** — Optimization principles ke bade theme ke andar aata hai. Ise ek tool ki tarah padho: ye kaam kya karta hai, kaunse rules enforce karta hai, aur un rules ko ignore karne par kya tootta hai?

### Chhota code

```cpp
// Explore: Inlining
#include <iostream>
int main() {
  std::cout << "practice: Inlining\n";
  return 0;
}
```

- **Yaad rakho:** `Inlining` use karne wala code likhne se pehle ek invariant bolo.
- **Aam galti:** `Inlining` ko copy-paste se use karna bina jaane ki wo kya own karta hai ya kab valid hai.

Practice: `examples/05_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 6. Data layout

### Aasan Bhasha

Aaj ka idea — **Data layout** — Optimization principles ke bade theme ke andar aata hai. Ise ek tool ki tarah padho: ye kaam kya karta hai, kaunse rules enforce karta hai, aur un rules ko ignore karne par kya tootta hai?

### Chhota code

```cpp
// Explore: Data layout
#include <iostream>
int main() {
  std::cout << "practice: Data layout\n";
  return 0;
}
```

- **Yaad rakho:** `Data layout` use karne wala code likhne se pehle ek invariant bolo.
- **Aam galti:** `Data layout` ko copy-paste se use karna bina jaane ki wo kya own karta hai ya kab valid hai.

Practice: `examples/06_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 7. Algorithm choice

### Aasan Bhasha

STL algorithms iterator ranges ke upar verbs hain. Jab intent match kare (`find`, `sort`, `transform`) to haath se likhe loops se inhe upar rakho. Erase-remove idiom sequence container se value/predicate se elements hatata hai.

### Chhota code

```cpp
v.erase(std::remove(v.begin(), v.end(), 0), v.end());
std::sort(v.begin(), v.end());
```

- **Yaad rakho:** `remove` sirf elements khiskata hai — `erase` phir bhi karna padta hai.
- **Aam galti:** `std::remove` call karna aur container ka `erase` bhool jaana.

Practice: `examples/07_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 8. Readability tradeoff

### Aasan Bhasha

Aaj ka idea — **Readability tradeoff** — Optimization principles ke bade theme ke andar aata hai. Ise ek tool ki tarah padho: ye kaam kya karta hai, kaunse rules enforce karta hai, aur un rules ko ignore karne par kya tootta hai?

### Chhota code

```cpp
// Explore: Readability tradeoff
#include <iostream>
int main() {
  std::cout << "practice: Readability tradeoff\n";
  return 0;
}
```

- **Yaad rakho:** `Readability tradeoff` use karne wala code likhne se pehle ek invariant bolo.
- **Aam galti:** `Readability tradeoff` ko copy-paste se use karna bina jaane ki wo kya own karta hai ya kab valid hai.

Practice: `examples/08_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 9. ponytail ceilings

### Aasan Bhasha

Aaj ka idea — **ponytail ceilings** — Optimization principles ke bade theme ke andar aata hai. Ise ek tool ki tarah padho: ye kaam kya karta hai, kaunse rules enforce karta hai, aur un rules ko ignore karne par kya tootta hai?

### Chhota code

```cpp
// Explore: ponytail ceilings
#include <iostream>
int main() {
  std::cout << "practice: ponytail ceilings\n";
  return 0;
}
```

- **Yaad rakho:** `ponytail ceilings` use karne wala code likhne se pehle ek invariant bolo.
- **Aam galti:** `ponytail ceilings` ko copy-paste se use karna bina jaane ki wo kya own karta hai ya kab valid hai.

Practice: `examples/09_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 10. Optimize a hot loop

### Aasan Bhasha

Aaj ka idea — **Optimize a hot loop** — Optimization principles ke bade theme ke andar aata hai. Ise ek tool ki tarah padho: ye kaam kya karta hai, kaunse rules enforce karta hai, aur un rules ko ignore karne par kya tootta hai?

### Chhota code

```cpp
// Explore: Optimize a hot loop
#include <iostream>
int main() {
  std::cout << "practice: Optimize a hot loop\n";
  return 0;
}
```

- **Yaad rakho:** `Optimize a hot loop` use karne wala code likhne se pehle ek invariant bolo.
- **Aam galti:** `Optimize a hot loop` ko copy-paste se use karna bina jaane ki wo kya own karta hai ya kab valid hai.

Practice: `examples/10_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

---

## Day 101 ke baad aapko ye aana chahiye

- `Optimization principles` ko bina notes dekhe kisi dost ko samjha sakna.
- Saare 10 examples `-std=c++17 -Wall -Wextra` ke saath compile aur run karna (naye flags sirf tab jab din ko C++20+ chahiye).
- `answers.md` dekhne se pehle `questions.md` ke 5 sawaal answer karna.
- Ek chhota extra program likhna jo aaj ke kam se kam 3 concepts jodta ho.

Ya is din ko **Badsha hub** me kholo (`python3 hub/server.py`) aur Learn / Practice / Quiz tabs use karo.
