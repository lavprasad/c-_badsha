# Day 30 -- std::pair & std::tuple

Aaj ka goal: **std::pair & std::tuple** ko aasan Hinglish me samajhna, har idea ka chhota code sample dekhna, phir `examples/` me practice karna.

Is din ko padhne ka tarika:
1. Har concept ka **Aasan Bhasha** section padho.
2. Code sample par nazar daalo -- pehle predict karo ki output kya aayega.
3. `examples/` me us concept ki file chalao.
4. Uske baad hi `questions.md` kholo.

| # | Concept |
|--:|---------|
| 1 | std::pair basics |
| 2 | std::make_pair |
| 3 | std::tuple |
| 4 | std::get and structured bindings |
| 5 | tie for unpacking |
| 6 | Comparing pairs/tuples |
| 7 | Returning multiple values |
| 8 | tuple_size / tuple_element idea |
| 9 | When to prefer a struct |
| 10 | A key-value demo |

---

## 1. std::pair basics

### Aasan Bhasha

Aaj ka idea — **std::pair basics** — std::pair & std::tuple ke bade theme ke andar aata hai. Ise ek tool ki tarah padho: ye kaam kya karta hai, kaunse rules enforce karta hai, aur un rules ko ignore karne par kya tootta hai?

### Chhota code

```cpp
// Explore: std::pair basics
#include <iostream>
int main() {
  std::cout << "practice: std::pair basics\n";
  return 0;
}
```

- **Yaad rakho:** `std::pair basics` use karne wala code likhne se pehle ek invariant bolo.
- **Aam galti:** `std::pair basics` ko copy-paste se use karna bina jaane ki wo kya own karta hai ya kab valid hai.

Practice: `examples/01_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 2. std::make_pair

### Aasan Bhasha

Aaj ka idea — **std::make_pair** — std::pair & std::tuple ke bade theme ke andar aata hai. Ise ek tool ki tarah padho: ye kaam kya karta hai, kaunse rules enforce karta hai, aur un rules ko ignore karne par kya tootta hai?

### Chhota code

```cpp
// Explore: std::make_pair
#include <iostream>
int main() {
  std::cout << "practice: std::make_pair\n";
  return 0;
}
```

- **Yaad rakho:** `std::make_pair` use karne wala code likhne se pehle ek invariant bolo.
- **Aam galti:** `std::make_pair` ko copy-paste se use karna bina jaane ki wo kya own karta hai ya kab valid hai.

Practice: `examples/02_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 3. std::tuple

### Aasan Bhasha

Aaj ka idea — **std::tuple** — std::pair & std::tuple ke bade theme ke andar aata hai. Ise ek tool ki tarah padho: ye kaam kya karta hai, kaunse rules enforce karta hai, aur un rules ko ignore karne par kya tootta hai?

### Chhota code

```cpp
// Explore: std::tuple
#include <iostream>
int main() {
  std::cout << "practice: std::tuple\n";
  return 0;
}
```

- **Yaad rakho:** `std::tuple` use karne wala code likhne se pehle ek invariant bolo.
- **Aam galti:** `std::tuple` ko copy-paste se use karna bina jaane ki wo kya own karta hai ya kab valid hai.

Practice: `examples/03_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 4. std::get and structured bindings

### Aasan Bhasha

Sockets network bytes ke liye OS endpoints hain. TCP reliable stream deta hai; messages ki framing phir bhi aapko khud karni padti hai. Return codes hamesha check karo aur partial read/write handle karo.

### Chhota code

```cpp
// Conceptual — details are OS-specific
// sock = socket(...);
// connect(sock, ...);
// send(sock, buf, n, 0);
```

- **Yaad rakho:** Network data bytes hai; integers ko endian helpers se convert karo.
- **Aam galti:** Ye maan lena ki ek `recv` poora ek application message deta hai.

Practice: `examples/04_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 5. tie for unpacking

### Aasan Bhasha

Aaj ka idea — **tie for unpacking** — std::pair & std::tuple ke bade theme ke andar aata hai. Ise ek tool ki tarah padho: ye kaam kya karta hai, kaunse rules enforce karta hai, aur un rules ko ignore karne par kya tootta hai?

### Chhota code

