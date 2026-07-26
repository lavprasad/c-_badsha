# Day 101 -- Optimization principles

Today's goal: understand **Optimization principles** in plain English, see a tiny code sample for each idea, then practice in `examples/`.

How to study this day:
1. Read each concept's **Plain English** section.
2. Skim the code sample -- predict what it does.
3. Run the matching file under `examples/`.
4. Only then try `questions.md`.

| # | Concept |
|--:|---------|
| 1 | Asymptotics first |
| 2 | Constants matter |
| 3 | Allocations hurt |
| 4 | Branch prediction |
| 5 | Inlining |
| 6 | Data layout |
| 7 | Algorithm choice |
| 8 | Readability tradeoff |
| 9 | ponytail ceilings |
| 10 | Optimize a hot loop |

---

## 1. Asymptotics first

### Plain English

Today's idea — **Asymptotics first** — fits inside the wider theme of Optimization principles. Read it as a tool: what job does it do, what rules does it enforce, and what breaks if you ignore those rules?

### Tiny code

```cpp
// Explore: Asymptotics first
#include <iostream>
int main() {
  std::cout << "practice: Asymptotics first\n";
  return 0;
}
```

- **Remember:** State one invariant for `Asymptotics first` before you write code that uses it.
- **Common mistake:** Using `Asymptotics first` by copy-paste without knowing what it owns or when it is valid.

Practice: open `examples/01_*.cpp`, predict the output, change one line, re-predict.

## 2. Constants matter

### Plain English

Today's idea — **Constants matter** — fits inside the wider theme of Optimization principles. Read it as a tool: what job does it do, what rules does it enforce, and what breaks if you ignore those rules?

### Tiny code

```cpp
// Explore: Constants matter
#include <iostream>
int main() {
  std::cout << "practice: Constants matter\n";
  return 0;
}
```

- **Remember:** State one invariant for `Constants matter` before you write code that uses it.
- **Common mistake:** Using `Constants matter` by copy-paste without knowing what it owns or when it is valid.

Practice: open `examples/02_*.cpp`, predict the output, change one line, re-predict.

## 3. Allocations hurt

### Plain English

Today's idea — **Allocations hurt** — fits inside the wider theme of Optimization principles. Read it as a tool: what job does it do, what rules does it enforce, and what breaks if you ignore those rules?

### Tiny code

```cpp
// Explore: Allocations hurt
#include <iostream>
int main() {
  std::cout << "practice: Allocations hurt\n";
  return 0;
}
```

- **Remember:** State one invariant for `Allocations hurt` before you write code that uses it.
- **Common mistake:** Using `Allocations hurt` by copy-paste without knowing what it owns or when it is valid.

Practice: open `examples/03_*.cpp`, predict the output, change one line, re-predict.

## 4. Branch prediction

### Plain English

Today's idea — **Branch prediction** — fits inside the wider theme of Optimization principles. Read it as a tool: what job does it do, what rules does it enforce, and what breaks if you ignore those rules?

### Tiny code

```cpp
// Explore: Branch prediction
#include <iostream>
int main() {
  std::cout << "practice: Branch prediction\n";
  return 0;
}
```

- **Remember:** State one invariant for `Branch prediction` before you write code that uses it.
- **Common mistake:** Using `Branch prediction` by copy-paste without knowing what it owns or when it is valid.

Practice: open `examples/04_*.cpp`, predict the output, change one line, re-predict.

## 5. Inlining

### Plain English

Today's idea — **Inlining** — fits inside the wider theme of Optimization principles. Read it as a tool: what job does it do, what rules does it enforce, and what breaks if you ignore those rules?

### Tiny code

```cpp
// Explore: Inlining
#include <iostream>
int main() {
  std::cout << "practice: Inlining\n";
  return 0;
}
```

- **Remember:** State one invariant for `Inlining` before you write code that uses it.
- **Common mistake:** Using `Inlining` by copy-paste without knowing what it owns or when it is valid.

