# Day 123 -- source_location & debugging aids

Aaj ka goal: **source_location & debugging aids** ko aasan Hinglish me samajhna, har idea ka chhota code sample dekhna, phir `examples/` me practice karna.

Is din ko padhne ka tarika:
1. Har concept ka **Aasan Bhasha** section padho.
2. Code sample par nazar daalo -- pehle predict karo ki output kya aayega.
3. `examples/` me us concept ki file chalao.
4. Uske baad hi `questions.md` kholo.

| # | Concept |
|--:|---------|
| 1 | std::source_location |
| 2 | file/line/function |
| 3 | Logging with location |
| 4 | assert alternatives |
| 5 | [[likely]] / [[unlikely]] |
| 6 | [[nodiscard]] recap |
| 7 | [[maybe_unused]] |
| 8 | Attributes overview |
| 9 | Compiler builtins |
| 10 | A CHECK macro |

---

## 1. std::source_location

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

Practice: `examples/01_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 2. file/line/function

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

Practice: `examples/02_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 3. Logging with location

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

Practice: `examples/03_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 4. assert alternatives

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

Practice: `examples/04_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 5. [[likely]] / [[unlikely]]

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

## 6. [[nodiscard]] recap

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

## 7. [[maybe_unused]]

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

Practice: `examples/07_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 8. Attributes overview

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

## 9. Compiler builtins

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

Practice: `examples/09_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 10. A CHECK macro

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

Practice: `examples/10_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

---

## Day 123 ke baad aapko ye aana chahiye

- `source_location & debugging aids` ko bina notes dekhe kisi dost ko samjha sakna.
- Saare 10 examples `-std=c++17 -Wall -Wextra` ke saath compile aur run karna (naye flags sirf tab jab din ko C++20+ chahiye).
- `answers.md` dekhne se pehle `questions.md` ke 5 sawaal answer karna.
- Ek chhota extra program likhna jo aaj ke kam se kam 3 concepts jodta ho.

Ya is din ko **Badsha hub** me kholo (`python3 hub/server.py`) aur Learn / Practice / Quiz tabs use karo.
