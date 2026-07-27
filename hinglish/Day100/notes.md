# Day 100 -- Profiling basics

Aaj ka goal: **Profiling basics** ko aasan Hinglish me samajhna, har idea ka chhota code sample dekhna, phir `examples/` me practice karna.

Is din ko padhne ka tarika:
1. Har concept ka **Aasan Bhasha** section padho.
2. Code sample par nazar daalo -- pehle predict karo ki output kya aayega.
3. `examples/` me us concept ki file chalao.
4. Uske baad hi `questions.md` kholo.

| # | Concept |
|--:|---------|
| 1 | Measure before optimize |
| 2 | Timers |
| 3 | Sampling idea |
| 4 | Hotspots |
| 5 | Microbenchmark pitfalls |
| 6 | Compiler optimizing away |
| 7 | DoNotOptimize idea |
| 8 | I/O vs CPU bound |
| 9 | Flamegraph mindset |
| 10 | Profile a sort |

---

## 1. Measure before optimize

### Aasan Bhasha

Aaj ka idea — **Measure before optimize** — Profiling basics ke bade theme ke andar aata hai. Ise ek tool ki tarah padho: ye kaam kya karta hai, kaunse rules enforce karta hai, aur un rules ko ignore karne par kya tootta hai?

### Chhota code

```cpp
// Explore: Measure before optimize
#include <iostream>
int main() {
  std::cout << "practice: Measure before optimize\n";
  return 0;
}
```

- **Yaad rakho:** `Measure before optimize` use karne wala code likhne se pehle ek invariant bolo.
- **Aam galti:** `Measure before optimize` ko copy-paste se use karna bina jaane ki wo kya own karta hai ya kab valid hai.

Practice: `examples/01_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 2. Timers

### Aasan Bhasha

Aaj ka idea — **Timers** — Profiling basics ke bade theme ke andar aata hai. Ise ek tool ki tarah padho: ye kaam kya karta hai, kaunse rules enforce karta hai, aur un rules ko ignore karne par kya tootta hai?

### Chhota code

```cpp
// Explore: Timers
#include <iostream>
int main() {
  std::cout << "practice: Timers\n";
  return 0;
}
```

- **Yaad rakho:** `Timers` use karne wala code likhne se pehle ek invariant bolo.
- **Aam galti:** `Timers` ko copy-paste se use karna bina jaane ki wo kya own karta hai ya kab valid hai.

Practice: `examples/02_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 3. Sampling idea

### Aasan Bhasha

Aaj ka idea — **Sampling idea** — Profiling basics ke bade theme ke andar aata hai. Ise ek tool ki tarah padho: ye kaam kya karta hai, kaunse rules enforce karta hai, aur un rules ko ignore karne par kya tootta hai?

### Chhota code

```cpp
// Explore: Sampling idea
#include <iostream>
int main() {
  std::cout << "practice: Sampling idea\n";
  return 0;
}
```

- **Yaad rakho:** `Sampling idea` use karne wala code likhne se pehle ek invariant bolo.
- **Aam galti:** `Sampling idea` ko copy-paste se use karna bina jaane ki wo kya own karta hai ya kab valid hai.

Practice: `examples/03_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 4. Hotspots

### Aasan Bhasha

Aaj ka idea — **Hotspots** — Profiling basics ke bade theme ke andar aata hai. Ise ek tool ki tarah padho: ye kaam kya karta hai, kaunse rules enforce karta hai, aur un rules ko ignore karne par kya tootta hai?

### Chhota code

```cpp
// Explore: Hotspots
#include <iostream>
int main() {
  std::cout << "practice: Hotspots\n";
  return 0;
}
```

- **Yaad rakho:** `Hotspots` use karne wala code likhne se pehle ek invariant bolo.
- **Aam galti:** `Hotspots` ko copy-paste se use karna bina jaane ki wo kya own karta hai ya kab valid hai.

Practice: `examples/04_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 5. Microbenchmark pitfalls

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

