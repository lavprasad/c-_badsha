# Day 137 -- Copy elision & ABI

Aaj ka goal: **Copy elision & ABI** ko aasan Hinglish me samajhna, har idea ka chhota code sample dekhna, phir `examples/` me practice karna.

Is din ko padhne ka tarika:
1. Har concept ka **Aasan Bhasha** section padho.
2. Code sample par nazar daalo -- pehle predict karo ki output kya aayega.
3. `examples/` me us concept ki file chalao.
4. Uske baad hi `questions.md` kholo.

| # | Concept |
|--:|---------|
| 1 | Mandatory elision |
| 2 | NRVO |
| 3 | When copies remain |
| 4 | ABI and registers |
| 5 | Passing large objects |
| 6 | Returning large objects |
| 7 | [[no_unique_address]] |
| 8 | Empty bases |
| 9 | Measuring |
| 10 | Elision demo |

---

## 1. Mandatory elision

### Aasan Bhasha

Aaj ka idea — **Mandatory elision** — Copy elision & ABI ke bade theme ke andar aata hai. Ise ek tool ki tarah padho: ye kaam kya karta hai, kaunse rules enforce karta hai, aur un rules ko ignore karne par kya tootta hai?

### Chhota code

```cpp
// Explore: Mandatory elision
#include <iostream>
int main() {
  std::cout << "practice: Mandatory elision\n";
  return 0;
}
```

- **Yaad rakho:** `Mandatory elision` use karne wala code likhne se pehle ek invariant bolo.
- **Aam galti:** `Mandatory elision` ko copy-paste se use karna bina jaane ki wo kya own karta hai ya kab valid hai.

Practice: `examples/01_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 2. NRVO

### Aasan Bhasha

Aaj ka idea — **NRVO** — Copy elision & ABI ke bade theme ke andar aata hai. Ise ek tool ki tarah padho: ye kaam kya karta hai, kaunse rules enforce karta hai, aur un rules ko ignore karne par kya tootta hai?

### Chhota code

```cpp
// Explore: NRVO
#include <iostream>
int main() {
  std::cout << "practice: NRVO\n";
  return 0;
}
```

- **Yaad rakho:** `NRVO` use karne wala code likhne se pehle ek invariant bolo.
- **Aam galti:** `NRVO` ko copy-paste se use karna bina jaane ki wo kya own karta hai ya kab valid hai.

Practice: `examples/02_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 3. When copies remain

### Aasan Bhasha

Aaj ka idea — **When copies remain** — Copy elision & ABI ke bade theme ke andar aata hai. Ise ek tool ki tarah padho: ye kaam kya karta hai, kaunse rules enforce karta hai, aur un rules ko ignore karne par kya tootta hai?

### Chhota code

```cpp
// Explore: When copies remain
#include <iostream>
int main() {
  std::cout << "practice: When copies remain\n";
  return 0;
}
```

- **Yaad rakho:** `When copies remain` use karne wala code likhne se pehle ek invariant bolo.
- **Aam galti:** `When copies remain` ko copy-paste se use karna bina jaane ki wo kya own karta hai ya kab valid hai.

Practice: `examples/03_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 4. ABI and registers

### Aasan Bhasha

Aaj ka idea — **ABI and registers** — Copy elision & ABI ke bade theme ke andar aata hai. Ise ek tool ki tarah padho: ye kaam kya karta hai, kaunse rules enforce karta hai, aur un rules ko ignore karne par kya tootta hai?

### Chhota code

```cpp
// Explore: ABI and registers
#include <iostream>
int main() {
  std::cout << "practice: ABI and registers\n";
  return 0;
}
```

- **Yaad rakho:** `ABI and registers` use karne wala code likhne se pehle ek invariant bolo.
- **Aam galti:** `ABI and registers` ko copy-paste se use karna bina jaane ki wo kya own karta hai ya kab valid hai.

Practice: `examples/04_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 5. Passing large objects

### Aasan Bhasha

Aaj ka idea — **Passing large objects** — Copy elision & ABI ke bade theme ke andar aata hai. Ise ek tool ki tarah padho: ye kaam kya karta hai, kaunse rules enforce karta hai, aur un rules ko ignore karne par kya tootta hai?

### Chhota code

```cpp
// Explore: Passing large objects
#include <iostream>
int main() {
  std::cout << "practice: Passing large objects\n";
  return 0;
}
```

- **Yaad rakho:** `Passing large objects` use karne wala code likhne se pehle ek invariant bolo.
- **Aam galti:** `Passing large objects` ko copy-paste se use karna bina jaane ki wo kya own karta hai ya kab valid hai.

