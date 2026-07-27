# Day 106 -- Alignment & packing

Aaj ka goal: **Alignment & packing** ko aasan Hinglish me samajhna, har idea ka chhota code sample dekhna, phir `examples/` me practice karna.

Is din ko padhne ka tarika:
1. Har concept ka **Aasan Bhasha** section padho.
2. Code sample par nazar daalo -- pehle predict karo ki output kya aayega.
3. `examples/` me us concept ki file chalao.
4. Uske baad hi `questions.md` kholo.

| # | Concept |
|--:|---------|
| 1 | alignof / alignas |
| 2 | Over-aligned types |
| 3 | Struct packing |
| 4 | Padding visualization |
| 5 | aligned_alloc idea |
| 6 | SIMD alignment |
| 7 | ABI implications |
| 8 | [[no_unique_address]] idea |
| 9 | Portable packing |
| 10 | Packed header struct |

---

## 1. alignof / alignas

### Aasan Bhasha

Aaj ka idea — **alignof / alignas** — Alignment & packing ke bade theme ke andar aata hai. Ise ek tool ki tarah padho: ye kaam kya karta hai, kaunse rules enforce karta hai, aur un rules ko ignore karne par kya tootta hai?

### Chhota code

```cpp
// Explore: alignof / alignas
#include <iostream>
int main() {
  std::cout << "practice: alignof / alignas\n";
  return 0;
}
```

- **Yaad rakho:** `alignof / alignas` use karne wala code likhne se pehle ek invariant bolo.
- **Aam galti:** `alignof / alignas` ko copy-paste se use karna bina jaane ki wo kya own karta hai ya kab valid hai.

Practice: `examples/01_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 2. Over-aligned types

### Aasan Bhasha

Aaj ka idea — **Over-aligned types** — Alignment & packing ke bade theme ke andar aata hai. Ise ek tool ki tarah padho: ye kaam kya karta hai, kaunse rules enforce karta hai, aur un rules ko ignore karne par kya tootta hai?

### Chhota code

```cpp
// Explore: Over-aligned types
#include <iostream>
int main() {
  std::cout << "practice: Over-aligned types\n";
  return 0;
}
```

- **Yaad rakho:** `Over-aligned types` use karne wala code likhne se pehle ek invariant bolo.
- **Aam galti:** `Over-aligned types` ko copy-paste se use karna bina jaane ki wo kya own karta hai ya kab valid hai.

Practice: `examples/02_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 3. Struct packing

### Aasan Bhasha

Class data ko un operations ke saath bundle karti hai jo use valid rakhte hain. Constructors invariants banate hain; destructors resources chhodte hain. `struct` default public hai, `class` default private — bas yahi mukhya farak hai.

### Chhota code

```cpp
class Counter {
  int n_ = 0;
public:
  void inc() { ++n_; }
  int get() const { return n_; }
};
```

- **Yaad rakho:** Invariants matter karte hain to data private rakho; operations expose karo.
- **Aam galti:** Public data fields jo callers ko class invariants todne dete hain.

Practice: `examples/03_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 4. Padding visualization

### Aasan Bhasha

Aaj ka idea — **Padding visualization** — Alignment & packing ke bade theme ke andar aata hai. Ise ek tool ki tarah padho: ye kaam kya karta hai, kaunse rules enforce karta hai, aur un rules ko ignore karne par kya tootta hai?

### Chhota code

```cpp
// Explore: Padding visualization
#include <iostream>
int main() {
  std::cout << "practice: Padding visualization\n";
  return 0;
}
```

- **Yaad rakho:** `Padding visualization` use karne wala code likhne se pehle ek invariant bolo.
- **Aam galti:** `Padding visualization` ko copy-paste se use karna bina jaane ki wo kya own karta hai ya kab valid hai.

Practice: `examples/04_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 5. aligned_alloc idea

### Aasan Bhasha

Aaj ka idea — **aligned_alloc idea** — Alignment & packing ke bade theme ke andar aata hai. Ise ek tool ki tarah padho: ye kaam kya karta hai, kaunse rules enforce karta hai, aur un rules ko ignore karne par kya tootta hai?

### Chhota code

```cpp
// Explore: aligned_alloc idea
#include <iostream>
int main() {
  std::cout << "practice: aligned_alloc idea\n";
  return 0;
}
```

- **Yaad rakho:** `aligned_alloc idea` use karne wala code likhne se pehle ek invariant bolo.
- **Aam galti:** `aligned_alloc idea` ko copy-paste se use karna bina jaane ki wo kya own karta hai ya kab valid hai.

