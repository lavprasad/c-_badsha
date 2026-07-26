# Day 148 -- Observability for C++ services

Today's goal: understand **Observability for C++ services** in plain English, see a tiny code sample for each idea, then practice in `examples/`.

How to study this day:
1. Read each concept's **Plain English** section.
2. Skim the code sample -- predict what it does.
3. Run the matching file under `examples/`.
4. Only then try `questions.md`.

| # | Concept |
|--:|---------|
| 1 | Metrics counters/gauges |
| 2 | Structured logging |
| 3 | Tracing spans idea |
| 4 | Health checks |
| 5 | Error budgets idea |
| 6 | Sampling |
| 7 | Cardinality hazards |
| 8 | Dashboards mindset |
| 9 | Alerting wisely |
| 10 | Instrument a hot path |

---

## 1. Metrics counters/gauges

### Plain English

Today's idea — **Metrics counters/gauges** — fits inside the wider theme of Observability for C++ services. Read it as a tool: what job does it do, what rules does it enforce, and what breaks if you ignore those rules?

### Tiny code

```cpp
// Explore: Metrics counters/gauges
#include <iostream>
int main() {
  std::cout << "practice: Metrics counters/gauges\n";
  return 0;
}
```

- **Remember:** State one invariant for `Metrics counters/gauges` before you write code that uses it.
- **Common mistake:** Using `Metrics counters/gauges` by copy-paste without knowing what it owns or when it is valid.

Practice: open `examples/01_*.cpp`, predict the output, change one line, re-predict.

## 2. Structured logging

### Plain English

A class bundles data with the operations that keep it valid. Constructors establish invariants; destructors release resources. `struct` defaults to public, `class` to private — that is the main difference.

### Tiny code

```cpp
class Counter {
  int n_ = 0;
public:
  void inc() { ++n_; }
  int get() const { return n_; }
};
```

- **Remember:** Keep data private if invariants matter; expose operations.
- **Common mistake:** Public data fields that let callers break class invariants.

Practice: open `examples/02_*.cpp`, predict the output, change one line, re-predict.

## 3. Tracing spans idea

### Plain English

Modern C++ (20+) adds safer views (`span`, ranges), clearer comparisons (`<=>`), and better formatting. Use them when your toolchain supports them; otherwise stick to C++17 patterns taught earlier.

### Tiny code

```cpp
// C++20 sketch
// std::span<int> s = arr;
// auto evens = v | std::views::filter([](int x){ return x % 2 == 0; });
```

- **Remember:** Check your compiler's C++20/23 support before relying on these.
- **Common mistake:** Assuming every machine in class/CI has full C++20 library support.

Practice: open `examples/03_*.cpp`, predict the output, change one line, re-predict.

## 4. Health checks

### Plain English

Today's idea — **Health checks** — fits inside the wider theme of Observability for C++ services. Read it as a tool: what job does it do, what rules does it enforce, and what breaks if you ignore those rules?

### Tiny code

```cpp
// Explore: Health checks
#include <iostream>
int main() {
  std::cout << "practice: Health checks\n";
  return 0;
}
```

- **Remember:** State one invariant for `Health checks` before you write code that uses it.
- **Common mistake:** Using `Health checks` by copy-paste without knowing what it owns or when it is valid.

Practice: open `examples/04_*.cpp`, predict the output, change one line, re-predict.

## 5. Error budgets idea

### Plain English

Today's idea — **Error budgets idea** — fits inside the wider theme of Observability for C++ services. Read it as a tool: what job does it do, what rules does it enforce, and what breaks if you ignore those rules?

### Tiny code

```cpp
// Explore: Error budgets idea
#include <iostream>
int main() {
  std::cout << "practice: Error budgets idea\n";
  return 0;
}
```

- **Remember:** State one invariant for `Error budgets idea` before you write code that uses it.
- **Common mistake:** Using `Error budgets idea` by copy-paste without knowing what it owns or when it is valid.

Practice: open `examples/05_*.cpp`, predict the output, change one line, re-predict.

## 6. Sampling

### Plain English

Today's idea — **Sampling** — fits inside the wider theme of Observability for C++ services. Read it as a tool: what job does it do, what rules does it enforce, and what breaks if you ignore those rules?

### Tiny code

```cpp
// Explore: Sampling
#include <iostream>
int main() {
  std::cout << "practice: Sampling\n";
  return 0;
}
```

- **Remember:** State one invariant for `Sampling` before you write code that uses it.
- **Common mistake:** Using `Sampling` by copy-paste without knowing what it owns or when it is valid.

Practice: open `examples/06_*.cpp`, predict the output, change one line, re-predict.

## 7. Cardinality hazards

### Plain English

Today's idea — **Cardinality hazards** — fits inside the wider theme of Observability for C++ services. Read it as a tool: what job does it do, what rules does it enforce, and what breaks if you ignore those rules?

### Tiny code

```cpp
// Explore: Cardinality hazards
#include <iostream>
int main() {
  std::cout << "practice: Cardinality hazards\n";
  return 0;
}
```

- **Remember:** State one invariant for `Cardinality hazards` before you write code that uses it.
- **Common mistake:** Using `Cardinality hazards` by copy-paste without knowing what it owns or when it is valid.

Practice: open `examples/07_*.cpp`, predict the output, change one line, re-predict.

## 8. Dashboards mindset

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

Practice: open `examples/08_*.cpp`, predict the output, change one line, re-predict.

## 9. Alerting wisely

### Plain English

Today's idea — **Alerting wisely** — fits inside the wider theme of Observability for C++ services. Read it as a tool: what job does it do, what rules does it enforce, and what breaks if you ignore those rules?

### Tiny code

```cpp
// Explore: Alerting wisely
#include <iostream>
int main() {
  std::cout << "practice: Alerting wisely\n";
  return 0;
}
```

- **Remember:** State one invariant for `Alerting wisely` before you write code that uses it.
- **Common mistake:** Using `Alerting wisely` by copy-paste without knowing what it owns or when it is valid.

Practice: open `examples/09_*.cpp`, predict the output, change one line, re-predict.

## 10. Instrument a hot path

### Plain English

`std::filesystem` gives portable paths and directory walks. Prefer `path` objects over hand-rolled string concatenation for joining folders.

### Tiny code

```cpp
#include <filesystem>
namespace fs = std::filesystem;
for (auto& e : fs::directory_iterator(".")) {
  std::cout << e.path() << '\n';
}
```

- **Remember:** Check `exists` / handle errors — disks fail.
- **Common mistake:** Assuming `/` path separators on every OS without using `path`.

Practice: open `examples/10_*.cpp`, predict the output, change one line, re-predict.

---

## What you should be able to do after Day 148

- Explain `Observability for C++ services` to a peer without looking at notes.
- Compile and run all 10 examples with `-std=c++17 -Wall -Wextra` (use newer flags only when the day needs C++20+).
- Answer the 5 questions in `questions.md` before peeking at `answers.md`.
- Write one tiny extra program that combines at least 3 of today's concepts.

Or open this day in the **Badsha hub** (`python3 hub/server.py`) and use Learn / Practice / Quiz tabs.