Practice: `examples/05_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 6. Returning large objects

### Aasan Bhasha

Aaj ka idea — **Returning large objects** — Copy elision & ABI ke bade theme ke andar aata hai. Ise ek tool ki tarah padho: ye kaam kya karta hai, kaunse rules enforce karta hai, aur un rules ko ignore karne par kya tootta hai?

### Chhota code

```cpp
// Explore: Returning large objects
#include <iostream>
int main() {
  std::cout << "practice: Returning large objects\n";
  return 0;
}
```

- **Yaad rakho:** `Returning large objects` use karne wala code likhne se pehle ek invariant bolo.
- **Aam galti:** `Returning large objects` ko copy-paste se use karna bina jaane ki wo kya own karta hai ya kab valid hai.

Practice: `examples/06_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 7. [[no_unique_address]]

### Aasan Bhasha

Aaj ka idea — **[[no_unique_address]]** — Copy elision & ABI ke bade theme ke andar aata hai. Ise ek tool ki tarah padho: ye kaam kya karta hai, kaunse rules enforce karta hai, aur un rules ko ignore karne par kya tootta hai?

### Chhota code

```cpp
// Explore: [[no_unique_address]]
#include <iostream>
int main() {
  std::cout << "practice: [[no_unique_address]]\n";
  return 0;
}
```

- **Yaad rakho:** `[[no_unique_address]]` use karne wala code likhne se pehle ek invariant bolo.
- **Aam galti:** `[[no_unique_address]]` ko copy-paste se use karna bina jaane ki wo kya own karta hai ya kab valid hai.

Practice: `examples/07_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 8. Empty bases

### Aasan Bhasha

Aaj ka idea — **Empty bases** — Copy elision & ABI ke bade theme ke andar aata hai. Ise ek tool ki tarah padho: ye kaam kya karta hai, kaunse rules enforce karta hai, aur un rules ko ignore karne par kya tootta hai?

### Chhota code

```cpp
// Explore: Empty bases
#include <iostream>
int main() {
  std::cout << "practice: Empty bases\n";
  return 0;
}
```

- **Yaad rakho:** `Empty bases` use karne wala code likhne se pehle ek invariant bolo.
- **Aam galti:** `Empty bases` ko copy-paste se use karna bina jaane ki wo kya own karta hai ya kab valid hai.

Practice: `examples/08_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 9. Measuring

### Aasan Bhasha

Aaj ka idea — **Measuring** — Copy elision & ABI ke bade theme ke andar aata hai. Ise ek tool ki tarah padho: ye kaam kya karta hai, kaunse rules enforce karta hai, aur un rules ko ignore karne par kya tootta hai?

### Chhota code

```cpp
// Explore: Measuring
#include <iostream>
int main() {
  std::cout << "practice: Measuring\n";
  return 0;
}
```

- **Yaad rakho:** `Measuring` use karne wala code likhne se pehle ek invariant bolo.
- **Aam galti:** `Measuring` ko copy-paste se use karna bina jaane ki wo kya own karta hai ya kab valid hai.

Practice: `examples/09_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 10. Elision demo

### Aasan Bhasha

Aaj ka idea — **Elision demo** — Copy elision & ABI ke bade theme ke andar aata hai. Ise ek tool ki tarah padho: ye kaam kya karta hai, kaunse rules enforce karta hai, aur un rules ko ignore karne par kya tootta hai?

### Chhota code

```cpp
// Explore: Elision demo
#include <iostream>
int main() {
  std::cout << "practice: Elision demo\n";
  return 0;
}
```

- **Yaad rakho:** `Elision demo` use karne wala code likhne se pehle ek invariant bolo.
- **Aam galti:** `Elision demo` ko copy-paste se use karna bina jaane ki wo kya own karta hai ya kab valid hai.

Practice: `examples/10_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

---

## Day 137 ke baad aapko ye aana chahiye

- `Copy elision & ABI` ko bina notes dekhe kisi dost ko samjha sakna.
- Saare 10 examples `-std=c++17 -Wall -Wextra` ke saath compile aur run karna (naye flags sirf tab jab din ko C++20+ chahiye).
- `answers.md` dekhne se pehle `questions.md` ke 5 sawaal answer karna.
- Ek chhota extra program likhna jo aaj ke kam se kam 3 concepts jodta ho.

Ya is din ko **Badsha hub** me kholo (`python3 hub/server.py`) aur Learn / Practice / Quiz tabs use karo.
