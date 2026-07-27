# Day 102 -- SIMD intuition

Aaj ka goal: **SIMD intuition** ko aasan Hinglish me samajhna, har idea ka chhota code sample dekhna, phir `examples/` me practice karna.

Is din ko padhne ka tarika:
1. Har concept ka **Aasan Bhasha** section padho.
2. Code sample par nazar daalo -- pehle predict karo ki output kya aayega.
3. `examples/` me us concept ki file chalao.
4. Uske baad hi `questions.md` kholo.

| # | Concept |
|--:|---------|
| 1 | What SIMD is |
| 2 | Vector registers idea |
| 3 | Auto-vectorization |
| 4 | Alignment |
| 5 | Horizontal vs vertical |
| 6 | When SIMD helps |
| 7 | Portability |
| 8 | Intrinsics caution |
| 9 | Verify correctness first |
| 10 | Sum with compiler help |

---

## 1. What SIMD is

### Aasan Bhasha

Aaj ka idea — **What SIMD is** — SIMD intuition ke bade theme ke andar aata hai. Ise ek tool ki tarah padho: ye kaam kya karta hai, kaunse rules enforce karta hai, aur un rules ko ignore karne par kya tootta hai?

### Chhota code

```cpp
// Explore: What SIMD is
#include <iostream>
int main() {
  std::cout << "practice: What SIMD is\n";
  return 0;
}
```

- **Yaad rakho:** `What SIMD is` use karne wala code likhne se pehle ek invariant bolo.
- **Aam galti:** `What SIMD is` ko copy-paste se use karna bina jaane ki wo kya own karta hai ya kab valid hai.

Practice: `examples/01_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 2. Vector registers idea

### Aasan Bhasha

Aaj ka idea — **Vector registers idea** — SIMD intuition ke bade theme ke andar aata hai. Ise ek tool ki tarah padho: ye kaam kya karta hai, kaunse rules enforce karta hai, aur un rules ko ignore karne par kya tootta hai?

### Chhota code

```cpp
// Explore: Vector registers idea
#include <iostream>
int main() {
  std::cout << "practice: Vector registers idea\n";
  return 0;
}
```

- **Yaad rakho:** `Vector registers idea` use karne wala code likhne se pehle ek invariant bolo.
- **Aam galti:** `Vector registers idea` ko copy-paste se use karna bina jaane ki wo kya own karta hai ya kab valid hai.

Practice: `examples/02_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 3. Auto-vectorization

### Aasan Bhasha

Aaj ka idea — **Auto-vectorization** — SIMD intuition ke bade theme ke andar aata hai. Ise ek tool ki tarah padho: ye kaam kya karta hai, kaunse rules enforce karta hai, aur un rules ko ignore karne par kya tootta hai?

### Chhota code

```cpp
// Explore: Auto-vectorization
#include <iostream>
int main() {
  std::cout << "practice: Auto-vectorization\n";
  return 0;
}
```

- **Yaad rakho:** `Auto-vectorization` use karne wala code likhne se pehle ek invariant bolo.
- **Aam galti:** `Auto-vectorization` ko copy-paste se use karna bina jaane ki wo kya own karta hai ya kab valid hai.

Practice: `examples/03_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 4. Alignment

### Aasan Bhasha

Aaj ka idea — **Alignment** — SIMD intuition ke bade theme ke andar aata hai. Ise ek tool ki tarah padho: ye kaam kya karta hai, kaunse rules enforce karta hai, aur un rules ko ignore karne par kya tootta hai?

### Chhota code

```cpp
// Explore: Alignment
#include <iostream>
int main() {
  std::cout << "practice: Alignment\n";
  return 0;
}
```

- **Yaad rakho:** `Alignment` use karne wala code likhne se pehle ek invariant bolo.
- **Aam galti:** `Alignment` ko copy-paste se use karna bina jaane ki wo kya own karta hai ya kab valid hai.

Practice: `examples/04_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 5. Horizontal vs vertical

### Aasan Bhasha

Aaj ka idea — **Horizontal vs vertical** — SIMD intuition ke bade theme ke andar aata hai. Ise ek tool ki tarah padho: ye kaam kya karta hai, kaunse rules enforce karta hai, aur un rules ko ignore karne par kya tootta hai?

### Chhota code

```cpp
// Explore: Horizontal vs vertical
#include <iostream>
int main() {
  std::cout << "practice: Horizontal vs vertical\n";
  return 0;
}
```

- **Yaad rakho:** `Horizontal vs vertical` use karne wala code likhne se pehle ek invariant bolo.
- **Aam galti:** `Horizontal vs vertical` ko copy-paste se use karna bina jaane ki wo kya own karta hai ya kab valid hai.

