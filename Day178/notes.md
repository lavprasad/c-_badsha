# Day 178 -- Memory leak hunting

Today's goal: understand **Memory leak hunting** in plain English, see a tiny code sample for each idea, then practice in `examples/`.

How to study this day:
1. Read each concept's **Plain English** section.
2. Skim the code sample -- predict what it does.
3. Run the matching file under `examples/`.
4. Only then try `questions.md`.

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

## 2. Cycles with shared_ptr

### Plain English

`unique_ptr` is exclusive ownership — cheap and clear. `shared_ptr` shares ownership with a reference count. Prefer `unique_ptr` unless you truly need shared lifetime.

### Tiny code

```cpp
auto p = std::make_unique<int>(5);
std::shared_ptr<int> s = std::make_shared<int>(7);
std::weak_ptr<int> w = s;  // does not keep object alive
```

- **Remember:** Break `shared_ptr` cycles with `weak_ptr`.
- **Common mistake:** Creating two `shared_ptr`s from the same raw pointer → double free.

Practice: open `examples/02_*.cpp`, predict the output, change one line, re-predict.

## 3. Missing delete[]

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

## 4. Exceptions skipping cleanup

### Plain English

Exceptions separate the happy path from failure. Throw when a function cannot do its job; catch at a layer that can recover or report. RAII still cleans up during unwind.

### Tiny code

```cpp
try {
  throw std::runtime_error("boom");
} catch (const std::exception& e) {
  std::cerr << e.what() << '\n';
}
```

- **Remember:** Catch by `const` reference, not by value.
- **Common mistake:** Throwing raw pointers or catching by value (slicing).

Practice: open `examples/04_*.cpp`, predict the output, change one line, re-predict.

## 5. Containers of raw ptrs

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

## 6. Tools

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

## 7. Growth over time

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

## 8. False leak reports

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

## 9. Fix patterns

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

## 10. Leak lab

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

## What you should be able to do after Day 178

- Explain `Memory leak hunting` to a peer without looking at notes.
- Compile and run all 10 examples with `-std=c++17 -Wall -Wextra` (use newer flags only when the day needs C++20+).
- Answer the 5 questions in `questions.md` before peeking at `answers.md`.
- Write one tiny extra program that combines at least 3 of today's concepts.

Or open this day in the **Badsha hub** (`python3 hub/server.py`) and use Learn / Practice / Quiz tabs.
