# Day 75 -- Code review checklist for C++

Aaj ka goal: **Code review checklist for C++** ko aasan Hinglish me samajhna, har idea ka chhota code sample dekhna, phir `examples/` me practice karna.

Is din ko padhne ka tarika:
1. Har concept ka **Aasan Bhasha** section padho.
2. Code sample par nazar daalo -- pehle predict karo ki output kya aayega.
3. `examples/` me us concept ki file chalao.
4. Uske baad hi `questions.md` kholo.

| # | Concept |
|--:|---------|
| 1 | Ownership clarity |
| 2 | Lifetime lifetimes |
| 3 | const correctness |
| 4 | Exception safety |
| 5 | API misuse risks |
| 6 | Performance hotspots |
| 7 | Readability |
| 8 | Tests present |
| 9 | UB red flags |
| 10 | Applying to a sample |

---

## 1. Ownership clarity

### Aasan Bhasha

Aaj ka idea — **Ownership clarity** — Code review checklist for C++ ke bade theme ke andar aata hai. Ise ek tool ki tarah padho: ye kaam kya karta hai, kaunse rules enforce karta hai, aur un rules ko ignore karne par kya tootta hai?

### Chhota code

```cpp
// Explore: Ownership clarity
#include <iostream>
int main() {
  std::cout << "practice: Ownership clarity\n";
  return 0;
}
```

- **Yaad rakho:** `Ownership clarity` use karne wala code likhne se pehle ek invariant bolo.
- **Aam galti:** `Ownership clarity` ko copy-paste se use karna bina jaane ki wo kya own karta hai ya kab valid hai.

Practice: `examples/01_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 2. Lifetime lifetimes

### Aasan Bhasha

Aaj ka idea — **Lifetime lifetimes** — Code review checklist for C++ ke bade theme ke andar aata hai. Ise ek tool ki tarah padho: ye kaam kya karta hai, kaunse rules enforce karta hai, aur un rules ko ignore karne par kya tootta hai?

### Chhota code

```cpp
// Explore: Lifetime lifetimes
#include <iostream>
int main() {
  std::cout << "practice: Lifetime lifetimes\n";
  return 0;
}
```

- **Yaad rakho:** `Lifetime lifetimes` use karne wala code likhne se pehle ek invariant bolo.
- **Aam galti:** `Lifetime lifetimes` ko copy-paste se use karna bina jaane ki wo kya own karta hai ya kab valid hai.

Practice: `examples/02_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 3. const correctness

### Aasan Bhasha

`const` ek vaada hai: 'main is naam ke through ise nahi badlunga.' Ye bugs compile time par pakadta hai aur intent document karta hai. Observers par aur sirf-padhne wale parameters par `const` lagao.

### Chhota code

```cpp
void print(const std::string& s);  // no copy, no mutate
struct Counter {
  int n = 0;
  int get() const { return n; }  // may call on const objects
};
```

- **Yaad rakho:** Machine word se bade read-only parameters ke liye `const T&` prefer karo.
- **Aam galti:** `const` hata kar aisi cheez badalna jise callers fixed maan rahe the.

Practice: `examples/03_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 4. Exception safety

### Aasan Bhasha

Exceptions happy path ko failure se alag karte hain. Jab function apna kaam na kar sake to throw karo; wahan catch karo jahan recover ya report ho sake. Unwinding ke dauraan bhi RAII cleanup karta hai.

### Chhota code

```cpp
try {
  throw std::runtime_error("boom");
} catch (const std::exception& e) {
  std::cerr << e.what() << '\n';
}
```

- **Yaad rakho:** `const` reference se catch karo, value se nahi.
- **Aam galti:** Raw pointers throw karna ya value se catch karna (slicing).

Practice: `examples/04_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 5. API misuse risks

### Aasan Bhasha

Aaj ka idea — **API misuse risks** — Code review checklist for C++ ke bade theme ke andar aata hai. Ise ek tool ki tarah padho: ye kaam kya karta hai, kaunse rules enforce karta hai, aur un rules ko ignore karne par kya tootta hai?

### Chhota code

```cpp
// Explore: API misuse risks
#include <iostream>
int main() {
  std::cout << "practice: API misuse risks\n";
  return 0;
}
```

- **Yaad rakho:** `API misuse risks` use karne wala code likhne se pehle ek invariant bolo.
- **Aam galti:** `API misuse risks` ko copy-paste se use karna bina jaane ki wo kya own karta hai ya kab valid hai.

