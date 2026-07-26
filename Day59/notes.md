# Day 59 -- Pimpl idiom

Today's goal: understand **Pimpl idiom** in plain English, see a tiny code sample for each idea, then practice in `examples/`.

How to study this day:
1. Read each concept's **Plain English** section.
2. Skim the code sample -- predict what it does.
3. Run the matching file under `examples/`.
4. Only then try `questions.md`.

| # | Concept |
|--:|---------|
| 1 | Why Pimpl |
| 2 | unique_ptr impl |
| 3 | Incomplete types |
| 4 | Copyability choices |
| 5 | ABI stability |
| 6 | Compile-time firewall |
| 7 | Costs of Pimpl |
| 8 | Rule of five with Pimpl |
| 9 | Moving Pimpl types |
| 10 | A Widget Pimpl |

---

## 1. Why Pimpl

### Plain English

Today's idea — **Why Pimpl** — fits inside the wider theme of Pimpl idiom. Read it as a tool: what job does it do, what rules does it enforce, and what breaks if you ignore those rules?

### Tiny code

```cpp
// Explore: Why Pimpl
#include <iostream>
int main() {
  std::cout << "practice: Why Pimpl\n";
  return 0;
}
```

- **Remember:** State one invariant for `Why Pimpl` before you write code that uses it.
- **Common mistake:** Using `Why Pimpl` by copy-paste without knowing what it owns or when it is valid.

Practice: open `examples/01_*.cpp`, predict the output, change one line, re-predict.

## 2. unique_ptr impl

### Plain English

`unique_ptr` is exclusive ownership — cheap and clear. `shared_ptr` shares ownership with a reference count. Prefer `unique_ptr` unless you truly need shared lifetime.

### Tiny code

```cpp
auto p = std::make_unique<int>(5);
std::shared_ptr<int> s = std::make_shared<int>(7);
std::weak_ptr<int> w = s;  // does not keep object alive
```

- **Remember:** Break `shared_ptr` cycles with `weak_ptr`.
- **Common mistake:** Creating two `shared_ptr`s from the same raw pointer → double free.

Practice: open `examples/02_*.cpp`, predict the output, change one line, re-predict.

## 3. Incomplete types

### Plain English

Today's idea — **Incomplete types** — fits inside the wider theme of Pimpl idiom. Read it as a tool: what job does it do, what rules does it enforce, and what breaks if you ignore those rules?

### Tiny code

```cpp
// Explore: Incomplete types
#include <iostream>
int main() {
  std::cout << "practice: Incomplete types\n";
  return 0;
}
```

- **Remember:** State one invariant for `Incomplete types` before you write code that uses it.
- **Common mistake:** Using `Incomplete types` by copy-paste without knowing what it owns or when it is valid.

Practice: open `examples/03_*.cpp`, predict the output, change one line, re-predict.

## 4. Copyability choices

### Plain English

Today's idea — **Copyability choices** — fits inside the wider theme of Pimpl idiom. Read it as a tool: what job does it do, what rules does it enforce, and what breaks if you ignore those rules?

### Tiny code

```cpp
// Explore: Copyability choices
#include <iostream>
int main() {
  std::cout << "practice: Copyability choices\n";
  return 0;
}
```

- **Remember:** State one invariant for `Copyability choices` before you write code that uses it.
- **Common mistake:** Using `Copyability choices` by copy-paste without knowing what it owns or when it is valid.

Practice: open `examples/04_*.cpp`, predict the output, change one line, re-predict.

## 5. ABI stability

### Plain English

Today's idea — **ABI stability** — fits inside the wider theme of Pimpl idiom. Read it as a tool: what job does it do, what rules does it enforce, and what breaks if you ignore those rules?

### Tiny code

```cpp
// Explore: ABI stability
#include <iostream>
int main() {
  std::cout << "practice: ABI stability\n";
  return 0;
}
```

- **Remember:** State one invariant for `ABI stability` before you write code that uses it.
- **Common mistake:** Using `ABI stability` by copy-paste without knowing what it owns or when it is valid.

