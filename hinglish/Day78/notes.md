# Day 78 -- Naming & style

Aaj ka goal: **Naming & style** ko aasan Hinglish me samajhna, har idea ka chhota code sample dekhna, phir `examples/` me practice karna.

Is din ko padhne ka tarika:
1. Har concept ka **Aasan Bhasha** section padho.
2. Code sample par nazar daalo -- pehle predict karo ki output kya aayega.
3. `examples/` me us concept ki file chalao.
4. Uske baad hi `questions.md` kholo.

| # | Concept |
|--:|---------|
| 1 | Types vs values |
| 2 | Verbs for functions |
| 3 | Avoid abbreviations |
| 4 | Consistent prefixes |
| 5 | File naming |
| 6 | Namespace naming |
| 7 | Bool names |
| 8 | Duration suffixes |
| 9 | Style guides overview |
| 10 | Renaming pass |

---

## 1. Types vs values

### Aasan Bhasha

Aaj ka idea — **Types vs values** — Naming & style ke bade theme ke andar aata hai. Ise ek tool ki tarah padho: ye kaam kya karta hai, kaunse rules enforce karta hai, aur un rules ko ignore karne par kya tootta hai?

### Chhota code

```cpp
// Explore: Types vs values
#include <iostream>
int main() {
  std::cout << "practice: Types vs values\n";
  return 0;
}
```

- **Yaad rakho:** `Types vs values` use karne wala code likhne se pehle ek invariant bolo.
- **Aam galti:** `Types vs values` ko copy-paste se use karna bina jaane ki wo kya own karta hai ya kab valid hai.

Practice: `examples/01_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 2. Verbs for functions

### Aasan Bhasha

Aaj ka idea — **Verbs for functions** — Naming & style ke bade theme ke andar aata hai. Ise ek tool ki tarah padho: ye kaam kya karta hai, kaunse rules enforce karta hai, aur un rules ko ignore karne par kya tootta hai?

### Chhota code

```cpp
// Explore: Verbs for functions
#include <iostream>
int main() {
  std::cout << "practice: Verbs for functions\n";
  return 0;
}
```

- **Yaad rakho:** `Verbs for functions` use karne wala code likhne se pehle ek invariant bolo.
- **Aam galti:** `Verbs for functions` ko copy-paste se use karna bina jaane ki wo kya own karta hai ya kab valid hai.

Practice: `examples/02_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 3. Avoid abbreviations

### Aasan Bhasha

Aaj ka idea — **Avoid abbreviations** — Naming & style ke bade theme ke andar aata hai. Ise ek tool ki tarah padho: ye kaam kya karta hai, kaunse rules enforce karta hai, aur un rules ko ignore karne par kya tootta hai?

### Chhota code

```cpp
// Explore: Avoid abbreviations
#include <iostream>
int main() {
  std::cout << "practice: Avoid abbreviations\n";
  return 0;
}
```

- **Yaad rakho:** `Avoid abbreviations` use karne wala code likhne se pehle ek invariant bolo.
- **Aam galti:** `Avoid abbreviations` ko copy-paste se use karna bina jaane ki wo kya own karta hai ya kab valid hai.

Practice: `examples/03_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 4. Consistent prefixes

### Aasan Bhasha

Ye patterns nested loops ko linear ya logarithmic pass me badal dete hain. Binary search ke liye monotonic predicate chahiye. Two pointers / sliding window ke liye saaf invariant chahiye.

### Chhota code

```cpp
auto it = std::lower_bound(v.begin(), v.end(), x);
bool found = it != v.end() && *it == x;
```

- **Yaad rakho:** Loop likhne se pehle invariant likh kar rakho.
- **Aam galti:** Binary search ke bounds (`lo`/`hi`) me off-by-one galti.

Practice: `examples/04_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 5. File naming

### Aasan Bhasha

Aaj ka idea — **File naming** — Naming & style ke bade theme ke andar aata hai. Ise ek tool ki tarah padho: ye kaam kya karta hai, kaunse rules enforce karta hai, aur un rules ko ignore karne par kya tootta hai?

