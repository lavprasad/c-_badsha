# Day 66 -- Type erasure patterns

Today's goal: understand **Type erasure patterns** in plain English, see a tiny code sample for each idea, then practice in `examples/`.

How to study this day:
1. Read each concept's **Plain English** section.
2. Skim the code sample -- predict what it does.
3. Run the matching file under `examples/`.
4. Only then try `questions.md`.

| # | Concept |
|--:|---------|
| 1 | std::function as erasure |
| 2 | std::any |
| 3 | Manual type erasure |
| 4 | Concept-based polymorphism |
| 5 | Small buffer optimization idea |
| 6 | vtable in erasure |
| 7 | Comparing approaches |
| 8 | API stability |
| 9 | Costs |
| 10 | A drawable erasure |

---

## 1. std::function as erasure

### Plain English

A lambda is a small unnamed function object. Capture `[=]` by value or `[&]` by reference carefully — referenced locals must outlive the lambda.

### Tiny code

```cpp
int factor = 2;
auto twice = [factor](int x) { return x * factor; };
std::vector<int> v{1,2,3};
std::sort(v.begin(), v.end(), [](int a, int b){ return a > b; });
```

- **Remember:** Do not capture locals by reference and return the lambda upward.
- **Common mistake:** Dangling captures after the stack frame ends.

Practice: open `examples/01_*.cpp`, predict the output, change one line, re-predict.

## 2. std::any

### Plain English

`optional<T>` is either a T or empty — better than magic sentinel values. `variant` holds one of several types. Prefer them over raw unions or `void*` for clarity.

### Tiny code

```cpp
#include <optional>
std::optional<int> parse(bool ok) {
  if (!ok) return std::nullopt;
  return 42;
}
int x = parse(true).value_or(-1);
```

- **Remember:** Check `optional` (or use `value_or`) before calling `value()`.
- **Common mistake:** Calling `opt.value()` on an empty optional → exception.

Practice: open `examples/02_*.cpp`, predict the output, change one line, re-predict.

## 3. Manual type erasure

### Plain English

Today's idea — **Manual type erasure** — fits inside the wider theme of Type erasure patterns. Read it as a tool: what job does it do, what rules does it enforce, and what breaks if you ignore those rules?

### Tiny code

```cpp
// Explore: Manual type erasure
#include <iostream>
int main() {
  std::cout << "practice: Manual type erasure\n";
  return 0;
}
```

- **Remember:** State one invariant for `Manual type erasure` before you write code that uses it.
- **Common mistake:** Using `Manual type erasure` by copy-paste without knowing what it owns or when it is valid.

Practice: open `examples/03_*.cpp`, predict the output, change one line, re-predict.

## 4. Concept-based polymorphism

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

Practice: open `examples/04_*.cpp`, predict the output, change one line, re-predict.

## 5. Small buffer optimization idea

### Plain English

Today's idea — **Small buffer optimization idea** — fits inside the wider theme of Type erasure patterns. Read it as a tool: what job does it do, what rules does it enforce, and what breaks if you ignore those rules?

### Tiny code

```cpp
// Explore: Small buffer optimization idea
#include <iostream>
int main() {
  std::cout << "practice: Small buffer optimization idea\n";
  return 0;
}
```

- **Remember:** State one invariant for `Small buffer optimization idea` before you write code that uses it.
- **Common mistake:** Using `Small buffer optimization idea` by copy-paste without knowing what it owns or when it is valid.

Practice: open `examples/05_*.cpp`, predict the output, change one line, re-predict.

## 6. vtable in erasure

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

## 7. Comparing approaches

### Plain English

Today's idea — **Comparing approaches** — fits inside the wider theme of Type erasure patterns. Read it as a tool: what job does it do, what rules does it enforce, and what breaks if you ignore those rules?

### Tiny code

```cpp
// Explore: Comparing approaches
#include <iostream>
int main() {
  std::cout << "practice: Comparing approaches\n";
  return 0;
}
```

- **Remember:** State one invariant for `Comparing approaches` before you write code that uses it.
- **Common mistake:** Using `Comparing approaches` by copy-paste without knowing what it owns or when it is valid.

Practice: open `examples/07_*.cpp`, predict the output, change one line, re-predict.

## 8. API stability

### Plain English

Today's idea — **API stability** — fits inside the wider theme of Type erasure patterns. Read it as a tool: what job does it do, what rules does it enforce, and what breaks if you ignore those rules?

### Tiny code

```cpp
// Explore: API stability
#include <iostream>
int main() {
  std::cout << "practice: API stability\n";
  return 0;
}
```

- **Remember:** State one invariant for `API stability` before you write code that uses it.
- **Common mistake:** Using `API stability` by copy-paste without knowing what it owns or when it is valid.

Practice: open `examples/08_*.cpp`, predict the output, change one line, re-predict.

## 9. Costs

### Plain English

Today's idea — **Costs** — fits inside the wider theme of Type erasure patterns. Read it as a tool: what job does it do, what rules does it enforce, and what breaks if you ignore those rules?

### Tiny code

```cpp
// Explore: Costs
#include <iostream>
int main() {
  std::cout << "practice: Costs\n";
  return 0;
}
```

- **Remember:** State one invariant for `Costs` before you write code that uses it.
- **Common mistake:** Using `Costs` by copy-paste without knowing what it owns or when it is valid.

Practice: open `examples/09_*.cpp`, predict the output, change one line, re-predict.

## 10. A drawable erasure

### Plain English

Today's idea — **A drawable erasure** — fits inside the wider theme of Type erasure patterns. Read it as a tool: what job does it do, what rules does it enforce, and what breaks if you ignore those rules?

### Tiny code

```cpp
// Explore: A drawable erasure
#include <iostream>
int main() {
  std::cout << "practice: A drawable erasure\n";
  return 0;
}
```

- **Remember:** State one invariant for `A drawable erasure` before you write code that uses it.
- **Common mistake:** Using `A drawable erasure` by copy-paste without knowing what it owns or when it is valid.

Practice: open `examples/10_*.cpp`, predict the output, change one line, re-predict.

---

## What you should be able to do after Day 66

- Explain `Type erasure patterns` to a peer without looking at notes.
- Compile and run all 10 examples with `-std=c++17 -Wall -Wextra` (use newer flags only when the day needs C++20+).
- Answer the 5 questions in `questions.md` before peeking at `answers.md`.
- Write one tiny extra program that combines at least 3 of today's concepts.

Or open this day in the **Badsha hub** (`python3 hub/server.py`) and use Learn / Practice / Quiz tabs.
