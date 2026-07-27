# Day 94 -- Serialization basics

Aaj ka goal: **Serialization basics** ko aasan Hinglish me samajhna, har idea ka chhota code sample dekhna, phir `examples/` me practice karna.

Is din ko padhne ka tarika:
1. Har concept ka **Aasan Bhasha** section padho.
2. Code sample par nazar daalo -- pehle predict karo ki output kya aayega.
3. `examples/` me us concept ki file chalao.
4. Uske baad hi `questions.md` kholo.

| # | Concept |
|--:|---------|
| 1 | Binary layouts |
| 2 | Endianness |
| 3 | Length prefixes |
| 4 | Text formats (CSV/JSON idea) |
| 5 | Versioning |
| 6 | Padding traps |
| 7 | Checksums |
| 8 | Schema evolution |
| 9 | Security (untrusted input) |
| 10 | A TLV encoder |

---

## 1. Binary layouts

### Aasan Bhasha

Aaj ka idea — **Binary layouts** — Serialization basics ke bade theme ke andar aata hai. Ise ek tool ki tarah padho: ye kaam kya karta hai, kaunse rules enforce karta hai, aur un rules ko ignore karne par kya tootta hai?

### Chhota code

```cpp
// Explore: Binary layouts
#include <iostream>
int main() {
  std::cout << "practice: Binary layouts\n";
  return 0;
}
```

- **Yaad rakho:** `Binary layouts` use karne wala code likhne se pehle ek invariant bolo.
- **Aam galti:** `Binary layouts` ko copy-paste se use karna bina jaane ki wo kya own karta hai ya kab valid hai.

Practice: `examples/01_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 2. Endianness

### Aasan Bhasha

Iterators container ke andar advanced pointers jaise hain. Algorithms `[begin, end)` half-open range lete hain. Ye jaano ki insert/erase inhe kab invalid karte hain.

### Chhota code

```cpp
std::vector<int> v{1,2,3};
for (auto it = v.begin(); it != v.end(); ++it)
  std::cout << *it << ' ';
```

- **Yaad rakho:** Erase ke baad wahi iterator use karo jo `erase` return karta hai.
- **Aam galti:** Invalid ho chuke iterator ko increment karna → undefined behaviour.

Practice: `examples/02_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 3. Length prefixes

### Aasan Bhasha

Ye patterns nested loops ko linear ya logarithmic pass me badal dete hain. Binary search ke liye monotonic predicate chahiye. Two pointers / sliding window ke liye saaf invariant chahiye.

### Chhota code

```cpp
auto it = std::lower_bound(v.begin(), v.end(), x);
bool found = it != v.end() && *it == x;
```

- **Yaad rakho:** Loop likhne se pehle invariant likh kar rakho.
- **Aam galti:** Binary search ke bounds (`lo`/`hi`) me off-by-one galti.

Practice: `examples/03_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 4. Text formats (CSV/JSON idea)

### Aasan Bhasha

Modern C++ (20+) safer views (`span`, ranges), saaf comparisons (`<=>`) aur behtar formatting deta hai. Jab toolchain support kare tabhi use karo; warna pehle sikhe C++17 patterns par tike raho.

### Chhota code

```cpp
// C++20 sketch
// std::span<int> s = arr;
// auto evens = v | std::views::filter([](int x){ return x % 2 == 0; });
```

- **Yaad rakho:** In par bharosa karne se pehle apne compiler ka C++20/23 support check karo.
- **Aam galti:** Ye maan lena ki class/CI ki har machine par poora C++20 library support hai.

Practice: `examples/04_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 5. Versioning

### Aasan Bhasha

Aaj ka idea — **Versioning** — Serialization basics ke bade theme ke andar aata hai. Ise ek tool ki tarah padho: ye kaam kya karta hai, kaunse rules enforce karta hai, aur un rules ko ignore karne par kya tootta hai?

### Chhota code

```cpp
// Explore: Versioning
#include <iostream>
int main() {
  std::cout << "practice: Versioning\n";
  return 0;
}
```

- **Yaad rakho:** `Versioning` use karne wala code likhne se pehle ek invariant bolo.
- **Aam galti:** `Versioning` ko copy-paste se use karna bina jaane ki wo kya own karta hai ya kab valid hai.

