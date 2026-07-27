# Day 104 -- Custom allocators intro

Aaj ka goal: **Custom allocators intro** ko aasan Hinglish me samajhna, har idea ka chhota code sample dekhna, phir `examples/` me practice karna.

Is din ko padhne ka tarika:
1. Har concept ka **Aasan Bhasha** section padho.
2. Code sample par nazar daalo -- pehle predict karo ki output kya aayega.
3. `examples/` me us concept ki file chalao.
4. Uske baad hi `questions.md` kholo.

| # | Concept |
|--:|---------|
| 1 | Allocator requirements idea |
| 2 | std::allocator |
| 3 | Stateful allocators |
| 4 | Arena/bump allocators |
| 5 | Pool allocators |
| 6 | PMR overview (C++17) |
| 7 | monotonic_buffer_resource |
| 8 | When custom allocators |
| 9 | Debugging allocators |
| 10 | Arena demo |

---

## 1. Allocator requirements idea

### Aasan Bhasha

Aaj ka idea — **Allocator requirements idea** — Custom allocators intro ke bade theme ke andar aata hai. Ise ek tool ki tarah padho: ye kaam kya karta hai, kaunse rules enforce karta hai, aur un rules ko ignore karne par kya tootta hai?

### Chhota code

```cpp
// Explore: Allocator requirements idea
#include <iostream>
int main() {
  std::cout << "practice: Allocator requirements idea\n";
  return 0;
}
```

- **Yaad rakho:** `Allocator requirements idea` use karne wala code likhne se pehle ek invariant bolo.
- **Aam galti:** `Allocator requirements idea` ko copy-paste se use karna bina jaane ki wo kya own karta hai ya kab valid hai.

Practice: `examples/01_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 2. std::allocator

### Aasan Bhasha

Aaj ka idea — **std::allocator** — Custom allocators intro ke bade theme ke andar aata hai. Ise ek tool ki tarah padho: ye kaam kya karta hai, kaunse rules enforce karta hai, aur un rules ko ignore karne par kya tootta hai?

### Chhota code

```cpp
// Explore: std::allocator
#include <iostream>
int main() {
  std::cout << "practice: std::allocator\n";
  return 0;
}
```

- **Yaad rakho:** `std::allocator` use karne wala code likhne se pehle ek invariant bolo.
- **Aam galti:** `std::allocator` ko copy-paste se use karna bina jaane ki wo kya own karta hai ya kab valid hai.

Practice: `examples/02_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 3. Stateful allocators

### Aasan Bhasha

Aaj ka idea — **Stateful allocators** — Custom allocators intro ke bade theme ke andar aata hai. Ise ek tool ki tarah padho: ye kaam kya karta hai, kaunse rules enforce karta hai, aur un rules ko ignore karne par kya tootta hai?

### Chhota code

```cpp
// Explore: Stateful allocators
#include <iostream>
int main() {
  std::cout << "practice: Stateful allocators\n";
  return 0;
}
```

- **Yaad rakho:** `Stateful allocators` use karne wala code likhne se pehle ek invariant bolo.
- **Aam galti:** `Stateful allocators` ko copy-paste se use karna bina jaane ki wo kya own karta hai ya kab valid hai.

Practice: `examples/03_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 4. Arena/bump allocators

### Aasan Bhasha

Aaj ka idea — **Arena/bump allocators** — Custom allocators intro ke bade theme ke andar aata hai. Ise ek tool ki tarah padho: ye kaam kya karta hai, kaunse rules enforce karta hai, aur un rules ko ignore karne par kya tootta hai?

### Chhota code

```cpp
// Explore: Arena/bump allocators
#include <iostream>
int main() {
  std::cout << "practice: Arena/bump allocators\n";
  return 0;
}
```

- **Yaad rakho:** `Arena/bump allocators` use karne wala code likhne se pehle ek invariant bolo.
- **Aam galti:** `Arena/bump allocators` ko copy-paste se use karna bina jaane ki wo kya own karta hai ya kab valid hai.

Practice: `examples/04_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 5. Pool allocators

### Aasan Bhasha

Aaj ka idea — **Pool allocators** — Custom allocators intro ke bade theme ke andar aata hai. Ise ek tool ki tarah padho: ye kaam kya karta hai, kaunse rules enforce karta hai, aur un rules ko ignore karne par kya tootta hai?

