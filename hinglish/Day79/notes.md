# Day 79 -- Build systems lite

Aaj ka goal: **Build systems lite** ko aasan Hinglish me samajhna, har idea ka chhota code sample dekhna, phir `examples/` me practice karna.

Is din ko padhne ka tarika:
1. Har concept ka **Aasan Bhasha** section padho.
2. Code sample par nazar daalo -- pehle predict karo ki output kya aayega.
3. `examples/` me us concept ki file chalao.
4. Uske baad hi `questions.md` kholo.

| # | Concept |
|--:|---------|
| 1 | Why build systems |
| 2 | Make basics |
| 3 | CMake mental model |
| 4 | targets and deps |
| 5 | Debug vs Release |
| 6 | Out-of-source builds |
| 7 | Compile flags |
| 8 | Sanitizer builds |
| 9 | Reproducible builds idea |
| 10 | A tiny CMakeLists |

---

## 1. Why build systems

### Aasan Bhasha

Aaj ka idea — **Why build systems** — Build systems lite ke bade theme ke andar aata hai. Ise ek tool ki tarah padho: ye kaam kya karta hai, kaunse rules enforce karta hai, aur un rules ko ignore karne par kya tootta hai?

### Chhota code

```cpp
// Explore: Why build systems
#include <iostream>
int main() {
  std::cout << "practice: Why build systems\n";
  return 0;
}
```

- **Yaad rakho:** `Why build systems` use karne wala code likhne se pehle ek invariant bolo.
- **Aam galti:** `Why build systems` ko copy-paste se use karna bina jaane ki wo kya own karta hai ya kab valid hai.

Practice: `examples/01_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 2. Make basics

### Aasan Bhasha

Aaj ka idea — **Make basics** — Build systems lite ke bade theme ke andar aata hai. Ise ek tool ki tarah padho: ye kaam kya karta hai, kaunse rules enforce karta hai, aur un rules ko ignore karne par kya tootta hai?

### Chhota code

```cpp
// Explore: Make basics
#include <iostream>
int main() {
  std::cout << "practice: Make basics\n";
  return 0;
}
```

- **Yaad rakho:** `Make basics` use karne wala code likhne se pehle ek invariant bolo.
- **Aam galti:** `Make basics` ko copy-paste se use karna bina jaane ki wo kya own karta hai ya kab valid hai.

Practice: `examples/02_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 3. CMake mental model

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

Practice: `examples/03_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 4. targets and deps

### Aasan Bhasha

Aaj ka idea — **targets and deps** — Build systems lite ke bade theme ke andar aata hai. Ise ek tool ki tarah padho: ye kaam kya karta hai, kaunse rules enforce karta hai, aur un rules ko ignore karne par kya tootta hai?

### Chhota code

```cpp
// Explore: targets and deps
#include <iostream>
int main() {
  std::cout << "practice: targets and deps\n";
  return 0;
}
```

- **Yaad rakho:** `targets and deps` use karne wala code likhne se pehle ek invariant bolo.
- **Aam galti:** `targets and deps` ko copy-paste se use karna bina jaane ki wo kya own karta hai ya kab valid hai.

Practice: `examples/04_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 5. Debug vs Release

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

Practice: `examples/05_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 6. Out-of-source builds

### Aasan Bhasha

Aaj ka idea — **Out-of-source builds** — Build systems lite ke bade theme ke andar aata hai. Ise ek tool ki tarah padho: ye kaam kya karta hai, kaunse rules enforce karta hai, aur un rules ko ignore karne par kya tootta hai?

### Chhota code

```cpp
// Explore: Out-of-source builds
#include <iostream>
int main() {
  std::cout << "practice: Out-of-source builds\n";
  return 0;
}
```

- **Yaad rakho:** `Out-of-source builds` use karne wala code likhne se pehle ek invariant bolo.
- **Aam galti:** `Out-of-source builds` ko copy-paste se use karna bina jaane ki wo kya own karta hai ya kab valid hai.

Practice: `examples/06_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 7. Compile flags

### Aasan Bhasha

Aaj ka idea — **Compile flags** — Build systems lite ke bade theme ke andar aata hai. Ise ek tool ki tarah padho: ye kaam kya karta hai, kaunse rules enforce karta hai, aur un rules ko ignore karne par kya tootta hai?

### Chhota code

```cpp
// Explore: Compile flags
#include <iostream>
int main() {
  std::cout << "practice: Compile flags\n";
  return 0;
}
```

- **Yaad rakho:** `Compile flags` use karne wala code likhne se pehle ek invariant bolo.
- **Aam galti:** `Compile flags` ko copy-paste se use karna bina jaane ki wo kya own karta hai ya kab valid hai.

Practice: `examples/07_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 8. Sanitizer builds

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

Practice: `examples/08_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 9. Reproducible builds idea

### Aasan Bhasha

Aaj ka idea — **Reproducible builds idea** — Build systems lite ke bade theme ke andar aata hai. Ise ek tool ki tarah padho: ye kaam kya karta hai, kaunse rules enforce karta hai, aur un rules ko ignore karne par kya tootta hai?

### Chhota code

```cpp
// Explore: Reproducible builds idea
#include <iostream>
int main() {
  std::cout << "practice: Reproducible builds idea\n";
  return 0;
}
```

- **Yaad rakho:** `Reproducible builds idea` use karne wala code likhne se pehle ek invariant bolo.
- **Aam galti:** `Reproducible builds idea` ko copy-paste se use karna bina jaane ki wo kya own karta hai ya kab valid hai.

Practice: `examples/09_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 10. A tiny CMakeLists

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

Practice: `examples/10_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

---

## Day 79 ke baad aapko ye aana chahiye

- `Build systems lite` ko bina notes dekhe kisi dost ko samjha sakna.
- Saare 10 examples `-std=c++17 -Wall -Wextra` ke saath compile aur run karna (naye flags sirf tab jab din ko C++20+ chahiye).
- `answers.md` dekhne se pehle `questions.md` ke 5 sawaal answer karna.
- Ek chhota extra program likhna jo aaj ke kam se kam 3 concepts jodta ho.

Ya is din ko **Badsha hub** me kholo (`python3 hub/server.py`) aur Learn / Practice / Quiz tabs use karo.