Practice: `examples/05_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 6. Padding traps

### Aasan Bhasha

Aaj ka idea — **Padding traps** — Serialization basics ke bade theme ke andar aata hai. Ise ek tool ki tarah padho: ye kaam kya karta hai, kaunse rules enforce karta hai, aur un rules ko ignore karne par kya tootta hai?

### Chhota code

```cpp
// Explore: Padding traps
#include <iostream>
int main() {
  std::cout << "practice: Padding traps\n";
  return 0;
}
```

- **Yaad rakho:** `Padding traps` use karne wala code likhne se pehle ek invariant bolo.
- **Aam galti:** `Padding traps` ko copy-paste se use karna bina jaane ki wo kya own karta hai ya kab valid hai.

Practice: `examples/06_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 7. Checksums

### Aasan Bhasha

Aaj ka idea — **Checksums** — Serialization basics ke bade theme ke andar aata hai. Ise ek tool ki tarah padho: ye kaam kya karta hai, kaunse rules enforce karta hai, aur un rules ko ignore karne par kya tootta hai?

### Chhota code

```cpp
// Explore: Checksums
#include <iostream>
int main() {
  std::cout << "practice: Checksums\n";
  return 0;
}
```

- **Yaad rakho:** `Checksums` use karne wala code likhne se pehle ek invariant bolo.
- **Aam galti:** `Checksums` ko copy-paste se use karna bina jaane ki wo kya own karta hai ya kab valid hai.

Practice: `examples/07_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 8. Schema evolution

### Aasan Bhasha

Aaj ka idea — **Schema evolution** — Serialization basics ke bade theme ke andar aata hai. Ise ek tool ki tarah padho: ye kaam kya karta hai, kaunse rules enforce karta hai, aur un rules ko ignore karne par kya tootta hai?

### Chhota code

```cpp
// Explore: Schema evolution
#include <iostream>
int main() {
  std::cout << "practice: Schema evolution\n";
  return 0;
}
```

- **Yaad rakho:** `Schema evolution` use karne wala code likhne se pehle ek invariant bolo.
- **Aam galti:** `Schema evolution` ko copy-paste se use karna bina jaane ki wo kya own karta hai ya kab valid hai.

Practice: `examples/08_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 9. Security (untrusted input)

### Aasan Bhasha

Aaj ka idea — **Security (untrusted input)** — Serialization basics ke bade theme ke andar aata hai. Ise ek tool ki tarah padho: ye kaam kya karta hai, kaunse rules enforce karta hai, aur un rules ko ignore karne par kya tootta hai?

### Chhota code

```cpp
// Explore: Security (untrusted input)
#include <iostream>
int main() {
  std::cout << "practice: Security (untrusted input)\n";
  return 0;
}
```

- **Yaad rakho:** `Security (untrusted input)` use karne wala code likhne se pehle ek invariant bolo.
- **Aam galti:** `Security (untrusted input)` ko copy-paste se use karna bina jaane ki wo kya own karta hai ya kab valid hai.

Practice: `examples/09_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 10. A TLV encoder

### Aasan Bhasha

Aaj ka idea — **A TLV encoder** — Serialization basics ke bade theme ke andar aata hai. Ise ek tool ki tarah padho: ye kaam kya karta hai, kaunse rules enforce karta hai, aur un rules ko ignore karne par kya tootta hai?

### Chhota code

```cpp
// Explore: A TLV encoder
#include <iostream>
int main() {
  std::cout << "practice: A TLV encoder\n";
  return 0;
}
```

- **Yaad rakho:** `A TLV encoder` use karne wala code likhne se pehle ek invariant bolo.
- **Aam galti:** `A TLV encoder` ko copy-paste se use karna bina jaane ki wo kya own karta hai ya kab valid hai.

Practice: `examples/10_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

---

## Day 94 ke baad aapko ye aana chahiye

- `Serialization basics` ko bina notes dekhe kisi dost ko samjha sakna.
- Saare 10 examples `-std=c++17 -Wall -Wextra` ke saath compile aur run karna (naye flags sirf tab jab din ko C++20+ chahiye).
- `answers.md` dekhne se pehle `questions.md` ke 5 sawaal answer karna.
- Ek chhota extra program likhna jo aaj ke kam se kam 3 concepts jodta ho.

Ya is din ko **Badsha hub** me kholo (`python3 hub/server.py`) aur Learn / Practice / Quiz tabs use karo.
