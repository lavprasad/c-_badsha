# Day 177 -- Performance case studies

Today's goal: understand **Performance case studies** in plain English, see a tiny code sample for each idea, then practice in `examples/`.

How to study this day:
1. Read each concept's **Plain English** section.
2. Skim the code sample -- predict what it does.
3. Run the matching file under `examples/`.
4. Only then try `questions.md`.

| # | Concept |
|--:|---------|
| 1 | Unnecessary copies |
| 2 | Alloc churn |
| 3 | Cache misses |
| 4 | Lock contention |
| 5 | I/O wait |
| 6 | Algorithmic miss |
| 7 | Before/after metrics |
| 8 | Regressions |
| 9 | Guardrails |
| 10 | Optimize a pipeline |

---

## 1. Unnecessary copies

### Plain English

Today's idea — **Unnecessary copies** — fits inside the wider theme of Performance case studies. Read it as a tool: what job does it do, what rules does it enforce, and what breaks if you ignore those rules?

### Tiny code

```cpp
// Explore: Unnecessary copies
#include <iostream>
int main() {
  std::cout << "practice: Unnecessary copies\n";
  return 0;
}
```

- **Remember:** State one invariant for `Unnecessary copies` before you write code that uses it.
- **Common mistake:** Using `Unnecessary copies` by copy-paste without knowing what it owns or when it is valid.

Practice: open `examples/01_*.cpp`, predict the output, change one line, re-predict.

## 2. Alloc churn

### Plain English

Today's idea — **Alloc churn** — fits inside the wider theme of Performance case studies. Read it as a tool: what job does it do, what rules does it enforce, and what breaks if you ignore those rules?

### Tiny code

```cpp
// Explore: Alloc churn
#include <iostream>
int main() {
  std::cout << "practice: Alloc churn\n";
  return 0;
}
```

- **Remember:** State one invariant for `Alloc churn` before you write code that uses it.
- **Common mistake:** Using `Alloc churn` by copy-paste without knowing what it owns or when it is valid.

Practice: open `examples/02_*.cpp`, predict the output, change one line, re-predict.

## 3. Cache misses

### Plain English

Today's idea — **Cache misses** — fits inside the wider theme of Performance case studies. Read it as a tool: what job does it do, what rules does it enforce, and what breaks if you ignore those rules?

### Tiny code

```cpp
// Explore: Cache misses
#include <iostream>
int main() {
  std::cout << "practice: Cache misses\n";
  return 0;
}
```

- **Remember:** State one invariant for `Cache misses` before you write code that uses it.
- **Common mistake:** Using `Cache misses` by copy-paste without knowing what it owns or when it is valid.

Practice: open `examples/03_*.cpp`, predict the output, change one line, re-predict.

## 4. Lock contention

### Plain English

Today's idea — **Lock contention** — fits inside the wider theme of Performance case studies. Read it as a tool: what job does it do, what rules does it enforce, and what breaks if you ignore those rules?

### Tiny code

```cpp
// Explore: Lock contention
#include <iostream>
int main() {
  std::cout << "practice: Lock contention\n";
  return 0;
}
```

- **Remember:** State one invariant for `Lock contention` before you write code that uses it.
- **Common mistake:** Using `Lock contention` by copy-paste without knowing what it owns or when it is valid.

Practice: open `examples/04_*.cpp`, predict the output, change one line, re-predict.

## 5. I/O wait

### Plain English

Today's idea — **I/O wait** — fits inside the wider theme of Performance case studies. Read it as a tool: what job does it do, what rules does it enforce, and what breaks if you ignore those rules?

### Tiny code

```cpp
// Explore: I/O wait
#include <iostream>
int main() {
  std::cout << "practice: I/O wait\n";
  return 0;
}
```

- **Remember:** State one invariant for `I/O wait` before you write code that uses it.
- **Common mistake:** Using `I/O wait` by copy-paste without knowing what it owns or when it is valid.

Practice: open `examples/05_*.cpp`, predict the output, change one line, re-predict.

## 6. Algorithmic miss

### Plain English

STL algorithms are verbs over iterator ranges. Prefer them over hand-rolled loops when the intent matches (`find`, `sort`, `transform`). The erase-remove idiom deletes elements by value/predicate from a sequence container.

### Tiny code

```cpp
v.erase(std::remove(v.begin(), v.end(), 0), v.end());
std::sort(v.begin(), v.end());
```

- **Remember:** `remove` only slides elements — you still need `erase`.
- **Common mistake:** Calling `std::remove` and forgetting the container `erase`.

Practice: open `examples/06_*.cpp`, predict the output, change one line, re-predict.

## 7. Before/after metrics

### Plain English

Today's idea — **Before/after metrics** — fits inside the wider theme of Performance case studies. Read it as a tool: what job does it do, what rules does it enforce, and what breaks if you ignore those rules?

### Tiny code

```cpp
// Explore: Before/after metrics
#include <iostream>
int main() {
  std::cout << "practice: Before/after metrics\n";
  return 0;
}
```

- **Remember:** State one invariant for `Before/after metrics` before you write code that uses it.
- **Common mistake:** Using `Before/after metrics` by copy-paste without knowing what it owns or when it is valid.

Practice: open `examples/07_*.cpp`, predict the output, change one line, re-predict.

## 8. Regressions

### Plain English

Today's idea — **Regressions** — fits inside the wider theme of Performance case studies. Read it as a tool: what job does it do, what rules does it enforce, and what breaks if you ignore those rules?

### Tiny code

```cpp
// Explore: Regressions
#include <iostream>
int main() {
  std::cout << "practice: Regressions\n";
  return 0;
}
```

- **Remember:** State one invariant for `Regressions` before you write code that uses it.
- **Common mistake:** Using `Regressions` by copy-paste without knowing what it owns or when it is valid.

Practice: open `examples/08_*.cpp`, predict the output, change one line, re-predict.

## 9. Guardrails

### Plain English

Today's idea — **Guardrails** — fits inside the wider theme of Performance case studies. Read it as a tool: what job does it do, what rules does it enforce, and what breaks if you ignore those rules?

### Tiny code

```cpp
// Explore: Guardrails
#include <iostream>
int main() {
  std::cout << "practice: Guardrails\n";
  return 0;
}
```

- **Remember:** State one invariant for `Guardrails` before you write code that uses it.
- **Common mistake:** Using `Guardrails` by copy-paste without knowing what it owns or when it is valid.

Practice: open `examples/09_*.cpp`, predict the output, change one line, re-predict.

## 10. Optimize a pipeline

### Plain English

Today's idea — **Optimize a pipeline** — fits inside the wider theme of Performance case studies. Read it as a tool: what job does it do, what rules does it enforce, and what breaks if you ignore those rules?

### Tiny code

```cpp
// Explore: Optimize a pipeline
#include <iostream>
int main() {
  std::cout << "practice: Optimize a pipeline\n";
  return 0;
}
```

- **Remember:** State one invariant for `Optimize a pipeline` before you write code that uses it.
- **Common mistake:** Using `Optimize a pipeline` by copy-paste without knowing what it owns or when it is valid.

Practice: open `examples/10_*.cpp`, predict the output, change one line, re-predict.

---

## What you should be able to do after Day 177

- Explain `Performance case studies` to a peer without looking at notes.
- Compile and run all 10 examples with `-std=c++17 -Wall -Wextra` (use newer flags only when the day needs C++20+).
- Answer the 5 questions in `questions.md` before peeking at `answers.md`.
- Write one tiny extra program that combines at least 3 of today's concepts.

Or open this day in the **Badsha hub** (`python3 hub/server.py`) and use Learn / Practice / Quiz tabs.
