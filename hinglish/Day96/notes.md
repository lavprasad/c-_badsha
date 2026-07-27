# Day 96 -- Regular expressions

Aaj ka goal: **Regular expressions** ko aasan Hinglish me samajhna, har idea ka chhota code sample dekhna, phir `examples/` me practice karna.

Is din ko padhne ka tarika:
1. Har concept ka **Aasan Bhasha** section padho.
2. Code sample par nazar daalo -- pehle predict karo ki output kya aayega.
3. `examples/` me us concept ki file chalao.
4. Uske baad hi `questions.md` kholo.

| # | Concept |
|--:|---------|
| 1 | std::regex basics |
| 2 | match vs search |
| 3 | Capture groups |
| 4 | replace |
| 5 | Performance warnings |
| 6 | ReDoS awareness |
| 7 | When not to regex |
| 8 | ECMAScript grammar notes |
| 9 | Token extract |
| 10 | Validate an email-ish |

---

## 1. std::regex basics

### Aasan Bhasha

Aaj ka idea — **std::regex basics** — Regular expressions ke bade theme ke andar aata hai. Ise ek tool ki tarah padho: ye kaam kya karta hai, kaunse rules enforce karta hai, aur un rules ko ignore karne par kya tootta hai?

### Chhota code

```cpp
// Explore: std::regex basics
#include <iostream>
int main() {
  std::cout << "practice: std::regex basics\n";
  return 0;
}
```

- **Yaad rakho:** `std::regex basics` use karne wala code likhne se pehle ek invariant bolo.
- **Aam galti:** `std::regex basics` ko copy-paste se use karna bina jaane ki wo kya own karta hai ya kab valid hai.

Practice: `examples/01_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 2. match vs search

### Aasan Bhasha

Aaj ka idea — **match vs search** — Regular expressions ke bade theme ke andar aata hai. Ise ek tool ki tarah padho: ye kaam kya karta hai, kaunse rules enforce karta hai, aur un rules ko ignore karne par kya tootta hai?

### Chhota code

```cpp
// Explore: match vs search
#include <iostream>
int main() {
  std::cout << "practice: match vs search\n";
  return 0;
}
```

- **Yaad rakho:** `match vs search` use karne wala code likhne se pehle ek invariant bolo.
- **Aam galti:** `match vs search` ko copy-paste se use karna bina jaane ki wo kya own karta hai ya kab valid hai.

Practice: `examples/02_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 3. Capture groups

### Aasan Bhasha

Lambda ek chhota bina-naam ka function object hai. `[=]` value se ya `[&]` reference se capture — dhyan se, kyunki reference wale locals lambda se zyada jeene chahiye.

### Chhota code

```cpp
int factor = 2;
auto twice = [factor](int x) { return x * factor; };
std::vector<int> v{1,2,3};
std::sort(v.begin(), v.end(), [](int a, int b){ return a > b; });
```

- **Yaad rakho:** Locals ko reference se capture karke lambda ko upar return mat karo.
- **Aam galti:** Stack frame khatam hone ke baad dangling captures.

Practice: `examples/03_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 4. replace

### Aasan Bhasha

Aaj ka idea — **replace** — Regular expressions ke bade theme ke andar aata hai. Ise ek tool ki tarah padho: ye kaam kya karta hai, kaunse rules enforce karta hai, aur un rules ko ignore karne par kya tootta hai?

### Chhota code

```cpp
// Explore: replace
#include <iostream>
int main() {
  std::cout << "practice: replace\n";
  return 0;
}
```

- **Yaad rakho:** `replace` use karne wala code likhne se pehle ek invariant bolo.
- **Aam galti:** `replace` ko copy-paste se use karna bina jaane ki wo kya own karta hai ya kab valid hai.

Practice: `examples/04_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 5. Performance warnings

### Aasan Bhasha

Aaj ka idea — **Performance warnings** — Regular expressions ke bade theme ke andar aata hai. Ise ek tool ki tarah padho: ye kaam kya karta hai, kaunse rules enforce karta hai, aur un rules ko ignore karne par kya tootta hai?

### Chhota code

```cpp
// Explore: Performance warnings
#include <iostream>
int main() {
  std::cout << "practice: Performance warnings\n";
  return 0;
}
```

- **Yaad rakho:** `Performance warnings` use karne wala code likhne se pehle ek invariant bolo.
- **Aam galti:** `Performance warnings` ko copy-paste se use karna bina jaane ki wo kya own karta hai ya kab valid hai.

