# Day 178 -- Memory leak hunting

Aaj ka goal: **Memory leak hunting** ko aasan Hinglish me samajhna, har idea ka chhota code sample dekhna, phir `examples/` me practice karna.

Is din ko padhne ka tarika:
1. Har concept ka **Aasan Bhasha** section padho.
2. Code sample par nazar daalo -- pehle predict karo ki output kya aayega.
3. `examples/` me us concept ki file chalao.
4. Uske baad hi `questions.md` kholo.

| # | Concept |
|--:|---------|
| 1 | Ownership audit |
| 2 | Cycles with shared_ptr |
| 3 | Missing delete[] |
| 4 | Exceptions skipping cleanup |
| 5 | Containers of raw ptrs |
| 6 | Tools |
| 7 | Growth over time |
| 8 | False leak reports |
| 9 | Fix patterns |
| 10 | Leak lab |

---

## 1. Ownership audit

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

Practice: `examples/01_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 2. Cycles with shared_ptr

### Aasan Bhasha

`unique_ptr` exclusive ownership hai — sasta aur saaf. `shared_ptr` reference count ke saath ownership baantta hai. Jab tak shared lifetime ki sach me zaroorat na ho, `unique_ptr` hi use karo.

### Chhota code

```cpp
auto p = std::make_unique<int>(5);
std::shared_ptr<int> s = std::make_shared<int>(7);
std::weak_ptr<int> w = s;  // does not keep object alive
```

- **Yaad rakho:** `shared_ptr` ke cycles `weak_ptr` se todo.
- **Aam galti:** Ek hi raw pointer se do `shared_ptr` banana → double free.

Practice: `examples/02_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 3. Missing delete[]

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

Practice: `examples/03_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 4. Exceptions skipping cleanup

### Aasan Bhasha

Exceptions happy path ko failure se alag karte hain. Jab function apna kaam na kar sake to throw karo; wahan catch karo jahan recover ya report ho sake. Unwinding ke dauraan bhi RAII cleanup karta hai.

### Chhota code

```cpp
try {
  throw std::runtime_error("boom");
} catch (const std::exception& e) {
  std::cerr << e.what() << '\n';
}
```

- **Yaad rakho:** `const` reference se catch karo, value se nahi.
- **Aam galti:** Raw pointers throw karna ya value se catch karna (slicing).

Practice: `examples/04_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 5. Containers of raw ptrs

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

Practice: `examples/05_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 6. Tools

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

Practice: `examples/06_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 7. Growth over time

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

Practice: `examples/07_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 8. False leak reports

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

Practice: `examples/08_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 9. Fix patterns

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

Practice: `examples/09_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 10. Leak lab

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

Practice: `examples/10_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

---

## Day 178 ke baad aapko ye aana chahiye

- `Memory leak hunting` ko bina notes dekhe kisi dost ko samjha sakna.
- Saare 10 examples `-std=c++17 -Wall -Wextra` ke saath compile aur run karna (naye flags sirf tab jab din ko C++20+ chahiye).
- `answers.md` dekhne se pehle `questions.md` ke 5 sawaal answer karna.
- Ek chhota extra program likhna jo aaj ke kam se kam 3 concepts jodta ho.

Ya is din ko **Badsha hub** me kholo (`python3 hub/server.py`) aur Learn / Practice / Quiz tabs use karo.
