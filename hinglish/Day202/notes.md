# Day 202 -- Windows vs Linux notes for C++

Aaj ka goal: **Windows vs Linux notes for C++** ko aasan Hinglish me samajhna, har idea ka chhota code sample dekhna, phir `examples/` me practice karna.

Is din ko padhne ka tarika:
1. Har concept ka **Aasan Bhasha** section padho.
2. Code sample par nazar daalo -- pehle predict karo ki output kya aayega.
3. `examples/` me us concept ki file chalao.
4. Uske baad hi `questions.md` kholo.

| # | Concept |
|--:|---------|
| 1 | Toolchains |
| 2 | Path APIs |
| 3 | Process APIs |
| 4 | DLL vs .so |
| 5 | CRT differences |
| 6 | Line buffering |
| 7 | Case sensitivity |
| 8 | Permissions |
| 9 | Debuggers |
| 10 | Portability checklist |

---

## 1. Toolchains

### Aasan Bhasha

Aaj ka idea — **Toolchains** — Windows vs Linux notes for C++ ke bade theme ke andar aata hai. Ise ek tool ki tarah padho: ye kaam kya karta hai, kaunse rules enforce karta hai, aur un rules ko ignore karne par kya tootta hai?

### Chhota code

```cpp
// Explore: Toolchains
#include <iostream>
int main() {
  std::cout << "practice: Toolchains\n";
  return 0;
}
```

- **Yaad rakho:** `Toolchains` use karne wala code likhne se pehle ek invariant bolo.
- **Aam galti:** `Toolchains` ko copy-paste se use karna bina jaane ki wo kya own karta hai ya kab valid hai.

Practice: `examples/01_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 2. Path APIs

### Aasan Bhasha

`std::filesystem` portable paths aur directory walks deta hai. Folder jodne ke liye haath se string concatenation ki jagah `path` objects use karo.

### Chhota code

```cpp
#include <filesystem>
namespace fs = std::filesystem;
for (auto& e : fs::directory_iterator(".")) {
  std::cout << e.path() << '\n';
}
```

- **Yaad rakho:** `exists` check karo / errors handle karo — disks fail hote hain.
- **Aam galti:** Har OS par `/` separator maan lena, bina `path` use kiye.

Practice: `examples/02_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 3. Process APIs

### Aasan Bhasha

Aaj ka idea — **Process APIs** — Windows vs Linux notes for C++ ke bade theme ke andar aata hai. Ise ek tool ki tarah padho: ye kaam kya karta hai, kaunse rules enforce karta hai, aur un rules ko ignore karne par kya tootta hai?

### Chhota code

```cpp
// Explore: Process APIs
#include <iostream>
int main() {
  std::cout << "practice: Process APIs\n";
  return 0;
}
```

- **Yaad rakho:** `Process APIs` use karne wala code likhne se pehle ek invariant bolo.
- **Aam galti:** `Process APIs` ko copy-paste se use karna bina jaane ki wo kya own karta hai ya kab valid hai.

Practice: `examples/03_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 4. DLL vs .so

### Aasan Bhasha

Aaj ka idea — **DLL vs .so** — Windows vs Linux notes for C++ ke bade theme ke andar aata hai. Ise ek tool ki tarah padho: ye kaam kya karta hai, kaunse rules enforce karta hai, aur un rules ko ignore karne par kya tootta hai?

### Chhota code

```cpp
// Explore: DLL vs .so
#include <iostream>
int main() {
  std::cout << "practice: DLL vs .so\n";
  return 0;
}
```

- **Yaad rakho:** `DLL vs .so` use karne wala code likhne se pehle ek invariant bolo.
- **Aam galti:** `DLL vs .so` ko copy-paste se use karna bina jaane ki wo kya own karta hai ya kab valid hai.

Practice: `examples/04_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 5. CRT differences

### Aasan Bhasha

Aaj ka idea — **CRT differences** — Windows vs Linux notes for C++ ke bade theme ke andar aata hai. Ise ek tool ki tarah padho: ye kaam kya karta hai, kaunse rules enforce karta hai, aur un rules ko ignore karne par kya tootta hai?

### Chhota code

