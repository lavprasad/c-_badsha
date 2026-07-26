# Day 106 -- Alignment & packing

Today's goal: understand **Alignment & packing** in plain English, see a tiny code sample for each idea, then practice in `examples/`.

How to study this day:
1. Read each concept's **Plain English** section.
2. Skim the code sample -- predict what it does.
3. Run the matching file under `examples/`.
4. Only then try `questions.md`.

| # | Concept |
|--:|---------|
| 1 | alignof / alignas |
| 2 | Over-aligned types |
| 3 | Struct packing |
| 4 | Padding visualization |
| 5 | aligned_alloc idea |
| 6 | SIMD alignment |
| 7 | ABI implications |
| 8 | [[no_unique_address]] idea |
| 9 | Portable packing |
| 10 | Packed header struct |

---

## 1. alignof / alignas

### Plain English

Today's idea — **alignof / alignas** — fits inside the wider theme of Alignment & packing. Read it as a tool: what job does it do, what rules does it enforce, and what breaks if you ignore those rules?

### Tiny code

```cpp
// Explore: alignof / alignas
#include <iostream>
int main() {
  std::cout << "practice: alignof / alignas\n";
  return 0;
}
```

- **Remember:** State one invariant for `alignof / alignas` before you write code that uses it.
- **Common mistake:** Using `alignof / alignas` by copy-paste without knowing what it owns or when it is valid.

Practice: open `examples/01_*.cpp`, predict the output, change one line, re-predict.

## 2. Over-aligned types

### Plain English

Today's idea — **Over-aligned types** — fits inside the wider theme of Alignment & packing. Read it as a tool: what job does it do, what rules does it enforce, and what breaks if you ignore those rules?

### Tiny code

```cpp
// Explore: Over-aligned types
#include <iostream>
int main() {
  std::cout << "practice: Over-aligned types\n";
  return 0;
}
```

- **Remember:** State one invariant for `Over-aligned types` before you write code that uses it.
- **Common mistake:** Using `Over-aligned types` by copy-paste without knowing what it owns or when it is valid.

Practice: open `examples/02_*.cpp`, predict the output, change one line, re-predict.

## 3. Struct packing

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

Practice: open `examples/03_*.cpp`, predict the output, change one line, re-predict.

## 4. Padding visualization

### Plain English

Today's idea — **Padding visualization** — fits inside the wider theme of Alignment & packing. Read it as a tool: what job does it do, what rules does it enforce, and what breaks if you ignore those rules?

### Tiny code

```cpp
// Explore: Padding visualization
#include <iostream>
int main() {
  std::cout << "practice: Padding visualization\n";
  return 0;
}
```

- **Remember:** State one invariant for `Padding visualization` before you write code that uses it.
- **Common mistake:** Using `Padding visualization` by copy-paste without knowing what it owns or when it is valid.

Practice: open `examples/04_*.cpp`, predict the output, change one line, re-predict.

## 5. aligned_alloc idea

### Plain English

Today's idea — **aligned_alloc idea** — fits inside the wider theme of Alignment & packing. Read it as a tool: what job does it do, what rules does it enforce, and what breaks if you ignore those rules?

### Tiny code

```cpp
// Explore: aligned_alloc idea
#include <iostream>
int main() {
  std::cout << "practice: aligned_alloc idea\n";
  return 0;
}
```

- **Remember:** State one invariant for `aligned_alloc idea` before you write code that uses it.
- **Common mistake:** Using `aligned_alloc idea` by copy-paste without knowing what it owns or when it is valid.

Practice: open `examples/05_*.cpp`, predict the output, change one line, re-predict.

## 6. SIMD alignment

### Plain English

Today's idea — **SIMD alignment** — fits inside the wider theme of Alignment & packing. Read it as a tool: what job does it do, what rules does it enforce, and what breaks if you ignore those rules?

### Tiny code

```cpp
// Explore: SIMD alignment
#include <iostream>
int main() {
  std::cout << "practice: SIMD alignment\n";
  return 0;
}
```

- **Remember:** State one invariant for `SIMD alignment` before you write code that uses it.
- **Common mistake:** Using `SIMD alignment` by copy-paste without knowing what it owns or when it is valid.

Practice: open `examples/06_*.cpp`, predict the output, change one line, re-predict.

## 7. ABI implications

### Plain English

Today's idea — **ABI implications** — fits inside the wider theme of Alignment & packing. Read it as a tool: what job does it do, what rules does it enforce, and what breaks if you ignore those rules?

### Tiny code

```cpp
// Explore: ABI implications
#include <iostream>
int main() {
  std::cout << "practice: ABI implications\n";
  return 0;
}
```

- **Remember:** State one invariant for `ABI implications` before you write code that uses it.
- **Common mistake:** Using `ABI implications` by copy-paste without knowing what it owns or when it is valid.

Practice: open `examples/07_*.cpp`, predict the output, change one line, re-predict.

## 8. [[no_unique_address]] idea

### Plain English

Today's idea — **[[no_unique_address]] idea** — fits inside the wider theme of Alignment & packing. Read it as a tool: what job does it do, what rules does it enforce, and what breaks if you ignore those rules?

### Tiny code

```cpp
// Explore: [[no_unique_address]] idea
#include <iostream>
int main() {
  std::cout << "practice: [[no_unique_address]] idea\n";
  return 0;
}
```

- **Remember:** State one invariant for `[[no_unique_address]] idea` before you write code that uses it.
- **Common mistake:** Using `[[no_unique_address]] idea` by copy-paste without knowing what it owns or when it is valid.

Practice: open `examples/08_*.cpp`, predict the output, change one line, re-predict.

## 9. Portable packing

### Plain English

Today's idea — **Portable packing** — fits inside the wider theme of Alignment & packing. Read it as a tool: what job does it do, what rules does it enforce, and what breaks if you ignore those rules?

### Tiny code

```cpp
// Explore: Portable packing
#include <iostream>
int main() {
  std::cout << "practice: Portable packing\n";
  return 0;
}
```

- **Remember:** State one invariant for `Portable packing` before you write code that uses it.
- **Common mistake:** Using `Portable packing` by copy-paste without knowing what it owns or when it is valid.

Practice: open `examples/09_*.cpp`, predict the output, change one line, re-predict.

## 10. Packed header struct

### Plain English

Headers declare the interface; `.cpp` files define the bodies. Include guards stop a header from being pasted twice into one translation unit. The One Definition Rule says non-inline functions have exactly one definition in the whole program.

### Tiny code

```cpp
#pragma once
struct Widget;           // forward decl — enough for pointers/refs
void use(Widget*);
```

- **Remember:** Declarations in headers, definitions in `.cpp` (templates excepted).
- **Common mistake:** Defining a non-inline function in a header included by two `.cpp` files → multiple definition linker error.

Practice: open `examples/10_*.cpp`, predict the output, change one line, re-predict.

---

## What you should be able to do after Day 106

- Explain `Alignment & packing` to a peer without looking at notes.
- Compile and run all 10 examples with `-std=c++17 -Wall -Wextra` (use newer flags only when the day needs C++20+).
- Answer the 5 questions in `questions.md` before peeking at `answers.md`.
- Write one tiny extra program that combines at least 3 of today's concepts.

Or open this day in the **Badsha hub** (`python3 hub/server.py`) and use Learn / Practice / Quiz tabs.
