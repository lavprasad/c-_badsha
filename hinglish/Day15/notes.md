# Day 15 -- Copy control deep dive

Aaj ka goal: **Copy control deep dive** ko aasan Hinglish me samajhna, har idea ka chhota code sample dekhna, phir `examples/` me practice karna.

Is din ko padhne ka tarika:
1. Har concept ka **Aasan Bhasha** section padho.
2. Code sample par nazar daalo -- pehle predict karo ki output kya aayega.
3. `examples/` me us concept ki file chalao.
4. Uske baad hi `questions.md` kholo.

| # | Concept |
|--:|---------|
| 1 | Defaulted special members |
| 2 | Deleted special members |
| 3 | Copy constructor details |
| 4 | Copy assignment details |
| 5 | Self-assignment safety |
| 6 | Rule of three |
| 7 | Rule of five |
| 8 | Rule of zero |
| 9 | When the compiler deletes your copy |
| 10 | Diagnostic patterns |

---

## 1. Defaulted special members

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

Practice: `examples/01_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 2. Deleted special members

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

Practice: `examples/02_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 3. Copy constructor details

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

Practice: `examples/03_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 4. Copy assignment details

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

Practice: `examples/04_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 5. Self-assignment safety

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

Practice: `examples/05_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 6. Rule of three

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

Practice: `examples/06_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 7. Rule of five

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

Practice: `examples/07_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 8. Rule of zero

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

## 9. When the compiler deletes your copy

### Aasan Bhasha

Heap tab tak jeeta hai jab tak aap use release na karo. Raw `new`/`delete` ki jagah smart pointers aur containers prefer karo. Agar raw ownership hi chahiye to har `new` ke liye har path par exactly ek matching `delete` ho.

### Chhota code

```cpp
// Prefer:
auto p = std::make_unique<int[]>(10);
// instead of new int[10] / delete[]
```

- **Yaad rakho:** `new` ke saath `delete`, aur `new[]` ke saath `delete[]`.
- **Aam galti:** `new[]` se aayi array memory par `delete` use karna.

Practice: `examples/09_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 10. Diagnostic patterns

### Aasan Bhasha

Aaj ka idea — **Diagnostic patterns** — Copy control deep dive ke bade theme ke andar aata hai. Ise ek tool ki tarah padho: ye kaam kya karta hai, kaunse rules enforce karta hai, aur un rules ko ignore karne par kya tootta hai?

### Chhota code

```cpp
// Explore: Diagnostic patterns
#include <iostream>
int main() {
  std::cout << "practice: Diagnostic patterns\n";
  return 0;
}
```

- **Yaad rakho:** `Diagnostic patterns` use karne wala code likhne se pehle ek invariant bolo.
- **Aam galti:** `Diagnostic patterns` ko copy-paste se use karna bina jaane ki wo kya own karta hai ya kab valid hai.

Practice: `examples/10_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

---

## Day 15 ke baad aapko ye aana chahiye

- `Copy control deep dive` ko bina notes dekhe kisi dost ko samjha sakna.
- Saare 10 examples `-std=c++17 -Wall -Wextra` ke saath compile aur run karna (naye flags sirf tab jab din ko C++20+ chahiye).
- `answers.md` dekhne se pehle `questions.md` ke 5 sawaal answer karna.
- Ek chhota extra program likhna jo aaj ke kam se kam 3 concepts jodta ho.

Ya is din ko **Badsha hub** me kholo (`python3 hub/server.py`) aur Learn / Practice / Quiz tabs use karo.
