# Day 149 -- Feature flags & config

Aaj ka goal: **Feature flags & config** ko aasan Hinglish me samajhna, har idea ka chhota code sample dekhna, phir `examples/` me practice karna.

Is din ko padhne ka tarika:
1. Har concept ka **Aasan Bhasha** section padho.
2. Code sample par nazar daalo -- pehle predict karo ki output kya aayega.
3. `examples/` me us concept ki file chalao.
4. Uske baad hi `questions.md` kholo.

| # | Concept |
|--:|---------|
| 1 | Compile-time flags |
| 2 | Runtime config files |
| 3 | Environment overrides |
| 4 | Typed config structs |
| 5 | Validation on load |
| 6 | Hot reload risks |
| 7 | Defaults & migrations |
| 8 | Secrets handling |
| 9 | Testing with fixtures |
| 10 | A config loader |

---

## 1. Compile-time flags

### Aasan Bhasha

Aaj ka idea — **Compile-time flags** — Feature flags & config ke bade theme ke andar aata hai. Ise ek tool ki tarah padho: ye kaam kya karta hai, kaunse rules enforce karta hai, aur un rules ko ignore karne par kya tootta hai?

### Chhota code

```cpp
// Explore: Compile-time flags
#include <iostream>
int main() {
  std::cout << "practice: Compile-time flags\n";
  return 0;
}
```

- **Yaad rakho:** `Compile-time flags` use karne wala code likhne se pehle ek invariant bolo.
- **Aam galti:** `Compile-time flags` ko copy-paste se use karna bina jaane ki wo kya own karta hai ya kab valid hai.

Practice: `examples/01_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 2. Runtime config files

### Aasan Bhasha

Aaj ka idea — **Runtime config files** — Feature flags & config ke bade theme ke andar aata hai. Ise ek tool ki tarah padho: ye kaam kya karta hai, kaunse rules enforce karta hai, aur un rules ko ignore karne par kya tootta hai?

### Chhota code

```cpp
// Explore: Runtime config files
#include <iostream>
int main() {
  std::cout << "practice: Runtime config files\n";
  return 0;
}
```

- **Yaad rakho:** `Runtime config files` use karne wala code likhne se pehle ek invariant bolo.
- **Aam galti:** `Runtime config files` ko copy-paste se use karna bina jaane ki wo kya own karta hai ya kab valid hai.

Practice: `examples/02_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 3. Environment overrides

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

Practice: `examples/03_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 4. Typed config structs

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

Practice: `examples/04_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 5. Validation on load

### Aasan Bhasha

Aaj ka idea — **Validation on load** — Feature flags & config ke bade theme ke andar aata hai. Ise ek tool ki tarah padho: ye kaam kya karta hai, kaunse rules enforce karta hai, aur un rules ko ignore karne par kya tootta hai?

### Chhota code

```cpp
// Explore: Validation on load
#include <iostream>
int main() {
  std::cout << "practice: Validation on load\n";
  return 0;
}
```

- **Yaad rakho:** `Validation on load` use karne wala code likhne se pehle ek invariant bolo.
- **Aam galti:** `Validation on load` ko copy-paste se use karna bina jaane ki wo kya own karta hai ya kab valid hai.

Practice: `examples/05_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 6. Hot reload risks

### Aasan Bhasha

Aaj ka idea — **Hot reload risks** — Feature flags & config ke bade theme ke andar aata hai. Ise ek tool ki tarah padho: ye kaam kya karta hai, kaunse rules enforce karta hai, aur un rules ko ignore karne par kya tootta hai?

### Chhota code

```cpp
// Explore: Hot reload risks
#include <iostream>
int main() {
  std::cout << "practice: Hot reload risks\n";
  return 0;
}
```

- **Yaad rakho:** `Hot reload risks` use karne wala code likhne se pehle ek invariant bolo.
- **Aam galti:** `Hot reload risks` ko copy-paste se use karna bina jaane ki wo kya own karta hai ya kab valid hai.

Practice: `examples/06_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 7. Defaults & migrations

### Aasan Bhasha

Aaj ka idea — **Defaults & migrations** — Feature flags & config ke bade theme ke andar aata hai. Ise ek tool ki tarah padho: ye kaam kya karta hai, kaunse rules enforce karta hai, aur un rules ko ignore karne par kya tootta hai?

### Chhota code

```cpp
// Explore: Defaults & migrations
#include <iostream>
int main() {
  std::cout << "practice: Defaults & migrations\n";
  return 0;
}
```

- **Yaad rakho:** `Defaults & migrations` use karne wala code likhne se pehle ek invariant bolo.
- **Aam galti:** `Defaults & migrations` ko copy-paste se use karna bina jaane ki wo kya own karta hai ya kab valid hai.

Practice: `examples/07_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 8. Secrets handling

### Aasan Bhasha

Aaj ka idea — **Secrets handling** — Feature flags & config ke bade theme ke andar aata hai. Ise ek tool ki tarah padho: ye kaam kya karta hai, kaunse rules enforce karta hai, aur un rules ko ignore karne par kya tootta hai?

### Chhota code

```cpp
// Explore: Secrets handling
#include <iostream>
int main() {
  std::cout << "practice: Secrets handling\n";
  return 0;
}
```

- **Yaad rakho:** `Secrets handling` use karne wala code likhne se pehle ek invariant bolo.
- **Aam galti:** `Secrets handling` ko copy-paste se use karna bina jaane ki wo kya own karta hai ya kab valid hai.

Practice: `examples/08_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 9. Testing with fixtures

### Aasan Bhasha

Projects skills ko jodte hain: saaf requirements, chhote modules, tests aur imaandaar docs. Ek chhoti vertical slice se shuru karo jo end-to-end chale, phir features mota karo.

### Chhota code

```cpp
int main(int argc, char** argv) {
  if (argc < 2) {
    std::cerr << "usage: tool <file>\n";
    return 1;
  }
  // ...
}
```

- **Yaad rakho:** Edge cases chamkane se pehle ek chalne wala subset ship karo.
- **Aam galti:** Hafton tak scaffolding banana jisme kuch chalta hi na ho.

Practice: `examples/09_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 10. A config loader

### Aasan Bhasha

Aaj ka idea — **A config loader** — Feature flags & config ke bade theme ke andar aata hai. Ise ek tool ki tarah padho: ye kaam kya karta hai, kaunse rules enforce karta hai, aur un rules ko ignore karne par kya tootta hai?

### Chhota code

```cpp
// Explore: A config loader
#include <iostream>
int main() {
  std::cout << "practice: A config loader\n";
  return 0;
}
```

- **Yaad rakho:** `A config loader` use karne wala code likhne se pehle ek invariant bolo.
- **Aam galti:** `A config loader` ko copy-paste se use karna bina jaane ki wo kya own karta hai ya kab valid hai.

Practice: `examples/10_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

---

## Day 149 ke baad aapko ye aana chahiye

- `Feature flags & config` ko bina notes dekhe kisi dost ko samjha sakna.
- Saare 10 examples `-std=c++17 -Wall -Wextra` ke saath compile aur run karna (naye flags sirf tab jab din ko C++20+ chahiye).
- `answers.md` dekhne se pehle `questions.md` ke 5 sawaal answer karna.
- Ek chhota extra program likhna jo aaj ke kam se kam 3 concepts jodta ho.

Ya is din ko **Badsha hub** me kholo (`python3 hub/server.py`) aur Learn / Practice / Quiz tabs use karo.