### Chhota code

```cpp
// Explore: Pool allocators
#include <iostream>
int main() {
  std::cout << "practice: Pool allocators\n";
  return 0;
}
```

- **Yaad rakho:** `Pool allocators` use karne wala code likhne se pehle ek invariant bolo.
- **Aam galti:** `Pool allocators` ko copy-paste se use karna bina jaane ki wo kya own karta hai ya kab valid hai.

Practice: `examples/05_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 6. PMR overview (C++17)

### Aasan Bhasha

Aaj ka idea — **PMR overview (C++17)** — Custom allocators intro ke bade theme ke andar aata hai. Ise ek tool ki tarah padho: ye kaam kya karta hai, kaunse rules enforce karta hai, aur un rules ko ignore karne par kya tootta hai?

### Chhota code

```cpp
// Explore: PMR overview (C++17)
#include <iostream>
int main() {
  std::cout << "practice: PMR overview (C++17)\n";
  return 0;
}
```

- **Yaad rakho:** `PMR overview (C++17)` use karne wala code likhne se pehle ek invariant bolo.
- **Aam galti:** `PMR overview (C++17)` ko copy-paste se use karna bina jaane ki wo kya own karta hai ya kab valid hai.

Practice: `examples/06_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 7. monotonic_buffer_resource

### Aasan Bhasha

Aaj ka idea — **monotonic_buffer_resource** — Custom allocators intro ke bade theme ke andar aata hai. Ise ek tool ki tarah padho: ye kaam kya karta hai, kaunse rules enforce karta hai, aur un rules ko ignore karne par kya tootta hai?

### Chhota code

```cpp
// Explore: monotonic_buffer_resource
#include <iostream>
int main() {
  std::cout << "practice: monotonic_buffer_resource\n";
  return 0;
}
```

- **Yaad rakho:** `monotonic_buffer_resource` use karne wala code likhne se pehle ek invariant bolo.
- **Aam galti:** `monotonic_buffer_resource` ko copy-paste se use karna bina jaane ki wo kya own karta hai ya kab valid hai.

Practice: `examples/07_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 8. When custom allocators

### Aasan Bhasha

Aaj ka idea — **When custom allocators** — Custom allocators intro ke bade theme ke andar aata hai. Ise ek tool ki tarah padho: ye kaam kya karta hai, kaunse rules enforce karta hai, aur un rules ko ignore karne par kya tootta hai?

### Chhota code

```cpp
// Explore: When custom allocators
#include <iostream>
int main() {
  std::cout << "practice: When custom allocators\n";
  return 0;
}
```

- **Yaad rakho:** `When custom allocators` use karne wala code likhne se pehle ek invariant bolo.
- **Aam galti:** `When custom allocators` ko copy-paste se use karna bina jaane ki wo kya own karta hai ya kab valid hai.

Practice: `examples/08_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 9. Debugging allocators

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

## 10. Arena demo

### Aasan Bhasha

Aaj ka idea — **Arena demo** — Custom allocators intro ke bade theme ke andar aata hai. Ise ek tool ki tarah padho: ye kaam kya karta hai, kaunse rules enforce karta hai, aur un rules ko ignore karne par kya tootta hai?

### Chhota code

```cpp
// Explore: Arena demo
#include <iostream>
int main() {
  std::cout << "practice: Arena demo\n";
  return 0;
}
```

- **Yaad rakho:** `Arena demo` use karne wala code likhne se pehle ek invariant bolo.
- **Aam galti:** `Arena demo` ko copy-paste se use karna bina jaane ki wo kya own karta hai ya kab valid hai.

Practice: `examples/10_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

---

## Day 104 ke baad aapko ye aana chahiye

- `Custom allocators intro` ko bina notes dekhe kisi dost ko samjha sakna.
- Saare 10 examples `-std=c++17 -Wall -Wextra` ke saath compile aur run karna (naye flags sirf tab jab din ko C++20+ chahiye).
- `answers.md` dekhne se pehle `questions.md` ke 5 sawaal answer karna.
- Ek chhota extra program likhna jo aaj ke kam se kam 3 concepts jodta ho.

Ya is din ko **Badsha hub** me kholo (`python3 hub/server.py`) aur Learn / Practice / Quiz tabs use karo.
