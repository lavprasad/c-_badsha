# Day 201 -- Cross-platform C++

Today's goal: understand **Cross-platform C++** in plain English, see a tiny code sample for each idea, then practice in `examples/`.

How to study this day:
1. Read each concept's **Plain English** section.
2. Skim the code sample -- predict what it does.
3. Run the matching file under `examples/`.
4. Only then try `questions.md`.

| # | Concept |
|--:|---------|
| 1 | ifdef strategy |
| 2 | Path separators |
| 3 | Line endings |
| 4 | Endianness |
| 5 | Type sizes |
| 6 | Threading APIs |
| 7 | GUI caution |
| 8 | CI matrix |
| 9 | Abstraction layers |
| 10 | Port a tool |

---

## 1. ifdef strategy

### Plain English

Today's idea — **ifdef strategy** — fits inside the wider theme of Cross-platform C++. Read it as a tool: what job does it do, what rules does it enforce, and what breaks if you ignore those rules?

### Tiny code

```cpp
// Explore: ifdef strategy
#include <iostream>
int main() {
  std::cout << "practice: ifdef strategy\n";
  return 0;
}
```

- **Remember:** State one invariant for `ifdef strategy` before you write code that uses it.
- **Common mistake:** Using `ifdef strategy` by copy-paste without knowing what it owns or when it is valid.

Practice: open `examples/01_*.cpp`, predict the output, change one line, re-predict.

## 2. Path separators

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

Practice: open `examples/02_*.cpp`, predict the output, change one line, re-predict.

## 3. Line endings

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

Practice: open `examples/03_*.cpp`, predict the output, change one line, re-predict.

## 4. Endianness

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

Practice: open `examples/04_*.cpp`, predict the output, change one line, re-predict.

## 5. Type sizes

### Plain English

Today's idea — **Type sizes** — fits inside the wider theme of Cross-platform C++. Read it as a tool: what job does it do, what rules does it enforce, and what breaks if you ignore those rules?

### Tiny code

```cpp
// Explore: Type sizes
#include <iostream>
int main() {
  std::cout << "practice: Type sizes\n";
  return 0;
}
```

- **Remember:** State one invariant for `Type sizes` before you write code that uses it.
- **Common mistake:** Using `Type sizes` by copy-paste without knowing what it owns or when it is valid.

Practice: open `examples/05_*.cpp`, predict the output, change one line, re-predict.

## 6. Threading APIs

### Plain English

Threads run code concurrently. Shared mutable data needs a mutex (or atomics). Prefer RAII locks (`lock_guard`) so unlock happens even on exceptions.

### Tiny code

```cpp
std::mutex m;
int counter = 0;
{
  std::lock_guard<std::mutex> g(m);
  ++counter;
}
```

- **Remember:** A data race on non-atomic shared data is undefined behaviour.
- **Common mistake:** Locking two mutexes in opposite orders in different threads → deadlock.

Practice: open `examples/06_*.cpp`, predict the output, change one line, re-predict.

## 7. GUI caution

### Plain English

Today's idea — **GUI caution** — fits inside the wider theme of Cross-platform C++. Read it as a tool: what job does it do, what rules does it enforce, and what breaks if you ignore those rules?

### Tiny code

```cpp
// Explore: GUI caution
#include <iostream>
int main() {
  std::cout << "practice: GUI caution\n";
  return 0;
}
```

- **Remember:** State one invariant for `GUI caution` before you write code that uses it.
- **Common mistake:** Using `GUI caution` by copy-paste without knowing what it owns or when it is valid.

Practice: open `examples/07_*.cpp`, predict the output, change one line, re-predict.

## 8. CI matrix

### Plain English

Today's idea — **CI matrix** — fits inside the wider theme of Cross-platform C++. Read it as a tool: what job does it do, what rules does it enforce, and what breaks if you ignore those rules?

### Tiny code

```cpp
// Explore: CI matrix
#include <iostream>
int main() {
  std::cout << "practice: CI matrix\n";
  return 0;
}
```

- **Remember:** State one invariant for `CI matrix` before you write code that uses it.
- **Common mistake:** Using `CI matrix` by copy-paste without knowing what it owns or when it is valid.

Practice: open `examples/08_*.cpp`, predict the output, change one line, re-predict.

## 9. Abstraction layers

### Plain English

Virtual functions let you call the derived implementation through a base pointer/reference. Abstract classes (pure virtuals) define interfaces. Always give polymorphic bases a virtual destructor.

### Tiny code

```cpp
struct Shape {
  virtual ~Shape() = default;
  virtual double area() const = 0;
};
struct Circle : Shape {
  double r;
  double area() const override { return 3.14 * r * r; }
};
```

- **Remember:** Use `override` so signature mistakes fail at compile time.
- **Common mistake:** Deleting a derived object via a non-virtual base destructor.

Practice: open `examples/09_*.cpp`, predict the output, change one line, re-predict.

## 10. Port a tool

### Plain English

Today's idea — **Port a tool** — fits inside the wider theme of Cross-platform C++. Read it as a tool: what job does it do, what rules does it enforce, and what breaks if you ignore those rules?

### Tiny code

```cpp
// Explore: Port a tool
#include <iostream>
int main() {
  std::cout << "practice: Port a tool\n";
  return 0;
}
```

- **Remember:** State one invariant for `Port a tool` before you write code that uses it.
- **Common mistake:** Using `Port a tool` by copy-paste without knowing what it owns or when it is valid.

Practice: open `examples/10_*.cpp`, predict the output, change one line, re-predict.

---

## What you should be able to do after Day 201

- Explain `Cross-platform C++` to a peer without looking at notes.
- Compile and run all 10 examples with `-std=c++17 -Wall -Wextra` (use newer flags only when the day needs C++20+).
- Answer the 5 questions in `questions.md` before peeking at `answers.md`.
- Write one tiny extra program that combines at least 3 of today's concepts.

Or open this day in the **Badsha hub** (`python3 hub/server.py`) and use Learn / Practice / Quiz tabs.
