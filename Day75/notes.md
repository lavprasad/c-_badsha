# Day 75 -- Code review checklist for C++

Today's goal: understand **Code review checklist for C++** in plain English, see a tiny code sample for each idea, then practice in `examples/`.

How to study this day:
1. Read each concept's **Plain English** section.
2. Skim the code sample -- predict what it does.
3. Run the matching file under `examples/`.
4. Only then try `questions.md`.

| # | Concept |
|--:|---------|
| 1 | Ownership clarity |
| 2 | Lifetime lifetimes |
| 3 | const correctness |
| 4 | Exception safety |
| 5 | API misuse risks |
| 6 | Performance hotspots |
| 7 | Readability |
| 8 | Tests present |
| 9 | UB red flags |
| 10 | Applying to a sample |

---

## 1. Ownership clarity

### Plain English

Today's idea — **Ownership clarity** — fits inside the wider theme of Code review checklist for C++. Read it as a tool: what job does it do, what rules does it enforce, and what breaks if you ignore those rules?

### Tiny code

```cpp
// Explore: Ownership clarity
#include <iostream>
int main() {
  std::cout << "practice: Ownership clarity\n";
  return 0;
}
```

- **Remember:** State one invariant for `Ownership clarity` before you write code that uses it.
- **Common mistake:** Using `Ownership clarity` by copy-paste without knowing what it owns or when it is valid.

Practice: open `examples/01_*.cpp`, predict the output, change one line, re-predict.

## 2. Lifetime lifetimes

### Plain English

Today's idea — **Lifetime lifetimes** — fits inside the wider theme of Code review checklist for C++. Read it as a tool: what job does it do, what rules does it enforce, and what breaks if you ignore those rules?

### Tiny code

```cpp
// Explore: Lifetime lifetimes
#include <iostream>
int main() {
  std::cout << "practice: Lifetime lifetimes\n";
  return 0;
}
```

- **Remember:** State one invariant for `Lifetime lifetimes` before you write code that uses it.
- **Common mistake:** Using `Lifetime lifetimes` by copy-paste without knowing what it owns or when it is valid.

Practice: open `examples/02_*.cpp`, predict the output, change one line, re-predict.

## 3. const correctness

### Plain English

`const` is a promise: 'I will not change this through this name.' It catches bugs at compile time and documents intent. Put `const` on observers and on parameters you only read.

### Tiny code

```cpp
void print(const std::string& s);  // no copy, no mutate
struct Counter {
  int n = 0;
  int get() const { return n; }  // may call on const objects
};
```

- **Remember:** Prefer `const T&` for read-only parameters bigger than a machine word.
- **Common mistake:** Casting away `const` to mutate something that callers assumed was fixed.

Practice: open `examples/03_*.cpp`, predict the output, change one line, re-predict.

## 4. Exception safety

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

## 5. API misuse risks

### Plain English

Today's idea — **API misuse risks** — fits inside the wider theme of Code review checklist for C++. Read it as a tool: what job does it do, what rules does it enforce, and what breaks if you ignore those rules?

### Tiny code

```cpp
// Explore: API misuse risks
#include <iostream>
int main() {
  std::cout << "practice: API misuse risks\n";
  return 0;
}
```

- **Remember:** State one invariant for `API misuse risks` before you write code that uses it.
- **Common mistake:** Using `API misuse risks` by copy-paste without knowing what it owns or when it is valid.

Practice: open `examples/05_*.cpp`, predict the output, change one line, re-predict.

## 6. Performance hotspots

### Plain English

Today's idea — **Performance hotspots** — fits inside the wider theme of Code review checklist for C++. Read it as a tool: what job does it do, what rules does it enforce, and what breaks if you ignore those rules?

### Tiny code

```cpp
// Explore: Performance hotspots
#include <iostream>
int main() {
  std::cout << "practice: Performance hotspots\n";
  return 0;
}
```

- **Remember:** State one invariant for `Performance hotspots` before you write code that uses it.
- **Common mistake:** Using `Performance hotspots` by copy-paste without knowing what it owns or when it is valid.

Practice: open `examples/06_*.cpp`, predict the output, change one line, re-predict.

## 7. Readability

### Plain English

Today's idea — **Readability** — fits inside the wider theme of Code review checklist for C++. Read it as a tool: what job does it do, what rules does it enforce, and what breaks if you ignore those rules?

### Tiny code

```cpp
// Explore: Readability
#include <iostream>
int main() {
  std::cout << "practice: Readability\n";
  return 0;
}
```

- **Remember:** State one invariant for `Readability` before you write code that uses it.
- **Common mistake:** Using `Readability` by copy-paste without knowing what it owns or when it is valid.

Practice: open `examples/07_*.cpp`, predict the output, change one line, re-predict.

## 8. Tests present

### Plain English

Today's idea — **Tests present** — fits inside the wider theme of Code review checklist for C++. Read it as a tool: what job does it do, what rules does it enforce, and what breaks if you ignore those rules?

### Tiny code

```cpp
// Explore: Tests present
#include <iostream>
int main() {
  std::cout << "practice: Tests present\n";
  return 0;
}
```

- **Remember:** State one invariant for `Tests present` before you write code that uses it.
- **Common mistake:** Using `Tests present` by copy-paste without knowing what it owns or when it is valid.

Practice: open `examples/08_*.cpp`, predict the output, change one line, re-predict.

## 9. UB red flags

### Plain English

Assertions document invariants. `assert` is for runtime checks in debug builds; `static_assert` fails at compile time. Sanitizers catch many memory and UB bugs early.

### Tiny code

```cpp
#include <cassert>
assert(index < size);
static_assert(sizeof(int) >= 4, "need 32-bit int");
```

- **Remember:** Asserts are not for user-facing error handling.
- **Common mistake:** Putting required validation only in `assert` — it disappears in release (`NDEBUG`).

Practice: open `examples/09_*.cpp`, predict the output, change one line, re-predict.

## 10. Applying to a sample

### Plain English

Today's idea — **Applying to a sample** — fits inside the wider theme of Code review checklist for C++. Read it as a tool: what job does it do, what rules does it enforce, and what breaks if you ignore those rules?

### Tiny code

```cpp
// Explore: Applying to a sample
#include <iostream>
int main() {
  std::cout << "practice: Applying to a sample\n";
  return 0;
}
```

- **Remember:** State one invariant for `Applying to a sample` before you write code that uses it.
- **Common mistake:** Using `Applying to a sample` by copy-paste without knowing what it owns or when it is valid.

Practice: open `examples/10_*.cpp`, predict the output, change one line, re-predict.

---

## What you should be able to do after Day 75

- Explain `Code review checklist for C++` to a peer without looking at notes.
- Compile and run all 10 examples with `-std=c++17 -Wall -Wextra` (use newer flags only when the day needs C++20+).
- Answer the 5 questions in `questions.md` before peeking at `answers.md`.
- Write one tiny extra program that combines at least 3 of today's concepts.

Or open this day in the **Badsha hub** (`python3 hub/server.py`) and use Learn / Practice / Quiz tabs.