Practice: open `examples/05_*.cpp`, predict the output, change one line, re-predict.

## 6. Compile-time firewall

### Plain English

Today's idea — **Compile-time firewall** — fits inside the wider theme of Pimpl idiom. Read it as a tool: what job does it do, what rules does it enforce, and what breaks if you ignore those rules?

### Tiny code

```cpp
// Explore: Compile-time firewall
#include <iostream>
int main() {
  std::cout << "practice: Compile-time firewall\n";
  return 0;
}
```

- **Remember:** State one invariant for `Compile-time firewall` before you write code that uses it.
- **Common mistake:** Using `Compile-time firewall` by copy-paste without knowing what it owns or when it is valid.

Practice: open `examples/06_*.cpp`, predict the output, change one line, re-predict.

## 7. Costs of Pimpl

### Plain English

Today's idea — **Costs of Pimpl** — fits inside the wider theme of Pimpl idiom. Read it as a tool: what job does it do, what rules does it enforce, and what breaks if you ignore those rules?

### Tiny code

```cpp
// Explore: Costs of Pimpl
#include <iostream>
int main() {
  std::cout << "practice: Costs of Pimpl\n";
  return 0;
}
```

- **Remember:** State one invariant for `Costs of Pimpl` before you write code that uses it.
- **Common mistake:** Using `Costs of Pimpl` by copy-paste without knowing what it owns or when it is valid.

Practice: open `examples/07_*.cpp`, predict the output, change one line, re-predict.

## 8. Rule of five with Pimpl

### Plain English

If your class owns a resource (heap memory, file handle), you must define how it copies, moves, and destroys — or delete copying. If it owns nothing special, write nothing (rule of zero) and use members that already manage themselves.

### Tiny code

```cpp
struct Buf {
  int* p;
  explicit Buf(int n) : p(new int[n]) {}
  ~Buf() { delete[] p; }
  Buf(const Buf&) = delete;
  Buf& operator=(const Buf&) = delete;
};
```

- **Remember:** Rule of zero first; if you need a destructor, revisit copy/move.
- **Common mistake:** Shallow-copying a raw pointer so two objects `delete` the same memory.

Practice: open `examples/08_*.cpp`, predict the output, change one line, re-predict.

## 9. Moving Pimpl types

### Plain English

Today's idea — **Moving Pimpl types** — fits inside the wider theme of Pimpl idiom. Read it as a tool: what job does it do, what rules does it enforce, and what breaks if you ignore those rules?

### Tiny code

```cpp
// Explore: Moving Pimpl types
#include <iostream>
int main() {
  std::cout << "practice: Moving Pimpl types\n";
  return 0;
}
```

- **Remember:** State one invariant for `Moving Pimpl types` before you write code that uses it.
- **Common mistake:** Using `Moving Pimpl types` by copy-paste without knowing what it owns or when it is valid.

Practice: open `examples/09_*.cpp`, predict the output, change one line, re-predict.

## 10. A Widget Pimpl

### Plain English

Today's idea — **A Widget Pimpl** — fits inside the wider theme of Pimpl idiom. Read it as a tool: what job does it do, what rules does it enforce, and what breaks if you ignore those rules?

### Tiny code

```cpp
// Explore: A Widget Pimpl
#include <iostream>
int main() {
  std::cout << "practice: A Widget Pimpl\n";
  return 0;
}
```

- **Remember:** State one invariant for `A Widget Pimpl` before you write code that uses it.
- **Common mistake:** Using `A Widget Pimpl` by copy-paste without knowing what it owns or when it is valid.

Practice: open `examples/10_*.cpp`, predict the output, change one line, re-predict.

---

## What you should be able to do after Day 59

- Explain `Pimpl idiom` to a peer without looking at notes.
- Compile and run all 10 examples with `-std=c++17 -Wall -Wextra` (use newer flags only when the day needs C++20+).
- Answer the 5 questions in `questions.md` before peeking at `answers.md`.
- Write one tiny extra program that combines at least 3 of today's concepts.

Or open this day in the **Badsha hub** (`python3 hub/server.py`) and use Learn / Practice / Quiz tabs.
