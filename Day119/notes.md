# Day 119 -- Modules intro

Today's goal: understand **Modules intro** in plain English, see a tiny code sample for each idea, then practice in `examples/`.

How to study this day:
1. Read each concept's **Plain English** section.
2. Skim the code sample -- predict what it does.
3. Run the matching file under `examples/`.
4. Only then try `questions.md`.

| # | Concept |
|--:|---------|
| 1 | Why modules |
| 2 | export module |
| 3 | import |
| 4 | Module partitions idea |
| 5 | Header units idea |
| 6 | Build system impact |
| 7 | Migration path |
| 8 | Macros and modules |
| 9 | Toolchain reality |
| 10 | Mental model example |

---

## 1. Why modules

### Plain English

Today's idea — **Why modules** — fits inside the wider theme of Modules intro. Read it as a tool: what job does it do, what rules does it enforce, and what breaks if you ignore those rules?

### Tiny code

```cpp
// Explore: Why modules
#include <iostream>
int main() {
  std::cout << "practice: Why modules\n";
  return 0;
}
```

- **Remember:** State one invariant for `Why modules` before you write code that uses it.
- **Common mistake:** Using `Why modules` by copy-paste without knowing what it owns or when it is valid.

Practice: open `examples/01_*.cpp`, predict the output, change one line, re-predict.

## 2. export module

### Plain English

Today's idea — **export module** — fits inside the wider theme of Modules intro. Read it as a tool: what job does it do, what rules does it enforce, and what breaks if you ignore those rules?

### Tiny code

```cpp
// Explore: export module
#include <iostream>
int main() {
  std::cout << "practice: export module\n";
  return 0;
}
```

- **Remember:** State one invariant for `export module` before you write code that uses it.
- **Common mistake:** Using `export module` by copy-paste without knowing what it owns or when it is valid.

Practice: open `examples/02_*.cpp`, predict the output, change one line, re-predict.

## 3. import

### Plain English

Today's idea — **import** — fits inside the wider theme of Modules intro. Read it as a tool: what job does it do, what rules does it enforce, and what breaks if you ignore those rules?

### Tiny code

```cpp
// Explore: import
#include <iostream>
int main() {
  std::cout << "practice: import\n";
  return 0;
}
```

- **Remember:** State one invariant for `import` before you write code that uses it.
- **Common mistake:** Using `import` by copy-paste without knowing what it owns or when it is valid.

Practice: open `examples/03_*.cpp`, predict the output, change one line, re-predict.

## 4. Module partitions idea

### Plain English

Today's idea — **Module partitions idea** — fits inside the wider theme of Modules intro. Read it as a tool: what job does it do, what rules does it enforce, and what breaks if you ignore those rules?

### Tiny code

```cpp
// Explore: Module partitions idea
#include <iostream>
int main() {
  std::cout << "practice: Module partitions idea\n";
  return 0;
}
```

- **Remember:** State one invariant for `Module partitions idea` before you write code that uses it.
- **Common mistake:** Using `Module partitions idea` by copy-paste without knowing what it owns or when it is valid.

Practice: open `examples/04_*.cpp`, predict the output, change one line, re-predict.

## 5. Header units idea

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

Practice: open `examples/05_*.cpp`, predict the output, change one line, re-predict.

## 6. Build system impact

### Plain English

Today's idea — **Build system impact** — fits inside the wider theme of Modules intro. Read it as a tool: what job does it do, what rules does it enforce, and what breaks if you ignore those rules?

### Tiny code

```cpp
// Explore: Build system impact
#include <iostream>
int main() {
  std::cout << "practice: Build system impact\n";
  return 0;
}
```

- **Remember:** State one invariant for `Build system impact` before you write code that uses it.
- **Common mistake:** Using `Build system impact` by copy-paste without knowing what it owns or when it is valid.

Practice: open `examples/06_*.cpp`, predict the output, change one line, re-predict.

## 7. Migration path

### Plain English

`std::filesystem` gives portable paths and directory walks. Prefer `path` objects over hand-rolled string concatenation for joining folders.

### Tiny code

```cpp
#include <filesystem>
namespace fs = std::filesystem;
for (auto& e : fs::directory_iterator(".")) {
  std::cout << e.path() << '\n';
}
```

- **Remember:** Check `exists` / handle errors — disks fail.
- **Common mistake:** Assuming `/` path separators on every OS without using `path`.

Practice: open `examples/07_*.cpp`, predict the output, change one line, re-predict.

## 8. Macros and modules

### Plain English

Today's idea — **Macros and modules** — fits inside the wider theme of Modules intro. Read it as a tool: what job does it do, what rules does it enforce, and what breaks if you ignore those rules?

### Tiny code

```cpp
// Explore: Macros and modules
#include <iostream>
int main() {
  std::cout << "practice: Macros and modules\n";
  return 0;
}
```

- **Remember:** State one invariant for `Macros and modules` before you write code that uses it.
- **Common mistake:** Using `Macros and modules` by copy-paste without knowing what it owns or when it is valid.

Practice: open `examples/08_*.cpp`, predict the output, change one line, re-predict.

## 9. Toolchain reality

### Plain English

Today's idea — **Toolchain reality** — fits inside the wider theme of Modules intro. Read it as a tool: what job does it do, what rules does it enforce, and what breaks if you ignore those rules?

### Tiny code

```cpp
// Explore: Toolchain reality
#include <iostream>
int main() {
  std::cout << "practice: Toolchain reality\n";
  return 0;
}
```

- **Remember:** State one invariant for `Toolchain reality` before you write code that uses it.
- **Common mistake:** Using `Toolchain reality` by copy-paste without knowing what it owns or when it is valid.

Practice: open `examples/09_*.cpp`, predict the output, change one line, re-predict.

## 10. Mental model example

### Plain English

Today's idea — **Mental model example** — fits inside the wider theme of Modules intro. Read it as a tool: what job does it do, what rules does it enforce, and what breaks if you ignore those rules?

### Tiny code

```cpp
// Explore: Mental model example
#include <iostream>
int main() {
  std::cout << "practice: Mental model example\n";
  return 0;
}
```

- **Remember:** State one invariant for `Mental model example` before you write code that uses it.
- **Common mistake:** Using `Mental model example` by copy-paste without knowing what it owns or when it is valid.

Practice: open `examples/10_*.cpp`, predict the output, change one line, re-predict.

---

## What you should be able to do after Day 119

- Explain `Modules intro` to a peer without looking at notes.
- Compile and run all 10 examples with `-std=c++17 -Wall -Wextra` (use newer flags only when the day needs C++20+).
- Answer the 5 questions in `questions.md` before peeking at `answers.md`.
- Write one tiny extra program that combines at least 3 of today's concepts.

Or open this day in the **Badsha hub** (`python3 hub/server.py`) and use Learn / Practice / Quiz tabs.