### Chhota code

```cpp
// Explore: File naming
#include <iostream>
int main() {
  std::cout << "practice: File naming\n";
  return 0;
}
```

- **Yaad rakho:** `File naming` use karne wala code likhne se pehle ek invariant bolo.
- **Aam galti:** `File naming` ko copy-paste se use karna bina jaane ki wo kya own karta hai ya kab valid hai.

Practice: `examples/05_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 6. Namespace naming

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

Practice: `examples/06_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 7. Bool names

### Aasan Bhasha

Aaj ka idea — **Bool names** — Naming & style ke bade theme ke andar aata hai. Ise ek tool ki tarah padho: ye kaam kya karta hai, kaunse rules enforce karta hai, aur un rules ko ignore karne par kya tootta hai?

### Chhota code

```cpp
// Explore: Bool names
#include <iostream>
int main() {
  std::cout << "practice: Bool names\n";
  return 0;
}
```

- **Yaad rakho:** `Bool names` use karne wala code likhne se pehle ek invariant bolo.
- **Aam galti:** `Bool names` ko copy-paste se use karna bina jaane ki wo kya own karta hai ya kab valid hai.

Practice: `examples/07_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 8. Duration suffixes

### Aasan Bhasha

`std::chrono` clocks aur durations se time naapta hai. Beeta hua time naapne ke liye `steady_clock`; wall-clock dates ke liye `system_clock`.

### Chhota code

```cpp
using clock = std::chrono::steady_clock;
auto t0 = clock::now();
// work...
auto ms = std::chrono::duration_cast<std::chrono::milliseconds>(clock::now() - t0);
```

- **Yaad rakho:** `steady_clock` kabhi peeche nahi jaata — benchmarks ke liye badhiya.
- **Aam galti:** Elapsed time ke liye `system_clock` use karna aur daylight-saving me phas jaana.

Practice: `examples/08_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 9. Style guides overview

### Aasan Bhasha

Aaj ka idea — **Style guides overview** — Naming & style ke bade theme ke andar aata hai. Ise ek tool ki tarah padho: ye kaam kya karta hai, kaunse rules enforce karta hai, aur un rules ko ignore karne par kya tootta hai?

### Chhota code

```cpp
// Explore: Style guides overview
#include <iostream>
int main() {
  std::cout << "practice: Style guides overview\n";
  return 0;
}
```

- **Yaad rakho:** `Style guides overview` use karne wala code likhne se pehle ek invariant bolo.
- **Aam galti:** `Style guides overview` ko copy-paste se use karna bina jaane ki wo kya own karta hai ya kab valid hai.

Practice: `examples/09_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 10. Renaming pass

### Aasan Bhasha

Aaj ka idea — **Renaming pass** — Naming & style ke bade theme ke andar aata hai. Ise ek tool ki tarah padho: ye kaam kya karta hai, kaunse rules enforce karta hai, aur un rules ko ignore karne par kya tootta hai?

### Chhota code

```cpp
// Explore: Renaming pass
#include <iostream>
int main() {
  std::cout << "practice: Renaming pass\n";
  return 0;
}
```

- **Yaad rakho:** `Renaming pass` use karne wala code likhne se pehle ek invariant bolo.
- **Aam galti:** `Renaming pass` ko copy-paste se use karna bina jaane ki wo kya own karta hai ya kab valid hai.

Practice: `examples/10_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

---

## Day 78 ke baad aapko ye aana chahiye

- `Naming & style` ko bina notes dekhe kisi dost ko samjha sakna.
- Saare 10 examples `-std=c++17 -Wall -Wextra` ke saath compile aur run karna (naye flags sirf tab jab din ko C++20+ chahiye).
- `answers.md` dekhne se pehle `questions.md` ke 5 sawaal answer karna.
- Ek chhota extra program likhna jo aaj ke kam se kam 3 concepts jodta ho.

Ya is din ko **Badsha hub** me kholo (`python3 hub/server.py`) aur Learn / Practice / Quiz tabs use karo.
