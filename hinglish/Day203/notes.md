# Day 203 -- GPU compute awareness

Aaj ka goal: **GPU compute awareness** ko aasan Hinglish me samajhna, har idea ka chhota code sample dekhna, phir `examples/` me practice karna.

Is din ko padhne ka tarika:
1. Har concept ka **Aasan Bhasha** section padho.
2. Code sample par nazar daalo -- pehle predict karo ki output kya aayega.
3. `examples/` me us concept ki file chalao.
4. Uske baad hi `questions.md` kholo.

| # | Concept |
|--:|---------|
| 1 | Why GPUs |
| 2 | Host/device memory |
| 3 | Kernels idea |
| 4 | Occupancy idea |
| 5 | CUDA/OpenCL mindset |
| 6 | When not to GPU |
| 7 | Data transfer costs |
| 8 | Numerical issues |
| 9 | Tooling |
| 10 | Mental map exercise |

---

## 1. Why GPUs

### Aasan Bhasha

Aaj ka idea — **Why GPUs** — GPU compute awareness ke bade theme ke andar aata hai. Ise ek tool ki tarah padho: ye kaam kya karta hai, kaunse rules enforce karta hai, aur un rules ko ignore karne par kya tootta hai?

### Chhota code

```cpp
// Explore: Why GPUs
#include <iostream>
int main() {
  std::cout << "practice: Why GPUs\n";
  return 0;
}
```

- **Yaad rakho:** `Why GPUs` use karne wala code likhne se pehle ek invariant bolo.
- **Aam galti:** `Why GPUs` ko copy-paste se use karna bina jaane ki wo kya own karta hai ya kab valid hai.

Practice: `examples/01_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 2. Host/device memory

### Aasan Bhasha

DP overlapping subproblems ko ek baar solve karke answers store karta hai. Greedy locally best choice leta hai jab proof allow kare. Backtracking choices explore karke unhe undo karta hai.

### Chhota code

```cpp
std::vector<long long> dp(n + 1);
dp[0] = 0;
for (int i = 1; i <= n; ++i)
  dp[i] = dp[i - 1] + i;  // toy example
```

- **Yaad rakho:** Code likhne se pehle state aur transition shabdon me define karo.
- **Aam galti:** Bina saaf state key ke memoise karna → galat answers.

Practice: `examples/02_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 3. Kernels idea

### Aasan Bhasha

Aaj ka idea — **Kernels idea** — GPU compute awareness ke bade theme ke andar aata hai. Ise ek tool ki tarah padho: ye kaam kya karta hai, kaunse rules enforce karta hai, aur un rules ko ignore karne par kya tootta hai?

### Chhota code

```cpp
// Explore: Kernels idea
#include <iostream>
int main() {
  std::cout << "practice: Kernels idea\n";
  return 0;
}
```

- **Yaad rakho:** `Kernels idea` use karne wala code likhne se pehle ek invariant bolo.
- **Aam galti:** `Kernels idea` ko copy-paste se use karna bina jaane ki wo kya own karta hai ya kab valid hai.

Practice: `examples/03_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 4. Occupancy idea

### Aasan Bhasha

Aaj ka idea — **Occupancy idea** — GPU compute awareness ke bade theme ke andar aata hai. Ise ek tool ki tarah padho: ye kaam kya karta hai, kaunse rules enforce karta hai, aur un rules ko ignore karne par kya tootta hai?

### Chhota code

```cpp
// Explore: Occupancy idea
#include <iostream>
int main() {
  std::cout << "practice: Occupancy idea\n";
  return 0;
}
```

- **Yaad rakho:** `Occupancy idea` use karne wala code likhne se pehle ek invariant bolo.
- **Aam galti:** `Occupancy idea` ko copy-paste se use karna bina jaane ki wo kya own karta hai ya kab valid hai.

Practice: `examples/04_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 5. CUDA/OpenCL mindset

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

## 6. When not to GPU

### Aasan Bhasha

Aaj ka idea — **When not to GPU** — GPU compute awareness ke bade theme ke andar aata hai. Ise ek tool ki tarah padho: ye kaam kya karta hai, kaunse rules enforce karta hai, aur un rules ko ignore karne par kya tootta hai?

### Chhota code

```cpp
// Explore: When not to GPU
#include <iostream>
int main() {
  std::cout << "practice: When not to GPU\n";
  return 0;
}
```

- **Yaad rakho:** `When not to GPU` use karne wala code likhne se pehle ek invariant bolo.
- **Aam galti:** `When not to GPU` ko copy-paste se use karna bina jaane ki wo kya own karta hai ya kab valid hai.

Practice: `examples/06_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 7. Data transfer costs

### Aasan Bhasha

Aaj ka idea — **Data transfer costs** — GPU compute awareness ke bade theme ke andar aata hai. Ise ek tool ki tarah padho: ye kaam kya karta hai, kaunse rules enforce karta hai, aur un rules ko ignore karne par kya tootta hai?

### Chhota code

```cpp
// Explore: Data transfer costs
#include <iostream>
int main() {
  std::cout << "practice: Data transfer costs\n";
  return 0;
}
```

- **Yaad rakho:** `Data transfer costs` use karne wala code likhne se pehle ek invariant bolo.
- **Aam galti:** `Data transfer costs` ko copy-paste se use karna bina jaane ki wo kya own karta hai ya kab valid hai.

Practice: `examples/07_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 8. Numerical issues

### Aasan Bhasha

Aaj ka idea — **Numerical issues** — GPU compute awareness ke bade theme ke andar aata hai. Ise ek tool ki tarah padho: ye kaam kya karta hai, kaunse rules enforce karta hai, aur un rules ko ignore karne par kya tootta hai?

### Chhota code

```cpp
// Explore: Numerical issues
#include <iostream>
int main() {
  std::cout << "practice: Numerical issues\n";
  return 0;
}
```

- **Yaad rakho:** `Numerical issues` use karne wala code likhne se pehle ek invariant bolo.
- **Aam galti:** `Numerical issues` ko copy-paste se use karna bina jaane ki wo kya own karta hai ya kab valid hai.

Practice: `examples/08_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 9. Tooling

### Aasan Bhasha

Aaj ka idea — **Tooling** — GPU compute awareness ke bade theme ke andar aata hai. Ise ek tool ki tarah padho: ye kaam kya karta hai, kaunse rules enforce karta hai, aur un rules ko ignore karne par kya tootta hai?

### Chhota code

```cpp
// Explore: Tooling
#include <iostream>
int main() {
  std::cout << "practice: Tooling\n";
  return 0;
}
```

- **Yaad rakho:** `Tooling` use karne wala code likhne se pehle ek invariant bolo.
- **Aam galti:** `Tooling` ko copy-paste se use karna bina jaane ki wo kya own karta hai ya kab valid hai.

Practice: `examples/09_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 10. Mental map exercise

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

Practice: `examples/10_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

---

## Day 203 ke baad aapko ye aana chahiye

- `GPU compute awareness` ko bina notes dekhe kisi dost ko samjha sakna.
- Saare 10 examples `-std=c++17 -Wall -Wextra` ke saath compile aur run karna (naye flags sirf tab jab din ko C++20+ chahiye).
- `answers.md` dekhne se pehle `questions.md` ke 5 sawaal answer karna.
- Ek chhota extra program likhna jo aaj ke kam se kam 3 concepts jodta ho.

Ya is din ko **Badsha hub** me kholo (`python3 hub/server.py`) aur Learn / Practice / Quiz tabs use karo.
