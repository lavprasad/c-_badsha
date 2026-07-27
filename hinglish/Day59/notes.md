# Day 59 -- Pimpl idiom

Aaj ka goal: **Pimpl idiom** ko aasan Hinglish me samajhna, har idea ka chhota code sample dekhna, phir `examples/` me practice karna.

Is din ko padhne ka tarika:
1. Har concept ka **Aasan Bhasha** section padho.
2. Code sample par nazar daalo -- pehle predict karo ki output kya aayega.
3. `examples/` me us concept ki file chalao.
4. Uske baad hi `questions.md` kholo.

| # | Concept |
|--:|---------|
| 1 | Why Pimpl |
| 2 | unique_ptr impl |
| 3 | Incomplete types |
| 4 | Copyability choices |
| 5 | ABI stability |
| 6 | Compile-time firewall |
| 7 | Costs of Pimpl |
| 8 | Rule of five with Pimpl |
| 9 | Moving Pimpl types |
| 10 | A Widget Pimpl |

---

## 1. Why Pimpl

### Aasan Bhasha

Aaj ka idea — **Why Pimpl** — Pimpl idiom ke bade theme ke andar aata hai. Ise ek tool ki tarah padho: ye kaam kya karta hai, kaunse rules enforce karta hai, aur un rules ko ignore karne par kya tootta hai?

### Chhota code

```cpp
// Explore: Why Pimpl
#include <iostream>
int main() {
  std::cout << "practice: Why Pimpl\n";
  return 0;
}
```

- **Yaad rakho:** `Why Pimpl` use karne wala code likhne se pehle ek invariant bolo.
- **Aam galti:** `Why Pimpl` ko copy-paste se use karna bina jaane ki wo kya own karta hai ya kab valid hai.

Practice: `examples/01_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 2. unique_ptr impl

### Aasan Bhasha

`unique_ptr` exclusive ownership hai — sasta aur saaf. `shared_ptr` reference count ke saath ownership baantta hai. Jab tak shared lifetime ki sach me zaroorat na ho, `unique_ptr` hi use karo.

### Chhota code

```cpp
auto p = std::make_unique<int>(5);
std::shared_ptr<int> s = std::make_shared<int>(7);
std::weak_ptr<int> w = s;  // does not keep object alive
```

- **Yaad rakho:** `shared_ptr` ke cycles `weak_ptr` se todo.
- **Aam galti:** Ek hi raw pointer se do `shared_ptr` banana → double free.

Practice: `examples/02_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 3. Incomplete types

### Aasan Bhasha

Aaj ka idea — **Incomplete types** — Pimpl idiom ke bade theme ke andar aata hai. Ise ek tool ki tarah padho: ye kaam kya karta hai, kaunse rules enforce karta hai, aur un rules ko ignore karne par kya tootta hai?

### Chhota code

```cpp
// Explore: Incomplete types
#include <iostream>
int main() {
  std::cout << "practice: Incomplete types\n";
  return 0;
}
```

- **Yaad rakho:** `Incomplete types` use karne wala code likhne se pehle ek invariant bolo.
- **Aam galti:** `Incomplete types` ko copy-paste se use karna bina jaane ki wo kya own karta hai ya kab valid hai.

Practice: `examples/03_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 4. Copyability choices

### Aasan Bhasha

Aaj ka idea — **Copyability choices** — Pimpl idiom ke bade theme ke andar aata hai. Ise ek tool ki tarah padho: ye kaam kya karta hai, kaunse rules enforce karta hai, aur un rules ko ignore karne par kya tootta hai?

### Chhota code

```cpp
// Explore: Copyability choices
#include <iostream>
int main() {
  std::cout << "practice: Copyability choices\n";
  return 0;
}
```

- **Yaad rakho:** `Copyability choices` use karne wala code likhne se pehle ek invariant bolo.
- **Aam galti:** `Copyability choices` ko copy-paste se use karna bina jaane ki wo kya own karta hai ya kab valid hai.

Practice: `examples/04_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 5. ABI stability

### Aasan Bhasha

Aaj ka idea — **ABI stability** — Pimpl idiom ke bade theme ke andar aata hai. Ise ek tool ki tarah padho: ye kaam kya karta hai, kaunse rules enforce karta hai, aur un rules ko ignore karne par kya tootta hai?

### Chhota code

```cpp
// Explore: ABI stability
#include <iostream>
int main() {
  std::cout << "practice: ABI stability\n";
  return 0;
}
```

- **Yaad rakho:** `ABI stability` use karne wala code likhne se pehle ek invariant bolo.
- **Aam galti:** `ABI stability` ko copy-paste se use karna bina jaane ki wo kya own karta hai ya kab valid hai.

