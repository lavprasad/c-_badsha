# Day 108 -- String encoding & Unicode lite

Aaj ka goal: **String encoding & Unicode lite** ko aasan Hinglish me samajhna, har idea ka chhota code sample dekhna, phir `examples/` me practice karna.

Is din ko padhne ka tarika:
1. Har concept ka **Aasan Bhasha** section padho.
2. Code sample par nazar daalo -- pehle predict karo ki output kya aayega.
3. `examples/` me us concept ki file chalao.
4. Uske baad hi `questions.md` kholo.

| # | Concept |
|--:|---------|
| 1 | Bytes vs characters |
| 2 | UTF-8 |
| 3 | Code points vs graphemes |
| 4 | char8_t idea (C++20) |
| 5 | Validation |
| 6 | Normalization idea |
| 7 | Locale dangers |
| 8 | Wchar portability |
| 9 | API recommendations |
| 10 | Count UTF-8 code points naive |

---

## 1. Bytes vs characters

### Aasan Bhasha

Aaj ka idea — **Bytes vs characters** — String encoding & Unicode lite ke bade theme ke andar aata hai. Ise ek tool ki tarah padho: ye kaam kya karta hai, kaunse rules enforce karta hai, aur un rules ko ignore karne par kya tootta hai?

### Chhota code

```cpp
// Explore: Bytes vs characters
#include <iostream>
int main() {
  std::cout << "practice: Bytes vs characters\n";
  return 0;
}
```

- **Yaad rakho:** `Bytes vs characters` use karne wala code likhne se pehle ek invariant bolo.
- **Aam galti:** `Bytes vs characters` ko copy-paste se use karna bina jaane ki wo kya own karta hai ya kab valid hai.

Practice: `examples/01_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 2. UTF-8

### Aasan Bhasha

Aaj ka idea — **UTF-8** — String encoding & Unicode lite ke bade theme ke andar aata hai. Ise ek tool ki tarah padho: ye kaam kya karta hai, kaunse rules enforce karta hai, aur un rules ko ignore karne par kya tootta hai?

### Chhota code

```cpp
// Explore: UTF-8
#include <iostream>
int main() {
  std::cout << "practice: UTF-8\n";
  return 0;
}
```

- **Yaad rakho:** `UTF-8` use karne wala code likhne se pehle ek invariant bolo.
- **Aam galti:** `UTF-8` ko copy-paste se use karna bina jaane ki wo kya own karta hai ya kab valid hai.

Practice: `examples/02_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 3. Code points vs graphemes

### Aasan Bhasha

Graphs matlab nodes aur edges. Unweighted graph me BFS shortest path deta hai; Dijkstra non-negative weights sambhalta hai. Union-Find connected components efficiently track karta hai.

### Chhota code

```cpp
// BFS sketch
std::queue<int> q;
q.push(start);
seen[start] = true;
```

- **Yaad rakho:** Graph chhota aur dense na ho to adjacency lists chuno.
- **Aam galti:** Nodes ko visited mark karna bhool jaana → infinite loop.

Practice: `examples/03_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 4. char8_t idea (C++20)

### Aasan Bhasha

Aaj ka idea — **char8_t idea (C++20)** — String encoding & Unicode lite ke bade theme ke andar aata hai. Ise ek tool ki tarah padho: ye kaam kya karta hai, kaunse rules enforce karta hai, aur un rules ko ignore karne par kya tootta hai?

### Chhota code

```cpp
// Explore: char8_t idea (C++20)
#include <iostream>
int main() {
  std::cout << "practice: char8_t idea (C++20)\n";
  return 0;
}
```

- **Yaad rakho:** `char8_t idea (C++20)` use karne wala code likhne se pehle ek invariant bolo.
- **Aam galti:** `char8_t idea (C++20)` ko copy-paste se use karna bina jaane ki wo kya own karta hai ya kab valid hai.

Practice: `examples/04_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 5. Validation

### Aasan Bhasha

Aaj ka idea — **Validation** — String encoding & Unicode lite ke bade theme ke andar aata hai. Ise ek tool ki tarah padho: ye kaam kya karta hai, kaunse rules enforce karta hai, aur un rules ko ignore karne par kya tootta hai?

### Chhota code