Practice: `examples/05_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 6. SIMD alignment

### Aasan Bhasha

Aaj ka idea — **SIMD alignment** — Alignment & packing ke bade theme ke andar aata hai. Ise ek tool ki tarah padho: ye kaam kya karta hai, kaunse rules enforce karta hai, aur un rules ko ignore karne par kya tootta hai?

### Chhota code

```cpp
// Explore: SIMD alignment
#include <iostream>
int main() {
  std::cout << "practice: SIMD alignment\n";
  return 0;
}
```

- **Yaad rakho:** `SIMD alignment` use karne wala code likhne se pehle ek invariant bolo.
- **Aam galti:** `SIMD alignment` ko copy-paste se use karna bina jaane ki wo kya own karta hai ya kab valid hai.

Practice: `examples/06_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 7. ABI implications

### Aasan Bhasha

Aaj ka idea — **ABI implications** — Alignment & packing ke bade theme ke andar aata hai. Ise ek tool ki tarah padho: ye kaam kya karta hai, kaunse rules enforce karta hai, aur un rules ko ignore karne par kya tootta hai?

### Chhota code

```cpp
// Explore: ABI implications
#include <iostream>
int main() {
  std::cout << "practice: ABI implications\n";
  return 0;
}
```

- **Yaad rakho:** `ABI implications` use karne wala code likhne se pehle ek invariant bolo.
- **Aam galti:** `ABI implications` ko copy-paste se use karna bina jaane ki wo kya own karta hai ya kab valid hai.

Practice: `examples/07_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 8. [[no_unique_address]] idea

### Aasan Bhasha

Aaj ka idea — **[[no_unique_address]] idea** — Alignment & packing ke bade theme ke andar aata hai. Ise ek tool ki tarah padho: ye kaam kya karta hai, kaunse rules enforce karta hai, aur un rules ko ignore karne par kya tootta hai?

### Chhota code

```cpp
// Explore: [[no_unique_address]] idea
#include <iostream>
int main() {
  std::cout << "practice: [[no_unique_address]] idea\n";
  return 0;
}
```

- **Yaad rakho:** `[[no_unique_address]] idea` use karne wala code likhne se pehle ek invariant bolo.
- **Aam galti:** `[[no_unique_address]] idea` ko copy-paste se use karna bina jaane ki wo kya own karta hai ya kab valid hai.

Practice: `examples/08_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 9. Portable packing

### Aasan Bhasha

Aaj ka idea — **Portable packing** — Alignment & packing ke bade theme ke andar aata hai. Ise ek tool ki tarah padho: ye kaam kya karta hai, kaunse rules enforce karta hai, aur un rules ko ignore karne par kya tootta hai?

### Chhota code

```cpp
// Explore: Portable packing
#include <iostream>
int main() {
  std::cout << "practice: Portable packing\n";
  return 0;
}
```

- **Yaad rakho:** `Portable packing` use karne wala code likhne se pehle ek invariant bolo.
- **Aam galti:** `Portable packing` ko copy-paste se use karna bina jaane ki wo kya own karta hai ya kab valid hai.

Practice: `examples/09_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 10. Packed header struct

### Aasan Bhasha

Headers interface declare karte hain; `.cpp` files bodies define karti hain. Include guards ek header ko ek translation unit me do baar paste hone se rokte hain. One Definition Rule kehta hai ki non-inline functions ki poore program me exactly ek definition hoti hai.

### Chhota code

```cpp
#pragma once
struct Widget;           // forward decl — enough for pointers/refs
void use(Widget*);
```

- **Yaad rakho:** Declarations header me, definitions `.cpp` me (templates exception hain).
- **Aam galti:** Non-inline function header me define karna jo do `.cpp` include karti hain → multiple definition linker error.

Practice: `examples/10_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

---

## Day 106 ke baad aapko ye aana chahiye

- `Alignment & packing` ko bina notes dekhe kisi dost ko samjha sakna.
- Saare 10 examples `-std=c++17 -Wall -Wextra` ke saath compile aur run karna (naye flags sirf tab jab din ko C++20+ chahiye).
- `answers.md` dekhne se pehle `questions.md` ke 5 sawaal answer karna.
- Ek chhota extra program likhna jo aaj ke kam se kam 3 concepts jodta ho.

Ya is din ko **Badsha hub** me kholo (`python3 hub/server.py`) aur Learn / Practice / Quiz tabs use karo.
