# Day 138 -- Inlining & linkage

Today's goal: understand **Inlining & linkage** in plain English, see a tiny code sample for each idea, then practice in `examples/`.

How to study this day:
1. Read each concept's **Plain English** section.
2. Skim the code sample -- predict what it does.
3. Run the matching file under `examples/`.
4. Only then try `questions.md`.

| # | Concept |
|--:|---------|
| 1 | inline functions |
| 2 | inline variables (C++17) |
| 3 | ODR with inline |
| 4 | COMDAT idea |
| 5 | LTO mindset |
| 6 | Always_inline caution |
| 7 | Outline cold paths |
| 8 | Template linkage |
| 9 | Anonymous namespace linkage |
| 10 | Header pitfalls |

---

## 1. inline functions

### Plain English

Today's idea — **inline functions** — fits inside the wider theme of Inlining & linkage. Read it as a tool: what job does it do, what rules does it enforce, and what breaks if you ignore those rules?

### Tiny code

```cpp
// Explore: inline functions
#include <iostream>
int main() {
  std::cout << "practice: inline functions\n";
  return 0;
}
```

- **Remember:** State one invariant for `inline functions` before you write code that uses it.
- **Common mistake:** Using `inline functions` by copy-paste without knowing what it owns or when it is valid.

Practice: open `examples/01_*.cpp`, predict the output, change one line, re-predict.

## 2. inline variables (C++17)

### Plain English

Today's idea — **inline variables (C++17)** — fits inside the wider theme of Inlining & linkage. Read it as a tool: what job does it do, what rules does it enforce, and what breaks if you ignore those rules?

### Tiny code

```cpp
// Explore: inline variables (C++17)
#include <iostream>
int main() {
  std::cout << "practice: inline variables (C++17)\n";
  return 0;
}
```

- **Remember:** State one invariant for `inline variables (C++17)` before you write code that uses it.
- **Common mistake:** Using `inline variables (C++17)` by copy-paste without knowing what it owns or when it is valid.

Practice: open `examples/02_*.cpp`, predict the output, change one line, re-predict.

## 3. ODR with inline

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

## 4. COMDAT idea

### Plain English

Today's idea — **COMDAT idea** — fits inside the wider theme of Inlining & linkage. Read it as a tool: what job does it do, what rules does it enforce, and what breaks if you ignore those rules?

### Tiny code

```cpp
// Explore: COMDAT idea
#include <iostream>
int main() {
  std::cout << "practice: COMDAT idea\n";
  return 0;
}
```

- **Remember:** State one invariant for `COMDAT idea` before you write code that uses it.
- **Common mistake:** Using `COMDAT idea` by copy-paste without knowing what it owns or when it is valid.

Practice: open `examples/04_*.cpp`, predict the output, change one line, re-predict.

## 5. LTO mindset

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

Practice: open `examples/05_*.cpp`, predict the output, change one line, re-predict.

## 6. Always_inline caution

### Plain English

Today's idea — **Always_inline caution** — fits inside the wider theme of Inlining & linkage. Read it as a tool: what job does it do, what rules does it enforce, and what breaks if you ignore those rules?

### Tiny code

```cpp
// Explore: Always_inline caution
#include <iostream>
int main() {
  std::cout << "practice: Always_inline caution\n";
  return 0;
}
```

- **Remember:** State one invariant for `Always_inline caution` before you write code that uses it.
- **Common mistake:** Using `Always_inline caution` by copy-paste without knowing what it owns or when it is valid.

Practice: open `examples/06_*.cpp`, predict the output, change one line, re-predict.

## 7. Outline cold paths

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

## 8. Template linkage

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

Practice: open `examples/08_*.cpp`, predict the output, change one line, re-predict.

## 9. Anonymous namespace linkage

### Plain English

Namespaces group names so `draw` in graphics does not clash with `draw` in cards. Prefer `std::` qualification; avoid `using namespace std;` in headers.

### Tiny code

```cpp
namespace app {
  void run();
}
void app::run() { /* ... */ }
```

- **Remember:** Never put `using namespace std;` in a header.
- **Common mistake:** Dumping everything into the global namespace and getting silent overload clashes.

Practice: open `examples/09_*.cpp`, predict the output, change one line, re-predict.

## 10. Header pitfalls

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

## What you should be able to do after Day 138

- Explain `Inlining & linkage` to a peer without looking at notes.
- Compile and run all 10 examples with `-std=c++17 -Wall -Wextra` (use newer flags only when the day needs C++20+).
- Answer the 5 questions in `questions.md` before peeking at `answers.md`.
- Write one tiny extra program that combines at least 3 of today's concepts.

Or open this day in the **Badsha hub** (`python3 hub/server.py`) and use Learn / Practice / Quiz tabs.
