# Day 203 -- GPU compute awareness

Today's goal: understand **GPU compute awareness** in plain English, see a tiny code sample for each idea, then practice in `examples/`.

How to study this day:
1. Read each concept's **Plain English** section.
2. Skim the code sample -- predict what it does.
3. Run the matching file under `examples/`.
4. Only then try `questions.md`.

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

### Plain English

Today's idea — **Why GPUs** — fits inside the wider theme of GPU compute awareness. Read it as a tool: what job does it do, what rules does it enforce, and what breaks if you ignore those rules?

### Tiny code

```cpp
// Explore: Why GPUs
#include <iostream>
int main() {
  std::cout << "practice: Why GPUs\n";
  return 0;
}
```

- **Remember:** State one invariant for `Why GPUs` before you write code that uses it.
- **Common mistake:** Using `Why GPUs` by copy-paste without knowing what it owns or when it is valid.

Practice: open `examples/01_*.cpp`, predict the output, change one line, re-predict.

## 2. Host/device memory

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

## 3. Kernels idea

### Plain English

Today's idea — **Kernels idea** — fits inside the wider theme of GPU compute awareness. Read it as a tool: what job does it do, what rules does it enforce, and what breaks if you ignore those rules?

### Tiny code

```cpp
// Explore: Kernels idea
#include <iostream>
int main() {
  std::cout << "practice: Kernels idea\n";
  return 0;
}
```

- **Remember:** State one invariant for `Kernels idea` before you write code that uses it.
- **Common mistake:** Using `Kernels idea` by copy-paste without knowing what it owns or when it is valid.

Practice: open `examples/03_*.cpp`, predict the output, change one line, re-predict.

## 4. Occupancy idea

### Plain English

Today's idea — **Occupancy idea** — fits inside the wider theme of GPU compute awareness. Read it as a tool: what job does it do, what rules does it enforce, and what breaks if you ignore those rules?

### Tiny code

```cpp
// Explore: Occupancy idea
#include <iostream>
int main() {
  std::cout << "practice: Occupancy idea\n";
  return 0;
}
```

- **Remember:** State one invariant for `Occupancy idea` before you write code that uses it.
- **Common mistake:** Using `Occupancy idea` by copy-paste without knowing what it owns or when it is valid.

Practice: open `examples/04_*.cpp`, predict the output, change one line, re-predict.

## 5. CUDA/OpenCL mindset

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

Practice: open `examples/05_*.cpp`, predict the output, change one line, re-predict.

## 6. When not to GPU

### Plain English

Today's idea — **When not to GPU** — fits inside the wider theme of GPU compute awareness. Read it as a tool: what job does it do, what rules does it enforce, and what breaks if you ignore those rules?

### Tiny code

```cpp
// Explore: When not to GPU
#include <iostream>
int main() {
  std::cout << "practice: When not to GPU\n";
  return 0;
}
```

- **Remember:** State one invariant for `When not to GPU` before you write code that uses it.
- **Common mistake:** Using `When not to GPU` by copy-paste without knowing what it owns or when it is valid.

Practice: open `examples/06_*.cpp`, predict the output, change one line, re-predict.

## 7. Data transfer costs

### Plain English

Today's idea — **Data transfer costs** — fits inside the wider theme of GPU compute awareness. Read it as a tool: what job does it do, what rules does it enforce, and what breaks if you ignore those rules?

### Tiny code

```cpp
// Explore: Data transfer costs
#include <iostream>
int main() {
  std::cout << "practice: Data transfer costs\n";
  return 0;
}
```

- **Remember:** State one invariant for `Data transfer costs` before you write code that uses it.
- **Common mistake:** Using `Data transfer costs` by copy-paste without knowing what it owns or when it is valid.

Practice: open `examples/07_*.cpp`, predict the output, change one line, re-predict.

## 8. Numerical issues

### Plain English

Today's idea — **Numerical issues** — fits inside the wider theme of GPU compute awareness. Read it as a tool: what job does it do, what rules does it enforce, and what breaks if you ignore those rules?

### Tiny code

```cpp
// Explore: Numerical issues
#include <iostream>
int main() {
  std::cout << "practice: Numerical issues\n";
  return 0;
}
```

- **Remember:** State one invariant for `Numerical issues` before you write code that uses it.
- **Common mistake:** Using `Numerical issues` by copy-paste without knowing what it owns or when it is valid.

Practice: open `examples/08_*.cpp`, predict the output, change one line, re-predict.

## 9. Tooling

### Plain English

Today's idea — **Tooling** — fits inside the wider theme of GPU compute awareness. Read it as a tool: what job does it do, what rules does it enforce, and what breaks if you ignore those rules?

### Tiny code

```cpp
// Explore: Tooling
#include <iostream>
int main() {
  std::cout << "practice: Tooling\n";
  return 0;
}
```

- **Remember:** State one invariant for `Tooling` before you write code that uses it.
- **Common mistake:** Using `Tooling` by copy-paste without knowing what it owns or when it is valid.

Practice: open `examples/09_*.cpp`, predict the output, change one line, re-predict.

## 10. Mental map exercise

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

## What you should be able to do after Day 203

- Explain `GPU compute awareness` to a peer without looking at notes.
- Compile and run all 10 examples with `-std=c++17 -Wall -Wextra` (use newer flags only when the day needs C++20+).
- Answer the 5 questions in `questions.md` before peeking at `answers.md`.
- Write one tiny extra program that combines at least 3 of today's concepts.

Or open this day in the **Badsha hub** (`python3 hub/server.py`) and use Learn / Practice / Quiz tabs.
