# Day 164 -- Dynamic programming intro

Today's goal: understand **Dynamic programming intro** in plain English, see a tiny code sample for each idea, then practice in `examples/`.

How to study this day:
1. Read each concept's **Plain English** section.
2. Skim the code sample -- predict what it does.
3. Run the matching file under `examples/`.
4. Only then try `questions.md`.

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

### Plain English

DP solves overlapping subproblems once and stores answers. Greedy picks locally best choices when a proof allows it. Backtracking explores choices and undoes them.

### Tiny code

```cpp
std::vector<long long> dp(n + 1);
dp[0] = 0;
for (int i = 1; i <= n; ++i)
  dp[i] = dp[i - 1] + i;  // toy example
```

- **Remember:** Define the state and transition in words before coding.
- **Common mistake:** Memoising without a clear state key → wrong answers.

Practice: open `examples/01_*.cpp`, predict the output, change one line, re-predict.

## 2. Optimal substructure

### Plain English

`std::string` owns character data and grows as needed. Prefer it over raw `char*` for safety. `string_view` is a non-owning window — great for read-only parameters, dangerous if it outlives the string.

### Tiny code

```cpp
std::string s = "hello";
std::string_view v = s;  // ok while s lives
auto t = s.substr(0, 2); // "he"
```

- **Remember:** Never return a `string_view` that points at a local temporary.
- **Common mistake:** Mixing `getline` and `>>` without clearing the leftover newline.

Practice: open `examples/02_*.cpp`, predict the output, change one line, re-predict.

## 3. Memoization

### Plain English

DP solves overlapping subproblems once and stores answers. Greedy picks locally best choices when a proof allows it. Backtracking explores choices and undoes them.

### Tiny code

```cpp
std::vector<long long> dp(n + 1);
dp[0] = 0;
for (int i = 1; i <= n; ++i)
  dp[i] = dp[i - 1] + i;  // toy example
```

- **Remember:** Define the state and transition in words before coding.
- **Common mistake:** Memoising without a clear state key → wrong answers.

Practice: open `examples/03_*.cpp`, predict the output, change one line, re-predict.

## 4. Tabulation

### Plain English

DP solves overlapping subproblems once and stores answers. Greedy picks locally best choices when a proof allows it. Backtracking explores choices and undoes them.

### Tiny code

```cpp
std::vector<long long> dp(n + 1);
dp[0] = 0;
for (int i = 1; i <= n; ++i)
  dp[i] = dp[i - 1] + i;  // toy example
```

- **Remember:** Define the state and transition in words before coding.
- **Common mistake:** Memoising without a clear state key → wrong answers.

Practice: open `examples/04_*.cpp`, predict the output, change one line, re-predict.

## 5. 1D DP

### Plain English

DP solves overlapping subproblems once and stores answers. Greedy picks locally best choices when a proof allows it. Backtracking explores choices and undoes them.

### Tiny code

```cpp
std::vector<long long> dp(n + 1);
dp[0] = 0;
for (int i = 1; i <= n; ++i)
  dp[i] = dp[i - 1] + i;  // toy example
```

- **Remember:** Define the state and transition in words before coding.
- **Common mistake:** Memoising without a clear state key → wrong answers.

Practice: open `examples/05_*.cpp`, predict the output, change one line, re-predict.

## 6. 2D DP

### Plain English

DP solves overlapping subproblems once and stores answers. Greedy picks locally best choices when a proof allows it. Backtracking explores choices and undoes them.

### Tiny code

```cpp
std::vector<long long> dp(n + 1);
dp[0] = 0;
for (int i = 1; i <= n; ++i)
  dp[i] = dp[i - 1] + i;  // toy example
```

- **Remember:** Define the state and transition in words before coding.
- **Common mistake:** Memoising without a clear state key → wrong answers.

Practice: open `examples/06_*.cpp`, predict the output, change one line, re-predict.

## 7. Space optimization

### Plain English

DP solves overlapping subproblems once and stores answers. Greedy picks locally best choices when a proof allows it. Backtracking explores choices and undoes them.

### Tiny code

```cpp
std::vector<long long> dp(n + 1);
dp[0] = 0;
for (int i = 1; i <= n; ++i)
  dp[i] = dp[i - 1] + i;  // toy example
```

- **Remember:** Define the state and transition in words before coding.
- **Common mistake:** Memoising without a clear state key → wrong answers.

Practice: open `examples/07_*.cpp`, predict the output, change one line, re-predict.

## 8. Reconstruction

### Plain English

DP solves overlapping subproblems once and stores answers. Greedy picks locally best choices when a proof allows it. Backtracking explores choices and undoes them.

### Tiny code

```cpp
std::vector<long long> dp(n + 1);
dp[0] = 0;
for (int i = 1; i <= n; ++i)
  dp[i] = dp[i - 1] + i;  // toy example
```

- **Remember:** Define the state and transition in words before coding.
- **Common mistake:** Memoising without a clear state key → wrong answers.

Practice: open `examples/08_*.cpp`, predict the output, change one line, re-predict.

## 9. Common patterns

### Plain English

DP solves overlapping subproblems once and stores answers. Greedy picks locally best choices when a proof allows it. Backtracking explores choices and undoes them.

### Tiny code

```cpp
std::vector<long long> dp(n + 1);
dp[0] = 0;
for (int i = 1; i <= n; ++i)
  dp[i] = dp[i - 1] + i;  // toy example
```

- **Remember:** Define the state and transition in words before coding.
- **Common mistake:** Memoising without a clear state key → wrong answers.

Practice: open `examples/09_*.cpp`, predict the output, change one line, re-predict.

## 10. Fib + knapsack lite

### Plain English

DP solves overlapping subproblems once and stores answers. Greedy picks locally best choices when a proof allows it. Backtracking explores choices and undoes them.

### Tiny code

```cpp
std::vector<long long> dp(n + 1);
dp[0] = 0;
for (int i = 1; i <= n; ++i)
  dp[i] = dp[i - 1] + i;  // toy example
```

- **Remember:** Define the state and transition in words before coding.
- **Common mistake:** Memoising without a clear state key → wrong answers.

Practice: open `examples/10_*.cpp`, predict the output, change one line, re-predict.

---

## What you should be able to do after Day 164

- Explain `Dynamic programming intro` to a peer without looking at notes.
- Compile and run all 10 examples with `-std=c++17 -Wall -Wextra` (use newer flags only when the day needs C++20+).
- Answer the 5 questions in `questions.md` before peeking at `answers.md`.
- Write one tiny extra program that combines at least 3 of today's concepts.

Or open this day in the **Badsha hub** (`python3 hub/server.py`) and use Learn / Practice / Quiz tabs.
