# Day 77 -- Documentation & comments

Today's goal: understand **Documentation & comments** in plain English, see a tiny code sample for each idea, then practice in `examples/`.

How to study this day:
1. Read each concept's **Plain English** section.
2. Skim the code sample -- predict what it does.
3. Run the matching file under `examples/`.
4. Only then try `questions.md`.

| # | Concept |
|--:|---------|
| 1 | When to comment |
| 2 | What not to comment |
| 3 | Header contract comments |
| 4 | TODO/FIXME discipline |
| 5 | Examples in docs |
| 6 | Assumptions |
| 7 | Complexity notes |
| 8 | ponytail ceilings |
| 9 | README sections |
| 10 | Documenting a module |

---

## 1. When to comment

### Plain English

Today's idea — **When to comment** — fits inside the wider theme of Documentation & comments. Read it as a tool: what job does it do, what rules does it enforce, and what breaks if you ignore those rules?

### Tiny code

```cpp
// Explore: When to comment
#include <iostream>
int main() {
  std::cout << "practice: When to comment\n";
  return 0;
}
```

- **Remember:** State one invariant for `When to comment` before you write code that uses it.
- **Common mistake:** Using `When to comment` by copy-paste without knowing what it owns or when it is valid.

Practice: open `examples/01_*.cpp`, predict the output, change one line, re-predict.

## 2. What not to comment

### Plain English

Today's idea — **What not to comment** — fits inside the wider theme of Documentation & comments. Read it as a tool: what job does it do, what rules does it enforce, and what breaks if you ignore those rules?

### Tiny code

```cpp
// Explore: What not to comment
#include <iostream>
int main() {
  std::cout << "practice: What not to comment\n";
  return 0;
}
```

- **Remember:** State one invariant for `What not to comment` before you write code that uses it.
- **Common mistake:** Using `What not to comment` by copy-paste without knowing what it owns or when it is valid.

Practice: open `examples/02_*.cpp`, predict the output, change one line, re-predict.

## 3. Header contract comments

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

Practice: open `examples/03_*.cpp`, predict the output, change one line, re-predict.

## 4. TODO/FIXME discipline

### Plain English

Today's idea — **TODO/FIXME discipline** — fits inside the wider theme of Documentation & comments. Read it as a tool: what job does it do, what rules does it enforce, and what breaks if you ignore those rules?

### Tiny code

```cpp
// Explore: TODO/FIXME discipline
#include <iostream>
int main() {
  std::cout << "practice: TODO/FIXME discipline\n";
  return 0;
}
```

- **Remember:** State one invariant for `TODO/FIXME discipline` before you write code that uses it.
- **Common mistake:** Using `TODO/FIXME discipline` by copy-paste without knowing what it owns or when it is valid.

Practice: open `examples/04_*.cpp`, predict the output, change one line, re-predict.

## 5. Examples in docs

### Plain English

Today's idea — **Examples in docs** — fits inside the wider theme of Documentation & comments. Read it as a tool: what job does it do, what rules does it enforce, and what breaks if you ignore those rules?

### Tiny code

```cpp
// Explore: Examples in docs
#include <iostream>
int main() {
  std::cout << "practice: Examples in docs\n";
  return 0;
}
```

- **Remember:** State one invariant for `Examples in docs` before you write code that uses it.
- **Common mistake:** Using `Examples in docs` by copy-paste without knowing what it owns or when it is valid.

Practice: open `examples/05_*.cpp`, predict the output, change one line, re-predict.

## 6. Assumptions

### Plain English

Today's idea — **Assumptions** — fits inside the wider theme of Documentation & comments. Read it as a tool: what job does it do, what rules does it enforce, and what breaks if you ignore those rules?

### Tiny code

```cpp
// Explore: Assumptions
#include <iostream>
int main() {
  std::cout << "practice: Assumptions\n";
  return 0;
}
```

- **Remember:** State one invariant for `Assumptions` before you write code that uses it.
- **Common mistake:** Using `Assumptions` by copy-paste without knowing what it owns or when it is valid.

Practice: open `examples/06_*.cpp`, predict the output, change one line, re-predict.

## 7. Complexity notes

### Plain English

Big-O describes how cost grows with input size. Prefer a clearer O(n log n) algorithm over a clever O(n²) one once n gets large. Measure when constants matter.

### Tiny code

```cpp
// Sorting n items: typically O(n log n)
std::sort(v.begin(), v.end());
```

- **Remember:** Asymptotics first; micro-optimisations later with a profiler.
- **Common mistake:** Optimising a cold path while leaving an O(n²) hot loop alone.

Practice: open `examples/07_*.cpp`, predict the output, change one line, re-predict.

## 8. ponytail ceilings

### Plain English

Today's idea — **ponytail ceilings** — fits inside the wider theme of Documentation & comments. Read it as a tool: what job does it do, what rules does it enforce, and what breaks if you ignore those rules?

### Tiny code

```cpp
// Explore: ponytail ceilings
#include <iostream>
int main() {
  std::cout << "practice: ponytail ceilings\n";
  return 0;
}
```

- **Remember:** State one invariant for `ponytail ceilings` before you write code that uses it.
- **Common mistake:** Using `ponytail ceilings` by copy-paste without knowing what it owns or when it is valid.

Practice: open `examples/08_*.cpp`, predict the output, change one line, re-predict.

## 9. README sections

### Plain English

Today's idea — **README sections** — fits inside the wider theme of Documentation & comments. Read it as a tool: what job does it do, what rules does it enforce, and what breaks if you ignore those rules?

### Tiny code

```cpp
// Explore: README sections
#include <iostream>
int main() {
  std::cout << "practice: README sections\n";
  return 0;
}
```

- **Remember:** State one invariant for `README sections` before you write code that uses it.
- **Common mistake:** Using `README sections` by copy-paste without knowing what it owns or when it is valid.

Practice: open `examples/09_*.cpp`, predict the output, change one line, re-predict.

## 10. Documenting a module

### Plain English

Today's idea — **Documenting a module** — fits inside the wider theme of Documentation & comments. Read it as a tool: what job does it do, what rules does it enforce, and what breaks if you ignore those rules?

### Tiny code

```cpp
// Explore: Documenting a module
#include <iostream>
int main() {
  std::cout << "practice: Documenting a module\n";
  return 0;
}
```

- **Remember:** State one invariant for `Documenting a module` before you write code that uses it.
- **Common mistake:** Using `Documenting a module` by copy-paste without knowing what it owns or when it is valid.

Practice: open `examples/10_*.cpp`, predict the output, change one line, re-predict.

---

## What you should be able to do after Day 77

- Explain `Documentation & comments` to a peer without looking at notes.
- Compile and run all 10 examples with `-std=c++17 -Wall -Wextra` (use newer flags only when the day needs C++20+).
- Answer the 5 questions in `questions.md` before peeking at `answers.md`.
- Write one tiny extra program that combines at least 3 of today's concepts.

Or open this day in the **Badsha hub** (`python3 hub/server.py`) and use Learn / Practice / Quiz tabs.
