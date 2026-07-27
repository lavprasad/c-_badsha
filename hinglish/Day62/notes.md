# Day 62 -- SOLID in C++

Aaj ka goal: **SOLID in C++** ko aasan Hinglish me samajhna, har idea ka chhota code sample dekhna, phir `examples/` me practice karna.

Is din ko padhne ka tarika:
1. Har concept ka **Aasan Bhasha** section padho.
2. Code sample par nazar daalo -- pehle predict karo ki output kya aayega.
3. `examples/` me us concept ki file chalao.
4. Uske baad hi `questions.md` kholo.

| # | Concept |
|--:|---------|
| 1 | Single responsibility |
| 2 | Open/closed |
| 3 | Liskov |
| 4 | Interface segregation |
| 5 | Dependency inversion |
| 6 | C++-specific mapping |
| 7 | Over-abstracting smell |
| 8 | Concrete examples |
| 9 | Refactor checklist |
| 10 | A payment module sketch |

---

## 1. Single responsibility

### Aasan Bhasha

Aaj ka idea — **Single responsibility** — SOLID in C++ ke bade theme ke andar aata hai. Ise ek tool ki tarah padho: ye kaam kya karta hai, kaunse rules enforce karta hai, aur un rules ko ignore karne par kya tootta hai?

### Chhota code

```cpp
// Explore: Single responsibility
#include <iostream>
int main() {
  std::cout << "practice: Single responsibility\n";
  return 0;
}
```

- **Yaad rakho:** `Single responsibility` use karne wala code likhne se pehle ek invariant bolo.
- **Aam galti:** `Single responsibility` ko copy-paste se use karna bina jaane ki wo kya own karta hai ya kab valid hai.

Practice: `examples/01_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 2. Open/closed

### Aasan Bhasha

Aaj ka idea — **Open/closed** — SOLID in C++ ke bade theme ke andar aata hai. Ise ek tool ki tarah padho: ye kaam kya karta hai, kaunse rules enforce karta hai, aur un rules ko ignore karne par kya tootta hai?

### Chhota code

```cpp
// Explore: Open/closed
#include <iostream>
int main() {
  std::cout << "practice: Open/closed\n";
  return 0;
}
```

- **Yaad rakho:** `Open/closed` use karne wala code likhne se pehle ek invariant bolo.
- **Aam galti:** `Open/closed` ko copy-paste se use karna bina jaane ki wo kya own karta hai ya kab valid hai.

Practice: `examples/02_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 3. Liskov

### Aasan Bhasha

Aaj ka idea — **Liskov** — SOLID in C++ ke bade theme ke andar aata hai. Ise ek tool ki tarah padho: ye kaam kya karta hai, kaunse rules enforce karta hai, aur un rules ko ignore karne par kya tootta hai?

### Chhota code

```cpp
// Explore: Liskov
#include <iostream>
int main() {
  std::cout << "practice: Liskov\n";
  return 0;
}
```

- **Yaad rakho:** `Liskov` use karne wala code likhne se pehle ek invariant bolo.
- **Aam galti:** `Liskov` ko copy-paste se use karna bina jaane ki wo kya own karta hai ya kab valid hai.

Practice: `examples/03_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 4. Interface segregation

### Aasan Bhasha

Aaj ka idea — **Interface segregation** — SOLID in C++ ke bade theme ke andar aata hai. Ise ek tool ki tarah padho: ye kaam kya karta hai, kaunse rules enforce karta hai, aur un rules ko ignore karne par kya tootta hai?

### Chhota code

```cpp
// Explore: Interface segregation
#include <iostream>
int main() {
  std::cout << "practice: Interface segregation\n";
  return 0;
}
```

- **Yaad rakho:** `Interface segregation` use karne wala code likhne se pehle ek invariant bolo.
- **Aam galti:** `Interface segregation` ko copy-paste se use karna bina jaane ki wo kya own karta hai ya kab valid hai.

Practice: `examples/04_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 5. Dependency inversion

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

Practice: `examples/05_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 6. C++-specific mapping

### Aasan Bhasha

`map` keys ko sorted rakhta hai (tree); `unordered_map` hash karta hai aur average O(1) lookup deta hai. Order chahiye to sorted chuno; speed chahiye aur acha hash hai to hash chuno.

### Chhota code

```cpp
std::unordered_map<std::string, int> freq;
++freq["hi"];
for (auto& [k, v] : freq) std::cout << k << ':' << v << '\n';
```

- **Yaad rakho:** `operator[]` key na mile to default value insert kar deta hai.
- **Aam galti:** Sirf lookup ke liye `[]` use karna — missing key error ho to `find` / `at` behtar hai.

Practice: `examples/06_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 7. Over-abstracting smell

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

Practice: `examples/07_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 8. Concrete examples

### Aasan Bhasha

Aaj ka idea — **Concrete examples** — SOLID in C++ ke bade theme ke andar aata hai. Ise ek tool ki tarah padho: ye kaam kya karta hai, kaunse rules enforce karta hai, aur un rules ko ignore karne par kya tootta hai?

### Chhota code

```cpp
// Explore: Concrete examples
#include <iostream>
int main() {
  std::cout << "practice: Concrete examples\n";
  return 0;
}
```

- **Yaad rakho:** `Concrete examples` use karne wala code likhne se pehle ek invariant bolo.
- **Aam galti:** `Concrete examples` ko copy-paste se use karna bina jaane ki wo kya own karta hai ya kab valid hai.

Practice: `examples/08_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 9. Refactor checklist

### Aasan Bhasha

Aaj ka idea — **Refactor checklist** — SOLID in C++ ke bade theme ke andar aata hai. Ise ek tool ki tarah padho: ye kaam kya karta hai, kaunse rules enforce karta hai, aur un rules ko ignore karne par kya tootta hai?

### Chhota code

```cpp
// Explore: Refactor checklist
#include <iostream>
int main() {
  std::cout << "practice: Refactor checklist\n";
  return 0;
}
```

- **Yaad rakho:** `Refactor checklist` use karne wala code likhne se pehle ek invariant bolo.
- **Aam galti:** `Refactor checklist` ko copy-paste se use karna bina jaane ki wo kya own karta hai ya kab valid hai.

Practice: `examples/09_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 10. A payment module sketch

### Aasan Bhasha

Aaj ka idea — **A payment module sketch** — SOLID in C++ ke bade theme ke andar aata hai. Ise ek tool ki tarah padho: ye kaam kya karta hai, kaunse rules enforce karta hai, aur un rules ko ignore karne par kya tootta hai?

### Chhota code

```cpp
// Explore: A payment module sketch
#include <iostream>
int main() {
  std::cout << "practice: A payment module sketch\n";
  return 0;
}
```

- **Yaad rakho:** `A payment module sketch` use karne wala code likhne se pehle ek invariant bolo.
- **Aam galti:** `A payment module sketch` ko copy-paste se use karna bina jaane ki wo kya own karta hai ya kab valid hai.

Practice: `examples/10_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

---

## Day 62 ke baad aapko ye aana chahiye

- `SOLID in C++` ko bina notes dekhe kisi dost ko samjha sakna.
- Saare 10 examples `-std=c++17 -Wall -Wextra` ke saath compile aur run karna (naye flags sirf tab jab din ko C++20+ chahiye).
- `answers.md` dekhne se pehle `questions.md` ke 5 sawaal answer karna.
- Ek chhota extra program likhna jo aaj ke kam se kam 3 concepts jodta ho.

Ya is din ko **Badsha hub** me kholo (`python3 hub/server.py`) aur Learn / Practice / Quiz tabs use karo.
