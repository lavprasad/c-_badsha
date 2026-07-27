# Day 136 -- Small Buffer Optimization

Aaj ka goal: **Small Buffer Optimization** ko aasan Hinglish me samajhna, har idea ka chhota code sample dekhna, phir `examples/` me practice karna.

Is din ko padhne ka tarika:
1. Har concept ka **Aasan Bhasha** section padho.
2. Code sample par nazar daalo -- pehle predict karo ki output kya aayega.
3. `examples/` me us concept ki file chalao.
4. Uske baad hi `questions.md` kholo.

| # | Concept |
|--:|---------|
| 1 | SBO / SSO idea |
| 2 | When it helps |
| 3 | Implementation sketch |
| 4 | Alignment in buffer |
| 5 | Move interactions |
| 6 | Debugging SBO |
| 7 | Measuring benefit |
| 8 | std::function SBO |
| 9 | Tradeoffs |
| 10 | Tiny sbo_string |

---

## 1. SBO / SSO idea

### Aasan Bhasha

`std::string` character data own karta hai aur zaroorat par badhta hai. Safety ke liye ise raw `char*` se behtar samjho. `string_view` ek non-owning khidki hai — read-only parameters ke liye badhiya, lekin agar string se zyada jeeya to khatarnak.

### Chhota code

```cpp
std::string s = "hello";
std::string_view v = s;  // ok while s lives
auto t = s.substr(0, 2); // "he"
```

- **Yaad rakho:** Local temporary ko point karta `string_view` kabhi return mat karo.
- **Aam galti:** `getline` aur `>>` mix karna bina bache hue newline ko clear kiye.

Practice: `examples/01_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 2. When it helps

### Aasan Bhasha

Aaj ka idea — **When it helps** — Small Buffer Optimization ke bade theme ke andar aata hai. Ise ek tool ki tarah padho: ye kaam kya karta hai, kaunse rules enforce karta hai, aur un rules ko ignore karne par kya tootta hai?

### Chhota code

```cpp
// Explore: When it helps
#include <iostream>
int main() {
  std::cout << "practice: When it helps\n";
  return 0;
}
```

- **Yaad rakho:** `When it helps` use karne wala code likhne se pehle ek invariant bolo.
- **Aam galti:** `When it helps` ko copy-paste se use karna bina jaane ki wo kya own karta hai ya kab valid hai.

Practice: `examples/02_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 3. Implementation sketch

### Aasan Bhasha

Aaj ka idea — **Implementation sketch** — Small Buffer Optimization ke bade theme ke andar aata hai. Ise ek tool ki tarah padho: ye kaam kya karta hai, kaunse rules enforce karta hai, aur un rules ko ignore karne par kya tootta hai?

### Chhota code

```cpp
// Explore: Implementation sketch
#include <iostream>
int main() {
  std::cout << "practice: Implementation sketch\n";
  return 0;
}
```

- **Yaad rakho:** `Implementation sketch` use karne wala code likhne se pehle ek invariant bolo.
- **Aam galti:** `Implementation sketch` ko copy-paste se use karna bina jaane ki wo kya own karta hai ya kab valid hai.

Practice: `examples/03_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 4. Alignment in buffer

### Aasan Bhasha

Aaj ka idea — **Alignment in buffer** — Small Buffer Optimization ke bade theme ke andar aata hai. Ise ek tool ki tarah padho: ye kaam kya karta hai, kaunse rules enforce karta hai, aur un rules ko ignore karne par kya tootta hai?

### Chhota code

```cpp
// Explore: Alignment in buffer
#include <iostream>
int main() {
  std::cout << "practice: Alignment in buffer\n";
  return 0;
}
```

- **Yaad rakho:** `Alignment in buffer` use karne wala code likhne se pehle ek invariant bolo.
- **Aam galti:** `Alignment in buffer` ko copy-paste se use karna bina jaane ki wo kya own karta hai ya kab valid hai.

Practice: `examples/04_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 5. Move interactions