```cpp
// Explore: Validation
#include <iostream>
int main() {
  std::cout << "practice: Validation\n";
  return 0;
}
```

- **Yaad rakho:** `Validation` use karne wala code likhne se pehle ek invariant bolo.
- **Aam galti:** `Validation` ko copy-paste se use karna bina jaane ki wo kya own karta hai ya kab valid hai.

Practice: `examples/05_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 6. Normalization idea

### Aasan Bhasha

Aaj ka idea — **Normalization idea** — String encoding & Unicode lite ke bade theme ke andar aata hai. Ise ek tool ki tarah padho: ye kaam kya karta hai, kaunse rules enforce karta hai, aur un rules ko ignore karne par kya tootta hai?

### Chhota code

```cpp
// Explore: Normalization idea
#include <iostream>
int main() {
  std::cout << "practice: Normalization idea\n";
  return 0;
}
```

- **Yaad rakho:** `Normalization idea` use karne wala code likhne se pehle ek invariant bolo.
- **Aam galti:** `Normalization idea` ko copy-paste se use karna bina jaane ki wo kya own karta hai ya kab valid hai.

Practice: `examples/06_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 7. Locale dangers

### Aasan Bhasha

Aaj ka idea — **Locale dangers** — String encoding & Unicode lite ke bade theme ke andar aata hai. Ise ek tool ki tarah padho: ye kaam kya karta hai, kaunse rules enforce karta hai, aur un rules ko ignore karne par kya tootta hai?

### Chhota code

```cpp
// Explore: Locale dangers
#include <iostream>
int main() {
  std::cout << "practice: Locale dangers\n";
  return 0;
}
```

- **Yaad rakho:** `Locale dangers` use karne wala code likhne se pehle ek invariant bolo.
- **Aam galti:** `Locale dangers` ko copy-paste se use karna bina jaane ki wo kya own karta hai ya kab valid hai.

Practice: `examples/07_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 8. Wchar portability

### Aasan Bhasha

Aaj ka idea — **Wchar portability** — String encoding & Unicode lite ke bade theme ke andar aata hai. Ise ek tool ki tarah padho: ye kaam kya karta hai, kaunse rules enforce karta hai, aur un rules ko ignore karne par kya tootta hai?

### Chhota code

```cpp
// Explore: Wchar portability
#include <iostream>
int main() {
  std::cout << "practice: Wchar portability\n";
  return 0;
}
```

- **Yaad rakho:** `Wchar portability` use karne wala code likhne se pehle ek invariant bolo.
- **Aam galti:** `Wchar portability` ko copy-paste se use karna bina jaane ki wo kya own karta hai ya kab valid hai.

Practice: `examples/08_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 9. API recommendations

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

Practice: `examples/09_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 10. Count UTF-8 code points naive

### Aasan Bhasha

Aaj ka idea — **Count UTF-8 code points naive** — String encoding & Unicode lite ke bade theme ke andar aata hai. Ise ek tool ki tarah padho: ye kaam kya karta hai, kaunse rules enforce karta hai, aur un rules ko ignore karne par kya tootta hai?

### Chhota code

```cpp
// Explore: Count UTF-8 code points naive
#include <iostream>
int main() {
  std::cout << "practice: Count UTF-8 code points naive\n";
  return 0;
}
```

- **Yaad rakho:** `Count UTF-8 code points naive` use karne wala code likhne se pehle ek invariant bolo.
- **Aam galti:** `Count UTF-8 code points naive` ko copy-paste se use karna bina jaane ki wo kya own karta hai ya kab valid hai.

Practice: `examples/10_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

---

## Day 108 ke baad aapko ye aana chahiye

- `String encoding & Unicode lite` ko bina notes dekhe kisi dost ko samjha sakna.
- Saare 10 examples `-std=c++17 -Wall -Wextra` ke saath compile aur run karna (naye flags sirf tab jab din ko C++20+ chahiye).
- `answers.md` dekhne se pehle `questions.md` ke 5 sawaal answer karna.
- Ek chhota extra program likhna jo aaj ke kam se kam 3 concepts jodta ho.

Ya is din ko **Badsha hub** me kholo (`python3 hub/server.py`) aur Learn / Practice / Quiz tabs use karo.
