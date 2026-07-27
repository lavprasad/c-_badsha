# Day 61 -- Value semantics vs reference semantics

Aaj ka goal: **Value semantics vs reference semantics** ko aasan Hinglish me samajhna, har idea ka chhota code sample dekhna, phir `examples/` me practice karna.

Is din ko padhne ka tarika:
1. Har concept ka **Aasan Bhasha** section padho.
2. Code sample par nazar daalo -- pehle predict karo ki output kya aayega.
3. `examples/` me us concept ki file chalao.
4. Uske baad hi `questions.md` kholo.

| # | Concept |
|--:|---------|
| 1 | Copyable values |
| 2 | Shared identity |
| 3 | Immutable values |
| 4 | Handle-body |
| 5 | Copy-on-write idea |
| 6 | Polymorphic values |
| 7 | Choosing ownership |
| 8 | API parameter modes |
| 9 | Return value design |
| 10 | Case study: string |

---

## 1. Copyable values

### Aasan Bhasha

Aaj ka idea — **Copyable values** — Value semantics vs reference semantics ke bade theme ke andar aata hai. Ise ek tool ki tarah padho: ye kaam kya karta hai, kaunse rules enforce karta hai, aur un rules ko ignore karne par kya tootta hai?

### Chhota code

```cpp
// Explore: Copyable values
#include <iostream>
int main() {
  std::cout << "practice: Copyable values\n";
  return 0;
}
```

- **Yaad rakho:** `Copyable values` use karne wala code likhne se pehle ek invariant bolo.
- **Aam galti:** `Copyable values` ko copy-paste se use karna bina jaane ki wo kya own karta hai ya kab valid hai.

Practice: `examples/01_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 2. Shared identity

### Aasan Bhasha

Aaj ka idea — **Shared identity** — Value semantics vs reference semantics ke bade theme ke andar aata hai. Ise ek tool ki tarah padho: ye kaam kya karta hai, kaunse rules enforce karta hai, aur un rules ko ignore karne par kya tootta hai?

### Chhota code

```cpp
// Explore: Shared identity
#include <iostream>
int main() {
  std::cout << "practice: Shared identity\n";
  return 0;
}
```

- **Yaad rakho:** `Shared identity` use karne wala code likhne se pehle ek invariant bolo.
- **Aam galti:** `Shared identity` ko copy-paste se use karna bina jaane ki wo kya own karta hai ya kab valid hai.

Practice: `examples/02_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 3. Immutable values

### Aasan Bhasha

`const` ek vaada hai: 'main is naam ke through ise nahi badlunga.' Ye bugs compile time par pakadta hai aur intent document karta hai. Observers par aur sirf-padhne wale parameters par `const` lagao.

### Chhota code

```cpp
void print(const std::string& s);  // no copy, no mutate
struct Counter {
  int n = 0;
  int get() const { return n; }  // may call on const objects
};
```

- **Yaad rakho:** Machine word se bade read-only parameters ke liye `const T&` prefer karo.
- **Aam galti:** `const` hata kar aisi cheez badalna jise callers fixed maan rahe the.

Practice: `examples/03_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 4. Handle-body

### Aasan Bhasha

Aaj ka idea — **Handle-body** — Value semantics vs reference semantics ke bade theme ke andar aata hai. Ise ek tool ki tarah padho: ye kaam kya karta hai, kaunse rules enforce karta hai, aur un rules ko ignore karne par kya tootta hai?

### Chhota code

```cpp
// Explore: Handle-body
#include <iostream>
int main() {
  std::cout << "practice: Handle-body\n";
  return 0;
}
```

- **Yaad rakho:** `Handle-body` use karne wala code likhne se pehle ek invariant bolo.
- **Aam galti:** `Handle-body` ko copy-paste se use karna bina jaane ki wo kya own karta hai ya kab valid hai.

Practice: `examples/04_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 5. Copy-on-write idea

### Aasan Bhasha

Aaj ka idea — **Copy-on-write idea** — Value semantics vs reference semantics ke bade theme ke andar aata hai. Ise ek tool ki tarah padho: ye kaam kya karta hai, kaunse rules enforce karta hai, aur un rules ko ignore karne par kya tootta hai?

### Chhota code

```cpp
// Explore: Copy-on-write idea
#include <iostream>
int main() {
  std::cout << "practice: Copy-on-write idea\n";
  return 0;
}
```

- **Yaad rakho:** `Copy-on-write idea` use karne wala code likhne se pehle ek invariant bolo.
- **Aam galti:** `Copy-on-write idea` ko copy-paste se use karna bina jaane ki wo kya own karta hai ya kab valid hai.

