# Day 142 -- Security hardening C++

Today's goal: understand **Security hardening C++** in plain English, see a tiny code sample for each idea, then practice in `examples/`.

How to study this day:
1. Read each concept's **Plain English** section.
2. Skim the code sample -- predict what it does.
3. Run the matching file under `examples/`.
4. Only then try `questions.md`.

| # | Concept |
|--:|---------|
| 1 | Untrusted input |
| 2 | Integer truncation |
| 3 | Buffer sizes |
| 4 | TOCTOU idea |
| 5 | Privilege separation idea |
| 6 | Secrets in memory |
| 7 | Safe APIs |
| 8 | Dependency risk |
| 9 | Threat modeling lite |
| 10 | Harden a file reader |

---

## 1. Untrusted input

### Plain English

Today's idea — **Untrusted input** — fits inside the wider theme of Security hardening C++. Read it as a tool: what job does it do, what rules does it enforce, and what breaks if you ignore those rules?

### Tiny code

```cpp
// Explore: Untrusted input
#include <iostream>
int main() {
  std::cout << "practice: Untrusted input\n";
  return 0;
}
```

- **Remember:** State one invariant for `Untrusted input` before you write code that uses it.
- **Common mistake:** Using `Untrusted input` by copy-paste without knowing what it owns or when it is valid.

Practice: open `examples/01_*.cpp`, predict the output, change one line, re-predict.

## 2. Integer truncation

### Plain English

Today's idea — **Integer truncation** — fits inside the wider theme of Security hardening C++. Read it as a tool: what job does it do, what rules does it enforce, and what breaks if you ignore those rules?

### Tiny code

```cpp
// Explore: Integer truncation
#include <iostream>
int main() {
  std::cout << "practice: Integer truncation\n";
  return 0;
}
```

- **Remember:** State one invariant for `Integer truncation` before you write code that uses it.
- **Common mistake:** Using `Integer truncation` by copy-paste without knowing what it owns or when it is valid.

Practice: open `examples/02_*.cpp`, predict the output, change one line, re-predict.

## 3. Buffer sizes

### Plain English

Today's idea — **Buffer sizes** — fits inside the wider theme of Security hardening C++. Read it as a tool: what job does it do, what rules does it enforce, and what breaks if you ignore those rules?

### Tiny code

```cpp
// Explore: Buffer sizes
#include <iostream>
int main() {
  std::cout << "practice: Buffer sizes\n";
  return 0;
}
```

- **Remember:** State one invariant for `Buffer sizes` before you write code that uses it.
- **Common mistake:** Using `Buffer sizes` by copy-paste without knowing what it owns or when it is valid.

Practice: open `examples/03_*.cpp`, predict the output, change one line, re-predict.

## 4. TOCTOU idea

### Plain English

Today's idea — **TOCTOU idea** — fits inside the wider theme of Security hardening C++. Read it as a tool: what job does it do, what rules does it enforce, and what breaks if you ignore those rules?

### Tiny code

```cpp
// Explore: TOCTOU idea
#include <iostream>
int main() {
  std::cout << "practice: TOCTOU idea\n";
  return 0;
}
```

- **Remember:** State one invariant for `TOCTOU idea` before you write code that uses it.
- **Common mistake:** Using `TOCTOU idea` by copy-paste without knowing what it owns or when it is valid.

Practice: open `examples/04_*.cpp`, predict the output, change one line, re-predict.

## 5. Privilege separation idea

### Plain English

Today's idea — **Privilege separation idea** — fits inside the wider theme of Security hardening C++. Read it as a tool: what job does it do, what rules does it enforce, and what breaks if you ignore those rules?

### Tiny code

```cpp
// Explore: Privilege separation idea
#include <iostream>
int main() {
  std::cout << "practice: Privilege separation idea\n";
  return 0;
}
```

- **Remember:** State one invariant for `Privilege separation idea` before you write code that uses it.
- **Common mistake:** Using `Privilege separation idea` by copy-paste without knowing what it owns or when it is valid.

Practice: open `examples/05_*.cpp`, predict the output, change one line, re-predict.

## 6. Secrets in memory

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

## 7. Safe APIs

### Plain English

Today's idea — **Safe APIs** — fits inside the wider theme of Security hardening C++. Read it as a tool: what job does it do, what rules does it enforce, and what breaks if you ignore those rules?

### Tiny code

```cpp
// Explore: Safe APIs
#include <iostream>
int main() {
  std::cout << "practice: Safe APIs\n";
  return 0;
}
```

- **Remember:** State one invariant for `Safe APIs` before you write code that uses it.
- **Common mistake:** Using `Safe APIs` by copy-paste without knowing what it owns or when it is valid.

Practice: open `examples/07_*.cpp`, predict the output, change one line, re-predict.

## 8. Dependency risk

### Plain English

Iterators are like advanced pointers into a container. Algorithms take `[begin, end)` half-open ranges. Know when inserts/erases invalidate them.

### Tiny code

```cpp
std::vector<int> v{1,2,3};
for (auto it = v.begin(); it != v.end(); ++it)
  std::cout << *it << ' ';
```

- **Remember:** After erase, use the iterator that `erase` returns.
- **Common mistake:** Incrementing an invalidated iterator → undefined behaviour.

Practice: open `examples/08_*.cpp`, predict the output, change one line, re-predict.

## 9. Threat modeling lite

### Plain English

Today's idea — **Threat modeling lite** — fits inside the wider theme of Security hardening C++. Read it as a tool: what job does it do, what rules does it enforce, and what breaks if you ignore those rules?

### Tiny code

```cpp
// Explore: Threat modeling lite
#include <iostream>
int main() {
  std::cout << "practice: Threat modeling lite\n";
  return 0;
}
```

- **Remember:** State one invariant for `Threat modeling lite` before you write code that uses it.
- **Common mistake:** Using `Threat modeling lite` by copy-paste without knowing what it owns or when it is valid.

Practice: open `examples/09_*.cpp`, predict the output, change one line, re-predict.

## 10. Harden a file reader

### Plain English

Today's idea — **Harden a file reader** — fits inside the wider theme of Security hardening C++. Read it as a tool: what job does it do, what rules does it enforce, and what breaks if you ignore those rules?

### Tiny code

```cpp
// Explore: Harden a file reader
#include <iostream>
int main() {
  std::cout << "practice: Harden a file reader\n";
  return 0;
}
```

- **Remember:** State one invariant for `Harden a file reader` before you write code that uses it.
- **Common mistake:** Using `Harden a file reader` by copy-paste without knowing what it owns or when it is valid.

Practice: open `examples/10_*.cpp`, predict the output, change one line, re-predict.

---

## What you should be able to do after Day 142

- Explain `Security hardening C++` to a peer without looking at notes.
- Compile and run all 10 examples with `-std=c++17 -Wall -Wextra` (use newer flags only when the day needs C++20+).
- Answer the 5 questions in `questions.md` before peeking at `answers.md`.
- Write one tiny extra program that combines at least 3 of today's concepts.

Or open this day in the **Badsha hub** (`python3 hub/server.py`) and use Learn / Practice / Quiz tabs.
