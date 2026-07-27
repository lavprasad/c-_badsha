# Day 47 -- Move semantics advanced

Aaj ka goal: **Move semantics advanced** ko aasan Hinglish me samajhna, har idea ka chhota code sample dekhna, phir `examples/` me practice karna.

Is din ko padhne ka tarika:
1. Har concept ka **Aasan Bhasha** section padho.
2. Code sample par nazar daalo -- pehle predict karo ki output kya aayega.
3. `examples/` me us concept ki file chalao.
4. Uske baad hi `questions.md` kholo.

| # | Concept |
|--:|---------|
| 1 | Value categories recap |
| 2 | Perfect forwarding preview |
| 3 | Move-only types |
| 4 | Moved-from state rules |
| 5 | NRVO / RVO |
| 6 | Forced moves vs copies |
| 7 | Containers and moves |
| 8 | noexcept move importance |
| 9 | Debugging unexpected copies |
| 10 | A move-only handle |

---

## 1. Value categories recap

### Aasan Bhasha

Aaj ka idea — **Value categories recap** — Move semantics advanced ke bade theme ke andar aata hai. Ise ek tool ki tarah padho: ye kaam kya karta hai, kaunse rules enforce karta hai, aur un rules ko ignore karne par kya tootta hai?

### Chhota code

```cpp
// Explore: Value categories recap
#include <iostream>
int main() {
  std::cout << "practice: Value categories recap\n";
  return 0;
}
```

- **Yaad rakho:** `Value categories recap` use karne wala code likhne se pehle ek invariant bolo.
- **Aam galti:** `Value categories recap` ko copy-paste se use karna bina jaane ki wo kya own karta hai ya kab valid hai.

Practice: `examples/01_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 2. Perfect forwarding preview

### Aasan Bhasha

Move deep-copy ki jagah us object se resources chura leta hai jiska kaam khatam ho chuka hai. `std::move` sirf ek cast hai jo churana allow karta hai; khud se move nahi karta.

### Chhota code

```cpp
std::string a = "hello";
std::string b = std::move(a);  // b owns the buffer
// a is valid but unspecified (often empty)
```

- **Yaad rakho:** `std::move(x)` ke baad `x` me sirf assign karo ya use destroy karo — value mat padho.
- **Aam galti:** Moved-from object ko aise use karna jaise usme purana data ab bhi ho.

Practice: `examples/02_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 3. Move-only types

### Aasan Bhasha

Aaj ka idea — **Move-only types** — Move semantics advanced ke bade theme ke andar aata hai. Ise ek tool ki tarah padho: ye kaam kya karta hai, kaunse rules enforce karta hai, aur un rules ko ignore karne par kya tootta hai?

### Chhota code

```cpp
// Explore: Move-only types
#include <iostream>
int main() {
  std::cout << "practice: Move-only types\n";
  return 0;
}
```

- **Yaad rakho:** `Move-only types` use karne wala code likhne se pehle ek invariant bolo.
- **Aam galti:** `Move-only types` ko copy-paste se use karna bina jaane ki wo kya own karta hai ya kab valid hai.

Practice: `examples/03_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 4. Moved-from state rules

### Aasan Bhasha

Aaj ka idea — **Moved-from state rules** — Move semantics advanced ke bade theme ke andar aata hai. Ise ek tool ki tarah padho: ye kaam kya karta hai, kaunse rules enforce karta hai, aur un rules ko ignore karne par kya tootta hai?

### Chhota code

```cpp
// Explore: Moved-from state rules
#include <iostream>
int main() {
  std::cout << "practice: Moved-from state rules\n";
  return 0;
}
```

- **Yaad rakho:** `Moved-from state rules` use karne wala code likhne se pehle ek invariant bolo.
- **Aam galti:** `Moved-from state rules` ko copy-paste se use karna bina jaane ki wo kya own karta hai ya kab valid hai.

Practice: `examples/04_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 5. NRVO / RVO

### Aasan Bhasha

Aaj ka idea — **NRVO / RVO** — Move semantics advanced ke bade theme ke andar aata hai. Ise ek tool ki tarah padho: ye kaam kya karta hai, kaunse rules enforce karta hai, aur un rules ko ignore karne par kya tootta hai?

### Chhota code

```cpp
// Explore: NRVO / RVO
#include <iostream>
int main() {
  std::cout << "practice: NRVO / RVO\n";
  return 0;
}
```

- **Yaad rakho:** `NRVO / RVO` use karne wala code likhne se pehle ek invariant bolo.
- **Aam galti:** `NRVO / RVO` ko copy-paste se use karna bina jaane ki wo kya own karta hai ya kab valid hai.

Practice: `examples/05_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 6. Forced moves vs copies

### Aasan Bhasha

Aaj ka idea — **Forced moves vs copies** — Move semantics advanced ke bade theme ke andar aata hai. Ise ek tool ki tarah padho: ye kaam kya karta hai, kaunse rules enforce karta hai, aur un rules ko ignore karne par kya tootta hai?

### Chhota code

```cpp
// Explore: Forced moves vs copies
#include <iostream>
int main() {
  std::cout << "practice: Forced moves vs copies\n";
  return 0;
}
```

- **Yaad rakho:** `Forced moves vs copies` use karne wala code likhne se pehle ek invariant bolo.
- **Aam galti:** `Forced moves vs copies` ko copy-paste se use karna bina jaane ki wo kya own karta hai ya kab valid hai.

Practice: `examples/06_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 7. Containers and moves

### Aasan Bhasha

Aaj ka idea — **Containers and moves** — Move semantics advanced ke bade theme ke andar aata hai. Ise ek tool ki tarah padho: ye kaam kya karta hai, kaunse rules enforce karta hai, aur un rules ko ignore karne par kya tootta hai?

### Chhota code

```cpp
// Explore: Containers and moves
#include <iostream>
int main() {
  std::cout << "practice: Containers and moves\n";
  return 0;
}
```

- **Yaad rakho:** `Containers and moves` use karne wala code likhne se pehle ek invariant bolo.
- **Aam galti:** `Containers and moves` ko copy-paste se use karna bina jaane ki wo kya own karta hai ya kab valid hai.

Practice: `examples/07_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 8. noexcept move importance

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

Practice: `examples/08_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 9. Debugging unexpected copies

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

## 10. A move-only handle

### Aasan Bhasha

Aaj ka idea — **A move-only handle** — Move semantics advanced ke bade theme ke andar aata hai. Ise ek tool ki tarah padho: ye kaam kya karta hai, kaunse rules enforce karta hai, aur un rules ko ignore karne par kya tootta hai?

### Chhota code

```cpp
// Explore: A move-only handle
#include <iostream>
int main() {
  std::cout << "practice: A move-only handle\n";
  return 0;
}
```

- **Yaad rakho:** `A move-only handle` use karne wala code likhne se pehle ek invariant bolo.
- **Aam galti:** `A move-only handle` ko copy-paste se use karna bina jaane ki wo kya own karta hai ya kab valid hai.

Practice: `examples/10_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

---

## Day 47 ke baad aapko ye aana chahiye

- `Move semantics advanced` ko bina notes dekhe kisi dost ko samjha sakna.
- Saare 10 examples `-std=c++17 -Wall -Wextra` ke saath compile aur run karna (naye flags sirf tab jab din ko C++20+ chahiye).
- `answers.md` dekhne se pehle `questions.md` ke 5 sawaal answer karna.
- Ek chhota extra program likhna jo aaj ke kam se kam 3 concepts jodta ho.

Ya is din ko **Badsha hub** me kholo (`python3 hub/server.py`) aur Learn / Practice / Quiz tabs use karo.
