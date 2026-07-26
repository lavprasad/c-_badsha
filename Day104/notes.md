# Day 104 -- Custom allocators intro

Today's goal: understand **Custom allocators intro** in plain English, see a tiny code sample for each idea, then practice in `examples/`.

How to study this day:
1. Read each concept's **Plain English** section.
2. Skim the code sample -- predict what it does.
3. Run the matching file under `examples/`.
4. Only then try `questions.md`.

| # | Concept |
|--:|---------|
| 1 | Allocator requirements idea |
| 2 | std::allocator |
| 3 | Stateful allocators |
| 4 | Arena/bump allocators |
| 5 | Pool allocators |
| 6 | PMR overview (C++17) |
| 7 | monotonic_buffer_resource |
| 8 | When custom allocators |
| 9 | Debugging allocators |
| 10 | Arena demo |

---

## 1. Allocator requirements idea

### Plain English

Today's idea — **Allocator requirements idea** — fits inside the wider theme of Custom allocators intro. Read it as a tool: what job does it do, what rules does it enforce, and what breaks if you ignore those rules?

### Tiny code

```cpp
// Explore: Allocator requirements idea
#include <iostream>
int main() {
  std::cout << "practice: Allocator requirements idea\n";
  return 0;
}
```

- **Remember:** State one invariant for `Allocator requirements idea` before you write code that uses it.
- **Common mistake:** Using `Allocator requirements idea` by copy-paste without knowing what it owns or when it is valid.

Practice: open `examples/01_*.cpp`, predict the output, change one line, re-predict.

## 2. std::allocator

### Plain English

Today's idea — **std::allocator** — fits inside the wider theme of Custom allocators intro. Read it as a tool: what job does it do, what rules does it enforce, and what breaks if you ignore those rules?

### Tiny code

```cpp
// Explore: std::allocator
#include <iostream>
int main() {
  std::cout << "practice: std::allocator\n";
  return 0;
}
```

- **Remember:** State one invariant for `std::allocator` before you write code that uses it.
- **Common mistake:** Using `std::allocator` by copy-paste without knowing what it owns or when it is valid.

Practice: open `examples/02_*.cpp`, predict the output, change one line, re-predict.

## 3. Stateful allocators

### Plain English

Today's idea — **Stateful allocators** — fits inside the wider theme of Custom allocators intro. Read it as a tool: what job does it do, what rules does it enforce, and what breaks if you ignore those rules?

### Tiny code

```cpp
// Explore: Stateful allocators
#include <iostream>
int main() {
  std::cout << "practice: Stateful allocators\n";
  return 0;
}
```

- **Remember:** State one invariant for `Stateful allocators` before you write code that uses it.
- **Common mistake:** Using `Stateful allocators` by copy-paste without knowing what it owns or when it is valid.

Practice: open `examples/03_*.cpp`, predict the output, change one line, re-predict.

## 4. Arena/bump allocators

### Plain English

Today's idea — **Arena/bump allocators** — fits inside the wider theme of Custom allocators intro. Read it as a tool: what job does it do, what rules does it enforce, and what breaks if you ignore those rules?

### Tiny code

```cpp
// Explore: Arena/bump allocators
#include <iostream>
int main() {
  std::cout << "practice: Arena/bump allocators\n";
  return 0;
}
```

- **Remember:** State one invariant for `Arena/bump allocators` before you write code that uses it.
- **Common mistake:** Using `Arena/bump allocators` by copy-paste without knowing what it owns or when it is valid.

Practice: open `examples/04_*.cpp`, predict the output, change one line, re-predict.

## 5. Pool allocators

### Plain English

Today's idea — **Pool allocators** — fits inside the wider theme of Custom allocators intro. Read it as a tool: what job does it do, what rules does it enforce, and what breaks if you ignore those rules?

### Tiny code

```cpp
// Explore: Pool allocators
#include <iostream>
int main() {
  std::cout << "practice: Pool allocators\n";
  return 0;
}
```

- **Remember:** State one invariant for `Pool allocators` before you write code that uses it.
- **Common mistake:** Using `Pool allocators` by copy-paste without knowing what it owns or when it is valid.

Practice: open `examples/05_*.cpp`, predict the output, change one line, re-predict.

## 6. PMR overview (C++17)

### Plain English

Today's idea — **PMR overview (C++17)** — fits inside the wider theme of Custom allocators intro. Read it as a tool: what job does it do, what rules does it enforce, and what breaks if you ignore those rules?

### Tiny code

```cpp
// Explore: PMR overview (C++17)
#include <iostream>
int main() {
  std::cout << "practice: PMR overview (C++17)\n";
  return 0;
}
```

- **Remember:** State one invariant for `PMR overview (C++17)` before you write code that uses it.
- **Common mistake:** Using `PMR overview (C++17)` by copy-paste without knowing what it owns or when it is valid.

Practice: open `examples/06_*.cpp`, predict the output, change one line, re-predict.

## 7. monotonic_buffer_resource

### Plain English

Today's idea — **monotonic_buffer_resource** — fits inside the wider theme of Custom allocators intro. Read it as a tool: what job does it do, what rules does it enforce, and what breaks if you ignore those rules?

### Tiny code

```cpp
// Explore: monotonic_buffer_resource
#include <iostream>
int main() {
  std::cout << "practice: monotonic_buffer_resource\n";
  return 0;
}
```

- **Remember:** State one invariant for `monotonic_buffer_resource` before you write code that uses it.
- **Common mistake:** Using `monotonic_buffer_resource` by copy-paste without knowing what it owns or when it is valid.

Practice: open `examples/07_*.cpp`, predict the output, change one line, re-predict.

## 8. When custom allocators

### Plain English

Today's idea — **When custom allocators** — fits inside the wider theme of Custom allocators intro. Read it as a tool: what job does it do, what rules does it enforce, and what breaks if you ignore those rules?

### Tiny code

```cpp
// Explore: When custom allocators
#include <iostream>
int main() {
  std::cout << "practice: When custom allocators\n";
  return 0;
}
```

- **Remember:** State one invariant for `When custom allocators` before you write code that uses it.
- **Common mistake:** Using `When custom allocators` by copy-paste without knowing what it owns or when it is valid.

Practice: open `examples/08_*.cpp`, predict the output, change one line, re-predict.

## 9. Debugging allocators

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

## 10. Arena demo

### Plain English

Today's idea — **Arena demo** — fits inside the wider theme of Custom allocators intro. Read it as a tool: what job does it do, what rules does it enforce, and what breaks if you ignore those rules?

### Tiny code

```cpp
// Explore: Arena demo
#include <iostream>
int main() {
  std::cout << "practice: Arena demo\n";
  return 0;
}
```

- **Remember:** State one invariant for `Arena demo` before you write code that uses it.
- **Common mistake:** Using `Arena demo` by copy-paste without knowing what it owns or when it is valid.

Practice: open `examples/10_*.cpp`, predict the output, change one line, re-predict.

---

## What you should be able to do after Day 104

- Explain `Custom allocators intro` to a peer without looking at notes.
- Compile and run all 10 examples with `-std=c++17 -Wall -Wextra` (use newer flags only when the day needs C++20+).
- Answer the 5 questions in `questions.md` before peeking at `answers.md`.
- Write one tiny extra program that combines at least 3 of today's concepts.

Or open this day in the **Badsha hub** (`python3 hub/server.py`) and use Learn / Practice / Quiz tabs.