Practice: `examples/05_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 6. ReDoS awareness

### Aasan Bhasha

Aaj ka idea — **ReDoS awareness** — Regular expressions ke bade theme ke andar aata hai. Ise ek tool ki tarah padho: ye kaam kya karta hai, kaunse rules enforce karta hai, aur un rules ko ignore karne par kya tootta hai?

### Chhota code

```cpp
// Explore: ReDoS awareness
#include <iostream>
int main() {
  std::cout << "practice: ReDoS awareness\n";
  return 0;
}
```

- **Yaad rakho:** `ReDoS awareness` use karne wala code likhne se pehle ek invariant bolo.
- **Aam galti:** `ReDoS awareness` ko copy-paste se use karna bina jaane ki wo kya own karta hai ya kab valid hai.

Practice: `examples/06_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 7. When not to regex

### Aasan Bhasha

Aaj ka idea — **When not to regex** — Regular expressions ke bade theme ke andar aata hai. Ise ek tool ki tarah padho: ye kaam kya karta hai, kaunse rules enforce karta hai, aur un rules ko ignore karne par kya tootta hai?

### Chhota code

```cpp
// Explore: When not to regex
#include <iostream>
int main() {
  std::cout << "practice: When not to regex\n";
  return 0;
}
```

- **Yaad rakho:** `When not to regex` use karne wala code likhne se pehle ek invariant bolo.
- **Aam galti:** `When not to regex` ko copy-paste se use karna bina jaane ki wo kya own karta hai ya kab valid hai.

Practice: `examples/07_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 8. ECMAScript grammar notes

### Aasan Bhasha

Aaj ka idea — **ECMAScript grammar notes** — Regular expressions ke bade theme ke andar aata hai. Ise ek tool ki tarah padho: ye kaam kya karta hai, kaunse rules enforce karta hai, aur un rules ko ignore karne par kya tootta hai?

### Chhota code

```cpp
// Explore: ECMAScript grammar notes
#include <iostream>
int main() {
  std::cout << "practice: ECMAScript grammar notes\n";
  return 0;
}
```

- **Yaad rakho:** `ECMAScript grammar notes` use karne wala code likhne se pehle ek invariant bolo.
- **Aam galti:** `ECMAScript grammar notes` ko copy-paste se use karna bina jaane ki wo kya own karta hai ya kab valid hai.

Practice: `examples/08_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 9. Token extract

### Aasan Bhasha

Aaj ka idea — **Token extract** — Regular expressions ke bade theme ke andar aata hai. Ise ek tool ki tarah padho: ye kaam kya karta hai, kaunse rules enforce karta hai, aur un rules ko ignore karne par kya tootta hai?

### Chhota code

```cpp
// Explore: Token extract
#include <iostream>
int main() {
  std::cout << "practice: Token extract\n";
  return 0;
}
```

- **Yaad rakho:** `Token extract` use karne wala code likhne se pehle ek invariant bolo.
- **Aam galti:** `Token extract` ko copy-paste se use karna bina jaane ki wo kya own karta hai ya kab valid hai.

Practice: `examples/09_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 10. Validate an email-ish

### Aasan Bhasha

Aaj ka idea — **Validate an email-ish** — Regular expressions ke bade theme ke andar aata hai. Ise ek tool ki tarah padho: ye kaam kya karta hai, kaunse rules enforce karta hai, aur un rules ko ignore karne par kya tootta hai?

### Chhota code

```cpp
// Explore: Validate an email-ish
#include <iostream>
int main() {
  std::cout << "practice: Validate an email-ish\n";
  return 0;
}
```

- **Yaad rakho:** `Validate an email-ish` use karne wala code likhne se pehle ek invariant bolo.
- **Aam galti:** `Validate an email-ish` ko copy-paste se use karna bina jaane ki wo kya own karta hai ya kab valid hai.

Practice: `examples/10_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

---

## Day 96 ke baad aapko ye aana chahiye

- `Regular expressions` ko bina notes dekhe kisi dost ko samjha sakna.
- Saare 10 examples `-std=c++17 -Wall -Wextra` ke saath compile aur run karna (naye flags sirf tab jab din ko C++20+ chahiye).
- `answers.md` dekhne se pehle `questions.md` ke 5 sawaal answer karna.
- Ek chhota extra program likhna jo aaj ke kam se kam 3 concepts jodta ho.

Ya is din ko **Badsha hub** me kholo (`python3 hub/server.py`) aur Learn / Practice / Quiz tabs use karo.
