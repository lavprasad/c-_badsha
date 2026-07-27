# Day 60 -- RAII patterns

Aaj ka goal: **RAII patterns** ko aasan Hinglish me samajhna, har idea ka chhota code sample dekhna, phir `examples/` me practice karna.

Is din ko padhne ka tarika:
1. Har concept ka **Aasan Bhasha** section padho.
2. Code sample par nazar daalo -- pehle predict karo ki output kya aayega.
3. `examples/` me us concept ki file chalao.
4. Uske baad hi `questions.md` kholo.

| # | Concept |
|--:|---------|
| 1 | Locks as RAII |
| 2 | File handles as RAII |
| 3 | Scope guards |
| 4 | Transaction-like rollback |
| 5 | Custom deleter RAII |
| 6 | Finally-like patterns |
| 7 | Exception-safe acquire |
| 8 | Multiple resources |
| 9 | Order of destruction |
| 10 | A scoped timer |

---

## 1. Locks as RAII

### Aasan Bhasha

Aaj ka idea — **Locks as RAII** — RAII patterns ke bade theme ke andar aata hai. Ise ek tool ki tarah padho: ye kaam kya karta hai, kaunse rules enforce karta hai, aur un rules ko ignore karne par kya tootta hai?

### Chhota code

```cpp
// Explore: Locks as RAII
#include <iostream>
int main() {
  std::cout << "practice: Locks as RAII\n";
  return 0;
}
```

- **Yaad rakho:** `Locks as RAII` use karne wala code likhne se pehle ek invariant bolo.
- **Aam galti:** `Locks as RAII` ko copy-paste se use karna bina jaane ki wo kya own karta hai ya kab valid hai.

Practice: `examples/01_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 2. File handles as RAII

### Aasan Bhasha

Aaj ka idea — **File handles as RAII** — RAII patterns ke bade theme ke andar aata hai. Ise ek tool ki tarah padho: ye kaam kya karta hai, kaunse rules enforce karta hai, aur un rules ko ignore karne par kya tootta hai?

### Chhota code

```cpp
// Explore: File handles as RAII
#include <iostream>
int main() {
  std::cout << "practice: File handles as RAII\n";
  return 0;
}
```

- **Yaad rakho:** `File handles as RAII` use karne wala code likhne se pehle ek invariant bolo.
- **Aam galti:** `File handles as RAII` ko copy-paste se use karna bina jaane ki wo kya own karta hai ya kab valid hai.

Practice: `examples/02_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 3. Scope guards

### Aasan Bhasha

Aaj ka idea — **Scope guards** — RAII patterns ke bade theme ke andar aata hai. Ise ek tool ki tarah padho: ye kaam kya karta hai, kaunse rules enforce karta hai, aur un rules ko ignore karne par kya tootta hai?

### Chhota code

```cpp
// Explore: Scope guards
#include <iostream>
int main() {
  std::cout << "practice: Scope guards\n";
  return 0;
}
```

- **Yaad rakho:** `Scope guards` use karne wala code likhne se pehle ek invariant bolo.
- **Aam galti:** `Scope guards` ko copy-paste se use karna bina jaane ki wo kya own karta hai ya kab valid hai.

Practice: `examples/03_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 4. Transaction-like rollback

### Aasan Bhasha

Aaj ka idea — **Transaction-like rollback** — RAII patterns ke bade theme ke andar aata hai. Ise ek tool ki tarah padho: ye kaam kya karta hai, kaunse rules enforce karta hai, aur un rules ko ignore karne par kya tootta hai?

### Chhota code

```cpp
// Explore: Transaction-like rollback
#include <iostream>
int main() {
  std::cout << "practice: Transaction-like rollback\n";
  return 0;
}
```

- **Yaad rakho:** `Transaction-like rollback` use karne wala code likhne se pehle ek invariant bolo.
- **Aam galti:** `Transaction-like rollback` ko copy-paste se use karna bina jaane ki wo kya own karta hai ya kab valid hai.

Practice: `examples/04_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 5. Custom deleter RAII

### Aasan Bhasha

Heap tab tak jeeta hai jab tak aap use release na karo. Raw `new`/`delete` ki jagah smart pointers aur containers prefer karo. Agar raw ownership hi chahiye to har `new` ke liye har path par exactly ek matching `delete` ho.

### Chhota code

```cpp
// Prefer:
auto p = std::make_unique<int[]>(10);
// instead of new int[10] / delete[]
```

- **Yaad rakho:** `new` ke saath `delete`, aur `new[]` ke saath `delete[]`.
- **Aam galti:** `new[]` se aayi array memory par `delete` use karna.

Practice: `examples/05_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 6. Finally-like patterns

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

Practice: `examples/06_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 7. Exception-safe acquire

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

Practice: `examples/07_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 8. Multiple resources

### Aasan Bhasha

Aaj ka idea — **Multiple resources** — RAII patterns ke bade theme ke andar aata hai. Ise ek tool ki tarah padho: ye kaam kya karta hai, kaunse rules enforce karta hai, aur un rules ko ignore karne par kya tootta hai?

### Chhota code

```cpp
// Explore: Multiple resources
#include <iostream>
int main() {
  std::cout << "practice: Multiple resources\n";
  return 0;
}
```

- **Yaad rakho:** `Multiple resources` use karne wala code likhne se pehle ek invariant bolo.
- **Aam galti:** `Multiple resources` ko copy-paste se use karna bina jaane ki wo kya own karta hai ya kab valid hai.

Practice: `examples/08_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 9. Order of destruction

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

Practice: `examples/09_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 10. A scoped timer

### Aasan Bhasha

Aaj ka idea — **A scoped timer** — RAII patterns ke bade theme ke andar aata hai. Ise ek tool ki tarah padho: ye kaam kya karta hai, kaunse rules enforce karta hai, aur un rules ko ignore karne par kya tootta hai?

### Chhota code

```cpp
// Explore: A scoped timer
#include <iostream>
int main() {
  std::cout << "practice: A scoped timer\n";
  return 0;
}
```

- **Yaad rakho:** `A scoped timer` use karne wala code likhne se pehle ek invariant bolo.
- **Aam galti:** `A scoped timer` ko copy-paste se use karna bina jaane ki wo kya own karta hai ya kab valid hai.

Practice: `examples/10_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

---

## Day 60 ke baad aapko ye aana chahiye

- `RAII patterns` ko bina notes dekhe kisi dost ko samjha sakna.
- Saare 10 examples `-std=c++17 -Wall -Wextra` ke saath compile aur run karna (naye flags sirf tab jab din ko C++20+ chahiye).
- `answers.md` dekhne se pehle `questions.md` ke 5 sawaal answer karna.
- Ek chhota extra program likhna jo aaj ke kam se kam 3 concepts jodta ho.

Ya is din ko **Badsha hub** me kholo (`python3 hub/server.py`) aur Learn / Practice / Quiz tabs use karo.