Practice: `examples/05_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 6. Compile-time firewall

### Aasan Bhasha

Aaj ka idea — **Compile-time firewall** — Pimpl idiom ke bade theme ke andar aata hai. Ise ek tool ki tarah padho: ye kaam kya karta hai, kaunse rules enforce karta hai, aur un rules ko ignore karne par kya tootta hai?

### Chhota code

```cpp
// Explore: Compile-time firewall
#include <iostream>
int main() {
  std::cout << "practice: Compile-time firewall\n";
  return 0;
}
```

- **Yaad rakho:** `Compile-time firewall` use karne wala code likhne se pehle ek invariant bolo.
- **Aam galti:** `Compile-time firewall` ko copy-paste se use karna bina jaane ki wo kya own karta hai ya kab valid hai.

Practice: `examples/06_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 7. Costs of Pimpl

### Aasan Bhasha

Aaj ka idea — **Costs of Pimpl** — Pimpl idiom ke bade theme ke andar aata hai. Ise ek tool ki tarah padho: ye kaam kya karta hai, kaunse rules enforce karta hai, aur un rules ko ignore karne par kya tootta hai?

### Chhota code

```cpp
// Explore: Costs of Pimpl
#include <iostream>
int main() {
  std::cout << "practice: Costs of Pimpl\n";
  return 0;
}
```

- **Yaad rakho:** `Costs of Pimpl` use karne wala code likhne se pehle ek invariant bolo.
- **Aam galti:** `Costs of Pimpl` ko copy-paste se use karna bina jaane ki wo kya own karta hai ya kab valid hai.

Practice: `examples/07_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 8. Rule of five with Pimpl

### Aasan Bhasha

Agar aapki class koi resource own karti hai (heap memory, file handle), to aapko batana padega ki wo copy, move aur destroy kaise hoti hai — ya copying delete kar do. Agar kuch special own nahi karti to kuch mat likho (rule of zero) aur aise members use karo jo khud ko sambhal lete hain.

### Chhota code

```cpp
struct Buf {
  int* p;
  explicit Buf(int n) : p(new int[n]) {}
  ~Buf() { delete[] p; }
  Buf(const Buf&) = delete;
  Buf& operator=(const Buf&) = delete;
};
```

- **Yaad rakho:** Pehle rule of zero; agar destructor chahiye to copy/move dobara socho.
- **Aam galti:** Raw pointer ki shallow copy — do objects ek hi memory `delete` kar dete hain.

Practice: `examples/08_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 9. Moving Pimpl types

### Aasan Bhasha

Aaj ka idea — **Moving Pimpl types** — Pimpl idiom ke bade theme ke andar aata hai. Ise ek tool ki tarah padho: ye kaam kya karta hai, kaunse rules enforce karta hai, aur un rules ko ignore karne par kya tootta hai?

### Chhota code

```cpp
// Explore: Moving Pimpl types
#include <iostream>
int main() {
  std::cout << "practice: Moving Pimpl types\n";
  return 0;
}
```

- **Yaad rakho:** `Moving Pimpl types` use karne wala code likhne se pehle ek invariant bolo.
- **Aam galti:** `Moving Pimpl types` ko copy-paste se use karna bina jaane ki wo kya own karta hai ya kab valid hai.

Practice: `examples/09_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 10. A Widget Pimpl

### Aasan Bhasha

Aaj ka idea — **A Widget Pimpl** — Pimpl idiom ke bade theme ke andar aata hai. Ise ek tool ki tarah padho: ye kaam kya karta hai, kaunse rules enforce karta hai, aur un rules ko ignore karne par kya tootta hai?

### Chhota code

```cpp
// Explore: A Widget Pimpl
#include <iostream>
int main() {
  std::cout << "practice: A Widget Pimpl\n";
  return 0;
}
```

- **Yaad rakho:** `A Widget Pimpl` use karne wala code likhne se pehle ek invariant bolo.
- **Aam galti:** `A Widget Pimpl` ko copy-paste se use karna bina jaane ki wo kya own karta hai ya kab valid hai.

Practice: `examples/10_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

---

## Day 59 ke baad aapko ye aana chahiye

- `Pimpl idiom` ko bina notes dekhe kisi dost ko samjha sakna.
- Saare 10 examples `-std=c++17 -Wall -Wextra` ke saath compile aur run karna (naye flags sirf tab jab din ko C++20+ chahiye).
- `answers.md` dekhne se pehle `questions.md` ke 5 sawaal answer karna.
- Ek chhota extra program likhna jo aaj ke kam se kam 3 concepts jodta ho.

Ya is din ko **Badsha hub** me kholo (`python3 hub/server.py`) aur Learn / Practice / Quiz tabs use karo.