Practice: `examples/05_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 6. Performance hotspots

### Aasan Bhasha

Aaj ka idea — **Performance hotspots** — Code review checklist for C++ ke bade theme ke andar aata hai. Ise ek tool ki tarah padho: ye kaam kya karta hai, kaunse rules enforce karta hai, aur un rules ko ignore karne par kya tootta hai?

### Chhota code

```cpp
// Explore: Performance hotspots
#include <iostream>
int main() {
  std::cout << "practice: Performance hotspots\n";
  return 0;
}
```

- **Yaad rakho:** `Performance hotspots` use karne wala code likhne se pehle ek invariant bolo.
- **Aam galti:** `Performance hotspots` ko copy-paste se use karna bina jaane ki wo kya own karta hai ya kab valid hai.

Practice: `examples/06_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 7. Readability

### Aasan Bhasha

Aaj ka idea — **Readability** — Code review checklist for C++ ke bade theme ke andar aata hai. Ise ek tool ki tarah padho: ye kaam kya karta hai, kaunse rules enforce karta hai, aur un rules ko ignore karne par kya tootta hai?

### Chhota code

```cpp
// Explore: Readability
#include <iostream>
int main() {
  std::cout << "practice: Readability\n";
  return 0;
}
```

- **Yaad rakho:** `Readability` use karne wala code likhne se pehle ek invariant bolo.
- **Aam galti:** `Readability` ko copy-paste se use karna bina jaane ki wo kya own karta hai ya kab valid hai.

Practice: `examples/07_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 8. Tests present

### Aasan Bhasha

Aaj ka idea — **Tests present** — Code review checklist for C++ ke bade theme ke andar aata hai. Ise ek tool ki tarah padho: ye kaam kya karta hai, kaunse rules enforce karta hai, aur un rules ko ignore karne par kya tootta hai?

### Chhota code

```cpp
// Explore: Tests present
#include <iostream>
int main() {
  std::cout << "practice: Tests present\n";
  return 0;
}
```

- **Yaad rakho:** `Tests present` use karne wala code likhne se pehle ek invariant bolo.
- **Aam galti:** `Tests present` ko copy-paste se use karna bina jaane ki wo kya own karta hai ya kab valid hai.

Practice: `examples/08_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 9. UB red flags

### Aasan Bhasha

Assertions invariants document karte hain. `assert` debug builds me runtime check hai; `static_assert` compile time par fail hota hai. Sanitizers bahut saare memory aur UB bugs jaldi pakad lete hain.

### Chhota code

```cpp
#include <cassert>
assert(index < size);
static_assert(sizeof(int) >= 4, "need 32-bit int");
```

- **Yaad rakho:** Asserts user-facing error handling ke liye nahi hain.
- **Aam galti:** Zaroori validation sirf `assert` me daalna — release (`NDEBUG`) me wo gayab ho jaata hai.

Practice: `examples/09_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 10. Applying to a sample

### Aasan Bhasha

Aaj ka idea — **Applying to a sample** — Code review checklist for C++ ke bade theme ke andar aata hai. Ise ek tool ki tarah padho: ye kaam kya karta hai, kaunse rules enforce karta hai, aur un rules ko ignore karne par kya tootta hai?

### Chhota code

```cpp
// Explore: Applying to a sample
#include <iostream>
int main() {
  std::cout << "practice: Applying to a sample\n";
  return 0;
}
```

- **Yaad rakho:** `Applying to a sample` use karne wala code likhne se pehle ek invariant bolo.
- **Aam galti:** `Applying to a sample` ko copy-paste se use karna bina jaane ki wo kya own karta hai ya kab valid hai.

Practice: `examples/10_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

---

## Day 75 ke baad aapko ye aana chahiye

- `Code review checklist for C++` ko bina notes dekhe kisi dost ko samjha sakna.
- Saare 10 examples `-std=c++17 -Wall -Wextra` ke saath compile aur run karna (naye flags sirf tab jab din ko C++20+ chahiye).
- `answers.md` dekhne se pehle `questions.md` ke 5 sawaal answer karna.
- Ek chhota extra program likhna jo aaj ke kam se kam 3 concepts jodta ho.

Ya is din ko **Badsha hub** me kholo (`python3 hub/server.py`) aur Learn / Practice / Quiz tabs use karo.
