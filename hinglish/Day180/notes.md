# Day 180 -- Packaging & distributing C++

Aaj ka goal: **Packaging & distributing C++** ko aasan Hinglish me samajhna, har idea ka chhota code sample dekhna, phir `examples/` me practice karna.

Is din ko padhne ka tarika:
1. Har concept ka **Aasan Bhasha** section padho.
2. Code sample par nazar daalo -- pehle predict karo ki output kya aayega.
3. `examples/` me us concept ki file chalao.
4. Uske baad hi `questions.md` kholo.

| # | Concept |
|--:|---------|
| 1 | Headers + libs |
| 2 | CMake package config idea |
| 3 | vcpkg/conan mindset |
| 4 | Semantic versioning |
| 5 | Platform matrices |
| 6 | Symbol visibility |
| 7 | License headers |
| 8 | Docs packaging |
| 9 | Minimal install |
| 10 | Package a tiny lib |

---

## 1. Headers + libs

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

Practice: `examples/01_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 2. CMake package config idea

### Aasan Bhasha

Projects skills ko jodte hain: saaf requirements, chhote modules, tests aur imaandaar docs. Ek chhoti vertical slice se shuru karo jo end-to-end chale, phir features mota karo.

### Chhota code

```cpp
int main(int argc, char** argv) {
  if (argc < 2) {
    std::cerr << "usage: tool <file>\n";
    return 1;
  }
  // ...
}
```

- **Yaad rakho:** Edge cases chamkane se pehle ek chalne wala subset ship karo.
- **Aam galti:** Hafton tak scaffolding banana jisme kuch chalta hi na ho.

Practice: `examples/02_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 3. vcpkg/conan mindset

### Aasan Bhasha

`map` keys ko sorted rakhta hai (tree); `unordered_map` hash karta hai aur average O(1) lookup deta hai. Order chahiye to sorted chuno; speed chahiye aur acha hash hai to hash chuno.

### Chhota code

```cpp
std::unordered_map<std::string, int> freq;
++freq["hi"];
for (auto& [k, v] : freq) std::cout << k << ':' << v << '\n';
```

- **Yaad rakho:** `operator[]` key na mile to default value insert kar deta hai.
- **Aam galti:** Sirf lookup ke liye `[]` use karna — missing key error ho to `find` / `at` behtar hai.

Practice: `examples/03_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 4. Semantic versioning

### Aasan Bhasha

Aaj ka idea — **Semantic versioning** — Packaging & distributing C++ ke bade theme ke andar aata hai. Ise ek tool ki tarah padho: ye kaam kya karta hai, kaunse rules enforce karta hai, aur un rules ko ignore karne par kya tootta hai?

### Chhota code

```cpp
// Explore: Semantic versioning
#include <iostream>
int main() {
  std::cout << "practice: Semantic versioning\n";
  return 0;
}
```

- **Yaad rakho:** `Semantic versioning` use karne wala code likhne se pehle ek invariant bolo.
- **Aam galti:** `Semantic versioning` ko copy-paste se use karna bina jaane ki wo kya own karta hai ya kab valid hai.

Practice: `examples/04_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 5. Platform matrices

### Aasan Bhasha

Aaj ka idea — **Platform matrices** — Packaging & distributing C++ ke bade theme ke andar aata hai. Ise ek tool ki tarah padho: ye kaam kya karta hai, kaunse rules enforce karta hai, aur un rules ko ignore karne par kya tootta hai?

### Chhota code

```cpp
// Explore: Platform matrices
#include <iostream>
int main() {
  std::cout << "practice: Platform matrices\n";
  return 0;
}
```

- **Yaad rakho:** `Platform matrices` use karne wala code likhne se pehle ek invariant bolo.
- **Aam galti:** `Platform matrices` ko copy-paste se use karna bina jaane ki wo kya own karta hai ya kab valid hai.

Practice: `examples/05_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 6. Symbol visibility

### Aasan Bhasha

Aaj ka idea — **Symbol visibility** — Packaging & distributing C++ ke bade theme ke andar aata hai. Ise ek tool ki tarah padho: ye kaam kya karta hai, kaunse rules enforce karta hai, aur un rules ko ignore karne par kya tootta hai?

### Chhota code

```cpp
// Explore: Symbol visibility
#include <iostream>
int main() {
  std::cout << "practice: Symbol visibility\n";
  return 0;
}
```

- **Yaad rakho:** `Symbol visibility` use karne wala code likhne se pehle ek invariant bolo.
- **Aam galti:** `Symbol visibility` ko copy-paste se use karna bina jaane ki wo kya own karta hai ya kab valid hai.

Practice: `examples/06_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 7. License headers

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

Practice: `examples/07_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 8. Docs packaging

### Aasan Bhasha

Aaj ka idea — **Docs packaging** — Packaging & distributing C++ ke bade theme ke andar aata hai. Ise ek tool ki tarah padho: ye kaam kya karta hai, kaunse rules enforce karta hai, aur un rules ko ignore karne par kya tootta hai?

### Chhota code

```cpp
// Explore: Docs packaging
#include <iostream>
int main() {
  std::cout << "practice: Docs packaging\n";
  return 0;
}
```

- **Yaad rakho:** `Docs packaging` use karne wala code likhne se pehle ek invariant bolo.
- **Aam galti:** `Docs packaging` ko copy-paste se use karna bina jaane ki wo kya own karta hai ya kab valid hai.

Practice: `examples/08_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 9. Minimal install

### Aasan Bhasha

Aaj ka idea — **Minimal install** — Packaging & distributing C++ ke bade theme ke andar aata hai. Ise ek tool ki tarah padho: ye kaam kya karta hai, kaunse rules enforce karta hai, aur un rules ko ignore karne par kya tootta hai?

### Chhota code

```cpp
// Explore: Minimal install
#include <iostream>
int main() {
  std::cout << "practice: Minimal install\n";
  return 0;
}
```

- **Yaad rakho:** `Minimal install` use karne wala code likhne se pehle ek invariant bolo.
- **Aam galti:** `Minimal install` ko copy-paste se use karna bina jaane ki wo kya own karta hai ya kab valid hai.

Practice: `examples/09_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 10. Package a tiny lib

### Aasan Bhasha

Aaj ka idea — **Package a tiny lib** — Packaging & distributing C++ ke bade theme ke andar aata hai. Ise ek tool ki tarah padho: ye kaam kya karta hai, kaunse rules enforce karta hai, aur un rules ko ignore karne par kya tootta hai?

### Chhota code

```cpp
// Explore: Package a tiny lib
#include <iostream>
int main() {
  std::cout << "practice: Package a tiny lib\n";
  return 0;
}
```

- **Yaad rakho:** `Package a tiny lib` use karne wala code likhne se pehle ek invariant bolo.
- **Aam galti:** `Package a tiny lib` ko copy-paste se use karna bina jaane ki wo kya own karta hai ya kab valid hai.

Practice: `examples/10_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

---

## Day 180 ke baad aapko ye aana chahiye

- `Packaging & distributing C++` ko bina notes dekhe kisi dost ko samjha sakna.
- Saare 10 examples `-std=c++17 -Wall -Wextra` ke saath compile aur run karna (naye flags sirf tab jab din ko C++20+ chahiye).
- `answers.md` dekhne se pehle `questions.md` ke 5 sawaal answer karna.
- Ek chhota extra program likhna jo aaj ke kam se kam 3 concepts jodta ho.

Ya is din ko **Badsha hub** me kholo (`python3 hub/server.py`) aur Learn / Practice / Quiz tabs use karo.
