# Day 99 -- Caching & locality

Aaj ka goal: **Caching & locality** ko aasan Hinglish me samajhna, har idea ka chhota code sample dekhna, phir `examples/` me practice karna.

Is din ko padhne ka tarika:
1. Har concept ka **Aasan Bhasha** section padho.
2. Code sample par nazar daalo -- pehle predict karo ki output kya aayega.
3. `examples/` me us concept ki file chalao.
4. Uske baad hi `questions.md` kholo.

| # | Concept |
|--:|---------|
| 1 | CPU caches |
| 2 | Spatial locality |
| 3 | Temporal locality |
| 4 | AoS vs SoA |
| 5 | False sharing again |
| 6 | Prefetch intuition |
| 7 | Working set |
| 8 | Cold vs hot paths |
| 9 | Measuring with timing |
| 10 | SoA transform demo |

---

## 1. CPU caches

### Aasan Bhasha

Aaj ka idea — **CPU caches** — Caching & locality ke bade theme ke andar aata hai. Ise ek tool ki tarah padho: ye kaam kya karta hai, kaunse rules enforce karta hai, aur un rules ko ignore karne par kya tootta hai?

### Chhota code

```cpp
// Explore: CPU caches
#include <iostream>
int main() {
  std::cout << "practice: CPU caches\n";
  return 0;
}
```

- **Yaad rakho:** `CPU caches` use karne wala code likhne se pehle ek invariant bolo.
- **Aam galti:** `CPU caches` ko copy-paste se use karna bina jaane ki wo kya own karta hai ya kab valid hai.

Practice: `examples/01_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 2. Spatial locality

### Aasan Bhasha

Aaj ka idea — **Spatial locality** — Caching & locality ke bade theme ke andar aata hai. Ise ek tool ki tarah padho: ye kaam kya karta hai, kaunse rules enforce karta hai, aur un rules ko ignore karne par kya tootta hai?

### Chhota code

```cpp
// Explore: Spatial locality
#include <iostream>
int main() {
  std::cout << "practice: Spatial locality\n";
  return 0;
}
```

- **Yaad rakho:** `Spatial locality` use karne wala code likhne se pehle ek invariant bolo.
- **Aam galti:** `Spatial locality` ko copy-paste se use karna bina jaane ki wo kya own karta hai ya kab valid hai.

Practice: `examples/02_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 3. Temporal locality

### Aasan Bhasha

Aaj ka idea — **Temporal locality** — Caching & locality ke bade theme ke andar aata hai. Ise ek tool ki tarah padho: ye kaam kya karta hai, kaunse rules enforce karta hai, aur un rules ko ignore karne par kya tootta hai?

### Chhota code

```cpp
// Explore: Temporal locality
#include <iostream>
int main() {
  std::cout << "practice: Temporal locality\n";
  return 0;
}
```

- **Yaad rakho:** `Temporal locality` use karne wala code likhne se pehle ek invariant bolo.
- **Aam galti:** `Temporal locality` ko copy-paste se use karna bina jaane ki wo kya own karta hai ya kab valid hai.

Practice: `examples/03_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 4. AoS vs SoA

### Aasan Bhasha

Aaj ka idea — **AoS vs SoA** — Caching & locality ke bade theme ke andar aata hai. Ise ek tool ki tarah padho: ye kaam kya karta hai, kaunse rules enforce karta hai, aur un rules ko ignore karne par kya tootta hai?

### Chhota code

```cpp
// Explore: AoS vs SoA
#include <iostream>
int main() {
  std::cout << "practice: AoS vs SoA\n";
  return 0;
}
```

- **Yaad rakho:** `AoS vs SoA` use karne wala code likhne se pehle ek invariant bolo.
- **Aam galti:** `AoS vs SoA` ko copy-paste se use karna bina jaane ki wo kya own karta hai ya kab valid hai.

Practice: `examples/04_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 5. False sharing again

### Aasan Bhasha

Aaj ka idea — **False sharing again** — Caching & locality ke bade theme ke andar aata hai. Ise ek tool ki tarah padho: ye kaam kya karta hai, kaunse rules enforce karta hai, aur un rules ko ignore karne par kya tootta hai?

### Chhota code

```cpp
// Explore: False sharing again
#include <iostream>
int main() {
  std::cout << "practice: False sharing again\n";
  return 0;
}
```

- **Yaad rakho:** `False sharing again` use karne wala code likhne se pehle ek invariant bolo.
- **Aam galti:** `False sharing again` ko copy-paste se use karna bina jaane ki wo kya own karta hai ya kab valid hai.

Practice: `examples/05_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 6. Prefetch intuition

### Aasan Bhasha

Aaj ka idea — **Prefetch intuition** — Caching & locality ke bade theme ke andar aata hai. Ise ek tool ki tarah padho: ye kaam kya karta hai, kaunse rules enforce karta hai, aur un rules ko ignore karne par kya tootta hai?

### Chhota code

```cpp
// Explore: Prefetch intuition
#include <iostream>
int main() {
  std::cout << "practice: Prefetch intuition\n";
  return 0;
}
```

- **Yaad rakho:** `Prefetch intuition` use karne wala code likhne se pehle ek invariant bolo.
- **Aam galti:** `Prefetch intuition` ko copy-paste se use karna bina jaane ki wo kya own karta hai ya kab valid hai.

Practice: `examples/06_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 7. Working set

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

Practice: `examples/07_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 8. Cold vs hot paths

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

Practice: `examples/08_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 9. Measuring with timing

### Aasan Bhasha

Aaj ka idea — **Measuring with timing** — Caching & locality ke bade theme ke andar aata hai. Ise ek tool ki tarah padho: ye kaam kya karta hai, kaunse rules enforce karta hai, aur un rules ko ignore karne par kya tootta hai?

### Chhota code

```cpp
// Explore: Measuring with timing
#include <iostream>
int main() {
  std::cout << "practice: Measuring with timing\n";
  return 0;
}
```

- **Yaad rakho:** `Measuring with timing` use karne wala code likhne se pehle ek invariant bolo.
- **Aam galti:** `Measuring with timing` ko copy-paste se use karna bina jaane ki wo kya own karta hai ya kab valid hai.

Practice: `examples/09_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 10. SoA transform demo

### Aasan Bhasha

STL algorithms iterator ranges ke upar verbs hain. Jab intent match kare (`find`, `sort`, `transform`) to haath se likhe loops se inhe upar rakho. Erase-remove idiom sequence container se value/predicate se elements hatata hai.

### Chhota code

```cpp
v.erase(std::remove(v.begin(), v.end(), 0), v.end());
std::sort(v.begin(), v.end());
```

- **Yaad rakho:** `remove` sirf elements khiskata hai — `erase` phir bhi karna padta hai.
- **Aam galti:** `std::remove` call karna aur container ka `erase` bhool jaana.

Practice: `examples/10_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

---

## Day 99 ke baad aapko ye aana chahiye

- `Caching & locality` ko bina notes dekhe kisi dost ko samjha sakna.
- Saare 10 examples `-std=c++17 -Wall -Wextra` ke saath compile aur run karna (naye flags sirf tab jab din ko C++20+ chahiye).
- `answers.md` dekhne se pehle `questions.md` ke 5 sawaal answer karna.
- Ek chhota extra program likhna jo aaj ke kam se kam 3 concepts jodta ho.

Ya is din ko **Badsha hub** me kholo (`python3 hub/server.py`) aur Learn / Practice / Quiz tabs use karo.
