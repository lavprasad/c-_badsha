# Day 149 -- Feature flags & config

Today's goal: understand **Feature flags & config** in plain English, see a tiny code sample for each idea, then practice in `examples/`.

How to study this day:
1. Read each concept's **Plain English** section.
2. Skim the code sample -- predict what it does.
3. Run the matching file under `examples/`.
4. Only then try `questions.md`.

| # | Concept |
|--:|---------|
| 1 | Compile-time flags |
| 2 | Runtime config files |
| 3 | Environment overrides |
| 4 | Typed config structs |
| 5 | Validation on load |
| 6 | Hot reload risks |
| 7 | Defaults & migrations |
| 8 | Secrets handling |
| 9 | Testing with fixtures |
| 10 | A config loader |

---

## 1. Compile-time flags

### Plain English

Today's idea — **Compile-time flags** — fits inside the wider theme of Feature flags & config. Read it as a tool: what job does it do, what rules does it enforce, and what breaks if you ignore those rules?

### Tiny code

```cpp
// Explore: Compile-time flags
#include <iostream>
int main() {
  std::cout << "practice: Compile-time flags\n";
  return 0;
}
```

- **Remember:** State one invariant for `Compile-time flags` before you write code that uses it.
- **Common mistake:** Using `Compile-time flags` by copy-paste without knowing what it owns or when it is valid.

Practice: open `examples/01_*.cpp`, predict the output, change one line, re-predict.

## 2. Runtime config files

### Plain English

Today's idea — **Runtime config files** — fits inside the wider theme of Feature flags & config. Read it as a tool: what job does it do, what rules does it enforce, and what breaks if you ignore those rules?

### Tiny code

```cpp
// Explore: Runtime config files
#include <iostream>
int main() {
  std::cout << "practice: Runtime config files\n";
  return 0;
}
```

- **Remember:** State one invariant for `Runtime config files` before you write code that uses it.
- **Common mistake:** Using `Runtime config files` by copy-paste without knowing what it owns or when it is valid.

Practice: open `examples/02_*.cpp`, predict the output, change one line, re-predict.

## 3. Environment overrides

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

Practice: open `examples/03_*.cpp`, predict the output, change one line, re-predict.

## 4. Typed config structs

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

## 5. Validation on load

### Plain English

Today's idea — **Validation on load** — fits inside the wider theme of Feature flags & config. Read it as a tool: what job does it do, what rules does it enforce, and what breaks if you ignore those rules?

### Tiny code

```cpp
// Explore: Validation on load
#include <iostream>
int main() {
  std::cout << "practice: Validation on load\n";
  return 0;
}
```

- **Remember:** State one invariant for `Validation on load` before you write code that uses it.
- **Common mistake:** Using `Validation on load` by copy-paste without knowing what it owns or when it is valid.

Practice: open `examples/05_*.cpp`, predict the output, change one line, re-predict.

## 6. Hot reload risks

### Plain English

Today's idea — **Hot reload risks** — fits inside the wider theme of Feature flags & config. Read it as a tool: what job does it do, what rules does it enforce, and what breaks if you ignore those rules?

### Tiny code

```cpp
// Explore: Hot reload risks
#include <iostream>
int main() {
  std::cout << "practice: Hot reload risks\n";
  return 0;
}
```

- **Remember:** State one invariant for `Hot reload risks` before you write code that uses it.
- **Common mistake:** Using `Hot reload risks` by copy-paste without knowing what it owns or when it is valid.

Practice: open `examples/06_*.cpp`, predict the output, change one line, re-predict.

## 7. Defaults & migrations

### Plain English

Today's idea — **Defaults & migrations** — fits inside the wider theme of Feature flags & config. Read it as a tool: what job does it do, what rules does it enforce, and what breaks if you ignore those rules?

### Tiny code

```cpp
// Explore: Defaults & migrations
#include <iostream>
int main() {
  std::cout << "practice: Defaults & migrations\n";
  return 0;
}
```

- **Remember:** State one invariant for `Defaults & migrations` before you write code that uses it.
- **Common mistake:** Using `Defaults & migrations` by copy-paste without knowing what it owns or when it is valid.

Practice: open `examples/07_*.cpp`, predict the output, change one line, re-predict.

## 8. Secrets handling

### Plain English

Today's idea — **Secrets handling** — fits inside the wider theme of Feature flags & config. Read it as a tool: what job does it do, what rules does it enforce, and what breaks if you ignore those rules?

### Tiny code

```cpp
// Explore: Secrets handling
#include <iostream>
int main() {
  std::cout << "practice: Secrets handling\n";
  return 0;
}
```

- **Remember:** State one invariant for `Secrets handling` before you write code that uses it.
- **Common mistake:** Using `Secrets handling` by copy-paste without knowing what it owns or when it is valid.

Practice: open `examples/08_*.cpp`, predict the output, change one line, re-predict.

## 9. Testing with fixtures

### Plain English

Projects glue skills: clear requirements, small modules, tests, and honest docs. Start with a tiny vertical slice that runs end-to-end, then thicken features.

### Tiny code

```cpp
int main(int argc, char** argv) {
  if (argc < 2) {
    std::cerr << "usage: tool <file>\n";
    return 1;
  }
  // ...
}
```

- **Remember:** Ship a working subset before polishing edge cases.
- **Common mistake:** Building scaffolding for weeks with nothing runnable.

Practice: open `examples/09_*.cpp`, predict the output, change one line, re-predict.

## 10. A config loader

### Plain English

Today's idea — **A config loader** — fits inside the wider theme of Feature flags & config. Read it as a tool: what job does it do, what rules does it enforce, and what breaks if you ignore those rules?

### Tiny code

```cpp
// Explore: A config loader
#include <iostream>
int main() {
  std::cout << "practice: A config loader\n";
  return 0;
}
```

- **Remember:** State one invariant for `A config loader` before you write code that uses it.
- **Common mistake:** Using `A config loader` by copy-paste without knowing what it owns or when it is valid.

Practice: open `examples/10_*.cpp`, predict the output, change one line, re-predict.

---

## What you should be able to do after Day 149

- Explain `Feature flags & config` to a peer without looking at notes.
- Compile and run all 10 examples with `-std=c++17 -Wall -Wextra` (use newer flags only when the day needs C++20+).
- Answer the 5 questions in `questions.md` before peeking at `answers.md`.
- Write one tiny extra program that combines at least 3 of today's concepts.

Or open this day in the **Badsha hub** (`python3 hub/server.py`) and use Learn / Practice / Quiz tabs.
