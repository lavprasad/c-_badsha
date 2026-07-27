# Day 80 -- Linking & libraries

Aaj ka goal: **Linking & libraries** ko aasan Hinglish me samajhna, har idea ka chhota code sample dekhna, phir `examples/` me practice karna.

Is din ko padhne ka tarika:
1. Har concept ka **Aasan Bhasha** section padho.
2. Code sample par nazar daalo -- pehle predict karo ki output kya aayega.
3. `examples/` me us concept ki file chalao.
4. Uske baad hi `questions.md` kholo.

| # | Concept |
|--:|---------|
| 1 | Static vs shared libs |
| 2 | Symbol visibility idea |
| 3 | undefined reference triage |
| 4 | multiple definition triage |
| 5 | Link order |
| 6 | pkg-config idea |
| 7 | Header-only tradeoffs |
| 8 | ABI breaks |
| 9 | Versioning libs |
| 10 | Building a static lib |

---

## 1. Static vs shared libs

### Aasan Bhasha

Aaj ka idea — **Static vs shared libs** — Linking & libraries ke bade theme ke andar aata hai. Ise ek tool ki tarah padho: ye kaam kya karta hai, kaunse rules enforce karta hai, aur un rules ko ignore karne par kya tootta hai?

### Chhota code

```cpp
// Explore: Static vs shared libs
#include <iostream>
int main() {
  std::cout << "practice: Static vs shared libs\n";
  return 0;
}
```

- **Yaad rakho:** `Static vs shared libs` use karne wala code likhne se pehle ek invariant bolo.
- **Aam galti:** `Static vs shared libs` ko copy-paste se use karna bina jaane ki wo kya own karta hai ya kab valid hai.

Practice: `examples/01_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 2. Symbol visibility idea

### Aasan Bhasha

Aaj ka idea — **Symbol visibility idea** — Linking & libraries ke bade theme ke andar aata hai. Ise ek tool ki tarah padho: ye kaam kya karta hai, kaunse rules enforce karta hai, aur un rules ko ignore karne par kya tootta hai?

### Chhota code

```cpp
// Explore: Symbol visibility idea
#include <iostream>
int main() {
  std::cout << "practice: Symbol visibility idea\n";
  return 0;
}
```

- **Yaad rakho:** `Symbol visibility idea` use karne wala code likhne se pehle ek invariant bolo.
- **Aam galti:** `Symbol visibility idea` ko copy-paste se use karna bina jaane ki wo kya own karta hai ya kab valid hai.

Practice: `examples/02_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 3. undefined reference triage

### Aasan Bhasha

Aaj ka idea — **undefined reference triage** — Linking & libraries ke bade theme ke andar aata hai. Ise ek tool ki tarah padho: ye kaam kya karta hai, kaunse rules enforce karta hai, aur un rules ko ignore karne par kya tootta hai?

### Chhota code

```cpp
// Explore: undefined reference triage
#include <iostream>
int main() {
  std::cout << "practice: undefined reference triage\n";
  return 0;
}
```

- **Yaad rakho:** `undefined reference triage` use karne wala code likhne se pehle ek invariant bolo.
- **Aam galti:** `undefined reference triage` ko copy-paste se use karna bina jaane ki wo kya own karta hai ya kab valid hai.

Practice: `examples/03_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 4. multiple definition triage

### Aasan Bhasha

Aaj ka idea — **multiple definition triage** — Linking & libraries ke bade theme ke andar aata hai. Ise ek tool ki tarah padho: ye kaam kya karta hai, kaunse rules enforce karta hai, aur un rules ko ignore karne par kya tootta hai?

### Chhota code

```cpp
// Explore: multiple definition triage
#include <iostream>
int main() {
  std::cout << "practice: multiple definition triage\n";
  return 0;
}
```

- **Yaad rakho:** `multiple definition triage` use karne wala code likhne se pehle ek invariant bolo.
- **Aam galti:** `multiple definition triage` ko copy-paste se use karna bina jaane ki wo kya own karta hai ya kab valid hai.

Practice: `examples/04_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 5. Link order

### Aasan Bhasha

Aaj ka idea — **Link order** — Linking & libraries ke bade theme ke andar aata hai. Ise ek tool ki tarah padho: ye kaam kya karta hai, kaunse rules enforce karta hai, aur un rules ko ignore karne par kya tootta hai?

