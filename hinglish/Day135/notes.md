# Day 135 -- Proxy & reference types

Aaj ka goal: **Proxy & reference types** ko aasan Hinglish me samajhna, har idea ka chhota code sample dekhna, phir `examples/` me practice karna.

Is din ko padhne ka tarika:
1. Har concept ka **Aasan Bhasha** section padho.
2. Code sample par nazar daalo -- pehle predict karo ki output kya aayega.
3. `examples/` me us concept ki file chalao.
4. Uske baad hi `questions.md` kholo.

| # | Concept |
|--:|---------|
| 1 | vector<bool> caution |
| 2 | Proxy references |
| 3 | expression proxies |
| 4 | arrow proxy |
| 5 | Lifetime_wrapper |
| 6 | Optional references idea |
| 7 | Lifetime lifetime |
| 8 | API surprises |
| 9 | Avoiding proxies |
| 10 | Safe wrapper |

---

## 1. vector<bool> caution

### Aasan Bhasha

Aaj ka idea — **vector<bool> caution** — Proxy & reference types ke bade theme ke andar aata hai. Ise ek tool ki tarah padho: ye kaam kya karta hai, kaunse rules enforce karta hai, aur un rules ko ignore karne par kya tootta hai?

### Chhota code

```cpp
// Explore: vector<bool> caution
#include <iostream>
int main() {
  std::cout << "practice: vector<bool> caution\n";
  return 0;
}
```

- **Yaad rakho:** `vector<bool> caution` use karne wala code likhne se pehle ek invariant bolo.
- **Aam galti:** `vector<bool> caution` ko copy-paste se use karna bina jaane ki wo kya own karta hai ya kab valid hai.

Practice: `examples/01_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 2. Proxy references

### Aasan Bhasha

Aaj ka idea — **Proxy references** — Proxy & reference types ke bade theme ke andar aata hai. Ise ek tool ki tarah padho: ye kaam kya karta hai, kaunse rules enforce karta hai, aur un rules ko ignore karne par kya tootta hai?

### Chhota code

```cpp
// Explore: Proxy references
#include <iostream>
int main() {
  std::cout << "practice: Proxy references\n";
  return 0;
}
```

- **Yaad rakho:** `Proxy references` use karne wala code likhne se pehle ek invariant bolo.
- **Aam galti:** `Proxy references` ko copy-paste se use karna bina jaane ki wo kya own karta hai ya kab valid hai.

Practice: `examples/02_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 3. expression proxies

### Aasan Bhasha

Aaj ka idea — **expression proxies** — Proxy & reference types ke bade theme ke andar aata hai. Ise ek tool ki tarah padho: ye kaam kya karta hai, kaunse rules enforce karta hai, aur un rules ko ignore karne par kya tootta hai?

### Chhota code

```cpp
// Explore: expression proxies
#include <iostream>
int main() {
  std::cout << "practice: expression proxies\n";
  return 0;
}
```

- **Yaad rakho:** `expression proxies` use karne wala code likhne se pehle ek invariant bolo.
- **Aam galti:** `expression proxies` ko copy-paste se use karna bina jaane ki wo kya own karta hai ya kab valid hai.

Practice: `examples/03_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 4. arrow proxy

### Aasan Bhasha

Aaj ka idea — **arrow proxy** — Proxy & reference types ke bade theme ke andar aata hai. Ise ek tool ki tarah padho: ye kaam kya karta hai, kaunse rules enforce karta hai, aur un rules ko ignore karne par kya tootta hai?

### Chhota code

```cpp
// Explore: arrow proxy
#include <iostream>
int main() {
  std::cout << "practice: arrow proxy\n";
  return 0;
}
```

- **Yaad rakho:** `arrow proxy` use karne wala code likhne se pehle ek invariant bolo.
- **Aam galti:** `arrow proxy` ko copy-paste se use karna bina jaane ki wo kya own karta hai ya kab valid hai.

Practice: `examples/04_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 5. Lifetime_wrapper

### Aasan Bhasha

Aaj ka idea — **Lifetime_wrapper** — Proxy & reference types ke bade theme ke andar aata hai. Ise ek tool ki tarah padho: ye kaam kya karta hai, kaunse rules enforce karta hai, aur un rules ko ignore karne par kya tootta hai?

### Chhota code

```cpp
// Explore: Lifetime_wrapper
#include <iostream>
int main() {
  std::cout << "practice: Lifetime_wrapper\n";
  return 0;
}
```

