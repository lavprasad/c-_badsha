# Day 138 -- Inlining & linkage

Aaj ka goal: **Inlining & linkage** ko aasan Hinglish me samajhna, har idea ka chhota code sample dekhna, phir `examples/` me practice karna.

Is din ko padhne ka tarika:
1. Har concept ka **Aasan Bhasha** section padho.
2. Code sample par nazar daalo -- pehle predict karo ki output kya aayega.
3. `examples/` me us concept ki file chalao.
4. Uske baad hi `questions.md` kholo.

| # | Concept |
|--:|---------|
| 1 | inline functions |
| 2 | inline variables (C++17) |
| 3 | ODR with inline |
| 4 | COMDAT idea |
| 5 | LTO mindset |
| 6 | Always_inline caution |
| 7 | Outline cold paths |
| 8 | Template linkage |
| 9 | Anonymous namespace linkage |
| 10 | Header pitfalls |

---

## 1. inline functions

### Aasan Bhasha

Aaj ka idea — **inline functions** — Inlining & linkage ke bade theme ke andar aata hai. Ise ek tool ki tarah padho: ye kaam kya karta hai, kaunse rules enforce karta hai, aur un rules ko ignore karne par kya tootta hai?

### Chhota code

```cpp
// Explore: inline functions
#include <iostream>
int main() {
  std::cout << "practice: inline functions\n";
  return 0;
}
```

- **Yaad rakho:** `inline functions` use karne wala code likhne se pehle ek invariant bolo.
- **Aam galti:** `inline functions` ko copy-paste se use karna bina jaane ki wo kya own karta hai ya kab valid hai.

Practice: `examples/01_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 2. inline variables (C++17)

### Aasan Bhasha

Aaj ka idea — **inline variables (C++17)** — Inlining & linkage ke bade theme ke andar aata hai. Ise ek tool ki tarah padho: ye kaam kya karta hai, kaunse rules enforce karta hai, aur un rules ko ignore karne par kya tootta hai?

### Chhota code

```cpp
// Explore: inline variables (C++17)
#include <iostream>
int main() {
  std::cout << "practice: inline variables (C++17)\n";
  return 0;
}
```

- **Yaad rakho:** `inline variables (C++17)` use karne wala code likhne se pehle ek invariant bolo.
- **Aam galti:** `inline variables (C++17)` ko copy-paste se use karna bina jaane ki wo kya own karta hai ya kab valid hai.

Practice: `examples/02_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 3. ODR with inline

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

Practice: `examples/03_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 4. COMDAT idea

### Aasan Bhasha

Aaj ka idea — **COMDAT idea** — Inlining & linkage ke bade theme ke andar aata hai. Ise ek tool ki tarah padho: ye kaam kya karta hai, kaunse rules enforce karta hai, aur un rules ko ignore karne par kya tootta hai?

### Chhota code

```cpp
// Explore: COMDAT idea
#include <iostream>
int main() {
  std::cout << "practice: COMDAT idea\n";
  return 0;
}
```

- **Yaad rakho:** `COMDAT idea` use karne wala code likhne se pehle ek invariant bolo.
- **Aam galti:** `COMDAT idea` ko copy-paste se use karna bina jaane ki wo kya own karta hai ya kab valid hai.

Practice: `examples/04_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 5. LTO mindset

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

Practice: `examples/05_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 6. Always_inline caution

### Aasan Bhasha

Aaj ka idea — **Always_inline caution** — Inlining & linkage ke bade theme ke andar aata hai. Ise ek tool ki tarah padho: ye kaam kya karta hai, kaunse rules enforce karta hai, aur un rules ko ignore karne par kya tootta hai?

### Chhota code

```cpp
// Explore: Always_inline caution
#include <iostream>
int main() {
  std::cout << "practice: Always_inline caution\n";
  return 0;
}
```

- **Yaad rakho:** `Always_inline caution` use karne wala code likhne se pehle ek invariant bolo.
- **Aam galti:** `Always_inline caution` ko copy-paste se use karna bina jaane ki wo kya own karta hai ya kab valid hai.

Practice: `examples/06_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 7. Outline cold paths

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

Practice: `examples/07_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 8. Template linkage

### Aasan Bhasha

Templates har type ke liye code generate karte hain. Ye errors ko compile time par le aate hain aur runtime virtual dispatch hata dete hain. Inhe padhne layak rakho; jahan ho sake parameters constrain karo.

### Chhota code

```cpp
template <typename T>
T clamp_pos(T x) {
  return x < T{0} ? T{0} : x;
}
```

- **Yaad rakho:** Templates aksar headers me rehte hain taaki har TU instantiate kar sake.
- **Aam galti:** Template ki definition sirf `.cpp` me rakhna aur phir linker error par hairan hona.

Practice: `examples/08_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 9. Anonymous namespace linkage

### Aasan Bhasha

Namespaces naamon ko group karte hain taaki graphics ka `draw` cards ke `draw` se na takraaye. `std::` likh kar qualify karna behtar hai; headers me `using namespace std;` mat likho.

### Chhota code

```cpp
namespace app {
  void run();
}
void app::run() { /* ... */ }
```

- **Yaad rakho:** Header me kabhi bhi `using namespace std;` mat daalo.
- **Aam galti:** Sab kuch global namespace me daal dena aur chupchap overload clash jhelna.

Practice: `examples/09_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 10. Header pitfalls

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

Practice: `examples/10_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

---

## Day 138 ke baad aapko ye aana chahiye

- `Inlining & linkage` ko bina notes dekhe kisi dost ko samjha sakna.
- Saare 10 examples `-std=c++17 -Wall -Wextra` ke saath compile aur run karna (naye flags sirf tab jab din ko C++20+ chahiye).
- `answers.md` dekhne se pehle `questions.md` ke 5 sawaal answer karna.
- Ek chhota extra program likhna jo aaj ke kam se kam 3 concepts jodta ho.

Ya is din ko **Badsha hub** me kholo (`python3 hub/server.py`) aur Learn / Practice / Quiz tabs use karo.
