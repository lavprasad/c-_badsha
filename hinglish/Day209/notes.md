# Day 209 -- Formal methods lite for C++

Aaj ka goal: **Formal methods lite for C++** ko aasan Hinglish me samajhna, har idea ka chhota code sample dekhna, phir `examples/` me practice karna.

Is din ko padhne ka tarika:
1. Har concept ka **Aasan Bhasha** section padho.
2. Code sample par nazar daalo -- pehle predict karo ki output kya aayega.
3. `examples/` me us concept ki file chalao.
4. Uske baad hi `questions.md` kholo.

| # | Concept |
|--:|---------|
| 1 | Contracts idea |
| 2 | Invariants |
| 3 | Model checking idea |
| 4 | Proof outlines |
| 5 | CBMC mindset |
| 6 | What is practical |
| 7 | Types as proofs lite |
| 8 | Testing oracle |
| 9 | Limits |
| 10 | Specify a function |

---

## 1. Contracts idea

### Aasan Bhasha

Aaj ka idea — **Contracts idea** — Formal methods lite for C++ ke bade theme ke andar aata hai. Ise ek tool ki tarah padho: ye kaam kya karta hai, kaunse rules enforce karta hai, aur un rules ko ignore karne par kya tootta hai?

### Chhota code

```cpp
// Explore: Contracts idea
#include <iostream>
int main() {
  std::cout << "practice: Contracts idea\n";
  return 0;
}
```

- **Yaad rakho:** `Contracts idea` use karne wala code likhne se pehle ek invariant bolo.
- **Aam galti:** `Contracts idea` ko copy-paste se use karna bina jaane ki wo kya own karta hai ya kab valid hai.

Practice: `examples/01_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 2. Invariants

### Aasan Bhasha

`optional<T>` ya to T hai ya khaali — magic sentinel values se behtar. `variant` kai types me se ek rakhta hai. Clarity ke liye inhe raw unions ya `void*` se upar rakho.

### Chhota code

```cpp
#include <optional>
std::optional<int> parse(bool ok) {
  if (!ok) return std::nullopt;
  return 42;
}
int x = parse(true).value_or(-1);
```

- **Yaad rakho:** `value()` call karne se pehle `optional` check karo (ya `value_or` use karo).
- **Aam galti:** Khaali optional par `opt.value()` call karna → exception.

Practice: `examples/02_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 3. Model checking idea

### Aasan Bhasha

Aaj ka idea — **Model checking idea** — Formal methods lite for C++ ke bade theme ke andar aata hai. Ise ek tool ki tarah padho: ye kaam kya karta hai, kaunse rules enforce karta hai, aur un rules ko ignore karne par kya tootta hai?

### Chhota code

```cpp
// Explore: Model checking idea
#include <iostream>
int main() {
  std::cout << "practice: Model checking idea\n";
  return 0;
}
```

- **Yaad rakho:** `Model checking idea` use karne wala code likhne se pehle ek invariant bolo.
- **Aam galti:** `Model checking idea` ko copy-paste se use karna bina jaane ki wo kya own karta hai ya kab valid hai.

Practice: `examples/03_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 4. Proof outlines

### Aasan Bhasha

Aaj ka idea — **Proof outlines** — Formal methods lite for C++ ke bade theme ke andar aata hai. Ise ek tool ki tarah padho: ye kaam kya karta hai, kaunse rules enforce karta hai, aur un rules ko ignore karne par kya tootta hai?

### Chhota code

```cpp
// Explore: Proof outlines
#include <iostream>
int main() {
  std::cout << "practice: Proof outlines\n";
  return 0;
}
```

- **Yaad rakho:** `Proof outlines` use karne wala code likhne se pehle ek invariant bolo.
- **Aam galti:** `Proof outlines` ko copy-paste se use karna bina jaane ki wo kya own karta hai ya kab valid hai.

Practice: `examples/04_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 5. CBMC mindset

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

## 6. What is practical

### Aasan Bhasha

Aaj ka idea — **What is practical** — Formal methods lite for C++ ke bade theme ke andar aata hai. Ise ek tool ki tarah padho: ye kaam kya karta hai, kaunse rules enforce karta hai, aur un rules ko ignore karne par kya tootta hai?

### Chhota code

```cpp
// Explore: What is practical
#include <iostream>
int main() {
  std::cout << "practice: What is practical\n";
  return 0;
}
```

- **Yaad rakho:** `What is practical` use karne wala code likhne se pehle ek invariant bolo.
- **Aam galti:** `What is practical` ko copy-paste se use karna bina jaane ki wo kya own karta hai ya kab valid hai.

Practice: `examples/06_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 7. Types as proofs lite

### Aasan Bhasha

Aaj ka idea — **Types as proofs lite** — Formal methods lite for C++ ke bade theme ke andar aata hai. Ise ek tool ki tarah padho: ye kaam kya karta hai, kaunse rules enforce karta hai, aur un rules ko ignore karne par kya tootta hai?

### Chhota code

```cpp
// Explore: Types as proofs lite
#include <iostream>
int main() {
  std::cout << "practice: Types as proofs lite\n";
  return 0;
}
```

- **Yaad rakho:** `Types as proofs lite` use karne wala code likhne se pehle ek invariant bolo.
- **Aam galti:** `Types as proofs lite` ko copy-paste se use karna bina jaane ki wo kya own karta hai ya kab valid hai.

Practice: `examples/07_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 8. Testing oracle

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

Practice: `examples/08_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 9. Limits

### Aasan Bhasha

Aaj ka idea — **Limits** — Formal methods lite for C++ ke bade theme ke andar aata hai. Ise ek tool ki tarah padho: ye kaam kya karta hai, kaunse rules enforce karta hai, aur un rules ko ignore karne par kya tootta hai?

### Chhota code

```cpp
// Explore: Limits
#include <iostream>
int main() {
  std::cout << "practice: Limits\n";
  return 0;
}
```

- **Yaad rakho:** `Limits` use karne wala code likhne se pehle ek invariant bolo.
- **Aam galti:** `Limits` ko copy-paste se use karna bina jaane ki wo kya own karta hai ya kab valid hai.

Practice: `examples/09_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 10. Specify a function

### Aasan Bhasha

Aaj ka idea — **Specify a function** — Formal methods lite for C++ ke bade theme ke andar aata hai. Ise ek tool ki tarah padho: ye kaam kya karta hai, kaunse rules enforce karta hai, aur un rules ko ignore karne par kya tootta hai?

### Chhota code

```cpp
// Explore: Specify a function
#include <iostream>
int main() {
  std::cout << "practice: Specify a function\n";
  return 0;
}
```

- **Yaad rakho:** `Specify a function` use karne wala code likhne se pehle ek invariant bolo.
- **Aam galti:** `Specify a function` ko copy-paste se use karna bina jaane ki wo kya own karta hai ya kab valid hai.

Practice: `examples/10_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

---

## Day 209 ke baad aapko ye aana chahiye

- `Formal methods lite for C++` ko bina notes dekhe kisi dost ko samjha sakna.
- Saare 10 examples `-std=c++17 -Wall -Wextra` ke saath compile aur run karna (naye flags sirf tab jab din ko C++20+ chahiye).
- `answers.md` dekhne se pehle `questions.md` ke 5 sawaal answer karna.
- Ek chhota extra program likhna jo aaj ke kam se kam 3 concepts jodta ho.

Ya is din ko **Badsha hub** me kholo (`python3 hub/server.py`) aur Learn / Practice / Quiz tabs use karo.
