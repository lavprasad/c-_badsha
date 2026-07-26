# Day 68 -- Policy-based design

Today's goal: understand **Policy-based design** in plain English, see a tiny code sample for each idea, then practice in `examples/`.

How to study this day:
1. Read each concept's **Plain English** section.
2. Skim the code sample -- predict what it does.
3. Run the matching file under `examples/`.
4. Only then try `questions.md`.

| # | Concept |
|--:|---------|
| 1 | Policies as template params |
| 2 | Hosting policies |
| 3 | Orthogonal policies |
| 4 | Default policies |
| 5 | Named template args idea |
| 6 | vs inheritance |
| 7 | Compile-time wiring |
| 8 | Error messages |
| 9 | Library examples mindset |
| 10 | A smart buffer policies |

---

## 1. Policies as template params

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

Practice: open `examples/01_*.cpp`, predict the output, change one line, re-predict.

## 2. Hosting policies

### Plain English

Today's idea — **Hosting policies** — fits inside the wider theme of Policy-based design. Read it as a tool: what job does it do, what rules does it enforce, and what breaks if you ignore those rules?

### Tiny code

```cpp
// Explore: Hosting policies
#include <iostream>
int main() {
  std::cout << "practice: Hosting policies\n";
  return 0;
}
```

- **Remember:** State one invariant for `Hosting policies` before you write code that uses it.
- **Common mistake:** Using `Hosting policies` by copy-paste without knowing what it owns or when it is valid.

Practice: open `examples/02_*.cpp`, predict the output, change one line, re-predict.

## 3. Orthogonal policies

### Plain English

Today's idea — **Orthogonal policies** — fits inside the wider theme of Policy-based design. Read it as a tool: what job does it do, what rules does it enforce, and what breaks if you ignore those rules?

### Tiny code

```cpp
// Explore: Orthogonal policies
#include <iostream>
int main() {
  std::cout << "practice: Orthogonal policies\n";
  return 0;
}
```

- **Remember:** State one invariant for `Orthogonal policies` before you write code that uses it.
- **Common mistake:** Using `Orthogonal policies` by copy-paste without knowing what it owns or when it is valid.

Practice: open `examples/03_*.cpp`, predict the output, change one line, re-predict.

## 4. Default policies

### Plain English

Today's idea — **Default policies** — fits inside the wider theme of Policy-based design. Read it as a tool: what job does it do, what rules does it enforce, and what breaks if you ignore those rules?

### Tiny code

```cpp
// Explore: Default policies
#include <iostream>
int main() {
  std::cout << "practice: Default policies\n";
  return 0;
}
```

- **Remember:** State one invariant for `Default policies` before you write code that uses it.
- **Common mistake:** Using `Default policies` by copy-paste without knowing what it owns or when it is valid.

Practice: open `examples/04_*.cpp`, predict the output, change one line, re-predict.

## 5. Named template args idea

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

Practice: open `examples/05_*.cpp`, predict the output, change one line, re-predict.

## 6. vs inheritance

### Plain English

Inheritance models 'is-a' when the derived type can substitute for the base. Prefer composition ('has-a') when you only need to reuse implementation.

### Tiny code

```cpp
struct Engine { void start(); };
struct Car {  // has-an Engine
  Engine engine;
  void start() { engine.start(); }
};
```

- **Remember:** Deep inheritance trees get fragile — favour shallow designs.
- **Common mistake:** Inheriting just to reuse code when a member object would do.

Practice: open `examples/06_*.cpp`, predict the output, change one line, re-predict.

## 7. Compile-time wiring

### Plain English

Today's idea — **Compile-time wiring** — fits inside the wider theme of Policy-based design. Read it as a tool: what job does it do, what rules does it enforce, and what breaks if you ignore those rules?

### Tiny code

```cpp
// Explore: Compile-time wiring
#include <iostream>
int main() {
  std::cout << "practice: Compile-time wiring\n";
  return 0;
}
```

- **Remember:** State one invariant for `Compile-time wiring` before you write code that uses it.
- **Common mistake:** Using `Compile-time wiring` by copy-paste without knowing what it owns or when it is valid.

Practice: open `examples/07_*.cpp`, predict the output, change one line, re-predict.

## 8. Error messages

### Plain English

Today's idea — **Error messages** — fits inside the wider theme of Policy-based design. Read it as a tool: what job does it do, what rules does it enforce, and what breaks if you ignore those rules?

### Tiny code

```cpp
// Explore: Error messages
#include <iostream>
int main() {
  std::cout << "practice: Error messages\n";
  return 0;
}
```

- **Remember:** State one invariant for `Error messages` before you write code that uses it.
- **Common mistake:** Using `Error messages` by copy-paste without knowing what it owns or when it is valid.

Practice: open `examples/08_*.cpp`, predict the output, change one line, re-predict.

## 9. Library examples mindset

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

Practice: open `examples/09_*.cpp`, predict the output, change one line, re-predict.

## 10. A smart buffer policies

### Plain English

Today's idea — **A smart buffer policies** — fits inside the wider theme of Policy-based design. Read it as a tool: what job does it do, what rules does it enforce, and what breaks if you ignore those rules?

### Tiny code

```cpp
// Explore: A smart buffer policies
#include <iostream>
int main() {
  std::cout << "practice: A smart buffer policies\n";
  return 0;
}
```

- **Remember:** State one invariant for `A smart buffer policies` before you write code that uses it.
- **Common mistake:** Using `A smart buffer policies` by copy-paste without knowing what it owns or when it is valid.

Practice: open `examples/10_*.cpp`, predict the output, change one line, re-predict.

---

## What you should be able to do after Day 68

- Explain `Policy-based design` to a peer without looking at notes.
- Compile and run all 10 examples with `-std=c++17 -Wall -Wextra` (use newer flags only when the day needs C++20+).
- Answer the 5 questions in `questions.md` before peeking at `answers.md`.
- Write one tiny extra program that combines at least 3 of today's concepts.

Or open this day in the **Badsha hub** (`python3 hub/server.py`) and use Learn / Practice / Quiz tabs.
