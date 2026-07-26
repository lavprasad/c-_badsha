# Day 60 -- RAII patterns

Today's goal: understand **RAII patterns** in plain English, see a tiny code sample for each idea, then practice in `examples/`.

How to study this day:
1. Read each concept's **Plain English** section.
2. Skim the code sample -- predict what it does.
3. Run the matching file under `examples/`.
4. Only then try `questions.md`.

| # | Concept |
|--:|---------|
| 1 | Locks as RAII |
| 2 | File handles as RAII |
| 3 | Scope guards |
| 4 | Transaction-like rollback |
| 5 | Custom deleter RAII |
| 6 | Finally-like patterns |
| 7 | Exception-safe acquire |
| 8 | Multiple resources |
| 9 | Order of destruction |
| 10 | A scoped timer |

---

## 1. Locks as RAII

### Plain English

Today's idea — **Locks as RAII** — fits inside the wider theme of RAII patterns. Read it as a tool: what job does it do, what rules does it enforce, and what breaks if you ignore those rules?

### Tiny code

```cpp
// Explore: Locks as RAII
#include <iostream>
int main() {
  std::cout << "practice: Locks as RAII\n";
  return 0;
}
```

- **Remember:** State one invariant for `Locks as RAII` before you write code that uses it.
- **Common mistake:** Using `Locks as RAII` by copy-paste without knowing what it owns or when it is valid.

Practice: open `examples/01_*.cpp`, predict the output, change one line, re-predict.

## 2. File handles as RAII

### Plain English

Today's idea — **File handles as RAII** — fits inside the wider theme of RAII patterns. Read it as a tool: what job does it do, what rules does it enforce, and what breaks if you ignore those rules?

### Tiny code

```cpp
// Explore: File handles as RAII
#include <iostream>
int main() {
  std::cout << "practice: File handles as RAII\n";
  return 0;
}
```

- **Remember:** State one invariant for `File handles as RAII` before you write code that uses it.
- **Common mistake:** Using `File handles as RAII` by copy-paste without knowing what it owns or when it is valid.

Practice: open `examples/02_*.cpp`, predict the output, change one line, re-predict.

## 3. Scope guards

### Plain English

Today's idea — **Scope guards** — fits inside the wider theme of RAII patterns. Read it as a tool: what job does it do, what rules does it enforce, and what breaks if you ignore those rules?

### Tiny code

```cpp
// Explore: Scope guards
#include <iostream>
int main() {
  std::cout << "practice: Scope guards\n";
  return 0;
}
```

- **Remember:** State one invariant for `Scope guards` before you write code that uses it.
- **Common mistake:** Using `Scope guards` by copy-paste without knowing what it owns or when it is valid.

Practice: open `examples/03_*.cpp`, predict the output, change one line, re-predict.

## 4. Transaction-like rollback

### Plain English

Today's idea — **Transaction-like rollback** — fits inside the wider theme of RAII patterns. Read it as a tool: what job does it do, what rules does it enforce, and what breaks if you ignore those rules?

### Tiny code

```cpp
// Explore: Transaction-like rollback
#include <iostream>
int main() {
  std::cout << "practice: Transaction-like rollback\n";
  return 0;
}
```

- **Remember:** State one invariant for `Transaction-like rollback` before you write code that uses it.
- **Common mistake:** Using `Transaction-like rollback` by copy-paste without knowing what it owns or when it is valid.

Practice: open `examples/04_*.cpp`, predict the output, change one line, re-predict.

## 5. Custom deleter RAII

### Plain English

The heap lives until you release it. Prefer smart pointers and containers over raw `new`/`delete`. If you must use raw ownership, every `new` has exactly one matching `delete` on every path.

### Tiny code

```cpp
// Prefer:
auto p = std::make_unique<int[]>(10);
// instead of new int[10] / delete[]
```

- **Remember:** Match `new` with `delete` and `new[]` with `delete[]`.
- **Common mistake:** Using `delete` on array memory allocated with `new[]`.

Practice: open `examples/05_*.cpp`, predict the output, change one line, re-predict.

## 6. Finally-like patterns

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

Practice: open `examples/06_*.cpp`, predict the output, change one line, re-predict.

## 7. Exception-safe acquire

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

Practice: open `examples/07_*.cpp`, predict the output, change one line, re-predict.

## 8. Multiple resources

### Plain English

Today's idea — **Multiple resources** — fits inside the wider theme of RAII patterns. Read it as a tool: what job does it do, what rules does it enforce, and what breaks if you ignore those rules?

### Tiny code

```cpp
// Explore: Multiple resources
#include <iostream>
int main() {
  std::cout << "practice: Multiple resources\n";
  return 0;
}
```

- **Remember:** State one invariant for `Multiple resources` before you write code that uses it.
- **Common mistake:** Using `Multiple resources` by copy-paste without knowing what it owns or when it is valid.

Practice: open `examples/08_*.cpp`, predict the output, change one line, re-predict.

## 9. Order of destruction

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

Practice: open `examples/09_*.cpp`, predict the output, change one line, re-predict.

## 10. A scoped timer

### Plain English

Today's idea — **A scoped timer** — fits inside the wider theme of RAII patterns. Read it as a tool: what job does it do, what rules does it enforce, and what breaks if you ignore those rules?

### Tiny code

```cpp
// Explore: A scoped timer
#include <iostream>
int main() {
  std::cout << "practice: A scoped timer\n";
  return 0;
}
```

- **Remember:** State one invariant for `A scoped timer` before you write code that uses it.
- **Common mistake:** Using `A scoped timer` by copy-paste without knowing what it owns or when it is valid.

Practice: open `examples/10_*.cpp`, predict the output, change one line, re-predict.

---

## What you should be able to do after Day 60

- Explain `RAII patterns` to a peer without looking at notes.
- Compile and run all 10 examples with `-std=c++17 -Wall -Wextra` (use newer flags only when the day needs C++20+).
- Answer the 5 questions in `questions.md` before peeking at `answers.md`.
- Write one tiny extra program that combines at least 3 of today's concepts.

Or open this day in the **Badsha hub** (`python3 hub/server.py`) and use Learn / Practice / Quiz tabs.
