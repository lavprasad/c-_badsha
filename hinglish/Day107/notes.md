# Day 107 -- Integer pitfalls advanced

Aaj ka goal: **Integer pitfalls advanced** ko aasan Hinglish me samajhna, har idea ka chhota code sample dekhna, phir `examples/` me practice karna.

Is din ko padhne ka tarika:
1. Har concept ka **Aasan Bhasha** section padho.
2. Code sample par nazar daalo -- pehle predict karo ki output kya aayega.
3. `examples/` me us concept ki file chalao.
4. Uske baad hi `questions.md` kholo.

| # | Concept |
|--:|---------|
| 1 | Promotion rules |
| 2 | Usual arithmetic conversions |
| 3 | Signed/unsigned mix |
| 4 | Narrowing |
| 5 | Checked arithmetic idea |
| 6 | size_t in loops |
| 7 | ptrdiff_t |
| 8 | Integer division surprises |
| 9 | Bit-width choices |
| 10 | Safe abs for INT_MIN |

---

## 1. Promotion rules

### Aasan Bhasha

Aaj ka idea — **Promotion rules** — Integer pitfalls advanced ke bade theme ke andar aata hai. Ise ek tool ki tarah padho: ye kaam kya karta hai, kaunse rules enforce karta hai, aur un rules ko ignore karne par kya tootta hai?

### Chhota code

```cpp
// Explore: Promotion rules
#include <iostream>
int main() {
  std::cout << "practice: Promotion rules\n";
  return 0;
}
```

- **Yaad rakho:** `Promotion rules` use karne wala code likhne se pehle ek invariant bolo.
- **Aam galti:** `Promotion rules` ko copy-paste se use karna bina jaane ki wo kya own karta hai ya kab valid hai.

Practice: `examples/01_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 2. Usual arithmetic conversions

### Aasan Bhasha

Aaj ka idea — **Usual arithmetic conversions** — Integer pitfalls advanced ke bade theme ke andar aata hai. Ise ek tool ki tarah padho: ye kaam kya karta hai, kaunse rules enforce karta hai, aur un rules ko ignore karne par kya tootta hai?

### Chhota code

```cpp
// Explore: Usual arithmetic conversions
#include <iostream>
int main() {
  std::cout << "practice: Usual arithmetic conversions\n";
  return 0;
}
```

- **Yaad rakho:** `Usual arithmetic conversions` use karne wala code likhne se pehle ek invariant bolo.
- **Aam galti:** `Usual arithmetic conversions` ko copy-paste se use karna bina jaane ki wo kya own karta hai ya kab valid hai.

Practice: `examples/02_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 3. Signed/unsigned mix

### Aasan Bhasha

Aaj ka idea — **Signed/unsigned mix** — Integer pitfalls advanced ke bade theme ke andar aata hai. Ise ek tool ki tarah padho: ye kaam kya karta hai, kaunse rules enforce karta hai, aur un rules ko ignore karne par kya tootta hai?

### Chhota code

```cpp
// Explore: Signed/unsigned mix
#include <iostream>
int main() {
  std::cout << "practice: Signed/unsigned mix\n";
  return 0;
}
```

- **Yaad rakho:** `Signed/unsigned mix` use karne wala code likhne se pehle ek invariant bolo.
- **Aam galti:** `Signed/unsigned mix` ko copy-paste se use karna bina jaane ki wo kya own karta hai ya kab valid hai.

Practice: `examples/03_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 4. Narrowing

### Aasan Bhasha

Aaj ka idea — **Narrowing** — Integer pitfalls advanced ke bade theme ke andar aata hai. Ise ek tool ki tarah padho: ye kaam kya karta hai, kaunse rules enforce karta hai, aur un rules ko ignore karne par kya tootta hai?

### Chhota code

```cpp
// Explore: Narrowing
#include <iostream>
int main() {
  std::cout << "practice: Narrowing\n";
  return 0;
}
```

- **Yaad rakho:** `Narrowing` use karne wala code likhne se pehle ek invariant bolo.
- **Aam galti:** `Narrowing` ko copy-paste se use karna bina jaane ki wo kya own karta hai ya kab valid hai.

Practice: `examples/04_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 5. Checked arithmetic idea

### Aasan Bhasha

Aaj ka idea — **Checked arithmetic idea** — Integer pitfalls advanced ke bade theme ke andar aata hai. Ise ek tool ki tarah padho: ye kaam kya karta hai, kaunse rules enforce karta hai, aur un rules ko ignore karne par kya tootta hai?

### Chhota code

```cpp
// Explore: Checked arithmetic idea
#include <iostream>
int main() {
  std::cout << "practice: Checked arithmetic idea\n";
  return 0;
}
```

