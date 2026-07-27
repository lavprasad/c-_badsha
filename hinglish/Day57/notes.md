# Day 57 -- Static members

Aaj ka goal: **Static members** ko aasan Hinglish me samajhna, har idea ka chhota code sample dekhna, phir `examples/` me practice karna.

Is din ko padhne ka tarika:
1. Har concept ka **Aasan Bhasha** section padho.
2. Code sample par nazar daalo -- pehle predict karo ki output kya aayega.
3. `examples/` me us concept ki file chalao.
4. Uske baad hi `questions.md` kholo.

| # | Concept |
|--:|---------|
| 1 | static data members |
| 2 | static member functions |
| 3 | Initialization order |
| 4 | Meyer's singleton |
| 5 | static in .cpp |
| 6 | constexpr static |
| 7 | Thread notes on statics |
| 8 | Counting instances |
| 9 | Factory with static |
| 10 | Avoiding global state |

---

## 1. static data members

### Aasan Bhasha

Aaj ka idea — **static data members** — Static members ke bade theme ke andar aata hai. Ise ek tool ki tarah padho: ye kaam kya karta hai, kaunse rules enforce karta hai, aur un rules ko ignore karne par kya tootta hai?

### Chhota code

```cpp
// Explore: static data members
#include <iostream>
int main() {
  std::cout << "practice: static data members\n";
  return 0;
}
```

- **Yaad rakho:** `static data members` use karne wala code likhne se pehle ek invariant bolo.
- **Aam galti:** `static data members` ko copy-paste se use karna bina jaane ki wo kya own karta hai ya kab valid hai.

Practice: `examples/01_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 2. static member functions

### Aasan Bhasha

Aaj ka idea — **static member functions** — Static members ke bade theme ke andar aata hai. Ise ek tool ki tarah padho: ye kaam kya karta hai, kaunse rules enforce karta hai, aur un rules ko ignore karne par kya tootta hai?

### Chhota code

```cpp
// Explore: static member functions
#include <iostream>
int main() {
  std::cout << "practice: static member functions\n";
  return 0;
}
```

- **Yaad rakho:** `static member functions` use karne wala code likhne se pehle ek invariant bolo.
- **Aam galti:** `static member functions` ko copy-paste se use karna bina jaane ki wo kya own karta hai ya kab valid hai.

Practice: `examples/02_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 3. Initialization order

### Aasan Bhasha

Aaj ka idea — **Initialization order** — Static members ke bade theme ke andar aata hai. Ise ek tool ki tarah padho: ye kaam kya karta hai, kaunse rules enforce karta hai, aur un rules ko ignore karne par kya tootta hai?

### Chhota code

```cpp
// Explore: Initialization order
#include <iostream>
int main() {
  std::cout << "practice: Initialization order\n";
  return 0;
}
```

- **Yaad rakho:** `Initialization order` use karne wala code likhne se pehle ek invariant bolo.
- **Aam galti:** `Initialization order` ko copy-paste se use karna bina jaane ki wo kya own karta hai ya kab valid hai.

Practice: `examples/03_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 4. Meyer's singleton

### Aasan Bhasha

Aaj ka idea — **Meyer's singleton** — Static members ke bade theme ke andar aata hai. Ise ek tool ki tarah padho: ye kaam kya karta hai, kaunse rules enforce karta hai, aur un rules ko ignore karne par kya tootta hai?

### Chhota code

```cpp
// Explore: Meyer's singleton
#include <iostream>
int main() {
  std::cout << "practice: Meyer's singleton\n";
  return 0;
}
```

- **Yaad rakho:** `Meyer's singleton` use karne wala code likhne se pehle ek invariant bolo.
- **Aam galti:** `Meyer's singleton` ko copy-paste se use karna bina jaane ki wo kya own karta hai ya kab valid hai.

