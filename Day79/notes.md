# Day 79 -- Build systems lite

Today's goal: understand **Build systems lite** in plain English, see a tiny code sample for each idea, then practice in `examples/`.

How to study this day:
1. Read each concept's **Plain English** section.
2. Skim the code sample -- predict what it does.
3. Run the matching file under `examples/`.
4. Only then try `questions.md`.

| # | Concept |
|--:|---------|
| 1 | Why build systems |
| 2 | Make basics |
| 3 | CMake mental model |
| 4 | targets and deps |
| 5 | Debug vs Release |
| 6 | Out-of-source builds |
| 7 | Compile flags |
| 8 | Sanitizer builds |
| 9 | Reproducible builds idea |
| 10 | A tiny CMakeLists |

---

## 1. Why build systems

### Plain English

Today's idea — **Why build systems** — fits inside the wider theme of Build systems lite. Read it as a tool: what job does it do, what rules does it enforce, and what breaks if you ignore those rules?

### Tiny code

```cpp
// Explore: Why build systems
#include <iostream>
int main() {
  std::cout << "practice: Why build systems\n";
  return 0;
}
```

- **Remember:** State one invariant for `Why build systems` before you write code that uses it.
- **Common mistake:** Using `Why build systems` by copy-paste without knowing what it owns or when it is valid.

Practice: open `examples/01_*.cpp`, predict the output, change one line, re-predict.

## 2. Make basics

### Plain English

Today's idea — **Make basics** — fits inside the wider theme of Build systems lite. Read it as a tool: what job does it do, what rules does it enforce, and what breaks if you ignore those rules?

### Tiny code

```cpp
// Explore: Make basics
#include <iostream>
int main() {
  std::cout << "practice: Make basics\n";
  return 0;
}
```

- **Remember:** State one invariant for `Make basics` before you write code that uses it.
- **Common mistake:** Using `Make basics` by copy-paste without knowing what it owns or when it is valid.

Practice: open `examples/02_*.cpp`, predict the output, change one line, re-predict.

## 3. CMake mental model

### Plain English

Projects glue skills: clear requirements, small modules, tests, and honest docs. Start with a tiny vertical slice that runs end-to-end, then thicken features.

### Tiny code

```cpp
int main(int argc, char** argv) {
  if (argc < 2) {
    std::cerr << "usage: tool <file>\n";
    return 1;
  }
  // ...
}
```

- **Remember:** Ship a working subset before polishing edge cases.
- **Common mistake:** Building scaffolding for weeks with nothing runnable.

Practice: open `examples/03_*.cpp`, predict the output, change one line, re-predict.

## 4. targets and deps

### Plain English

Today's idea — **targets and deps** — fits inside the wider theme of Build systems lite. Read it as a tool: what job does it do, what rules does it enforce, and what breaks if you ignore those rules?

### Tiny code

```cpp
// Explore: targets and deps
#include <iostream>
int main() {
  std::cout << "practice: targets and deps\n";
  return 0;
}
```

- **Remember:** State one invariant for `targets and deps` before you write code that uses it.
- **Common mistake:** Using `targets and deps` by copy-paste without knowing what it owns or when it is valid.

Practice: open `examples/04_*.cpp`, predict the output, change one line, re-predict.

## 5. Debug vs Release

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

Practice: open `examples/05_*.cpp`, predict the output, change one line, re-predict.

## 6. Out-of-source builds

### Plain English

Today's idea — **Out-of-source builds** — fits inside the wider theme of Build systems lite. Read it as a tool: what job does it do, what rules does it enforce, and what breaks if you ignore those rules?

### Tiny code

```cpp
// Explore: Out-of-source builds
#include <iostream>
int main() {
  std::cout << "practice: Out-of-source builds\n";
  return 0;
}
```

- **Remember:** State one invariant for `Out-of-source builds` before you write code that uses it.
- **Common mistake:** Using `Out-of-source builds` by copy-paste without knowing what it owns or when it is valid.

Practice: open `examples/06_*.cpp`, predict the output, change one line, re-predict.

## 7. Compile flags

### Plain English

Today's idea — **Compile flags** — fits inside the wider theme of Build systems lite. Read it as a tool: what job does it do, what rules does it enforce, and what breaks if you ignore those rules?

### Tiny code

```cpp
// Explore: Compile flags
#include <iostream>
int main() {
  std::cout << "practice: Compile flags\n";
  return 0;
}
```

- **Remember:** State one invariant for `Compile flags` before you write code that uses it.
- **Common mistake:** Using `Compile flags` by copy-paste without knowing what it owns or when it is valid.

Practice: open `examples/07_*.cpp`, predict the output, change one line, re-predict.

## 8. Sanitizer builds

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

Practice: open `examples/08_*.cpp`, predict the output, change one line, re-predict.

## 9. Reproducible builds idea

### Plain English

Today's idea — **Reproducible builds idea** — fits inside the wider theme of Build systems lite. Read it as a tool: what job does it do, what rules does it enforce, and what breaks if you ignore those rules?

### Tiny code

```cpp
// Explore: Reproducible builds idea
#include <iostream>
int main() {
  std::cout << "practice: Reproducible builds idea\n";
  return 0;
}
```

- **Remember:** State one invariant for `Reproducible builds idea` before you write code that uses it.
- **Common mistake:** Using `Reproducible builds idea` by copy-paste without knowing what it owns or when it is valid.

Practice: open `examples/09_*.cpp`, predict the output, change one line, re-predict.

## 10. A tiny CMakeLists

### Plain English

Projects glue skills: clear requirements, small modules, tests, and honest docs. Start with a tiny vertical slice that runs end-to-end, then thicken features.

### Tiny code

```cpp
int main(int argc, char** argv) {
  if (argc < 2) {
    std::cerr << "usage: tool <file>\n";
    return 1;
  }
  // ...
}
```

- **Remember:** Ship a working subset before polishing edge cases.
- **Common mistake:** Building scaffolding for weeks with nothing runnable.

Practice: open `examples/10_*.cpp`, predict the output, change one line, re-predict.

---

## What you should be able to do after Day 79

- Explain `Build systems lite` to a peer without looking at notes.
- Compile and run all 10 examples with `-std=c++17 -Wall -Wextra` (use newer flags only when the day needs C++20+).
- Answer the 5 questions in `questions.md` before peeking at `answers.md`.
- Write one tiny extra program that combines at least 3 of today's concepts.

Or open this day in the **Badsha hub** (`python3 hub/server.py`) and use Learn / Practice / Quiz tabs.
