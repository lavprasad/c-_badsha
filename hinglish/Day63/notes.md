# Day 63 -- Creational patterns

Aaj ka goal: **Creational patterns** ko aasan Hinglish me samajhna, har idea ka chhota code sample dekhna, phir `examples/` me practice karna.

Is din ko padhne ka tarika:
1. Har concept ka **Aasan Bhasha** section padho.
2. Code sample par nazar daalo -- pehle predict karo ki output kya aayega.
3. `examples/` me us concept ki file chalao.
4. Uske baad hi `questions.md` kholo.

| # | Concept |
|--:|---------|
| 1 | Factory method |
| 2 | Abstract factory |
| 3 | Builder |
| 4 | Prototype |
| 5 | Singleton (and why careful) |
| 6 | Dependency injection light |
| 7 | make_* helpers |
| 8 | Registry pattern |
| 9 | Anti-patterns |
| 10 | A document factory |

---

## 1. Factory method

### Aasan Bhasha

Aaj ka idea — **Factory method** — Creational patterns ke bade theme ke andar aata hai. Ise ek tool ki tarah padho: ye kaam kya karta hai, kaunse rules enforce karta hai, aur un rules ko ignore karne par kya tootta hai?

### Chhota code

```cpp
// Explore: Factory method
#include <iostream>
int main() {
  std::cout << "practice: Factory method\n";
  return 0;
}
```

- **Yaad rakho:** `Factory method` use karne wala code likhne se pehle ek invariant bolo.
- **Aam galti:** `Factory method` ko copy-paste se use karna bina jaane ki wo kya own karta hai ya kab valid hai.

Practice: `examples/01_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 2. Abstract factory

### Aasan Bhasha

Virtual functions base pointer/reference ke through derived implementation call karne dete hain. Abstract classes (pure virtuals) interfaces banate hain. Polymorphic base ko hamesha virtual destructor do.

### Chhota code

```cpp
struct Shape {
  virtual ~Shape() = default;
  virtual double area() const = 0;
};
struct Circle : Shape {
  double r;
  double area() const override { return 3.14 * r * r; }
};
```

- **Yaad rakho:** `override` likho taaki signature ki galti compile time par pakdi jaaye.
- **Aam galti:** Derived object ko non-virtual base destructor ke through delete karna.

Practice: `examples/02_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 3. Builder

### Aasan Bhasha

Aaj ka idea — **Builder** — Creational patterns ke bade theme ke andar aata hai. Ise ek tool ki tarah padho: ye kaam kya karta hai, kaunse rules enforce karta hai, aur un rules ko ignore karne par kya tootta hai?

### Chhota code

```cpp
// Explore: Builder
#include <iostream>
int main() {
  std::cout << "practice: Builder\n";
  return 0;
}
```

- **Yaad rakho:** `Builder` use karne wala code likhne se pehle ek invariant bolo.
- **Aam galti:** `Builder` ko copy-paste se use karna bina jaane ki wo kya own karta hai ya kab valid hai.

Practice: `examples/03_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 4. Prototype

### Aasan Bhasha

Aaj ka idea — **Prototype** — Creational patterns ke bade theme ke andar aata hai. Ise ek tool ki tarah padho: ye kaam kya karta hai, kaunse rules enforce karta hai, aur un rules ko ignore karne par kya tootta hai?

### Chhota code

```cpp
// Explore: Prototype
#include <iostream>
int main() {
  std::cout << "practice: Prototype\n";
  return 0;
}
```

- **Yaad rakho:** `Prototype` use karne wala code likhne se pehle ek invariant bolo.
- **Aam galti:** `Prototype` ko copy-paste se use karna bina jaane ki wo kya own karta hai ya kab valid hai.

Practice: `examples/04_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 5. Singleton (and why careful)

### Aasan Bhasha

Aaj ka idea — **Singleton (and why careful)** — Creational patterns ke bade theme ke andar aata hai. Ise ek tool ki tarah padho: ye kaam kya karta hai, kaunse rules enforce karta hai, aur un rules ko ignore karne par kya tootta hai?