Practice: `examples/04_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 5. static in .cpp

### Aasan Bhasha

Aaj ka idea — **static in .cpp** — Static members ke bade theme ke andar aata hai. Ise ek tool ki tarah padho: ye kaam kya karta hai, kaunse rules enforce karta hai, aur un rules ko ignore karne par kya tootta hai?

### Chhota code

```cpp
// Explore: static in .cpp
#include <iostream>
int main() {
  std::cout << "practice: static in .cpp\n";
  return 0;
}
```

- **Yaad rakho:** `static in .cpp` use karne wala code likhne se pehle ek invariant bolo.
- **Aam galti:** `static in .cpp` ko copy-paste se use karna bina jaane ki wo kya own karta hai ya kab valid hai.

Practice: `examples/05_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 6. constexpr static

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

## 7. Thread notes on statics

### Aasan Bhasha

Threads code ko saath-saath chalate hain. Shared mutable data ko mutex (ya atomics) chahiye. RAII locks (`lock_guard`) prefer karo taaki exception par bhi unlock ho jaaye.

### Chhota code

```cpp
std::mutex m;
int counter = 0;
{
  std::lock_guard<std::mutex> g(m);
  ++counter;
}
```

- **Yaad rakho:** Non-atomic shared data par data race undefined behaviour hai.
- **Aam galti:** Alag threads me do mutex ulte order me lock karna → deadlock.

Practice: `examples/07_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 8. Counting instances

### Aasan Bhasha

Aaj ka idea — **Counting instances** — Static members ke bade theme ke andar aata hai. Ise ek tool ki tarah padho: ye kaam kya karta hai, kaunse rules enforce karta hai, aur un rules ko ignore karne par kya tootta hai?

### Chhota code

```cpp
// Explore: Counting instances
#include <iostream>
int main() {
  std::cout << "practice: Counting instances\n";
  return 0;
}
```

- **Yaad rakho:** `Counting instances` use karne wala code likhne se pehle ek invariant bolo.
- **Aam galti:** `Counting instances` ko copy-paste se use karna bina jaane ki wo kya own karta hai ya kab valid hai.

Practice: `examples/08_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 9. Factory with static

### Aasan Bhasha

Aaj ka idea — **Factory with static** — Static members ke bade theme ke andar aata hai. Ise ek tool ki tarah padho: ye kaam kya karta hai, kaunse rules enforce karta hai, aur un rules ko ignore karne par kya tootta hai?

### Chhota code

```cpp
// Explore: Factory with static
#include <iostream>
int main() {
  std::cout << "practice: Factory with static\n";
  return 0;
}
```

- **Yaad rakho:** `Factory with static` use karne wala code likhne se pehle ek invariant bolo.
- **Aam galti:** `Factory with static` ko copy-paste se use karna bina jaane ki wo kya own karta hai ya kab valid hai.

Practice: `examples/09_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 10. Avoiding global state

### Aasan Bhasha

Aaj ka idea — **Avoiding global state** — Static members ke bade theme ke andar aata hai. Ise ek tool ki tarah padho: ye kaam kya karta hai, kaunse rules enforce karta hai, aur un rules ko ignore karne par kya tootta hai?

### Chhota code

```cpp
// Explore: Avoiding global state
#include <iostream>
int main() {
  std::cout << "practice: Avoiding global state\n";
  return 0;
}
```

- **Yaad rakho:** `Avoiding global state` use karne wala code likhne se pehle ek invariant bolo.
- **Aam galti:** `Avoiding global state` ko copy-paste se use karna bina jaane ki wo kya own karta hai ya kab valid hai.

Practice: `examples/10_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

---

## Day 57 ke baad aapko ye aana chahiye

- `Static members` ko bina notes dekhe kisi dost ko samjha sakna.
- Saare 10 examples `-std=c++17 -Wall -Wextra` ke saath compile aur run karna (naye flags sirf tab jab din ko C++20+ chahiye).
- `answers.md` dekhne se pehle `questions.md` ke 5 sawaal answer karna.
- Ek chhota extra program likhna jo aaj ke kam se kam 3 concepts jodta ho.

Ya is din ko **Badsha hub** me kholo (`python3 hub/server.py`) aur Learn / Practice / Quiz tabs use karo.
