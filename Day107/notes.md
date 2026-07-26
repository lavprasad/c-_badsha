# Day 107 -- Integer pitfalls advanced

Today's goal: understand **Integer pitfalls advanced** in plain English, see a tiny code sample for each idea, then practice in `examples/`.

How to study this day:
1. Read each concept's **Plain English** section.
2. Skim the code sample -- predict what it does.
3. Run the matching file under `examples/`.
4. Only then try `questions.md`.

| # | Concept |
|--:|---------|
| 1 | Promotion rules |
| 2 | Usual arithmetic conversions |
| 3 | Signed/unsigned mix |
| 4 | Narrowing |
| 5 | Checked arithmetic idea |
| 6 | size_t in loops |
| 7 | ptrdiff_t |
| 8 | Integer division surprises |
| 9 | Bit-width choices |
| 10 | Safe abs for INT_MIN |

---

## 1. Promotion rules

### Plain English

Today's idea — **Promotion rules** — fits inside the wider theme of Integer pitfalls advanced. Read it as a tool: what job does it do, what rules does it enforce, and what breaks if you ignore those rules?

### Tiny code

```cpp
// Explore: Promotion rules
#include <iostream>
int main() {
  std::cout << "practice: Promotion rules\n";
  return 0;
}
```

- **Remember:** State one invariant for `Promotion rules` before you write code that uses it.
- **Common mistake:** Using `Promotion rules` by copy-paste without knowing what it owns or when it is valid.

Practice: open `examples/01_*.cpp`, predict the output, change one line, re-predict.

## 2. Usual arithmetic conversions

### Plain English

Today's idea — **Usual arithmetic conversions** — fits inside the wider theme of Integer pitfalls advanced. Read it as a tool: what job does it do, what rules does it enforce, and what breaks if you ignore those rules?

### Tiny code

```cpp
// Explore: Usual arithmetic conversions
#include <iostream>
int main() {
  std::cout << "practice: Usual arithmetic conversions\n";
  return 0;
}
```

- **Remember:** State one invariant for `Usual arithmetic conversions` before you write code that uses it.
- **Common mistake:** Using `Usual arithmetic conversions` by copy-paste without knowing what it owns or when it is valid.

Practice: open `examples/02_*.cpp`, predict the output, change one line, re-predict.

## 3. Signed/unsigned mix

### Plain English

Today's idea — **Signed/unsigned mix** — fits inside the wider theme of Integer pitfalls advanced. Read it as a tool: what job does it do, what rules does it enforce, and what breaks if you ignore those rules?

### Tiny code

```cpp
// Explore: Signed/unsigned mix
#include <iostream>
int main() {
  std::cout << "practice: Signed/unsigned mix\n";
  return 0;
}
```

- **Remember:** State one invariant for `Signed/unsigned mix` before you write code that uses it.
- **Common mistake:** Using `Signed/unsigned mix` by copy-paste without knowing what it owns or when it is valid.

Practice: open `examples/03_*.cpp`, predict the output, change one line, re-predict.

## 4. Narrowing

### Plain English

Today's idea — **Narrowing** — fits inside the wider theme of Integer pitfalls advanced. Read it as a tool: what job does it do, what rules does it enforce, and what breaks if you ignore those rules?

### Tiny code

```cpp
// Explore: Narrowing
#include <iostream>
int main() {
  std::cout << "practice: Narrowing\n";
  return 0;
}
```

- **Remember:** State one invariant for `Narrowing` before you write code that uses it.
- **Common mistake:** Using `Narrowing` by copy-paste without knowing what it owns or when it is valid.

Practice: open `examples/04_*.cpp`, predict the output, change one line, re-predict.

## 5. Checked arithmetic idea

### Plain English

Today's idea — **Checked arithmetic idea** — fits inside the wider theme of Integer pitfalls advanced. Read it as a tool: what job does it do, what rules does it enforce, and what breaks if you ignore those rules?

