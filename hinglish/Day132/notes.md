# Day 132 -- Type traits library tour

Aaj ka goal: **Type traits library tour** ko aasan Hinglish me samajhna, har idea ka chhota code sample dekhna, phir `examples/` me practice karna.

Is din ko padhne ka tarika:
1. Har concept ka **Aasan Bhasha** section padho.
2. Code sample par nazar daalo -- pehle predict karo ki output kya aayega.
3. `examples/` me us concept ki file chalao.
4. Uske baad hi `questions.md` kholo.

| # | Concept |
|--:|---------|
| 1 | Primary type categories |
| 2 | Composite categories |
| 3 | Type properties |
| 4 | Type relations |
| 5 | Transformations |
| 6 | decay / remove_cvref |
| 7 | is_invocable |
| 8 | invocation_result |
| 9 | Using in APIs |
| 10 | Static checks suite |

---

## 1. Primary type categories

### Aasan Bhasha

Aaj ka idea — **Primary type categories** — Type traits library tour ke bade theme ke andar aata hai. Ise ek tool ki tarah padho: ye kaam kya karta hai, kaunse rules enforce karta hai, aur un rules ko ignore karne par kya tootta hai?

### Chhota code

```cpp
// Explore: Primary type categories
#include <iostream>
int main() {
  std::cout << "practice: Primary type categories\n";
  return 0;
}
```

- **Yaad rakho:** `Primary type categories` use karne wala code likhne se pehle ek invariant bolo.
- **Aam galti:** `Primary type categories` ko copy-paste se use karna bina jaane ki wo kya own karta hai ya kab valid hai.

Practice: `examples/01_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 2. Composite categories

### Aasan Bhasha

Aaj ka idea — **Composite categories** — Type traits library tour ke bade theme ke andar aata hai. Ise ek tool ki tarah padho: ye kaam kya karta hai, kaunse rules enforce karta hai, aur un rules ko ignore karne par kya tootta hai?

### Chhota code

```cpp
// Explore: Composite categories
#include <iostream>
int main() {
  std::cout << "practice: Composite categories\n";
  return 0;
}
```

- **Yaad rakho:** `Composite categories` use karne wala code likhne se pehle ek invariant bolo.
- **Aam galti:** `Composite categories` ko copy-paste se use karna bina jaane ki wo kya own karta hai ya kab valid hai.

Practice: `examples/02_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 3. Type properties

### Aasan Bhasha

Aaj ka idea — **Type properties** — Type traits library tour ke bade theme ke andar aata hai. Ise ek tool ki tarah padho: ye kaam kya karta hai, kaunse rules enforce karta hai, aur un rules ko ignore karne par kya tootta hai?

### Chhota code

```cpp
// Explore: Type properties
#include <iostream>
int main() {
  std::cout << "practice: Type properties\n";
  return 0;
}
```

- **Yaad rakho:** `Type properties` use karne wala code likhne se pehle ek invariant bolo.
- **Aam galti:** `Type properties` ko copy-paste se use karna bina jaane ki wo kya own karta hai ya kab valid hai.

Practice: `examples/03_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 4. Type relations

### Aasan Bhasha

Aaj ka idea — **Type relations** — Type traits library tour ke bade theme ke andar aata hai. Ise ek tool ki tarah padho: ye kaam kya karta hai, kaunse rules enforce karta hai, aur un rules ko ignore karne par kya tootta hai?

### Chhota code

```cpp
// Explore: Type relations
#include <iostream>
int main() {
  std::cout << "practice: Type relations\n";
  return 0;
}
```

- **Yaad rakho:** `Type relations` use karne wala code likhne se pehle ek invariant bolo.
- **Aam galti:** `Type relations` ko copy-paste se use karna bina jaane ki wo kya own karta hai ya kab valid hai.

Practice: `examples/04_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 5. Transformations

### Aasan Bhasha

STL algorithms iterator ranges ke upar verbs hain. Jab intent match kare (`find`, `sort`, `transform`) to haath se likhe loops se inhe upar rakho. Erase-remove idiom sequence container se value/predicate se elements hatata hai.

### Chhota code

```cpp
v.erase(std::remove(v.begin(), v.end(), 0), v.end());
std::sort(v.begin(), v.end());
```

- **Yaad rakho:** `remove` sirf elements khiskata hai — `erase` phir bhi karna padta hai.
- **Aam galti:** `std::remove` call karna aur container ka `erase` bhool jaana.

