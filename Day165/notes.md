# Day 165 -- DP patterns

Today's goal: understand **DP patterns** in plain English, see a tiny code sample for each idea, then practice in `examples/`.

How to study this day:
1. Read each concept's **Plain English** section.
2. Skim the code sample -- predict what it does.
3. Run the matching file under `examples/`.
4. Only then try `questions.md`.

| # | Concept |
|--:|---------|
| 1 | Kadane |
| 2 | LIS idea |
| 3 | LCS idea |
| 4 | Knapsack |
| 5 | Coin change |
| 6 | DP on strings |
| 7 | DP on trees idea |
| 8 | Bitmask DP idea |
| 9 | Transition design |
| 10 | Practice set F |

---

## 1. Kadane

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

## 2. LIS idea

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

Practice: open `examples/02_*.cpp`, predict the output, change one line, re-predict.

## 3. LCS idea

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

## 4. Knapsack

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

## 5. Coin change

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

## 6. DP on strings

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

## 7. DP on trees idea

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

## 8. Bitmask DP idea

### Plain English

Bit tricks set, clear, and test individual flags inside an integer. Prefer unsigned types for shift-heavy code. `std::bitset` makes fixed-width bit sets readable.

### Tiny code

```cpp
unsigned flags = 0;
flags |= (1u << 3);           // set bit 3
bool on = flags & (1u << 3);  // test
flags &= ~(1u << 3);          // clear
```

- **Remember:** Shifting into or past the sign bit on signed ints can be UB.
- **Common mistake:** Using signed `int` for bitmasks and shifting into the sign bit.

Practice: open `examples/08_*.cpp`, predict the output, change one line, re-predict.

## 9. Transition design

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

## 10. Practice set F

### Plain English

`map` keeps keys sorted (tree); `unordered_map` hashes for average O(1) lookup. Pick sorted when you need order; pick hash when you need speed and have a good hash.

### Tiny code

```cpp
std::unordered_map<std::string, int> freq;
++freq["hi"];
for (auto& [k, v] : freq) std::cout << k << ':' << v << '\n';
```

- **Remember:** `operator[]` default-inserts a value if the key is missing.
- **Common mistake:** Using `[]` when you only meant to look up — prefer `find` / `at` if missing should be an error.

Practice: open `examples/10_*.cpp`, predict the output, change one line, re-predict.

---

## What you should be able to do after Day 165

- Explain `DP patterns` to a peer without looking at notes.
- Compile and run all 10 examples with `-std=c++17 -Wall -Wextra` (use newer flags only when the day needs C++20+).
- Answer the 5 questions in `questions.md` before peeking at `answers.md`.
- Write one tiny extra program that combines at least 3 of today's concepts.

Or open this day in the **Badsha hub** (`python3 hub/server.py`) and use Learn / Practice / Quiz tabs.