- **Yaad rakho:** `Lifetime_wrapper` use karne wala code likhne se pehle ek invariant bolo.
- **Aam galti:** `Lifetime_wrapper` ko copy-paste se use karna bina jaane ki wo kya own karta hai ya kab valid hai.

Practice: `examples/05_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 6. Optional references idea

### Aasan Bhasha

`optional<T>` ya to T hai ya khaali — magic sentinel values se behtar. `variant` kai types me se ek rakhta hai. Clarity ke liye inhe raw unions ya `void*` se upar rakho.

### Chhota code

```cpp
#include <optional>
std::optional<int> parse(bool ok) {
  if (!ok) return std::nullopt;
  return 42;
}
int x = parse(true).value_or(-1);
```

- **Yaad rakho:** `value()` call karne se pehle `optional` check karo (ya `value_or` use karo).
- **Aam galti:** Khaali optional par `opt.value()` call karna → exception.

Practice: `examples/06_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 7. Lifetime lifetime

### Aasan Bhasha

Aaj ka idea — **Lifetime lifetime** — Proxy & reference types ke bade theme ke andar aata hai. Ise ek tool ki tarah padho: ye kaam kya karta hai, kaunse rules enforce karta hai, aur un rules ko ignore karne par kya tootta hai?

### Chhota code

```cpp
// Explore: Lifetime lifetime
#include <iostream>
int main() {
  std::cout << "practice: Lifetime lifetime\n";
  return 0;
}
```

- **Yaad rakho:** `Lifetime lifetime` use karne wala code likhne se pehle ek invariant bolo.
- **Aam galti:** `Lifetime lifetime` ko copy-paste se use karna bina jaane ki wo kya own karta hai ya kab valid hai.

Practice: `examples/07_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 8. API surprises

### Aasan Bhasha

Aaj ka idea — **API surprises** — Proxy & reference types ke bade theme ke andar aata hai. Ise ek tool ki tarah padho: ye kaam kya karta hai, kaunse rules enforce karta hai, aur un rules ko ignore karne par kya tootta hai?

### Chhota code

```cpp
// Explore: API surprises
#include <iostream>
int main() {
  std::cout << "practice: API surprises\n";
  return 0;
}
```

- **Yaad rakho:** `API surprises` use karne wala code likhne se pehle ek invariant bolo.
- **Aam galti:** `API surprises` ko copy-paste se use karna bina jaane ki wo kya own karta hai ya kab valid hai.

Practice: `examples/08_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 9. Avoiding proxies

### Aasan Bhasha

Aaj ka idea — **Avoiding proxies** — Proxy & reference types ke bade theme ke andar aata hai. Ise ek tool ki tarah padho: ye kaam kya karta hai, kaunse rules enforce karta hai, aur un rules ko ignore karne par kya tootta hai?

### Chhota code

```cpp
// Explore: Avoiding proxies
#include <iostream>
int main() {
  std::cout << "practice: Avoiding proxies\n";
  return 0;
}
```

- **Yaad rakho:** `Avoiding proxies` use karne wala code likhne se pehle ek invariant bolo.
- **Aam galti:** `Avoiding proxies` ko copy-paste se use karna bina jaane ki wo kya own karta hai ya kab valid hai.

Practice: `examples/09_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 10. Safe wrapper

### Aasan Bhasha

Aaj ka idea — **Safe wrapper** — Proxy & reference types ke bade theme ke andar aata hai. Ise ek tool ki tarah padho: ye kaam kya karta hai, kaunse rules enforce karta hai, aur un rules ko ignore karne par kya tootta hai?

### Chhota code

```cpp
// Explore: Safe wrapper
#include <iostream>
int main() {
  std::cout << "practice: Safe wrapper\n";
  return 0;
}
```

- **Yaad rakho:** `Safe wrapper` use karne wala code likhne se pehle ek invariant bolo.
- **Aam galti:** `Safe wrapper` ko copy-paste se use karna bina jaane ki wo kya own karta hai ya kab valid hai.

Practice: `examples/10_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

---

## Day 135 ke baad aapko ye aana chahiye

- `Proxy & reference types` ko bina notes dekhe kisi dost ko samjha sakna.
- Saare 10 examples `-std=c++17 -Wall -Wextra` ke saath compile aur run karna (naye flags sirf tab jab din ko C++20+ chahiye).
- `answers.md` dekhne se pehle `questions.md` ke 5 sawaal answer karna.
- Ek chhota extra program likhna jo aaj ke kam se kam 3 concepts jodta ho.

Ya is din ko **Badsha hub** me kholo (`python3 hub/server.py`) aur Learn / Practice / Quiz tabs use karo.
