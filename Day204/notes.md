# Day 204 -- ML systems C++ edge

Today's goal: understand **ML systems C++ edge** in plain English, see a tiny code sample for each idea, then practice in `examples/`.

How to study this day:
1. Read each concept's **Plain English** section.
2. Skim the code sample -- predict what it does.
3. Run the matching file under `examples/`.
4. Only then try `questions.md`.

| # | Concept |
|--:|---------|
| 1 | Tensor layouts |
| 2 | Inference runtimes idea |
| 3 | Quantization idea |
| 4 | Memory arenas |
| 5 | Batching |
| 6 | Latency SLOs |
| 7 | Interop with Python |
| 8 | Model serialization |
| 9 | Safety |
| 10 | Tiny tensor ops |

---

## 1. Tensor layouts

### Plain English

Today's idea — **Tensor layouts** — fits inside the wider theme of ML systems C++ edge. Read it as a tool: what job does it do, what rules does it enforce, and what breaks if you ignore those rules?

### Tiny code

```cpp
// Explore: Tensor layouts
#include <iostream>
int main() {
  std::cout << "practice: Tensor layouts\n";
  return 0;
}
```

- **Remember:** State one invariant for `Tensor layouts` before you write code that uses it.
- **Common mistake:** Using `Tensor layouts` by copy-paste without knowing what it owns or when it is valid.

Practice: open `examples/01_*.cpp`, predict the output, change one line, re-predict.

## 2. Inference runtimes idea

### Plain English

Today's idea — **Inference runtimes idea** — fits inside the wider theme of ML systems C++ edge. Read it as a tool: what job does it do, what rules does it enforce, and what breaks if you ignore those rules?

### Tiny code

```cpp
// Explore: Inference runtimes idea
#include <iostream>
int main() {
  std::cout << "practice: Inference runtimes idea\n";
  return 0;
}
```

- **Remember:** State one invariant for `Inference runtimes idea` before you write code that uses it.
- **Common mistake:** Using `Inference runtimes idea` by copy-paste without knowing what it owns or when it is valid.

Practice: open `examples/02_*.cpp`, predict the output, change one line, re-predict.

## 3. Quantization idea

### Plain English

Today's idea — **Quantization idea** — fits inside the wider theme of ML systems C++ edge. Read it as a tool: what job does it do, what rules does it enforce, and what breaks if you ignore those rules?

### Tiny code

```cpp
// Explore: Quantization idea
#include <iostream>
int main() {
  std::cout << "practice: Quantization idea\n";
  return 0;
}
```

- **Remember:** State one invariant for `Quantization idea` before you write code that uses it.
- **Common mistake:** Using `Quantization idea` by copy-paste without knowing what it owns or when it is valid.

Practice: open `examples/03_*.cpp`, predict the output, change one line, re-predict.

## 4. Memory arenas

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

## 5. Batching

### Plain English

Today's idea — **Batching** — fits inside the wider theme of ML systems C++ edge. Read it as a tool: what job does it do, what rules does it enforce, and what breaks if you ignore those rules?

### Tiny code

```cpp
// Explore: Batching
#include <iostream>
int main() {
  std::cout << "practice: Batching\n";
  return 0;
}
```

- **Remember:** State one invariant for `Batching` before you write code that uses it.
- **Common mistake:** Using `Batching` by copy-paste without knowing what it owns or when it is valid.

Practice: open `examples/05_*.cpp`, predict the output, change one line, re-predict.

## 6. Latency SLOs

### Plain English

Today's idea — **Latency SLOs** — fits inside the wider theme of ML systems C++ edge. Read it as a tool: what job does it do, what rules does it enforce, and what breaks if you ignore those rules?

### Tiny code

```cpp
// Explore: Latency SLOs
#include <iostream>
int main() {
  std::cout << "practice: Latency SLOs\n";
  return 0;
}
```

- **Remember:** State one invariant for `Latency SLOs` before you write code that uses it.
- **Common mistake:** Using `Latency SLOs` by copy-paste without knowing what it owns or when it is valid.

Practice: open `examples/06_*.cpp`, predict the output, change one line, re-predict.

## 7. Interop with Python

### Plain English

Today's idea — **Interop with Python** — fits inside the wider theme of ML systems C++ edge. Read it as a tool: what job does it do, what rules does it enforce, and what breaks if you ignore those rules?

### Tiny code

```cpp
// Explore: Interop with Python
#include <iostream>
int main() {
  std::cout << "practice: Interop with Python\n";
  return 0;
}
```

- **Remember:** State one invariant for `Interop with Python` before you write code that uses it.
- **Common mistake:** Using `Interop with Python` by copy-paste without knowing what it owns or when it is valid.

Practice: open `examples/07_*.cpp`, predict the output, change one line, re-predict.

## 8. Model serialization

### Plain English

Today's idea — **Model serialization** — fits inside the wider theme of ML systems C++ edge. Read it as a tool: what job does it do, what rules does it enforce, and what breaks if you ignore those rules?

### Tiny code

```cpp
// Explore: Model serialization
#include <iostream>
int main() {
  std::cout << "practice: Model serialization\n";
  return 0;
}
```

- **Remember:** State one invariant for `Model serialization` before you write code that uses it.
- **Common mistake:** Using `Model serialization` by copy-paste without knowing what it owns or when it is valid.

Practice: open `examples/08_*.cpp`, predict the output, change one line, re-predict.

## 9. Safety

### Plain English

Today's idea — **Safety** — fits inside the wider theme of ML systems C++ edge. Read it as a tool: what job does it do, what rules does it enforce, and what breaks if you ignore those rules?

### Tiny code

```cpp
// Explore: Safety
#include <iostream>
int main() {
  std::cout << "practice: Safety\n";
  return 0;
}
```

- **Remember:** State one invariant for `Safety` before you write code that uses it.
- **Common mistake:** Using `Safety` by copy-paste without knowing what it owns or when it is valid.

Practice: open `examples/09_*.cpp`, predict the output, change one line, re-predict.

## 10. Tiny tensor ops

### Plain English

Today's idea — **Tiny tensor ops** — fits inside the wider theme of ML systems C++ edge. Read it as a tool: what job does it do, what rules does it enforce, and what breaks if you ignore those rules?

### Tiny code

```cpp
// Explore: Tiny tensor ops
#include <iostream>
int main() {
  std::cout << "practice: Tiny tensor ops\n";
  return 0;
}
```

- **Remember:** State one invariant for `Tiny tensor ops` before you write code that uses it.
- **Common mistake:** Using `Tiny tensor ops` by copy-paste without knowing what it owns or when it is valid.

Practice: open `examples/10_*.cpp`, predict the output, change one line, re-predict.

---

## What you should be able to do after Day 204

- Explain `ML systems C++ edge` to a peer without looking at notes.
- Compile and run all 10 examples with `-std=c++17 -Wall -Wextra` (use newer flags only when the day needs C++20+).
- Answer the 5 questions in `questions.md` before peeking at `answers.md`.
- Write one tiny extra program that combines at least 3 of today's concepts.

Or open this day in the **Badsha hub** (`python3 hub/server.py`) and use Learn / Practice / Quiz tabs.
