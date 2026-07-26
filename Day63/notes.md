# Day 63 -- Creational patterns

Today's goal: understand **Creational patterns** in plain English, see a tiny code sample for each idea, then practice in `examples/`.

How to study this day:
1. Read each concept's **Plain English** section.
2. Skim the code sample -- predict what it does.
3. Run the matching file under `examples/`.
4. Only then try `questions.md`.

| # | Concept |
|--:|---------|
| 1 | Factory method |
| 2 | Abstract factory |
| 3 | Builder |
| 4 | Prototype |
| 5 | Singleton (and why careful) |
| 6 | Dependency injection light |
| 7 | make_* helpers |
| 8 | Registry pattern |
| 9 | Anti-patterns |
| 10 | A document factory |

---

## 1. Factory method

### Plain English

Today's idea — **Factory method** — fits inside the wider theme of Creational patterns. Read it as a tool: what job does it do, what rules does it enforce, and what breaks if you ignore those rules?

### Tiny code

```cpp
// Explore: Factory method
#include <iostream>
int main() {
  std::cout << "practice: Factory method\n";
  return 0;
}
```

- **Remember:** State one invariant for `Factory method` before you write code that uses it.
- **Common mistake:** Using `Factory method` by copy-paste without knowing what it owns or when it is valid.

Practice: open `examples/01_*.cpp`, predict the output, change one line, re-predict.

## 2. Abstract factory

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

Practice: open `examples/02_*.cpp`, predict the output, change one line, re-predict.

## 3. Builder

### Plain English

Today's idea — **Builder** — fits inside the wider theme of Creational patterns. Read it as a tool: what job does it do, what rules does it enforce, and what breaks if you ignore those rules?

### Tiny code

```cpp
// Explore: Builder
#include <iostream>
int main() {
  std::cout << "practice: Builder\n";
  return 0;
}
```

- **Remember:** State one invariant for `Builder` before you write code that uses it.
- **Common mistake:** Using `Builder` by copy-paste without knowing what it owns or when it is valid.

Practice: open `examples/03_*.cpp`, predict the output, change one line, re-predict.

## 4. Prototype

### Plain English

Today's idea — **Prototype** — fits inside the wider theme of Creational patterns. Read it as a tool: what job does it do, what rules does it enforce, and what breaks if you ignore those rules?

### Tiny code

```cpp
// Explore: Prototype
#include <iostream>
int main() {
  std::cout << "practice: Prototype\n";
  return 0;
}
```

- **Remember:** State one invariant for `Prototype` before you write code that uses it.
- **Common mistake:** Using `Prototype` by copy-paste without knowing what it owns or when it is valid.

Practice: open `examples/04_*.cpp`, predict the output, change one line, re-predict.

## 5. Singleton (and why careful)

### Plain English

Today's idea — **Singleton (and why careful)** — fits inside the wider theme of Creational patterns. Read it as a tool: what job does it do, what rules does it enforce, and what breaks if you ignore those rules?

### Tiny code

```cpp
// Explore: Singleton (and why careful)
#include <iostream>
int main() {
  std::cout << "practice: Singleton (and why careful)\n";
  return 0;
}
```

- **Remember:** State one invariant for `Singleton (and why careful)` before you write code that uses it.
- **Common mistake:** Using `Singleton (and why careful)` by copy-paste without knowing what it owns or when it is valid.

Practice: open `examples/05_*.cpp`, predict the output, change one line, re-predict.

## 6. Dependency injection light

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

Practice: open `examples/06_*.cpp`, predict the output, change one line, re-predict.

## 7. make_* helpers

### Plain English

Today's idea — **make_* helpers** — fits inside the wider theme of Creational patterns. Read it as a tool: what job does it do, what rules does it enforce, and what breaks if you ignore those rules?

### Tiny code

```cpp
// Explore: make_* helpers
#include <iostream>
int main() {
  std::cout << "practice: make_* helpers\n";
  return 0;
}
```

- **Remember:** State one invariant for `make_* helpers` before you write code that uses it.
- **Common mistake:** Using `make_* helpers` by copy-paste without knowing what it owns or when it is valid.

Practice: open `examples/07_*.cpp`, predict the output, change one line, re-predict.

## 8. Registry pattern

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

Practice: open `examples/08_*.cpp`, predict the output, change one line, re-predict.

## 9. Anti-patterns

### Plain English

Today's idea — **Anti-patterns** — fits inside the wider theme of Creational patterns. Read it as a tool: what job does it do, what rules does it enforce, and what breaks if you ignore those rules?

### Tiny code

```cpp
// Explore: Anti-patterns
#include <iostream>
int main() {
  std::cout << "practice: Anti-patterns\n";
  return 0;
}
```

- **Remember:** State one invariant for `Anti-patterns` before you write code that uses it.
- **Common mistake:** Using `Anti-patterns` by copy-paste without knowing what it owns or when it is valid.

Practice: open `examples/09_*.cpp`, predict the output, change one line, re-predict.

## 10. A document factory

### Plain English

Today's idea — **A document factory** — fits inside the wider theme of Creational patterns. Read it as a tool: what job does it do, what rules does it enforce, and what breaks if you ignore those rules?

### Tiny code

```cpp
// Explore: A document factory
#include <iostream>
int main() {
  std::cout << "practice: A document factory\n";
  return 0;
}
```

- **Remember:** State one invariant for `A document factory` before you write code that uses it.
- **Common mistake:** Using `A document factory` by copy-paste without knowing what it owns or when it is valid.

Practice: open `examples/10_*.cpp`, predict the output, change one line, re-predict.

---

## What you should be able to do after Day 63

- Explain `Creational patterns` to a peer without looking at notes.
- Compile and run all 10 examples with `-std=c++17 -Wall -Wextra` (use newer flags only when the day needs C++20+).
- Answer the 5 questions in `questions.md` before peeking at `answers.md`.
- Write one tiny extra program that combines at least 3 of today's concepts.

Or open this day in the **Badsha hub** (`python3 hub/server.py`) and use Learn / Practice / Quiz tabs.
