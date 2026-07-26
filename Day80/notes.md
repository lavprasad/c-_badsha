# Day 80 -- Linking & libraries

Today's goal: understand **Linking & libraries** in plain English, see a tiny code sample for each idea, then practice in `examples/`.

How to study this day:
1. Read each concept's **Plain English** section.
2. Skim the code sample -- predict what it does.
3. Run the matching file under `examples/`.
4. Only then try `questions.md`.

| # | Concept |
|--:|---------|
| 1 | Static vs shared libs |
| 2 | Symbol visibility idea |
| 3 | undefined reference triage |
| 4 | multiple definition triage |
| 5 | Link order |
| 6 | pkg-config idea |
| 7 | Header-only tradeoffs |
| 8 | ABI breaks |
| 9 | Versioning libs |
| 10 | Building a static lib |

---

## 1. Static vs shared libs

### Plain English

Today's idea — **Static vs shared libs** — fits inside the wider theme of Linking & libraries. Read it as a tool: what job does it do, what rules does it enforce, and what breaks if you ignore those rules?

### Tiny code

```cpp
// Explore: Static vs shared libs
#include <iostream>
int main() {
  std::cout << "practice: Static vs shared libs\n";
  return 0;
}
```

- **Remember:** State one invariant for `Static vs shared libs` before you write code that uses it.
- **Common mistake:** Using `Static vs shared libs` by copy-paste without knowing what it owns or when it is valid.

Practice: open `examples/01_*.cpp`, predict the output, change one line, re-predict.

## 2. Symbol visibility idea

### Plain English

Today's idea — **Symbol visibility idea** — fits inside the wider theme of Linking & libraries. Read it as a tool: what job does it do, what rules does it enforce, and what breaks if you ignore those rules?

### Tiny code

```cpp
// Explore: Symbol visibility idea
#include <iostream>
int main() {
  std::cout << "practice: Symbol visibility idea\n";
  return 0;
}
```

- **Remember:** State one invariant for `Symbol visibility idea` before you write code that uses it.
- **Common mistake:** Using `Symbol visibility idea` by copy-paste without knowing what it owns or when it is valid.

Practice: open `examples/02_*.cpp`, predict the output, change one line, re-predict.

## 3. undefined reference triage

### Plain English

Today's idea — **undefined reference triage** — fits inside the wider theme of Linking & libraries. Read it as a tool: what job does it do, what rules does it enforce, and what breaks if you ignore those rules?

### Tiny code

```cpp
// Explore: undefined reference triage
#include <iostream>
int main() {
  std::cout << "practice: undefined reference triage\n";
  return 0;
}
```

- **Remember:** State one invariant for `undefined reference triage` before you write code that uses it.
- **Common mistake:** Using `undefined reference triage` by copy-paste without knowing what it owns or when it is valid.

Practice: open `examples/03_*.cpp`, predict the output, change one line, re-predict.

## 4. multiple definition triage

### Plain English

Today's idea — **multiple definition triage** — fits inside the wider theme of Linking & libraries. Read it as a tool: what job does it do, what rules does it enforce, and what breaks if you ignore those rules?

### Tiny code

```cpp
// Explore: multiple definition triage
#include <iostream>
int main() {
  std::cout << "practice: multiple definition triage\n";
  return 0;
}
```

- **Remember:** State one invariant for `multiple definition triage` before you write code that uses it.
- **Common mistake:** Using `multiple definition triage` by copy-paste without knowing what it owns or when it is valid.

Practice: open `examples/04_*.cpp`, predict the output, change one line, re-predict.

## 5. Link order

### Plain English

Today's idea — **Link order** — fits inside the wider theme of Linking & libraries. Read it as a tool: what job does it do, what rules does it enforce, and what breaks if you ignore those rules?

### Tiny code

```cpp
// Explore: Link order
#include <iostream>
int main() {
  std::cout << "practice: Link order\n";
  return 0;
}
```

- **Remember:** State one invariant for `Link order` before you write code that uses it.
- **Common mistake:** Using `Link order` by copy-paste without knowing what it owns or when it is valid.

Practice: open `examples/05_*.cpp`, predict the output, change one line, re-predict.

## 6. pkg-config idea

### Plain English

Today's idea — **pkg-config idea** — fits inside the wider theme of Linking & libraries. Read it as a tool: what job does it do, what rules does it enforce, and what breaks if you ignore those rules?

### Tiny code

```cpp
// Explore: pkg-config idea
#include <iostream>
int main() {
  std::cout << "practice: pkg-config idea\n";
  return 0;
}
```

- **Remember:** State one invariant for `pkg-config idea` before you write code that uses it.
- **Common mistake:** Using `pkg-config idea` by copy-paste without knowing what it owns or when it is valid.

Practice: open `examples/06_*.cpp`, predict the output, change one line, re-predict.

## 7. Header-only tradeoffs

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

Practice: open `examples/07_*.cpp`, predict the output, change one line, re-predict.

## 8. ABI breaks

### Plain English

Today's idea — **ABI breaks** — fits inside the wider theme of Linking & libraries. Read it as a tool: what job does it do, what rules does it enforce, and what breaks if you ignore those rules?

### Tiny code

```cpp
// Explore: ABI breaks
#include <iostream>
int main() {
  std::cout << "practice: ABI breaks\n";
  return 0;
}
```

- **Remember:** State one invariant for `ABI breaks` before you write code that uses it.
- **Common mistake:** Using `ABI breaks` by copy-paste without knowing what it owns or when it is valid.

Practice: open `examples/08_*.cpp`, predict the output, change one line, re-predict.

## 9. Versioning libs

### Plain English

Today's idea — **Versioning libs** — fits inside the wider theme of Linking & libraries. Read it as a tool: what job does it do, what rules does it enforce, and what breaks if you ignore those rules?

### Tiny code

```cpp
// Explore: Versioning libs
#include <iostream>
int main() {
  std::cout << "practice: Versioning libs\n";
  return 0;
}
```

- **Remember:** State one invariant for `Versioning libs` before you write code that uses it.
- **Common mistake:** Using `Versioning libs` by copy-paste without knowing what it owns or when it is valid.

Practice: open `examples/09_*.cpp`, predict the output, change one line, re-predict.

## 10. Building a static lib

### Plain English

Today's idea — **Building a static lib** — fits inside the wider theme of Linking & libraries. Read it as a tool: what job does it do, what rules does it enforce, and what breaks if you ignore those rules?

### Tiny code

```cpp
// Explore: Building a static lib
#include <iostream>
int main() {
  std::cout << "practice: Building a static lib\n";
  return 0;
}
```

- **Remember:** State one invariant for `Building a static lib` before you write code that uses it.
- **Common mistake:** Using `Building a static lib` by copy-paste without knowing what it owns or when it is valid.

Practice: open `examples/10_*.cpp`, predict the output, change one line, re-predict.

---

## What you should be able to do after Day 80

- Explain `Linking & libraries` to a peer without looking at notes.
- Compile and run all 10 examples with `-std=c++17 -Wall -Wextra` (use newer flags only when the day needs C++20+).
- Answer the 5 questions in `questions.md` before peeking at `answers.md`.
- Write one tiny extra program that combines at least 3 of today's concepts.

Or open this day in the **Badsha hub** (`python3 hub/server.py`) and use Learn / Practice / Quiz tabs.
