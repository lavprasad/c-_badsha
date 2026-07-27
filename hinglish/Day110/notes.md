# Day 110 -- C interop

Aaj ka goal: **C interop** ko aasan Hinglish me samajhna, har idea ka chhota code sample dekhna, phir `examples/` me practice karna.

Is din ko padhne ka tarika:
1. Har concept ka **Aasan Bhasha** section padho.
2. Code sample par nazar daalo -- pehle predict karo ki output kya aayega.
3. `examples/` me us concept ki file chalao.
4. Uske baad hi `questions.md` kholo.

| # | Concept |
|--:|---------|
| 1 | extern "C" |
| 2 | POD types |
| 3 | Calling C from C++ |
| 4 | Calling C++ from C limits |
| 5 | Name mangling |
| 6 | Opaque pointers |
| 7 | Ownership across boundary |
| 8 | Exceptions across boundary |
| 9 | Header wrappers |
| 10 | Wrap a C API |

---

## 1. extern "C"

### Aasan Bhasha

Aaj ka idea — **extern "C"** — C interop ke bade theme ke andar aata hai. Ise ek tool ki tarah padho: ye kaam kya karta hai, kaunse rules enforce karta hai, aur un rules ko ignore karne par kya tootta hai?

### Chhota code

```cpp
// Explore: extern "C"
#include <iostream>
int main() {
  std::cout << "practice: extern "C"\n";
  return 0;
}
```

- **Yaad rakho:** `extern "C"` use karne wala code likhne se pehle ek invariant bolo.
- **Aam galti:** `extern "C"` ko copy-paste se use karna bina jaane ki wo kya own karta hai ya kab valid hai.

Practice: `examples/01_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 2. POD types

### Aasan Bhasha

Aaj ka idea — **POD types** — C interop ke bade theme ke andar aata hai. Ise ek tool ki tarah padho: ye kaam kya karta hai, kaunse rules enforce karta hai, aur un rules ko ignore karne par kya tootta hai?

### Chhota code

```cpp
// Explore: POD types
#include <iostream>
int main() {
  std::cout << "practice: POD types\n";
  return 0;
}
```

- **Yaad rakho:** `POD types` use karne wala code likhne se pehle ek invariant bolo.
- **Aam galti:** `POD types` ko copy-paste se use karna bina jaane ki wo kya own karta hai ya kab valid hai.

Practice: `examples/02_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 3. Calling C from C++

### Aasan Bhasha

Aaj ka idea — **Calling C from C++** — C interop ke bade theme ke andar aata hai. Ise ek tool ki tarah padho: ye kaam kya karta hai, kaunse rules enforce karta hai, aur un rules ko ignore karne par kya tootta hai?

### Chhota code

```cpp
// Explore: Calling C from C++
#include <iostream>
int main() {
  std::cout << "practice: Calling C from C++\n";
  return 0;
}
```

- **Yaad rakho:** `Calling C from C++` use karne wala code likhne se pehle ek invariant bolo.
- **Aam galti:** `Calling C from C++` ko copy-paste se use karna bina jaane ki wo kya own karta hai ya kab valid hai.

Practice: `examples/03_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 4. Calling C++ from C limits

### Aasan Bhasha

Aaj ka idea — **Calling C++ from C limits** — C interop ke bade theme ke andar aata hai. Ise ek tool ki tarah padho: ye kaam kya karta hai, kaunse rules enforce karta hai, aur un rules ko ignore karne par kya tootta hai?

### Chhota code

```cpp
// Explore: Calling C++ from C limits
#include <iostream>
int main() {
  std::cout << "practice: Calling C++ from C limits\n";
  return 0;
}
```

- **Yaad rakho:** `Calling C++ from C limits` use karne wala code likhne se pehle ek invariant bolo.
- **Aam galti:** `Calling C++ from C limits` ko copy-paste se use karna bina jaane ki wo kya own karta hai ya kab valid hai.

Practice: `examples/04_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 5. Name mangling

### Aasan Bhasha

Aaj ka idea — **Name mangling** — C interop ke bade theme ke andar aata hai. Ise ek tool ki tarah padho: ye kaam kya karta hai, kaunse rules enforce karta hai, aur un rules ko ignore karne par kya tootta hai?

### Chhota code

```cpp
// Explore: Name mangling
#include <iostream>
int main() {
  std::cout << "practice: Name mangling\n";
  return 0;
}
```

