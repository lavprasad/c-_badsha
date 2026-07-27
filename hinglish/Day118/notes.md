# Day 118 -- consteval & constinit

Aaj ka goal: **consteval & constinit** ko aasan Hinglish me samajhna, har idea ka chhota code sample dekhna, phir `examples/` me practice karna.

Is din ko padhne ka tarika:
1. Har concept ka **Aasan Bhasha** section padho.
2. Code sample par nazar daalo -- pehle predict karo ki output kya aayega.
3. `examples/` me us concept ki file chalao.
4. Uske baad hi `questions.md` kholo.

| # | Concept |
|--:|---------|
| 1 | consteval functions |
| 2 | constinit variables |
| 3 | vs constexpr |
| 4 | Compile-time mandates |
| 5 | Immediate functions |
| 6 | Static initialization |
| 7 | Use cases |
| 8 | Errors at compile time |
| 9 | Interaction with templates |
| 10 | A consteval parser bit |

---

## 1. consteval functions

### Aasan Bhasha

Aaj ka idea — **consteval functions** — consteval & constinit ke bade theme ke andar aata hai. Ise ek tool ki tarah padho: ye kaam kya karta hai, kaunse rules enforce karta hai, aur un rules ko ignore karne par kya tootta hai?

### Chhota code

```cpp
// Explore: consteval functions
#include <iostream>
int main() {
  std::cout << "practice: consteval functions\n";
  return 0;
}
```

- **Yaad rakho:** `consteval functions` use karne wala code likhne se pehle ek invariant bolo.
- **Aam galti:** `consteval functions` ko copy-paste se use karna bina jaane ki wo kya own karta hai ya kab valid hai.

Practice: `examples/01_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 2. constinit variables

### Aasan Bhasha

Aaj ka idea — **constinit variables** — consteval & constinit ke bade theme ke andar aata hai. Ise ek tool ki tarah padho: ye kaam kya karta hai, kaunse rules enforce karta hai, aur un rules ko ignore karne par kya tootta hai?

### Chhota code

```cpp
// Explore: constinit variables
#include <iostream>
int main() {
  std::cout << "practice: constinit variables\n";
  return 0;
}
```

- **Yaad rakho:** `constinit variables` use karne wala code likhne se pehle ek invariant bolo.
- **Aam galti:** `constinit variables` ko copy-paste se use karna bina jaane ki wo kya own karta hai ya kab valid hai.

Practice: `examples/02_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 3. vs constexpr

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

Practice: `examples/03_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 4. Compile-time mandates

### Aasan Bhasha

Aaj ka idea — **Compile-time mandates** — consteval & constinit ke bade theme ke andar aata hai. Ise ek tool ki tarah padho: ye kaam kya karta hai, kaunse rules enforce karta hai, aur un rules ko ignore karne par kya tootta hai?

### Chhota code

```cpp
// Explore: Compile-time mandates
#include <iostream>
int main() {
  std::cout << "practice: Compile-time mandates\n";
  return 0;
}
```

- **Yaad rakho:** `Compile-time mandates` use karne wala code likhne se pehle ek invariant bolo.
- **Aam galti:** `Compile-time mandates` ko copy-paste se use karna bina jaane ki wo kya own karta hai ya kab valid hai.

Practice: `examples/04_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 5. Immediate functions

### Aasan Bhasha

Aaj ka idea — **Immediate functions** — consteval & constinit ke bade theme ke andar aata hai. Ise ek tool ki tarah padho: ye kaam kya karta hai, kaunse rules enforce karta hai, aur un rules ko ignore karne par kya tootta hai?

### Chhota code

```cpp
// Explore: Immediate functions
#include <iostream>
int main() {
  std::cout << "practice: Immediate functions\n";
  return 0;
}
```

- **Yaad rakho:** `Immediate functions` use karne wala code likhne se pehle ek invariant bolo.
- **Aam galti:** `Immediate functions` ko copy-paste se use karna bina jaane ki wo kya own karta hai ya kab valid hai.

Practice: `examples/05_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 6. Static initialization

### Aasan Bhasha

Aaj ka idea — **Static initialization** — consteval & constinit ke bade theme ke andar aata hai. Ise ek tool ki tarah padho: ye kaam kya karta hai, kaunse rules enforce karta hai, aur un rules ko ignore karne par kya tootta hai?

### Chhota code

```cpp
// Explore: Static initialization
#include <iostream>
int main() {
  std::cout << "practice: Static initialization\n";
  return 0;
}
```

- **Yaad rakho:** `Static initialization` use karne wala code likhne se pehle ek invariant bolo.
- **Aam galti:** `Static initialization` ko copy-paste se use karna bina jaane ki wo kya own karta hai ya kab valid hai.

Practice: `examples/06_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 7. Use cases

### Aasan Bhasha

Aaj ka idea — **Use cases** — consteval & constinit ke bade theme ke andar aata hai. Ise ek tool ki tarah padho: ye kaam kya karta hai, kaunse rules enforce karta hai, aur un rules ko ignore karne par kya tootta hai?

### Chhota code

```cpp
// Explore: Use cases
#include <iostream>
int main() {
  std::cout << "practice: Use cases\n";
  return 0;
}
```

- **Yaad rakho:** `Use cases` use karne wala code likhne se pehle ek invariant bolo.
- **Aam galti:** `Use cases` ko copy-paste se use karna bina jaane ki wo kya own karta hai ya kab valid hai.

Practice: `examples/07_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 8. Errors at compile time

### Aasan Bhasha

Aaj ka idea — **Errors at compile time** — consteval & constinit ke bade theme ke andar aata hai. Ise ek tool ki tarah padho: ye kaam kya karta hai, kaunse rules enforce karta hai, aur un rules ko ignore karne par kya tootta hai?

### Chhota code

```cpp
// Explore: Errors at compile time
#include <iostream>
int main() {
  std::cout << "practice: Errors at compile time\n";
  return 0;
}
```

- **Yaad rakho:** `Errors at compile time` use karne wala code likhne se pehle ek invariant bolo.
- **Aam galti:** `Errors at compile time` ko copy-paste se use karna bina jaane ki wo kya own karta hai ya kab valid hai.

Practice: `examples/08_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 9. Interaction with templates

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

Practice: `examples/09_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 10. A consteval parser bit

### Aasan Bhasha

Bit tricks ek integer ke andar alag-alag flags set, clear aur test karte hain. Shift-heavy code me unsigned types prefer karo. `std::bitset` fixed-width bit sets ko padhne layak banata hai.

### Chhota code

```cpp
unsigned flags = 0;
flags |= (1u << 3);           // set bit 3
bool on = flags & (1u << 3);  // test
flags &= ~(1u << 3);          // clear
```

- **Yaad rakho:** Signed ints par sign bit tak ya uske aage shift karna UB ho sakta hai.
- **Aam galti:** Bitmasks ke liye signed `int` use karna aur sign bit me shift kar dena.

Practice: `examples/10_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

---

## Day 118 ke baad aapko ye aana chahiye

- `consteval & constinit` ko bina notes dekhe kisi dost ko samjha sakna.
- Saare 10 examples `-std=c++17 -Wall -Wextra` ke saath compile aur run karna (naye flags sirf tab jab din ko C++20+ chahiye).
- `answers.md` dekhne se pehle `questions.md` ke 5 sawaal answer karna.
- Ek chhota extra program likhna jo aaj ke kam se kam 3 concepts jodta ho.

Ya is din ko **Badsha hub** me kholo (`python3 hub/server.py`) aur Learn / Practice / Quiz tabs use karo.