### Chhota code

```cpp
// Explore: Singleton (and why careful)
#include <iostream>
int main() {
  std::cout << "practice: Singleton (and why careful)\n";
  return 0;
}
```

- **Yaad rakho:** `Singleton (and why careful)` use karne wala code likhne se pehle ek invariant bolo.
- **Aam galti:** `Singleton (and why careful)` ko copy-paste se use karna bina jaane ki wo kya own karta hai ya kab valid hai.

Practice: `examples/05_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 6. Dependency injection light

### Aasan Bhasha

Iterators container ke andar advanced pointers jaise hain. Algorithms `[begin, end)` half-open range lete hain. Ye jaano ki insert/erase inhe kab invalid karte hain.

### Chhota code

```cpp
std::vector<int> v{1,2,3};
for (auto it = v.begin(); it != v.end(); ++it)
  std::cout << *it << ' ';
```

- **Yaad rakho:** Erase ke baad wahi iterator use karo jo `erase` return karta hai.
- **Aam galti:** Invalid ho chuke iterator ko increment karna → undefined behaviour.

Practice: `examples/06_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 7. make_* helpers

### Aasan Bhasha

Aaj ka idea — **make_* helpers** — Creational patterns ke bade theme ke andar aata hai. Ise ek tool ki tarah padho: ye kaam kya karta hai, kaunse rules enforce karta hai, aur un rules ko ignore karne par kya tootta hai?

### Chhota code

```cpp
// Explore: make_* helpers
#include <iostream>
int main() {
  std::cout << "practice: make_* helpers\n";
  return 0;
}
```

- **Yaad rakho:** `make_* helpers` use karne wala code likhne se pehle ek invariant bolo.
- **Aam galti:** `make_* helpers` ko copy-paste se use karna bina jaane ki wo kya own karta hai ya kab valid hai.

Practice: `examples/07_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 8. Registry pattern

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

## 9. Anti-patterns

### Aasan Bhasha

Aaj ka idea — **Anti-patterns** — Creational patterns ke bade theme ke andar aata hai. Ise ek tool ki tarah padho: ye kaam kya karta hai, kaunse rules enforce karta hai, aur un rules ko ignore karne par kya tootta hai?

### Chhota code

```cpp
// Explore: Anti-patterns
#include <iostream>
int main() {
  std::cout << "practice: Anti-patterns\n";
  return 0;
}
```

- **Yaad rakho:** `Anti-patterns` use karne wala code likhne se pehle ek invariant bolo.
- **Aam galti:** `Anti-patterns` ko copy-paste se use karna bina jaane ki wo kya own karta hai ya kab valid hai.

Practice: `examples/09_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 10. A document factory

### Aasan Bhasha

Aaj ka idea — **A document factory** — Creational patterns ke bade theme ke andar aata hai. Ise ek tool ki tarah padho: ye kaam kya karta hai, kaunse rules enforce karta hai, aur un rules ko ignore karne par kya tootta hai?

### Chhota code

```cpp
// Explore: A document factory
#include <iostream>
int main() {
  std::cout << "practice: A document factory\n";
  return 0;
}
```

- **Yaad rakho:** `A document factory` use karne wala code likhne se pehle ek invariant bolo.
- **Aam galti:** `A document factory` ko copy-paste se use karna bina jaane ki wo kya own karta hai ya kab valid hai.

Practice: `examples/10_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

---

## Day 63 ke baad aapko ye aana chahiye

- `Creational patterns` ko bina notes dekhe kisi dost ko samjha sakna.
- Saare 10 examples `-std=c++17 -Wall -Wextra` ke saath compile aur run karna (naye flags sirf tab jab din ko C++20+ chahiye).
- `answers.md` dekhne se pehle `questions.md` ke 5 sawaal answer karna.
- Ek chhota extra program likhna jo aaj ke kam se kam 3 concepts jodta ho.

Ya is din ko **Badsha hub** me kholo (`python3 hub/server.py`) aur Learn / Practice / Quiz tabs use karo.
