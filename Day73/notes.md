# Day 73 -- Logging & diagnostics design

Today's goal: understand **Logging & diagnostics design** in plain English, see a tiny code sample for each idea, then practice in `examples/`.

How to study this day:
1. Read each concept's **Plain English** section.
2. Skim the code sample -- predict what it does.
3. Run the matching file under `examples/`.
4. Only then try `questions.md`.

| # | Concept |
|--:|---------|
| 1 | Log levels |
| 2 | Macros vs functions |
| 3 | Streaming loggers |
| 4 | Context fields |
| 5 | Performance of logging |
| 6 | Sinks |
| 7 | Compile-time stripping |
| 8 | Structured logs idea |
| 9 | Fatal vs error |
| 10 | A mini logger |

---

## 1. Log levels

### Plain English

Today's idea — **Log levels** — fits inside the wider theme of Logging & diagnostics design. Read it as a tool: what job does it do, what rules does it enforce, and what breaks if you ignore those rules?

### Tiny code

```cpp
// Explore: Log levels
#include <iostream>
int main() {
  std::cout << "practice: Log levels\n";
  return 0;
}
```

- **Remember:** State one invariant for `Log levels` before you write code that uses it.
- **Common mistake:** Using `Log levels` by copy-paste without knowing what it owns or when it is valid.

Practice: open `examples/01_*.cpp`, predict the output, change one line, re-predict.

## 2. Macros vs functions

### Plain English

Today's idea — **Macros vs functions** — fits inside the wider theme of Logging & diagnostics design. Read it as a tool: what job does it do, what rules does it enforce, and what breaks if you ignore those rules?

### Tiny code

```cpp
// Explore: Macros vs functions
#include <iostream>
int main() {
  std::cout << "practice: Macros vs functions\n";
  return 0;
}
```

- **Remember:** State one invariant for `Macros vs functions` before you write code that uses it.
- **Common mistake:** Using `Macros vs functions` by copy-paste without knowing what it owns or when it is valid.

Practice: open `examples/02_*.cpp`, predict the output, change one line, re-predict.

## 3. Streaming loggers

### Plain English

Today's idea — **Streaming loggers** — fits inside the wider theme of Logging & diagnostics design. Read it as a tool: what job does it do, what rules does it enforce, and what breaks if you ignore those rules?

### Tiny code

```cpp
// Explore: Streaming loggers
#include <iostream>
int main() {
  std::cout << "practice: Streaming loggers\n";
  return 0;
}
```

- **Remember:** State one invariant for `Streaming loggers` before you write code that uses it.
- **Common mistake:** Using `Streaming loggers` by copy-paste without knowing what it owns or when it is valid.

Practice: open `examples/03_*.cpp`, predict the output, change one line, re-predict.

## 4. Context fields

### Plain English

Today's idea — **Context fields** — fits inside the wider theme of Logging & diagnostics design. Read it as a tool: what job does it do, what rules does it enforce, and what breaks if you ignore those rules?

### Tiny code

```cpp
// Explore: Context fields
#include <iostream>
int main() {
  std::cout << "practice: Context fields\n";
  return 0;
}
```

- **Remember:** State one invariant for `Context fields` before you write code that uses it.
- **Common mistake:** Using `Context fields` by copy-paste without knowing what it owns or when it is valid.

Practice: open `examples/04_*.cpp`, predict the output, change one line, re-predict.

## 5. Performance of logging

### Plain English

Today's idea — **Performance of logging** — fits inside the wider theme of Logging & diagnostics design. Read it as a tool: what job does it do, what rules does it enforce, and what breaks if you ignore those rules?

### Tiny code

```cpp
// Explore: Performance of logging
#include <iostream>
int main() {
  std::cout << "practice: Performance of logging\n";
  return 0;
}
```

- **Remember:** State one invariant for `Performance of logging` before you write code that uses it.
- **Common mistake:** Using `Performance of logging` by copy-paste without knowing what it owns or when it is valid.

Practice: open `examples/05_*.cpp`, predict the output, change one line, re-predict.

## 6. Sinks

### Plain English

Today's idea — **Sinks** — fits inside the wider theme of Logging & diagnostics design. Read it as a tool: what job does it do, what rules does it enforce, and what breaks if you ignore those rules?

### Tiny code

```cpp
// Explore: Sinks
#include <iostream>
int main() {
  std::cout << "practice: Sinks\n";
  return 0;
}
```

- **Remember:** State one invariant for `Sinks` before you write code that uses it.
- **Common mistake:** Using `Sinks` by copy-paste without knowing what it owns or when it is valid.

Practice: open `examples/06_*.cpp`, predict the output, change one line, re-predict.

## 7. Compile-time stripping

### Plain English

Today's idea — **Compile-time stripping** — fits inside the wider theme of Logging & diagnostics design. Read it as a tool: what job does it do, what rules does it enforce, and what breaks if you ignore those rules?

### Tiny code

```cpp
// Explore: Compile-time stripping
#include <iostream>
int main() {
  std::cout << "practice: Compile-time stripping\n";
  return 0;
}
```

- **Remember:** State one invariant for `Compile-time stripping` before you write code that uses it.
- **Common mistake:** Using `Compile-time stripping` by copy-paste without knowing what it owns or when it is valid.

Practice: open `examples/07_*.cpp`, predict the output, change one line, re-predict.

## 8. Structured logs idea

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

Practice: open `examples/08_*.cpp`, predict the output, change one line, re-predict.

## 9. Fatal vs error

### Plain English

Today's idea — **Fatal vs error** — fits inside the wider theme of Logging & diagnostics design. Read it as a tool: what job does it do, what rules does it enforce, and what breaks if you ignore those rules?

### Tiny code

```cpp
// Explore: Fatal vs error
#include <iostream>
int main() {
  std::cout << "practice: Fatal vs error\n";
  return 0;
}
```

- **Remember:** State one invariant for `Fatal vs error` before you write code that uses it.
- **Common mistake:** Using `Fatal vs error` by copy-paste without knowing what it owns or when it is valid.

Practice: open `examples/09_*.cpp`, predict the output, change one line, re-predict.

## 10. A mini logger

### Plain English

Today's idea — **A mini logger** — fits inside the wider theme of Logging & diagnostics design. Read it as a tool: what job does it do, what rules does it enforce, and what breaks if you ignore those rules?

### Tiny code

```cpp
// Explore: A mini logger
#include <iostream>
int main() {
  std::cout << "practice: A mini logger\n";
  return 0;
}
```

- **Remember:** State one invariant for `A mini logger` before you write code that uses it.
- **Common mistake:** Using `A mini logger` by copy-paste without knowing what it owns or when it is valid.

Practice: open `examples/10_*.cpp`, predict the output, change one line, re-predict.

---

## What you should be able to do after Day 73

- Explain `Logging & diagnostics design` to a peer without looking at notes.
- Compile and run all 10 examples with `-std=c++17 -Wall -Wextra` (use newer flags only when the day needs C++20+).
- Answer the 5 questions in `questions.md` before peeking at `answers.md`.
- Write one tiny extra program that combines at least 3 of today's concepts.

Or open this day in the **Badsha hub** (`python3 hub/server.py`) and use Learn / Practice / Quiz tabs.
