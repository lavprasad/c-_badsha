# Day 62 -- SOLID in C++

Today's goal: understand **SOLID in C++** in plain English, see a tiny code sample for each idea, then practice in `examples/`.

How to study this day:
1. Read each concept's **Plain English** section.
2. Skim the code sample -- predict what it does.
3. Run the matching file under `examples/`.
4. Only then try `questions.md`.

| # | Concept |
|--:|---------|
| 1 | Single responsibility |
| 2 | Open/closed |
| 3 | Liskov |
| 4 | Interface segregation |
| 5 | Dependency inversion |
| 6 | C++-specific mapping |
| 7 | Over-abstracting smell |
| 8 | Concrete examples |
| 9 | Refactor checklist |
| 10 | A payment module sketch |

---

## 1. Single responsibility

### Plain English

Today's idea — **Single responsibility** — fits inside the wider theme of SOLID in C++. Read it as a tool: what job does it do, what rules does it enforce, and what breaks if you ignore those rules?

### Tiny code

```cpp
// Explore: Single responsibility
#include <iostream>
int main() {
  std::cout << "practice: Single responsibility\n";
  return 0;
}
```

- **Remember:** State one invariant for `Single responsibility` before you write code that uses it.
- **Common mistake:** Using `Single responsibility` by copy-paste without knowing what it owns or when it is valid.

Practice: open `examples/01_*.cpp`, predict the output, change one line, re-predict.

## 2. Open/closed

### Plain English

Today's idea — **Open/closed** — fits inside the wider theme of SOLID in C++. Read it as a tool: what job does it do, what rules does it enforce, and what breaks if you ignore those rules?

### Tiny code

```cpp
// Explore: Open/closed
#include <iostream>
int main() {
  std::cout << "practice: Open/closed\n";
  return 0;
}
```

- **Remember:** State one invariant for `Open/closed` before you write code that uses it.
- **Common mistake:** Using `Open/closed` by copy-paste without knowing what it owns or when it is valid.

Practice: open `examples/02_*.cpp`, predict the output, change one line, re-predict.

## 3. Liskov

### Plain English

Today's idea — **Liskov** — fits inside the wider theme of SOLID in C++. Read it as a tool: what job does it do, what rules does it enforce, and what breaks if you ignore those rules?

### Tiny code

```cpp
// Explore: Liskov
#include <iostream>
int main() {
  std::cout << "practice: Liskov\n";
  return 0;
}
```

- **Remember:** State one invariant for `Liskov` before you write code that uses it.
- **Common mistake:** Using `Liskov` by copy-paste without knowing what it owns or when it is valid.

Practice: open `examples/03_*.cpp`, predict the output, change one line, re-predict.

## 4. Interface segregation

### Plain English

Today's idea — **Interface segregation** — fits inside the wider theme of SOLID in C++. Read it as a tool: what job does it do, what rules does it enforce, and what breaks if you ignore those rules?

### Tiny code

```cpp
// Explore: Interface segregation
#include <iostream>
int main() {
  std::cout << "practice: Interface segregation\n";
  return 0;
}
```

- **Remember:** State one invariant for `Interface segregation` before you write code that uses it.
- **Common mistake:** Using `Interface segregation` by copy-paste without knowing what it owns or when it is valid.

Practice: open `examples/04_*.cpp`, predict the output, change one line, re-predict.

## 5. Dependency inversion

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

Practice: open `examples/05_*.cpp`, predict the output, change one line, re-predict.

## 6. C++-specific mapping

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

Practice: open `examples/06_*.cpp`, predict the output, change one line, re-predict.

## 7. Over-abstracting smell

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

Practice: open `examples/07_*.cpp`, predict the output, change one line, re-predict.

## 8. Concrete examples

### Plain English

Today's idea — **Concrete examples** — fits inside the wider theme of SOLID in C++. Read it as a tool: what job does it do, what rules does it enforce, and what breaks if you ignore those rules?

### Tiny code

```cpp
// Explore: Concrete examples
#include <iostream>
int main() {
  std::cout << "practice: Concrete examples\n";
  return 0;
}
```

- **Remember:** State one invariant for `Concrete examples` before you write code that uses it.
- **Common mistake:** Using `Concrete examples` by copy-paste without knowing what it owns or when it is valid.

Practice: open `examples/08_*.cpp`, predict the output, change one line, re-predict.

## 9. Refactor checklist

### Plain English

Today's idea — **Refactor checklist** — fits inside the wider theme of SOLID in C++. Read it as a tool: what job does it do, what rules does it enforce, and what breaks if you ignore those rules?

### Tiny code

```cpp
// Explore: Refactor checklist
#include <iostream>
int main() {
  std::cout << "practice: Refactor checklist\n";
  return 0;
}
```

- **Remember:** State one invariant for `Refactor checklist` before you write code that uses it.
- **Common mistake:** Using `Refactor checklist` by copy-paste without knowing what it owns or when it is valid.

Practice: open `examples/09_*.cpp`, predict the output, change one line, re-predict.

## 10. A payment module sketch

### Plain English

Today's idea — **A payment module sketch** — fits inside the wider theme of SOLID in C++. Read it as a tool: what job does it do, what rules does it enforce, and what breaks if you ignore those rules?

### Tiny code

```cpp
// Explore: A payment module sketch
#include <iostream>
int main() {
  std::cout << "practice: A payment module sketch\n";
  return 0;
}
```

- **Remember:** State one invariant for `A payment module sketch` before you write code that uses it.
- **Common mistake:** Using `A payment module sketch` by copy-paste without knowing what it owns or when it is valid.

Practice: open `examples/10_*.cpp`, predict the output, change one line, re-predict.

---

## What you should be able to do after Day 62

- Explain `SOLID in C++` to a peer without looking at notes.
- Compile and run all 10 examples with `-std=c++17 -Wall -Wextra` (use newer flags only when the day needs C++20+).
- Answer the 5 questions in `questions.md` before peeking at `answers.md`.
- Write one tiny extra program that combines at least 3 of today's concepts.

Or open this day in the **Badsha hub** (`python3 hub/server.py`) and use Learn / Practice / Quiz tabs.