### Tiny code

```cpp
// Explore: Checked arithmetic idea
#include <iostream>
int main() {
  std::cout << "practice: Checked arithmetic idea\n";
  return 0;
}
```

- **Remember:** State one invariant for `Checked arithmetic idea` before you write code that uses it.
- **Common mistake:** Using `Checked arithmetic idea` by copy-paste without knowing what it owns or when it is valid.

Practice: open `examples/05_*.cpp`, predict the output, change one line, re-predict.

## 6. size_t in loops

### Plain English

Today's idea — **size_t in loops** — fits inside the wider theme of Integer pitfalls advanced. Read it as a tool: what job does it do, what rules does it enforce, and what breaks if you ignore those rules?

### Tiny code

```cpp
// Explore: size_t in loops
#include <iostream>
int main() {
  std::cout << "practice: size_t in loops\n";
  return 0;
}
```

- **Remember:** State one invariant for `size_t in loops` before you write code that uses it.
- **Common mistake:** Using `size_t in loops` by copy-paste without knowing what it owns or when it is valid.

Practice: open `examples/06_*.cpp`, predict the output, change one line, re-predict.

## 7. ptrdiff_t

### Plain English

Today's idea — **ptrdiff_t** — fits inside the wider theme of Integer pitfalls advanced. Read it as a tool: what job does it do, what rules does it enforce, and what breaks if you ignore those rules?

### Tiny code

```cpp
// Explore: ptrdiff_t
#include <iostream>
int main() {
  std::cout << "practice: ptrdiff_t\n";
  return 0;
}
```

- **Remember:** State one invariant for `ptrdiff_t` before you write code that uses it.
- **Common mistake:** Using `ptrdiff_t` by copy-paste without knowing what it owns or when it is valid.

Practice: open `examples/07_*.cpp`, predict the output, change one line, re-predict.

## 8. Integer division surprises

### Plain English

Today's idea — **Integer division surprises** — fits inside the wider theme of Integer pitfalls advanced. Read it as a tool: what job does it do, what rules does it enforce, and what breaks if you ignore those rules?

### Tiny code

```cpp
// Explore: Integer division surprises
#include <iostream>
int main() {
  std::cout << "practice: Integer division surprises\n";
  return 0;
}
```

- **Remember:** State one invariant for `Integer division surprises` before you write code that uses it.
- **Common mistake:** Using `Integer division surprises` by copy-paste without knowing what it owns or when it is valid.

Practice: open `examples/08_*.cpp`, predict the output, change one line, re-predict.

## 9. Bit-width choices

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

Practice: open `examples/09_*.cpp`, predict the output, change one line, re-predict.

## 10. Safe abs for INT_MIN

### Plain English

Today's idea — **Safe abs for INT_MIN** — fits inside the wider theme of Integer pitfalls advanced. Read it as a tool: what job does it do, what rules does it enforce, and what breaks if you ignore those rules?

### Tiny code

```cpp
// Explore: Safe abs for INT_MIN
#include <iostream>
int main() {
  std::cout << "practice: Safe abs for INT_MIN\n";
  return 0;
}
```

- **Remember:** State one invariant for `Safe abs for INT_MIN` before you write code that uses it.
- **Common mistake:** Using `Safe abs for INT_MIN` by copy-paste without knowing what it owns or when it is valid.

Practice: open `examples/10_*.cpp`, predict the output, change one line, re-predict.

---

## What you should be able to do after Day 107

- Explain `Integer pitfalls advanced` to a peer without looking at notes.
- Compile and run all 10 examples with `-std=c++17 -Wall -Wextra` (use newer flags only when the day needs C++20+).
- Answer the 5 questions in `questions.md` before peeking at `answers.md`.
- Write one tiny extra program that combines at least 3 of today's concepts.

Or open this day in the **Badsha hub** (`python3 hub/server.py`) and use Learn / Practice / Quiz tabs.