### Chhota code

```cpp
// Explore: Link order
#include <iostream>
int main() {
  std::cout << "practice: Link order\n";
  return 0;
}
```

- **Yaad rakho:** `Link order` use karne wala code likhne se pehle ek invariant bolo.
- **Aam galti:** `Link order` ko copy-paste se use karna bina jaane ki wo kya own karta hai ya kab valid hai.

Practice: `examples/05_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 6. pkg-config idea

### Aasan Bhasha

Aaj ka idea — **pkg-config idea** — Linking & libraries ke bade theme ke andar aata hai. Ise ek tool ki tarah padho: ye kaam kya karta hai, kaunse rules enforce karta hai, aur un rules ko ignore karne par kya tootta hai?

### Chhota code

```cpp
// Explore: pkg-config idea
#include <iostream>
int main() {
  std::cout << "practice: pkg-config idea\n";
  return 0;
}
```

- **Yaad rakho:** `pkg-config idea` use karne wala code likhne se pehle ek invariant bolo.
- **Aam galti:** `pkg-config idea` ko copy-paste se use karna bina jaane ki wo kya own karta hai ya kab valid hai.

Practice: `examples/06_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 7. Header-only tradeoffs

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

Practice: `examples/07_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 8. ABI breaks

### Aasan Bhasha

Aaj ka idea — **ABI breaks** — Linking & libraries ke bade theme ke andar aata hai. Ise ek tool ki tarah padho: ye kaam kya karta hai, kaunse rules enforce karta hai, aur un rules ko ignore karne par kya tootta hai?

### Chhota code

```cpp
// Explore: ABI breaks
#include <iostream>
int main() {
  std::cout << "practice: ABI breaks\n";
  return 0;
}
```

- **Yaad rakho:** `ABI breaks` use karne wala code likhne se pehle ek invariant bolo.
- **Aam galti:** `ABI breaks` ko copy-paste se use karna bina jaane ki wo kya own karta hai ya kab valid hai.

Practice: `examples/08_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 9. Versioning libs

### Aasan Bhasha

Aaj ka idea — **Versioning libs** — Linking & libraries ke bade theme ke andar aata hai. Ise ek tool ki tarah padho: ye kaam kya karta hai, kaunse rules enforce karta hai, aur un rules ko ignore karne par kya tootta hai?

### Chhota code

```cpp
// Explore: Versioning libs
#include <iostream>
int main() {
  std::cout << "practice: Versioning libs\n";
  return 0;
}
```

- **Yaad rakho:** `Versioning libs` use karne wala code likhne se pehle ek invariant bolo.
- **Aam galti:** `Versioning libs` ko copy-paste se use karna bina jaane ki wo kya own karta hai ya kab valid hai.

Practice: `examples/09_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 10. Building a static lib

### Aasan Bhasha

Aaj ka idea — **Building a static lib** — Linking & libraries ke bade theme ke andar aata hai. Ise ek tool ki tarah padho: ye kaam kya karta hai, kaunse rules enforce karta hai, aur un rules ko ignore karne par kya tootta hai?

### Chhota code

```cpp
// Explore: Building a static lib
#include <iostream>
int main() {
  std::cout << "practice: Building a static lib\n";
  return 0;
}
```

- **Yaad rakho:** `Building a static lib` use karne wala code likhne se pehle ek invariant bolo.
- **Aam galti:** `Building a static lib` ko copy-paste se use karna bina jaane ki wo kya own karta hai ya kab valid hai.

Practice: `examples/10_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

---

## Day 80 ke baad aapko ye aana chahiye

- `Linking & libraries` ko bina notes dekhe kisi dost ko samjha sakna.
- Saare 10 examples `-std=c++17 -Wall -Wextra` ke saath compile aur run karna (naye flags sirf tab jab din ko C++20+ chahiye).
- `answers.md` dekhne se pehle `questions.md` ke 5 sawaal answer karna.
- Ek chhota extra program likhna jo aaj ke kam se kam 3 concepts jodta ho.

Ya is din ko **Badsha hub** me kholo (`python3 hub/server.py`) aur Learn / Practice / Quiz tabs use karo.