Practice: `examples/05_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 6. Compiler optimizing away

### Aasan Bhasha

Aaj ka idea — **Compiler optimizing away** — Profiling basics ke bade theme ke andar aata hai. Ise ek tool ki tarah padho: ye kaam kya karta hai, kaunse rules enforce karta hai, aur un rules ko ignore karne par kya tootta hai?

### Chhota code

```cpp
// Explore: Compiler optimizing away
#include <iostream>
int main() {
  std::cout << "practice: Compiler optimizing away\n";
  return 0;
}
```

- **Yaad rakho:** `Compiler optimizing away` use karne wala code likhne se pehle ek invariant bolo.
- **Aam galti:** `Compiler optimizing away` ko copy-paste se use karna bina jaane ki wo kya own karta hai ya kab valid hai.

Practice: `examples/06_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 7. DoNotOptimize idea

### Aasan Bhasha

Aaj ka idea — **DoNotOptimize idea** — Profiling basics ke bade theme ke andar aata hai. Ise ek tool ki tarah padho: ye kaam kya karta hai, kaunse rules enforce karta hai, aur un rules ko ignore karne par kya tootta hai?

### Chhota code

```cpp
// Explore: DoNotOptimize idea
#include <iostream>
int main() {
  std::cout << "practice: DoNotOptimize idea\n";
  return 0;
}
```

- **Yaad rakho:** `DoNotOptimize idea` use karne wala code likhne se pehle ek invariant bolo.
- **Aam galti:** `DoNotOptimize idea` ko copy-paste se use karna bina jaane ki wo kya own karta hai ya kab valid hai.

Practice: `examples/07_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 8. I/O vs CPU bound

### Aasan Bhasha

Aaj ka idea — **I/O vs CPU bound** — Profiling basics ke bade theme ke andar aata hai. Ise ek tool ki tarah padho: ye kaam kya karta hai, kaunse rules enforce karta hai, aur un rules ko ignore karne par kya tootta hai?

### Chhota code

```cpp
// Explore: I/O vs CPU bound
#include <iostream>
int main() {
  std::cout << "practice: I/O vs CPU bound\n";
  return 0;
}
```

- **Yaad rakho:** `I/O vs CPU bound` use karne wala code likhne se pehle ek invariant bolo.
- **Aam galti:** `I/O vs CPU bound` ko copy-paste se use karna bina jaane ki wo kya own karta hai ya kab valid hai.

Practice: `examples/08_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 9. Flamegraph mindset

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

Practice: `examples/09_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 10. Profile a sort

### Aasan Bhasha

Aaj ka idea — **Profile a sort** — Profiling basics ke bade theme ke andar aata hai. Ise ek tool ki tarah padho: ye kaam kya karta hai, kaunse rules enforce karta hai, aur un rules ko ignore karne par kya tootta hai?

### Chhota code

```cpp
// Explore: Profile a sort
#include <iostream>
int main() {
  std::cout << "practice: Profile a sort\n";
  return 0;
}
```

- **Yaad rakho:** `Profile a sort` use karne wala code likhne se pehle ek invariant bolo.
- **Aam galti:** `Profile a sort` ko copy-paste se use karna bina jaane ki wo kya own karta hai ya kab valid hai.

Practice: `examples/10_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

---

## Day 100 ke baad aapko ye aana chahiye

- `Profiling basics` ko bina notes dekhe kisi dost ko samjha sakna.
- Saare 10 examples `-std=c++17 -Wall -Wextra` ke saath compile aur run karna (naye flags sirf tab jab din ko C++20+ chahiye).
- `answers.md` dekhne se pehle `questions.md` ke 5 sawaal answer karna.
- Ek chhota extra program likhna jo aaj ke kam se kam 3 concepts jodta ho.

Ya is din ko **Badsha hub** me kholo (`python3 hub/server.py`) aur Learn / Practice / Quiz tabs use karo.
