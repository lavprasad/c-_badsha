# Day 67 -- CRTP

Aaj ka goal: **CRTP** ko aasan Hinglish me samajhna, har idea ka chhota code sample dekhna, phir `examples/` me practice karna.

Is din ko padhne ka tarika:
1. Har concept ka **Aasan Bhasha** section padho.
2. Code sample par nazar daalo -- pehle predict karo ki output kya aayega.
3. `examples/` me us concept ki file chalao.
4. Uske baad hi `questions.md` kholo.

| # | Concept |
|--:|---------|
| 1 | Curiously recurring template |
| 2 | Static polymorphism |
| 3 | Mixin via CRTP |
| 4 | enable_shared_from_this style |
| 5 | Avoiding virtuals |
| 6 | Expression templates hint |
| 7 | Pitfalls |
| 8 | Debugging CRTP |
| 9 | When CRTP helps |
| 10 | A counted object CRTP |

---

## 1. Curiously recurring template

### Aasan Bhasha

Templates har type ke liye code generate karte hain. Ye errors ko compile time par le aate hain aur runtime virtual dispatch hata dete hain. Inhe padhne layak rakho; jahan ho sake parameters constrain karo.

### Chhota code

```cpp
template <typename T>
T clamp_pos(T x) {
  return x < T{0} ? T{0} : x;
}
```

- **Yaad rakho:** Templates aksar headers me rehte hain taaki har TU instantiate kar sake.
- **Aam galti:** Template ki definition sirf `.cpp` me rakhna aur phir linker error par hairan hona.

Practice: `examples/01_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 2. Static polymorphism

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

## 3. Mixin via CRTP

### Aasan Bhasha

Aaj ka idea — **Mixin via CRTP** — CRTP ke bade theme ke andar aata hai. Ise ek tool ki tarah padho: ye kaam kya karta hai, kaunse rules enforce karta hai, aur un rules ko ignore karne par kya tootta hai?

### Chhota code

```cpp
// Explore: Mixin via CRTP
#include <iostream>
int main() {
  std::cout << "practice: Mixin via CRTP\n";
  return 0;
}
```

- **Yaad rakho:** `Mixin via CRTP` use karne wala code likhne se pehle ek invariant bolo.
- **Aam galti:** `Mixin via CRTP` ko copy-paste se use karna bina jaane ki wo kya own karta hai ya kab valid hai.

Practice: `examples/03_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 4. enable_shared_from_this style

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

## 5. Avoiding virtuals

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

Practice: `examples/05_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 6. Expression templates hint

### Aasan Bhasha

Templates har type ke liye code generate karte hain. Ye errors ko compile time par le aate hain aur runtime virtual dispatch hata dete hain. Inhe padhne layak rakho; jahan ho sake parameters constrain karo.

### Chhota code

```cpp
template <typename T>
T clamp_pos(T x) {
  return x < T{0} ? T{0} : x;
}
```

- **Yaad rakho:** Templates aksar headers me rehte hain taaki har TU instantiate kar sake.
- **Aam galti:** Template ki definition sirf `.cpp` me rakhna aur phir linker error par hairan hona.

Practice: `examples/06_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 7. Pitfalls

### Aasan Bhasha

Aaj ka idea — **Pitfalls** — CRTP ke bade theme ke andar aata hai. Ise ek tool ki tarah padho: ye kaam kya karta hai, kaunse rules enforce karta hai, aur un rules ko ignore karne par kya tootta hai?

### Chhota code

```cpp
// Explore: Pitfalls
#include <iostream>
int main() {
  std::cout << "practice: Pitfalls\n";
  return 0;
}
```

- **Yaad rakho:** `Pitfalls` use karne wala code likhne se pehle ek invariant bolo.
- **Aam galti:** `Pitfalls` ko copy-paste se use karna bina jaane ki wo kya own karta hai ya kab valid hai.

Practice: `examples/07_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 8. Debugging CRTP

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

Practice: `examples/08_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 9. When CRTP helps

### Aasan Bhasha

Aaj ka idea — **When CRTP helps** — CRTP ke bade theme ke andar aata hai. Ise ek tool ki tarah padho: ye kaam kya karta hai, kaunse rules enforce karta hai, aur un rules ko ignore karne par kya tootta hai?

### Chhota code

```cpp
// Explore: When CRTP helps
#include <iostream>
int main() {
  std::cout << "practice: When CRTP helps\n";
  return 0;
}
```

- **Yaad rakho:** `When CRTP helps` use karne wala code likhne se pehle ek invariant bolo.
- **Aam galti:** `When CRTP helps` ko copy-paste se use karna bina jaane ki wo kya own karta hai ya kab valid hai.

Practice: `examples/09_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 10. A counted object CRTP

### Aasan Bhasha

Aaj ka idea — **A counted object CRTP** — CRTP ke bade theme ke andar aata hai. Ise ek tool ki tarah padho: ye kaam kya karta hai, kaunse rules enforce karta hai, aur un rules ko ignore karne par kya tootta hai?

### Chhota code

```cpp
// Explore: A counted object CRTP
#include <iostream>
int main() {
  std::cout << "practice: A counted object CRTP\n";
  return 0;
}
```

- **Yaad rakho:** `A counted object CRTP` use karne wala code likhne se pehle ek invariant bolo.
- **Aam galti:** `A counted object CRTP` ko copy-paste se use karna bina jaane ki wo kya own karta hai ya kab valid hai.

Practice: `examples/10_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

---

## Day 67 ke baad aapko ye aana chahiye

- `CRTP` ko bina notes dekhe kisi dost ko samjha sakna.
- Saare 10 examples `-std=c++17 -Wall -Wextra` ke saath compile aur run karna (naye flags sirf tab jab din ko C++20+ chahiye).
- `answers.md` dekhne se pehle `questions.md` ke 5 sawaal answer karna.
- Ek chhota extra program likhna jo aaj ke kam se kam 3 concepts jodta ho.

Ya is din ko **Badsha hub** me kholo (`python3 hub/server.py`) aur Learn / Practice / Quiz tabs use karo.
