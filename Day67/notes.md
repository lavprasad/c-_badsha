# Day 67 -- CRTP

Today's goal: understand **CRTP** in plain English, see a tiny code sample for each idea, then practice in `examples/`.

How to study this day:
1. Read each concept's **Plain English** section.
2. Skim the code sample -- predict what it does.
3. Run the matching file under `examples/`.
4. Only then try `questions.md`.

| # | Concept |
|--:|---------|
| 1 | Curiously recurring template |
| 2 | Static polymorphism |
| 3 | Mixin via CRTP |
| 4 | enable_shared_from_this style |
| 5 | Avoiding virtuals |
| 6 | Expression templates hint |
| 7 | Pitfalls |
| 8 | Debugging CRTP |
| 9 | When CRTP helps |
| 10 | A counted object CRTP |

---

## 1. Curiously recurring template

### Plain English

Templates generate code per type. They move errors to compile time and remove runtime virtual dispatch. Keep them readable; constrain parameters when you can.

### Tiny code

```cpp
template <typename T>
T clamp_pos(T x) {
  return x < T{0} ? T{0} : x;
}
```

- **Remember:** Templates usually live in headers so every TU can instantiate them.
- **Common mistake:** Putting a template definition only in a `.cpp` and wondering why the linker fails.

Practice: open `examples/01_*.cpp`, predict the output, change one line, re-predict.

## 2. Static polymorphism

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

## 3. Mixin via CRTP

### Plain English

Today's idea — **Mixin via CRTP** — fits inside the wider theme of CRTP. Read it as a tool: what job does it do, what rules does it enforce, and what breaks if you ignore those rules?

### Tiny code

```cpp
// Explore: Mixin via CRTP
#include <iostream>
int main() {
  std::cout << "practice: Mixin via CRTP\n";
  return 0;
}
```

- **Remember:** State one invariant for `Mixin via CRTP` before you write code that uses it.
- **Common mistake:** Using `Mixin via CRTP` by copy-paste without knowing what it owns or when it is valid.

Practice: open `examples/03_*.cpp`, predict the output, change one line, re-predict.

## 4. enable_shared_from_this style

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

Practice: open `examples/04_*.cpp`, predict the output, change one line, re-predict.

## 5. Avoiding virtuals

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

Practice: open `examples/05_*.cpp`, predict the output, change one line, re-predict.

## 6. Expression templates hint

### Plain English

Templates generate code per type. They move errors to compile time and remove runtime virtual dispatch. Keep them readable; constrain parameters when you can.

### Tiny code

```cpp
template <typename T>
T clamp_pos(T x) {
  return x < T{0} ? T{0} : x;
}
```

- **Remember:** Templates usually live in headers so every TU can instantiate them.
- **Common mistake:** Putting a template definition only in a `.cpp` and wondering why the linker fails.

Practice: open `examples/06_*.cpp`, predict the output, change one line, re-predict.

## 7. Pitfalls

### Plain English

Today's idea — **Pitfalls** — fits inside the wider theme of CRTP. Read it as a tool: what job does it do, what rules does it enforce, and what breaks if you ignore those rules?

### Tiny code

```cpp
// Explore: Pitfalls
#include <iostream>
int main() {
  std::cout << "practice: Pitfalls\n";
  return 0;
}
```

- **Remember:** State one invariant for `Pitfalls` before you write code that uses it.
- **Common mistake:** Using `Pitfalls` by copy-paste without knowing what it owns or when it is valid.

Practice: open `examples/07_*.cpp`, predict the output, change one line, re-predict.

## 8. Debugging CRTP

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

Practice: open `examples/08_*.cpp`, predict the output, change one line, re-predict.

## 9. When CRTP helps

### Plain English

Today's idea — **When CRTP helps** — fits inside the wider theme of CRTP. Read it as a tool: what job does it do, what rules does it enforce, and what breaks if you ignore those rules?

### Tiny code

```cpp
// Explore: When CRTP helps
#include <iostream>
int main() {
  std::cout << "practice: When CRTP helps\n";
  return 0;
}
```

- **Remember:** State one invariant for `When CRTP helps` before you write code that uses it.
- **Common mistake:** Using `When CRTP helps` by copy-paste without knowing what it owns or when it is valid.

Practice: open `examples/09_*.cpp`, predict the output, change one line, re-predict.

## 10. A counted object CRTP

### Plain English

Today's idea — **A counted object CRTP** — fits inside the wider theme of CRTP. Read it as a tool: what job does it do, what rules does it enforce, and what breaks if you ignore those rules?

### Tiny code

```cpp
// Explore: A counted object CRTP
#include <iostream>
int main() {
  std::cout << "practice: A counted object CRTP\n";
  return 0;
}
```

- **Remember:** State one invariant for `A counted object CRTP` before you write code that uses it.
- **Common mistake:** Using `A counted object CRTP` by copy-paste without knowing what it owns or when it is valid.

Practice: open `examples/10_*.cpp`, predict the output, change one line, re-predict.

---

## What you should be able to do after Day 67

- Explain `CRTP` to a peer without looking at notes.
- Compile and run all 10 examples with `-std=c++17 -Wall -Wextra` (use newer flags only when the day needs C++20+).
- Answer the 5 questions in `questions.md` before peeking at `answers.md`.
- Write one tiny extra program that combines at least 3 of today's concepts.

Or open this day in the **Badsha hub** (`python3 hub/server.py`) and use Learn / Practice / Quiz tabs.