Practice: `examples/05_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 6. decay / remove_cvref

### Aasan Bhasha

Aaj ka idea — **decay / remove_cvref** — Type traits library tour ke bade theme ke andar aata hai. Ise ek tool ki tarah padho: ye kaam kya karta hai, kaunse rules enforce karta hai, aur un rules ko ignore karne par kya tootta hai?

### Chhota code

```cpp
// Explore: decay / remove_cvref
#include <iostream>
int main() {
  std::cout << "practice: decay / remove_cvref\n";
  return 0;
}
```

- **Yaad rakho:** `decay / remove_cvref` use karne wala code likhne se pehle ek invariant bolo.
- **Aam galti:** `decay / remove_cvref` ko copy-paste se use karna bina jaane ki wo kya own karta hai ya kab valid hai.

Practice: `examples/06_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 7. is_invocable

### Aasan Bhasha

Aaj ka idea — **is_invocable** — Type traits library tour ke bade theme ke andar aata hai. Ise ek tool ki tarah padho: ye kaam kya karta hai, kaunse rules enforce karta hai, aur un rules ko ignore karne par kya tootta hai?

### Chhota code

```cpp
// Explore: is_invocable
#include <iostream>
int main() {
  std::cout << "practice: is_invocable\n";
  return 0;
}
```

- **Yaad rakho:** `is_invocable` use karne wala code likhne se pehle ek invariant bolo.
- **Aam galti:** `is_invocable` ko copy-paste se use karna bina jaane ki wo kya own karta hai ya kab valid hai.

Practice: `examples/07_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 8. invocation_result

### Aasan Bhasha

Aaj ka idea — **invocation_result** — Type traits library tour ke bade theme ke andar aata hai. Ise ek tool ki tarah padho: ye kaam kya karta hai, kaunse rules enforce karta hai, aur un rules ko ignore karne par kya tootta hai?

### Chhota code

```cpp
// Explore: invocation_result
#include <iostream>
int main() {
  std::cout << "practice: invocation_result\n";
  return 0;
}
```

- **Yaad rakho:** `invocation_result` use karne wala code likhne se pehle ek invariant bolo.
- **Aam galti:** `invocation_result` ko copy-paste se use karna bina jaane ki wo kya own karta hai ya kab valid hai.

Practice: `examples/08_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 9. Using in APIs

### Aasan Bhasha

Aaj ka idea — **Using in APIs** — Type traits library tour ke bade theme ke andar aata hai. Ise ek tool ki tarah padho: ye kaam kya karta hai, kaunse rules enforce karta hai, aur un rules ko ignore karne par kya tootta hai?

### Chhota code

```cpp
// Explore: Using in APIs
#include <iostream>
int main() {
  std::cout << "practice: Using in APIs\n";
  return 0;
}
```

- **Yaad rakho:** `Using in APIs` use karne wala code likhne se pehle ek invariant bolo.
- **Aam galti:** `Using in APIs` ko copy-paste se use karna bina jaane ki wo kya own karta hai ya kab valid hai.

Practice: `examples/09_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 10. Static checks suite

### Aasan Bhasha

Aaj ka idea — **Static checks suite** — Type traits library tour ke bade theme ke andar aata hai. Ise ek tool ki tarah padho: ye kaam kya karta hai, kaunse rules enforce karta hai, aur un rules ko ignore karne par kya tootta hai?

### Chhota code

```cpp
// Explore: Static checks suite
#include <iostream>
int main() {
  std::cout << "practice: Static checks suite\n";
  return 0;
}
```

- **Yaad rakho:** `Static checks suite` use karne wala code likhne se pehle ek invariant bolo.
- **Aam galti:** `Static checks suite` ko copy-paste se use karna bina jaane ki wo kya own karta hai ya kab valid hai.

Practice: `examples/10_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

---

## Day 132 ke baad aapko ye aana chahiye

- `Type traits library tour` ko bina notes dekhe kisi dost ko samjha sakna.
- Saare 10 examples `-std=c++17 -Wall -Wextra` ke saath compile aur run karna (naye flags sirf tab jab din ko C++20+ chahiye).
- `answers.md` dekhne se pehle `questions.md` ke 5 sawaal answer karna.
- Ek chhota extra program likhna jo aaj ke kam se kam 3 concepts jodta ho.

Ya is din ko **Badsha hub** me kholo (`python3 hub/server.py`) aur Learn / Practice / Quiz tabs use karo.