### Aasan Bhasha

Aaj ka idea — **Move interactions** — Small Buffer Optimization ke bade theme ke andar aata hai. Ise ek tool ki tarah padho: ye kaam kya karta hai, kaunse rules enforce karta hai, aur un rules ko ignore karne par kya tootta hai?

### Chhota code

```cpp
// Explore: Move interactions
#include <iostream>
int main() {
  std::cout << "practice: Move interactions\n";
  return 0;
}
```

- **Yaad rakho:** `Move interactions` use karne wala code likhne se pehle ek invariant bolo.
- **Aam galti:** `Move interactions` ko copy-paste se use karna bina jaane ki wo kya own karta hai ya kab valid hai.

Practice: `examples/05_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 6. Debugging SBO

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

Practice: `examples/06_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 7. Measuring benefit

### Aasan Bhasha

Aaj ka idea — **Measuring benefit** — Small Buffer Optimization ke bade theme ke andar aata hai. Ise ek tool ki tarah padho: ye kaam kya karta hai, kaunse rules enforce karta hai, aur un rules ko ignore karne par kya tootta hai?

### Chhota code

```cpp
// Explore: Measuring benefit
#include <iostream>
int main() {
  std::cout << "practice: Measuring benefit\n";
  return 0;
}
```

- **Yaad rakho:** `Measuring benefit` use karne wala code likhne se pehle ek invariant bolo.
- **Aam galti:** `Measuring benefit` ko copy-paste se use karna bina jaane ki wo kya own karta hai ya kab valid hai.

Practice: `examples/07_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 8. std::function SBO

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

Practice: `examples/08_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 9. Tradeoffs

### Aasan Bhasha

Aaj ka idea — **Tradeoffs** — Small Buffer Optimization ke bade theme ke andar aata hai. Ise ek tool ki tarah padho: ye kaam kya karta hai, kaunse rules enforce karta hai, aur un rules ko ignore karne par kya tootta hai?

### Chhota code

```cpp
// Explore: Tradeoffs
#include <iostream>
int main() {
  std::cout << "practice: Tradeoffs\n";
  return 0;
}
```

- **Yaad rakho:** `Tradeoffs` use karne wala code likhne se pehle ek invariant bolo.
- **Aam galti:** `Tradeoffs` ko copy-paste se use karna bina jaane ki wo kya own karta hai ya kab valid hai.

Practice: `examples/09_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 10. Tiny sbo_string

### Aasan Bhasha

Aaj ka idea — **Tiny sbo_string** — Small Buffer Optimization ke bade theme ke andar aata hai. Ise ek tool ki tarah padho: ye kaam kya karta hai, kaunse rules enforce karta hai, aur un rules ko ignore karne par kya tootta hai?

### Chhota code

```cpp
// Explore: Tiny sbo_string
#include <iostream>
int main() {
  std::cout << "practice: Tiny sbo_string\n";
  return 0;
}
```

- **Yaad rakho:** `Tiny sbo_string` use karne wala code likhne se pehle ek invariant bolo.
- **Aam galti:** `Tiny sbo_string` ko copy-paste se use karna bina jaane ki wo kya own karta hai ya kab valid hai.

Practice: `examples/10_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

---

## Day 136 ke baad aapko ye aana chahiye

- `Small Buffer Optimization` ko bina notes dekhe kisi dost ko samjha sakna.
- Saare 10 examples `-std=c++17 -Wall -Wextra` ke saath compile aur run karna (naye flags sirf tab jab din ko C++20+ chahiye).
- `answers.md` dekhne se pehle `questions.md` ke 5 sawaal answer karna.
- Ek chhota extra program likhna jo aaj ke kam se kam 3 concepts jodta ho.

Ya is din ko **Badsha hub** me kholo (`python3 hub/server.py`) aur Learn / Practice / Quiz tabs use karo.