Practice: `examples/05_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 6. Polymorphic values

### Aasan Bhasha

Aaj ka idea — **Polymorphic values** — Value semantics vs reference semantics ke bade theme ke andar aata hai. Ise ek tool ki tarah padho: ye kaam kya karta hai, kaunse rules enforce karta hai, aur un rules ko ignore karne par kya tootta hai?

### Chhota code

```cpp
// Explore: Polymorphic values
#include <iostream>
int main() {
  std::cout << "practice: Polymorphic values\n";
  return 0;
}
```

- **Yaad rakho:** `Polymorphic values` use karne wala code likhne se pehle ek invariant bolo.
- **Aam galti:** `Polymorphic values` ko copy-paste se use karna bina jaane ki wo kya own karta hai ya kab valid hai.

Practice: `examples/06_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 7. Choosing ownership

### Aasan Bhasha

Aaj ka idea — **Choosing ownership** — Value semantics vs reference semantics ke bade theme ke andar aata hai. Ise ek tool ki tarah padho: ye kaam kya karta hai, kaunse rules enforce karta hai, aur un rules ko ignore karne par kya tootta hai?

### Chhota code

```cpp
// Explore: Choosing ownership
#include <iostream>
int main() {
  std::cout << "practice: Choosing ownership\n";
  return 0;
}
```

- **Yaad rakho:** `Choosing ownership` use karne wala code likhne se pehle ek invariant bolo.
- **Aam galti:** `Choosing ownership` ko copy-paste se use karna bina jaane ki wo kya own karta hai ya kab valid hai.

Practice: `examples/07_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 8. API parameter modes

### Aasan Bhasha

Aaj ka idea — **API parameter modes** — Value semantics vs reference semantics ke bade theme ke andar aata hai. Ise ek tool ki tarah padho: ye kaam kya karta hai, kaunse rules enforce karta hai, aur un rules ko ignore karne par kya tootta hai?

### Chhota code

```cpp
// Explore: API parameter modes
#include <iostream>
int main() {
  std::cout << "practice: API parameter modes\n";
  return 0;
}
```

- **Yaad rakho:** `API parameter modes` use karne wala code likhne se pehle ek invariant bolo.
- **Aam galti:** `API parameter modes` ko copy-paste se use karna bina jaane ki wo kya own karta hai ya kab valid hai.

Practice: `examples/08_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 9. Return value design

### Aasan Bhasha

Aaj ka idea — **Return value design** — Value semantics vs reference semantics ke bade theme ke andar aata hai. Ise ek tool ki tarah padho: ye kaam kya karta hai, kaunse rules enforce karta hai, aur un rules ko ignore karne par kya tootta hai?

### Chhota code

```cpp
// Explore: Return value design
#include <iostream>
int main() {
  std::cout << "practice: Return value design\n";
  return 0;
}
```

- **Yaad rakho:** `Return value design` use karne wala code likhne se pehle ek invariant bolo.
- **Aam galti:** `Return value design` ko copy-paste se use karna bina jaane ki wo kya own karta hai ya kab valid hai.

Practice: `examples/09_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 10. Case study: string

### Aasan Bhasha

Aaj ka idea — **Case study: string** — Value semantics vs reference semantics ke bade theme ke andar aata hai. Ise ek tool ki tarah padho: ye kaam kya karta hai, kaunse rules enforce karta hai, aur un rules ko ignore karne par kya tootta hai?

### Chhota code

```cpp
// Explore: Case study: string
#include <iostream>
int main() {
  std::cout << "practice: Case study: string\n";
  return 0;
}
```

- **Yaad rakho:** `Case study: string` use karne wala code likhne se pehle ek invariant bolo.
- **Aam galti:** `Case study: string` ko copy-paste se use karna bina jaane ki wo kya own karta hai ya kab valid hai.

Practice: `examples/10_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

---

## Day 61 ke baad aapko ye aana chahiye

- `Value semantics vs reference semantics` ko bina notes dekhe kisi dost ko samjha sakna.
- Saare 10 examples `-std=c++17 -Wall -Wextra` ke saath compile aur run karna (naye flags sirf tab jab din ko C++20+ chahiye).
- `answers.md` dekhne se pehle `questions.md` ke 5 sawaal answer karna.
- Ek chhota extra program likhna jo aaj ke kam se kam 3 concepts jodta ho.

Ya is din ko **Badsha hub** me kholo (`python3 hub/server.py`) aur Learn / Practice / Quiz tabs use karo.
