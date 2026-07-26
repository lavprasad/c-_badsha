# Day 47 -- Move semantics advanced

Today's goal: understand **Move semantics advanced** in plain English, see a tiny code sample for each idea, then practice in `examples/`.

How to study this day:
1. Read each concept's **Plain English** section.
2. Skim the code sample -- predict what it does.
3. Run the matching file under `examples/`.
4. Only then try `questions.md`.

| # | Concept |
|--:|---------|
| 1 | Value categories recap |
| 2 | Perfect forwarding preview |
| 3 | Move-only types |
| 4 | Moved-from state rules |
| 5 | NRVO / RVO |
| 6 | Forced moves vs copies |
| 7 | Containers and moves |
| 8 | noexcept move importance |
| 9 | Debugging unexpected copies |
| 10 | A move-only handle |

---

## 1. Value categories recap

### Plain English

Today's idea — **Value categories recap** — fits inside the wider theme of Move semantics advanced. Read it as a tool: what job does it do, what rules does it enforce, and what breaks if you ignore those rules?

### Tiny code

```cpp
// Explore: Value categories recap
#include <iostream>
int main() {
  std::cout << "practice: Value categories recap\n";
  return 0;
}
```

- **Remember:** State one invariant for `Value categories recap` before you write code that uses it.
- **Common mistake:** Using `Value categories recap` by copy-paste without knowing what it owns or when it is valid.

Practice: open `examples/01_*.cpp`, predict the output, change one line, re-predict.

## 2. Perfect forwarding preview

### Plain English

Move steals resources from an object you are done with instead of deep-copying. `std::move` is a cast that enables stealing; it does not move by itself.

### Tiny code

```cpp
std::string a = "hello";
std::string b = std::move(a);  // b owns the buffer
// a is valid but unspecified (often empty)
```

- **Remember:** After `std::move(x)`, only assign to `x` or destroy it — do not read its value.
- **Common mistake:** Using a moved-from object as if it still held the old data.

Practice: open `examples/02_*.cpp`, predict the output, change one line, re-predict.

## 3. Move-only types

### Plain English

Today's idea — **Move-only types** — fits inside the wider theme of Move semantics advanced. Read it as a tool: what job does it do, what rules does it enforce, and what breaks if you ignore those rules?

### Tiny code

```cpp
// Explore: Move-only types
#include <iostream>
int main() {
  std::cout << "practice: Move-only types\n";
  return 0;
}
```

- **Remember:** State one invariant for `Move-only types` before you write code that uses it.
- **Common mistake:** Using `Move-only types` by copy-paste without knowing what it owns or when it is valid.

Practice: open `examples/03_*.cpp`, predict the output, change one line, re-predict.

## 4. Moved-from state rules

### Plain English

Today's idea — **Moved-from state rules** — fits inside the wider theme of Move semantics advanced. Read it as a tool: what job does it do, what rules does it enforce, and what breaks if you ignore those rules?

### Tiny code

```cpp
// Explore: Moved-from state rules
#include <iostream>
int main() {
  std::cout << "practice: Moved-from state rules\n";
  return 0;
}
```

- **Remember:** State one invariant for `Moved-from state rules` before you write code that uses it.
- **Common mistake:** Using `Moved-from state rules` by copy-paste without knowing what it owns or when it is valid.

Practice: open `examples/04_*.cpp`, predict the output, change one line, re-predict.

## 5. NRVO / RVO

### Plain English

Today's idea — **NRVO / RVO** — fits inside the wider theme of Move semantics advanced. Read it as a tool: what job does it do, what rules does it enforce, and what breaks if you ignore those rules?

### Tiny code

```cpp
// Explore: NRVO / RVO
#include <iostream>
int main() {
  std::cout << "practice: NRVO / RVO\n";
  return 0;
}
```

- **Remember:** State one invariant for `NRVO / RVO` before you write code that uses it.
- **Common mistake:** Using `NRVO / RVO` by copy-paste without knowing what it owns or when it is valid.

Practice: open `examples/05_*.cpp`, predict the output, change one line, re-predict.

## 6. Forced moves vs copies

### Plain English

Today's idea — **Forced moves vs copies** — fits inside the wider theme of Move semantics advanced. Read it as a tool: what job does it do, what rules does it enforce, and what breaks if you ignore those rules?

### Tiny code

```cpp
// Explore: Forced moves vs copies
#include <iostream>
int main() {
  std::cout << "practice: Forced moves vs copies\n";
  return 0;
}
```

- **Remember:** State one invariant for `Forced moves vs copies` before you write code that uses it.
- **Common mistake:** Using `Forced moves vs copies` by copy-paste without knowing what it owns or when it is valid.

Practice: open `examples/06_*.cpp`, predict the output, change one line, re-predict.

## 7. Containers and moves

### Plain English

Today's idea — **Containers and moves** — fits inside the wider theme of Move semantics advanced. Read it as a tool: what job does it do, what rules does it enforce, and what breaks if you ignore those rules?

### Tiny code

```cpp
// Explore: Containers and moves
#include <iostream>
int main() {
  std::cout << "practice: Containers and moves\n";
  return 0;
}
```

- **Remember:** State one invariant for `Containers and moves` before you write code that uses it.
- **Common mistake:** Using `Containers and moves` by copy-paste without knowing what it owns or when it is valid.

Practice: open `examples/07_*.cpp`, predict the output, change one line, re-predict.

## 8. noexcept move importance

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

## 9. Debugging unexpected copies

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

## 10. A move-only handle

### Plain English

Today's idea — **A move-only handle** — fits inside the wider theme of Move semantics advanced. Read it as a tool: what job does it do, what rules does it enforce, and what breaks if you ignore those rules?

### Tiny code

```cpp
// Explore: A move-only handle
#include <iostream>
int main() {
  std::cout << "practice: A move-only handle\n";
  return 0;
}
```

- **Remember:** State one invariant for `A move-only handle` before you write code that uses it.
- **Common mistake:** Using `A move-only handle` by copy-paste without knowing what it owns or when it is valid.

Practice: open `examples/10_*.cpp`, predict the output, change one line, re-predict.

---

## What you should be able to do after Day 47

- Explain `Move semantics advanced` to a peer without looking at notes.
- Compile and run all 10 examples with `-std=c++17 -Wall -Wextra` (use newer flags only when the day needs C++20+).
- Answer the 5 questions in `questions.md` before peeking at `answers.md`.
- Write one tiny extra program that combines at least 3 of today's concepts.

Or open this day in the **Badsha hub** (`python3 hub/server.py`) and use Learn / Practice / Quiz tabs.
