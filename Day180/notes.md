# Day 180 -- Packaging & distributing C++

Today's goal: understand **Packaging & distributing C++** in plain English, see a tiny code sample for each idea, then practice in `examples/`.

How to study this day:
1. Read each concept's **Plain English** section.
2. Skim the code sample -- predict what it does.
3. Run the matching file under `examples/`.
4. Only then try `questions.md`.

| # | Concept |
|--:|---------|
| 1 | Headers + libs |
| 2 | CMake package config idea |
| 3 | vcpkg/conan mindset |
| 4 | Semantic versioning |
| 5 | Platform matrices |
| 6 | Symbol visibility |
| 7 | License headers |
| 8 | Docs packaging |
| 9 | Minimal install |
| 10 | Package a tiny lib |

---

## 1. Headers + libs

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

Practice: open `examples/01_*.cpp`, predict the output, change one line, re-predict.

## 2. CMake package config idea

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

Practice: open `examples/02_*.cpp`, predict the output, change one line, re-predict.

## 3. vcpkg/conan mindset

### Plain English

`map` keeps keys sorted (tree); `unordered_map` hashes for average O(1) lookup. Pick sorted when you need order; pick hash when you need speed and have a good hash.

### Tiny code

```cpp
std::unordered_map<std::string, int> freq;
++freq["hi"];
for (auto& [k, v] : freq) std::cout << k << ':' << v << '\n';
```

- **Remember:** `operator[]` default-inserts a value if the key is missing.
- **Common mistake:** Using `[]` when you only meant to look up — prefer `find` / `at` if missing should be an error.

Practice: open `examples/03_*.cpp`, predict the output, change one line, re-predict.

## 4. Semantic versioning

### Plain English

Today's idea — **Semantic versioning** — fits inside the wider theme of Packaging & distributing C++. Read it as a tool: what job does it do, what rules does it enforce, and what breaks if you ignore those rules?

### Tiny code

```cpp
// Explore: Semantic versioning
#include <iostream>
int main() {
  std::cout << "practice: Semantic versioning\n";
  return 0;
}
```

- **Remember:** State one invariant for `Semantic versioning` before you write code that uses it.
- **Common mistake:** Using `Semantic versioning` by copy-paste without knowing what it owns or when it is valid.

Practice: open `examples/04_*.cpp`, predict the output, change one line, re-predict.

## 5. Platform matrices

### Plain English

Today's idea — **Platform matrices** — fits inside the wider theme of Packaging & distributing C++. Read it as a tool: what job does it do, what rules does it enforce, and what breaks if you ignore those rules?

### Tiny code

```cpp
// Explore: Platform matrices
#include <iostream>
int main() {
  std::cout << "practice: Platform matrices\n";
  return 0;
}
```

- **Remember:** State one invariant for `Platform matrices` before you write code that uses it.
- **Common mistake:** Using `Platform matrices` by copy-paste without knowing what it owns or when it is valid.

Practice: open `examples/05_*.cpp`, predict the output, change one line, re-predict.

## 6. Symbol visibility

### Plain English

Today's idea — **Symbol visibility** — fits inside the wider theme of Packaging & distributing C++. Read it as a tool: what job does it do, what rules does it enforce, and what breaks if you ignore those rules?

### Tiny code

```cpp
// Explore: Symbol visibility
#include <iostream>
int main() {
  std::cout << "practice: Symbol visibility\n";
  return 0;
}
```

- **Remember:** State one invariant for `Symbol visibility` before you write code that uses it.
- **Common mistake:** Using `Symbol visibility` by copy-paste without knowing what it owns or when it is valid.

Practice: open `examples/06_*.cpp`, predict the output, change one line, re-predict.

## 7. License headers

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

## 8. Docs packaging

### Plain English

Today's idea — **Docs packaging** — fits inside the wider theme of Packaging & distributing C++. Read it as a tool: what job does it do, what rules does it enforce, and what breaks if you ignore those rules?

### Tiny code

```cpp
// Explore: Docs packaging
#include <iostream>
int main() {
  std::cout << "practice: Docs packaging\n";
  return 0;
}
```

- **Remember:** State one invariant for `Docs packaging` before you write code that uses it.
- **Common mistake:** Using `Docs packaging` by copy-paste without knowing what it owns or when it is valid.

Practice: open `examples/08_*.cpp`, predict the output, change one line, re-predict.

## 9. Minimal install

### Plain English

Today's idea — **Minimal install** — fits inside the wider theme of Packaging & distributing C++. Read it as a tool: what job does it do, what rules does it enforce, and what breaks if you ignore those rules?

### Tiny code

```cpp
// Explore: Minimal install
#include <iostream>
int main() {
  std::cout << "practice: Minimal install\n";
  return 0;
}
```

- **Remember:** State one invariant for `Minimal install` before you write code that uses it.
- **Common mistake:** Using `Minimal install` by copy-paste without knowing what it owns or when it is valid.

Practice: open `examples/09_*.cpp`, predict the output, change one line, re-predict.

## 10. Package a tiny lib

### Plain English

Today's idea — **Package a tiny lib** — fits inside the wider theme of Packaging & distributing C++. Read it as a tool: what job does it do, what rules does it enforce, and what breaks if you ignore those rules?

### Tiny code

```cpp
// Explore: Package a tiny lib
#include <iostream>
int main() {
  std::cout << "practice: Package a tiny lib\n";
  return 0;
}
```

- **Remember:** State one invariant for `Package a tiny lib` before you write code that uses it.
- **Common mistake:** Using `Package a tiny lib` by copy-paste without knowing what it owns or when it is valid.

Practice: open `examples/10_*.cpp`, predict the output, change one line, re-predict.

---

## What you should be able to do after Day 180

- Explain `Packaging & distributing C++` to a peer without looking at notes.
- Compile and run all 10 examples with `-std=c++17 -Wall -Wextra` (use newer flags only when the day needs C++20+).
- Answer the 5 questions in `questions.md` before peeking at `answers.md`.
- Write one tiny extra program that combines at least 3 of today's concepts.

Or open this day in the **Badsha hub** (`python3 hub/server.py`) and use Learn / Practice / Quiz tabs.