- **Yaad rakho:** `Name mangling` use karne wala code likhne se pehle ek invariant bolo.
- **Aam galti:** `Name mangling` ko copy-paste se use karna bina jaane ki wo kya own karta hai ya kab valid hai.

Practice: `examples/05_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 6. Opaque pointers

### Aasan Bhasha

Aaj ka idea — **Opaque pointers** — C interop ke bade theme ke andar aata hai. Ise ek tool ki tarah padho: ye kaam kya karta hai, kaunse rules enforce karta hai, aur un rules ko ignore karne par kya tootta hai?

### Chhota code

```cpp
// Explore: Opaque pointers
#include <iostream>
int main() {
  std::cout << "practice: Opaque pointers\n";
  return 0;
}
```

- **Yaad rakho:** `Opaque pointers` use karne wala code likhne se pehle ek invariant bolo.
- **Aam galti:** `Opaque pointers` ko copy-paste se use karna bina jaane ki wo kya own karta hai ya kab valid hai.

Practice: `examples/06_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 7. Ownership across boundary

### Aasan Bhasha

Aaj ka idea — **Ownership across boundary** — C interop ke bade theme ke andar aata hai. Ise ek tool ki tarah padho: ye kaam kya karta hai, kaunse rules enforce karta hai, aur un rules ko ignore karne par kya tootta hai?

### Chhota code

```cpp
// Explore: Ownership across boundary
#include <iostream>
int main() {
  std::cout << "practice: Ownership across boundary\n";
  return 0;
}
```

- **Yaad rakho:** `Ownership across boundary` use karne wala code likhne se pehle ek invariant bolo.
- **Aam galti:** `Ownership across boundary` ko copy-paste se use karna bina jaane ki wo kya own karta hai ya kab valid hai.

Practice: `examples/07_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 8. Exceptions across boundary

### Aasan Bhasha

Exceptions happy path ko failure se alag karte hain. Jab function apna kaam na kar sake to throw karo; wahan catch karo jahan recover ya report ho sake. Unwinding ke dauraan bhi RAII cleanup karta hai.

### Chhota code

```cpp
try {
  throw std::runtime_error("boom");
} catch (const std::exception& e) {
  std::cerr << e.what() << '\n';
}
```

- **Yaad rakho:** `const` reference se catch karo, value se nahi.
- **Aam galti:** Raw pointers throw karna ya value se catch karna (slicing).

Practice: `examples/08_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 9. Header wrappers

### Aasan Bhasha

Headers interface declare karte hain; `.cpp` files bodies define karti hain. Include guards ek header ko ek translation unit me do baar paste hone se rokte hain. One Definition Rule kehta hai ki non-inline functions ki poore program me exactly ek definition hoti hai.

### Chhota code

```cpp
#pragma once
struct Widget;           // forward decl — enough for pointers/refs
void use(Widget*);
```

- **Yaad rakho:** Declarations header me, definitions `.cpp` me (templates exception hain).
- **Aam galti:** Non-inline function header me define karna jo do `.cpp` include karti hain → multiple definition linker error.

Practice: `examples/09_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 10. Wrap a C API

### Aasan Bhasha

Aaj ka idea — **Wrap a C API** — C interop ke bade theme ke andar aata hai. Ise ek tool ki tarah padho: ye kaam kya karta hai, kaunse rules enforce karta hai, aur un rules ko ignore karne par kya tootta hai?

### Chhota code

```cpp
// Explore: Wrap a C API
#include <iostream>
int main() {
  std::cout << "practice: Wrap a C API\n";
  return 0;
}
```

- **Yaad rakho:** `Wrap a C API` use karne wala code likhne se pehle ek invariant bolo.
- **Aam galti:** `Wrap a C API` ko copy-paste se use karna bina jaane ki wo kya own karta hai ya kab valid hai.

Practice: `examples/10_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

---

## Day 110 ke baad aapko ye aana chahiye

- `C interop` ko bina notes dekhe kisi dost ko samjha sakna.
- Saare 10 examples `-std=c++17 -Wall -Wextra` ke saath compile aur run karna (naye flags sirf tab jab din ko C++20+ chahiye).
- `answers.md` dekhne se pehle `questions.md` ke 5 sawaal answer karna.
- Ek chhota extra program likhna jo aaj ke kam se kam 3 concepts jodta ho.

Ya is din ko **Badsha hub** me kholo (`python3 hub/server.py`) aur Learn / Practice / Quiz tabs use karo.