- **Yaad rakho:** `Checked arithmetic idea` use karne wala code likhne se pehle ek invariant bolo.
- **Aam galti:** `Checked arithmetic idea` ko copy-paste se use karna bina jaane ki wo kya own karta hai ya kab valid hai.

Practice: `examples/05_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 6. size_t in loops

### Aasan Bhasha

Aaj ka idea — **size_t in loops** — Integer pitfalls advanced ke bade theme ke andar aata hai. Ise ek tool ki tarah padho: ye kaam kya karta hai, kaunse rules enforce karta hai, aur un rules ko ignore karne par kya tootta hai?

### Chhota code

```cpp
// Explore: size_t in loops
#include <iostream>
int main() {
  std::cout << "practice: size_t in loops\n";
  return 0;
}
```

- **Yaad rakho:** `size_t in loops` use karne wala code likhne se pehle ek invariant bolo.
- **Aam galti:** `size_t in loops` ko copy-paste se use karna bina jaane ki wo kya own karta hai ya kab valid hai.

Practice: `examples/06_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 7. ptrdiff_t

### Aasan Bhasha

Aaj ka idea — **ptrdiff_t** — Integer pitfalls advanced ke bade theme ke andar aata hai. Ise ek tool ki tarah padho: ye kaam kya karta hai, kaunse rules enforce karta hai, aur un rules ko ignore karne par kya tootta hai?

### Chhota code

```cpp
// Explore: ptrdiff_t
#include <iostream>
int main() {
  std::cout << "practice: ptrdiff_t\n";
  return 0;
}
```

- **Yaad rakho:** `ptrdiff_t` use karne wala code likhne se pehle ek invariant bolo.
- **Aam galti:** `ptrdiff_t` ko copy-paste se use karna bina jaane ki wo kya own karta hai ya kab valid hai.

Practice: `examples/07_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 8. Integer division surprises

### Aasan Bhasha

Aaj ka idea — **Integer division surprises** — Integer pitfalls advanced ke bade theme ke andar aata hai. Ise ek tool ki tarah padho: ye kaam kya karta hai, kaunse rules enforce karta hai, aur un rules ko ignore karne par kya tootta hai?

### Chhota code

```cpp
// Explore: Integer division surprises
#include <iostream>
int main() {
  std::cout << "practice: Integer division surprises\n";
  return 0;
}
```

- **Yaad rakho:** `Integer division surprises` use karne wala code likhne se pehle ek invariant bolo.
- **Aam galti:** `Integer division surprises` ko copy-paste se use karna bina jaane ki wo kya own karta hai ya kab valid hai.

Practice: `examples/08_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 9. Bit-width choices

### Aasan Bhasha

Bit tricks ek integer ke andar alag-alag flags set, clear aur test karte hain. Shift-heavy code me unsigned types prefer karo. `std::bitset` fixed-width bit sets ko padhne layak banata hai.

### Chhota code

```cpp
unsigned flags = 0;
flags |= (1u << 3);           // set bit 3
bool on = flags & (1u << 3);  // test
flags &= ~(1u << 3);          // clear
```

- **Yaad rakho:** Signed ints par sign bit tak ya uske aage shift karna UB ho sakta hai.
- **Aam galti:** Bitmasks ke liye signed `int` use karna aur sign bit me shift kar dena.

Practice: `examples/09_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 10. Safe abs for INT_MIN

### Aasan Bhasha

Aaj ka idea — **Safe abs for INT_MIN** — Integer pitfalls advanced ke bade theme ke andar aata hai. Ise ek tool ki tarah padho: ye kaam kya karta hai, kaunse rules enforce karta hai, aur un rules ko ignore karne par kya tootta hai?

### Chhota code

```cpp
// Explore: Safe abs for INT_MIN
#include <iostream>
int main() {
  std::cout << "practice: Safe abs for INT_MIN\n";
  return 0;
}
```

- **Yaad rakho:** `Safe abs for INT_MIN` use karne wala code likhne se pehle ek invariant bolo.
- **Aam galti:** `Safe abs for INT_MIN` ko copy-paste se use karna bina jaane ki wo kya own karta hai ya kab valid hai.

Practice: `examples/10_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

---

## Day 107 ke baad aapko ye aana chahiye

- `Integer pitfalls advanced` ko bina notes dekhe kisi dost ko samjha sakna.
- Saare 10 examples `-std=c++17 -Wall -Wextra` ke saath compile aur run karna (naye flags sirf tab jab din ko C++20+ chahiye).
- `answers.md` dekhne se pehle `questions.md` ke 5 sawaal answer karna.
- Ek chhota extra program likhna jo aaj ke kam se kam 3 concepts jodta ho.

Ya is din ko **Badsha hub** me kholo (`python3 hub/server.py`) aur Learn / Practice / Quiz tabs use karo.