Practice: open `examples/05_*.cpp`, predict the output, change one line, re-predict.

## 6. Data layout

### Plain English

Today's idea — **Data layout** — fits inside the wider theme of Optimization principles. Read it as a tool: what job does it do, what rules does it enforce, and what breaks if you ignore those rules?

### Tiny code

```cpp
// Explore: Data layout
#include <iostream>
int main() {
  std::cout << "practice: Data layout\n";
  return 0;
}
```

- **Remember:** State one invariant for `Data layout` before you write code that uses it.
- **Common mistake:** Using `Data layout` by copy-paste without knowing what it owns or when it is valid.

Practice: open `examples/06_*.cpp`, predict the output, change one line, re-predict.

## 7. Algorithm choice

### Plain English

STL algorithms are verbs over iterator ranges. Prefer them over hand-rolled loops when the intent matches (`find`, `sort`, `transform`). The erase-remove idiom deletes elements by value/predicate from a sequence container.

### Tiny code

```cpp
v.erase(std::remove(v.begin(), v.end(), 0), v.end());
std::sort(v.begin(), v.end());
```

- **Remember:** `remove` only slides elements — you still need `erase`.
- **Common mistake:** Calling `std::remove` and forgetting the container `erase`.

Practice: open `examples/07_*.cpp`, predict the output, change one line, re-predict.

## 8. Readability tradeoff

### Plain English

Today's idea — **Readability tradeoff** — fits inside the wider theme of Optimization principles. Read it as a tool: what job does it do, what rules does it enforce, and what breaks if you ignore those rules?

### Tiny code

```cpp
// Explore: Readability tradeoff
#include <iostream>
int main() {
  std::cout << "practice: Readability tradeoff\n";
  return 0;
}
```

- **Remember:** State one invariant for `Readability tradeoff` before you write code that uses it.
- **Common mistake:** Using `Readability tradeoff` by copy-paste without knowing what it owns or when it is valid.

Practice: open `examples/08_*.cpp`, predict the output, change one line, re-predict.

## 9. ponytail ceilings

### Plain English

Today's idea — **ponytail ceilings** — fits inside the wider theme of Optimization principles. Read it as a tool: what job does it do, what rules does it enforce, and what breaks if you ignore those rules?

### Tiny code

```cpp
// Explore: ponytail ceilings
#include <iostream>
int main() {
  std::cout << "practice: ponytail ceilings\n";
  return 0;
}
```

- **Remember:** State one invariant for `ponytail ceilings` before you write code that uses it.
- **Common mistake:** Using `ponytail ceilings` by copy-paste without knowing what it owns or when it is valid.

Practice: open `examples/09_*.cpp`, predict the output, change one line, re-predict.

## 10. Optimize a hot loop

### Plain English

Today's idea — **Optimize a hot loop** — fits inside the wider theme of Optimization principles. Read it as a tool: what job does it do, what rules does it enforce, and what breaks if you ignore those rules?

### Tiny code

```cpp
// Explore: Optimize a hot loop
#include <iostream>
int main() {
  std::cout << "practice: Optimize a hot loop\n";
  return 0;
}
```

- **Remember:** State one invariant for `Optimize a hot loop` before you write code that uses it.
- **Common mistake:** Using `Optimize a hot loop` by copy-paste without knowing what it owns or when it is valid.

Practice: open `examples/10_*.cpp`, predict the output, change one line, re-predict.

---

## What you should be able to do after Day 101

- Explain `Optimization principles` to a peer without looking at notes.
- Compile and run all 10 examples with `-std=c++17 -Wall -Wextra` (use newer flags only when the day needs C++20+).
- Answer the 5 questions in `questions.md` before peeking at `answers.md`.
- Write one tiny extra program that combines at least 3 of today's concepts.

Or open this day in the **Badsha hub** (`python3 hub/server.py`) and use Learn / Practice / Quiz tabs.
