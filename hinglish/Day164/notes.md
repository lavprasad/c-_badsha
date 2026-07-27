# Day 164 -- Dynamic programming intro

Aaj ka goal: **Dynamic programming intro** ko aasan Hinglish me samajhna, har idea ka chhota code sample dekhna, phir `examples/` me practice karna.

Is din ko padhne ka tarika:
1. Har concept ka **Aasan Bhasha** section padho.
2. Code sample par nazar daalo -- pehle predict karo ki output kya aayega.
3. `examples/` me us concept ki file chalao.
4. Uske baad hi `questions.md` kholo.

| # | Concept |
|--:|---------|
| 1 | Overlapping subproblems |
| 2 | Optimal substructure |
| 3 | Memoization |
| 4 | Tabulation |
| 5 | 1D DP |
| 6 | 2D DP |
| 7 | Space optimization |
| 8 | Reconstruction |
| 9 | Common patterns |
| 10 | Fib + knapsack lite |

---

## 1. Overlapping subproblems

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

## 2. Optimal substructure

### Aasan Bhasha

`std::string` character data own karta hai aur zaroorat par badhta hai. Safety ke liye ise raw `char*` se behtar samjho. `string_view` ek non-owning khidki hai — read-only parameters ke liye badhiya, lekin agar string se zyada jeeya to khatarnak.

### Chhota code

```cpp
std::string s = "hello";
std::string_view v = s;  // ok while s lives
auto t = s.substr(0, 2); // "he"
```

- **Yaad rakho:** Local temporary ko point karta `string_view` kabhi return mat karo.
- **Aam galti:** `getline` aur `>>` mix karna bina bache hue newline ko clear kiye.

Practice: `examples/02_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 3. Memoization

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

## 4. Tabulation

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

Practice: `examples/04_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 5. 1D DP

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

## 6. 2D DP

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

## 7. Space optimization

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

## 8. Reconstruction

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

## 9. Common patterns

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

## 10. Fib + knapsack lite

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

## Day 164 ke baad aapko ye aana chahiye

- `Dynamic programming intro` ko bina notes dekhe kisi dost ko samjha sakna.
- Saare 10 examples `-std=c++17 -Wall -Wextra` ke saath compile aur run karna (naye flags sirf tab jab din ko C++20+ chahiye).
- `answers.md` dekhne se pehle `questions.md` ke 5 sawaal answer karna.
- Ek chhota extra program likhna jo aaj ke kam se kam 3 concepts jodta ho.

Ya is din ko **Badsha hub** me kholo (`python3 hub/server.py`) aur Learn / Practice / Quiz tabs use karo.