```cpp
// Explore: CRT differences
#include <iostream>
int main() {
  std::cout << "practice: CRT differences\n";
  return 0;
}
```

- **Yaad rakho:** `CRT differences` use karne wala code likhne se pehle ek invariant bolo.
- **Aam galti:** `CRT differences` ko copy-paste se use karna bina jaane ki wo kya own karta hai ya kab valid hai.

Practice: `examples/05_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 6. Line buffering

### Aasan Bhasha

Aaj ka idea — **Line buffering** — Windows vs Linux notes for C++ ke bade theme ke andar aata hai. Ise ek tool ki tarah padho: ye kaam kya karta hai, kaunse rules enforce karta hai, aur un rules ko ignore karne par kya tootta hai?

### Chhota code

```cpp
// Explore: Line buffering
#include <iostream>
int main() {
  std::cout << "practice: Line buffering\n";
  return 0;
}
```

- **Yaad rakho:** `Line buffering` use karne wala code likhne se pehle ek invariant bolo.
- **Aam galti:** `Line buffering` ko copy-paste se use karna bina jaane ki wo kya own karta hai ya kab valid hai.

Practice: `examples/06_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 7. Case sensitivity

### Aasan Bhasha

Aaj ka idea — **Case sensitivity** — Windows vs Linux notes for C++ ke bade theme ke andar aata hai. Ise ek tool ki tarah padho: ye kaam kya karta hai, kaunse rules enforce karta hai, aur un rules ko ignore karne par kya tootta hai?

### Chhota code

```cpp
// Explore: Case sensitivity
#include <iostream>
int main() {
  std::cout << "practice: Case sensitivity\n";
  return 0;
}
```

- **Yaad rakho:** `Case sensitivity` use karne wala code likhne se pehle ek invariant bolo.
- **Aam galti:** `Case sensitivity` ko copy-paste se use karna bina jaane ki wo kya own karta hai ya kab valid hai.

Practice: `examples/07_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 8. Permissions

### Aasan Bhasha

Aaj ka idea — **Permissions** — Windows vs Linux notes for C++ ke bade theme ke andar aata hai. Ise ek tool ki tarah padho: ye kaam kya karta hai, kaunse rules enforce karta hai, aur un rules ko ignore karne par kya tootta hai?

### Chhota code

```cpp
// Explore: Permissions
#include <iostream>
int main() {
  std::cout << "practice: Permissions\n";
  return 0;
}
```

- **Yaad rakho:** `Permissions` use karne wala code likhne se pehle ek invariant bolo.
- **Aam galti:** `Permissions` ko copy-paste se use karna bina jaane ki wo kya own karta hai ya kab valid hai.

Practice: `examples/08_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 9. Debuggers

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

## 10. Portability checklist

### Aasan Bhasha

Aaj ka idea — **Portability checklist** — Windows vs Linux notes for C++ ke bade theme ke andar aata hai. Ise ek tool ki tarah padho: ye kaam kya karta hai, kaunse rules enforce karta hai, aur un rules ko ignore karne par kya tootta hai?

### Chhota code

```cpp
// Explore: Portability checklist
#include <iostream>
int main() {
  std::cout << "practice: Portability checklist\n";
  return 0;
}
```

- **Yaad rakho:** `Portability checklist` use karne wala code likhne se pehle ek invariant bolo.
- **Aam galti:** `Portability checklist` ko copy-paste se use karna bina jaane ki wo kya own karta hai ya kab valid hai.

Practice: `examples/10_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

---

## Day 202 ke baad aapko ye aana chahiye

- `Windows vs Linux notes for C++` ko bina notes dekhe kisi dost ko samjha sakna.
- Saare 10 examples `-std=c++17 -Wall -Wextra` ke saath compile aur run karna (naye flags sirf tab jab din ko C++20+ chahiye).
- `answers.md` dekhne se pehle `questions.md` ke 5 sawaal answer karna.
- Ek chhota extra program likhna jo aaj ke kam se kam 3 concepts jodta ho.

Ya is din ko **Badsha hub** me kholo (`python3 hub/server.py`) aur Learn / Practice / Quiz tabs use karo.