Practice: `examples/05_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 6. When SIMD helps

### Aasan Bhasha

Aaj ka idea — **When SIMD helps** — SIMD intuition ke bade theme ke andar aata hai. Ise ek tool ki tarah padho: ye kaam kya karta hai, kaunse rules enforce karta hai, aur un rules ko ignore karne par kya tootta hai?

### Chhota code

```cpp
// Explore: When SIMD helps
#include <iostream>
int main() {
  std::cout << "practice: When SIMD helps\n";
  return 0;
}
```

- **Yaad rakho:** `When SIMD helps` use karne wala code likhne se pehle ek invariant bolo.
- **Aam galti:** `When SIMD helps` ko copy-paste se use karna bina jaane ki wo kya own karta hai ya kab valid hai.

Practice: `examples/06_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 7. Portability

### Aasan Bhasha

Aaj ka idea — **Portability** — SIMD intuition ke bade theme ke andar aata hai. Ise ek tool ki tarah padho: ye kaam kya karta hai, kaunse rules enforce karta hai, aur un rules ko ignore karne par kya tootta hai?

### Chhota code

```cpp
// Explore: Portability
#include <iostream>
int main() {
  std::cout << "practice: Portability\n";
  return 0;
}
```

- **Yaad rakho:** `Portability` use karne wala code likhne se pehle ek invariant bolo.
- **Aam galti:** `Portability` ko copy-paste se use karna bina jaane ki wo kya own karta hai ya kab valid hai.

Practice: `examples/07_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 8. Intrinsics caution

### Aasan Bhasha

Aaj ka idea — **Intrinsics caution** — SIMD intuition ke bade theme ke andar aata hai. Ise ek tool ki tarah padho: ye kaam kya karta hai, kaunse rules enforce karta hai, aur un rules ko ignore karne par kya tootta hai?

### Chhota code

```cpp
// Explore: Intrinsics caution
#include <iostream>
int main() {
  std::cout << "practice: Intrinsics caution\n";
  return 0;
}
```

- **Yaad rakho:** `Intrinsics caution` use karne wala code likhne se pehle ek invariant bolo.
- **Aam galti:** `Intrinsics caution` ko copy-paste se use karna bina jaane ki wo kya own karta hai ya kab valid hai.

Practice: `examples/08_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 9. Verify correctness first

### Aasan Bhasha

Aaj ka idea — **Verify correctness first** — SIMD intuition ke bade theme ke andar aata hai. Ise ek tool ki tarah padho: ye kaam kya karta hai, kaunse rules enforce karta hai, aur un rules ko ignore karne par kya tootta hai?

### Chhota code

```cpp
// Explore: Verify correctness first
#include <iostream>
int main() {
  std::cout << "practice: Verify correctness first\n";
  return 0;
}
```

- **Yaad rakho:** `Verify correctness first` use karne wala code likhne se pehle ek invariant bolo.
- **Aam galti:** `Verify correctness first` ko copy-paste se use karna bina jaane ki wo kya own karta hai ya kab valid hai.

Practice: `examples/09_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 10. Sum with compiler help

### Aasan Bhasha

Aaj ka idea — **Sum with compiler help** — SIMD intuition ke bade theme ke andar aata hai. Ise ek tool ki tarah padho: ye kaam kya karta hai, kaunse rules enforce karta hai, aur un rules ko ignore karne par kya tootta hai?

### Chhota code

```cpp
// Explore: Sum with compiler help
#include <iostream>
int main() {
  std::cout << "practice: Sum with compiler help\n";
  return 0;
}
```

- **Yaad rakho:** `Sum with compiler help` use karne wala code likhne se pehle ek invariant bolo.
- **Aam galti:** `Sum with compiler help` ko copy-paste se use karna bina jaane ki wo kya own karta hai ya kab valid hai.

Practice: `examples/10_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

---

## Day 102 ke baad aapko ye aana chahiye

- `SIMD intuition` ko bina notes dekhe kisi dost ko samjha sakna.
- Saare 10 examples `-std=c++17 -Wall -Wextra` ke saath compile aur run karna (naye flags sirf tab jab din ko C++20+ chahiye).
- `answers.md` dekhne se pehle `questions.md` ke 5 sawaal answer karna.
- Ek chhota extra program likhna jo aaj ke kam se kam 3 concepts jodta ho.

Ya is din ko **Badsha hub** me kholo (`python3 hub/server.py`) aur Learn / Practice / Quiz tabs use karo.