```cpp
// Explore: tie for unpacking
#include <iostream>
int main() {
  std::cout << "practice: tie for unpacking\n";
  return 0;
}
```

- **Yaad rakho:** `tie for unpacking` use karne wala code likhne se pehle ek invariant bolo.
- **Aam galti:** `tie for unpacking` ko copy-paste se use karna bina jaane ki wo kya own karta hai ya kab valid hai.

Practice: `examples/05_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 6. Comparing pairs/tuples

### Aasan Bhasha

Aaj ka idea — **Comparing pairs/tuples** — std::pair & std::tuple ke bade theme ke andar aata hai. Ise ek tool ki tarah padho: ye kaam kya karta hai, kaunse rules enforce karta hai, aur un rules ko ignore karne par kya tootta hai?

### Chhota code

```cpp
// Explore: Comparing pairs/tuples
#include <iostream>
int main() {
  std::cout << "practice: Comparing pairs/tuples\n";
  return 0;
}
```

- **Yaad rakho:** `Comparing pairs/tuples` use karne wala code likhne se pehle ek invariant bolo.
- **Aam galti:** `Comparing pairs/tuples` ko copy-paste se use karna bina jaane ki wo kya own karta hai ya kab valid hai.

Practice: `examples/06_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 7. Returning multiple values

### Aasan Bhasha

Aaj ka idea — **Returning multiple values** — std::pair & std::tuple ke bade theme ke andar aata hai. Ise ek tool ki tarah padho: ye kaam kya karta hai, kaunse rules enforce karta hai, aur un rules ko ignore karne par kya tootta hai?

### Chhota code

```cpp
// Explore: Returning multiple values
#include <iostream>
int main() {
  std::cout << "practice: Returning multiple values\n";
  return 0;
}
```

- **Yaad rakho:** `Returning multiple values` use karne wala code likhne se pehle ek invariant bolo.
- **Aam galti:** `Returning multiple values` ko copy-paste se use karna bina jaane ki wo kya own karta hai ya kab valid hai.

Practice: `examples/07_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 8. tuple_size / tuple_element idea

### Aasan Bhasha

Aaj ka idea — **tuple_size / tuple_element idea** — std::pair & std::tuple ke bade theme ke andar aata hai. Ise ek tool ki tarah padho: ye kaam kya karta hai, kaunse rules enforce karta hai, aur un rules ko ignore karne par kya tootta hai?

### Chhota code

```cpp
// Explore: tuple_size / tuple_element idea
#include <iostream>
int main() {
  std::cout << "practice: tuple_size / tuple_element idea\n";
  return 0;
}
```

- **Yaad rakho:** `tuple_size / tuple_element idea` use karne wala code likhne se pehle ek invariant bolo.
- **Aam galti:** `tuple_size / tuple_element idea` ko copy-paste se use karna bina jaane ki wo kya own karta hai ya kab valid hai.

Practice: `examples/08_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 9. When to prefer a struct

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

## 10. A key-value demo

### Aasan Bhasha

Aaj ka idea — **A key-value demo** — std::pair & std::tuple ke bade theme ke andar aata hai. Ise ek tool ki tarah padho: ye kaam kya karta hai, kaunse rules enforce karta hai, aur un rules ko ignore karne par kya tootta hai?

### Chhota code

```cpp
// Explore: A key-value demo
#include <iostream>
int main() {
  std::cout << "practice: A key-value demo\n";
  return 0;
}
```

- **Yaad rakho:** `A key-value demo` use karne wala code likhne se pehle ek invariant bolo.
- **Aam galti:** `A key-value demo` ko copy-paste se use karna bina jaane ki wo kya own karta hai ya kab valid hai.

Practice: `examples/10_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

---

## Day 30 ke baad aapko ye aana chahiye

- `std::pair & std::tuple` ko bina notes dekhe kisi dost ko samjha sakna.
- Saare 10 examples `-std=c++17 -Wall -Wextra` ke saath compile aur run karna (naye flags sirf tab jab din ko C++20+ chahiye).
- `answers.md` dekhne se pehle `questions.md` ke 5 sawaal answer karna.
- Ek chhota extra program likhna jo aaj ke kam se kam 3 concepts jodta ho.

Ya is din ko **Badsha hub** me kholo (`python3 hub/server.py`) aur Learn / Practice / Quiz tabs use karo.
