# Day 118 -- consteval & constinit

Today's goal: understand **consteval & constinit** in plain English, see a tiny code sample for each idea, then practice in `examples/`.

How to study this day:
1. Read each concept's **Plain English** section.
2. Skim the code sample -- predict what it does.
3. Run the matching file under `examples/`.
4. Only then try `questions.md`.

| # | Concept |
|--:|---------|
| 1 | consteval functions |
| 2 | constinit variables |
| 3 | vs constexpr |
| 4 | Compile-time mandates |
| 5 | Immediate functions |
| 6 | Static initialization |
| 7 | Use cases |
| 8 | Errors at compile time |
| 9 | Interaction with templates |
| 10 | A consteval parser bit |

---

## 1. consteval functions

### Plain English

Today's idea — **consteval functions** — fits inside the wider theme of consteval & constinit. Read it as a tool: what job does it do, what rules does it enforce, and what breaks if you ignore those rules?

### Tiny code

```cpp
// Explore: consteval functions
#include <iostream>
int main() {
  std::cout << "practice: consteval functions\n";
  return 0;
}
```

- **Remember:** State one invariant for `consteval functions` before you write code that uses it.
- **Common mistake:** Using `consteval functions` by copy-paste without knowing what it owns or when it is valid.

Practice: open `examples/01_*.cpp`, predict the output, change one line, re-predict.

## 2. constinit variables

### Plain English

Today's idea — **constinit variables** — fits inside the wider theme of consteval & constinit. Read it as a tool: what job does it do, what rules does it enforce, and what breaks if you ignore those rules?

### Tiny code

```cpp
// Explore: constinit variables
#include <iostream>
int main() {
  std::cout << "practice: constinit variables\n";
  return 0;
}
```

- **Remember:** State one invariant for `constinit variables` before you write code that uses it.
- **Common mistake:** Using `constinit variables` by copy-paste without knowing what it owns or when it is valid.

Practice: open `examples/02_*.cpp`, predict the output, change one line, re-predict.

## 3. vs constexpr

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

Practice: open `examples/03_*.cpp`, predict the output, change one line, re-predict.

## 4. Compile-time mandates

### Plain English

Today's idea — **Compile-time mandates** — fits inside the wider theme of consteval & constinit. Read it as a tool: what job does it do, what rules does it enforce, and what breaks if you ignore those rules?

### Tiny code

```cpp
// Explore: Compile-time mandates
#include <iostream>
int main() {
  std::cout << "practice: Compile-time mandates\n";
  return 0;
}
```

- **Remember:** State one invariant for `Compile-time mandates` before you write code that uses it.
- **Common mistake:** Using `Compile-time mandates` by copy-paste without knowing what it owns or when it is valid.

Practice: open `examples/04_*.cpp`, predict the output, change one line, re-predict.

## 5. Immediate functions

### Plain English

Today's idea — **Immediate functions** — fits inside the wider theme of consteval & constinit. Read it as a tool: what job does it do, what rules does it enforce, and what breaks if you ignore those rules?

### Tiny code

```cpp
// Explore: Immediate functions
#include <iostream>
int main() {
  std::cout << "practice: Immediate functions\n";
  return 0;
}
```

- **Remember:** State one invariant for `Immediate functions` before you write code that uses it.
- **Common mistake:** Using `Immediate functions` by copy-paste without knowing what it owns or when it is valid.

Practice: open `examples/05_*.cpp`, predict the output, change one line, re-predict.

## 6. Static initialization

### Plain English

Today's idea — **Static initialization** — fits inside the wider theme of consteval & constinit. Read it as a tool: what job does it do, what rules does it enforce, and what breaks if you ignore those rules?

### Tiny code

```cpp
// Explore: Static initialization
#include <iostream>
int main() {
  std::cout << "practice: Static initialization\n";
  return 0;
}
```

- **Remember:** State one invariant for `Static initialization` before you write code that uses it.
- **Common mistake:** Using `Static initialization` by copy-paste without knowing what it owns or when it is valid.

Practice: open `examples/06_*.cpp`, predict the output, change one line, re-predict.

## 7. Use cases

### Plain English

Today's idea — **Use cases** — fits inside the wider theme of consteval & constinit. Read it as a tool: what job does it do, what rules does it enforce, and what breaks if you ignore those rules?

### Tiny code

```cpp
// Explore: Use cases
#include <iostream>
int main() {
  std::cout << "practice: Use cases\n";
  return 0;
}
```

- **Remember:** State one invariant for `Use cases` before you write code that uses it.
- **Common mistake:** Using `Use cases` by copy-paste without knowing what it owns or when it is valid.

Practice: open `examples/07_*.cpp`, predict the output, change one line, re-predict.

## 8. Errors at compile time

### Plain English

Today's idea — **Errors at compile time** — fits inside the wider theme of consteval & constinit. Read it as a tool: what job does it do, what rules does it enforce, and what breaks if you ignore those rules?

### Tiny code

```cpp
// Explore: Errors at compile time
#include <iostream>
int main() {
  std::cout << "practice: Errors at compile time\n";
  return 0;
}
```

- **Remember:** State one invariant for `Errors at compile time` before you write code that uses it.
- **Common mistake:** Using `Errors at compile time` by copy-paste without knowing what it owns or when it is valid.

Practice: open `examples/08_*.cpp`, predict the output, change one line, re-predict.

## 9. Interaction with templates

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

Practice: open `examples/09_*.cpp`, predict the output, change one line, re-predict.

## 10. A consteval parser bit

### Plain English

Bit tricks set, clear, and test individual flags inside an integer. Prefer unsigned types for shift-heavy code. `std::bitset` makes fixed-width bit sets readable.

### Tiny code

```cpp
unsigned flags = 0;
flags |= (1u << 3);           // set bit 3
bool on = flags & (1u << 3);  // test
flags &= ~(1u << 3);          // clear
```

- **Remember:** Shifting into or past the sign bit on signed ints can be UB.
- **Common mistake:** Using signed `int` for bitmasks and shifting into the sign bit.

Practice: open `examples/10_*.cpp`, predict the output, change one line, re-predict.

---

## What you should be able to do after Day 118

- Explain `consteval & constinit` to a peer without looking at notes.
- Compile and run all 10 examples with `-std=c++17 -Wall -Wextra` (use newer flags only when the day needs C++20+).
- Answer the 5 questions in `questions.md` before peeking at `answers.md`.
- Write one tiny extra program that combines at least 3 of today's concepts.

Or open this day in the **Badsha hub** (`python3 hub/server.py`) and use Learn / Practice / Quiz tabs.
