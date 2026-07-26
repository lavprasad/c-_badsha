# Day 179 -- API breakage & compatibility

Today's goal: understand **API breakage & compatibility** in plain English, see a tiny code sample for each idea, then practice in `examples/`.

How to study this day:
1. Read each concept's **Plain English** section.
2. Skim the code sample -- predict what it does.
3. Run the matching file under `examples/`.
4. Only then try `questions.md`.

| # | Concept |
|--:|---------|
| 1 | Source vs ABI break |
| 2 | Deprecation |
| 3 | Default args hazards |
| 4 | Overload additions |
| 5 | Layout changes |
| 6 | Inline vs out-of-line |
| 7 | Version macros |
| 8 | Migration guides |
| 9 | Tests for compat |
| 10 | Evolve a library |

---

## 1. Source vs ABI break

### Plain English

Today's idea — **Source vs ABI break** — fits inside the wider theme of API breakage & compatibility. Read it as a tool: what job does it do, what rules does it enforce, and what breaks if you ignore those rules?

### Tiny code

```cpp
// Explore: Source vs ABI break
#include <iostream>
int main() {
  std::cout << "practice: Source vs ABI break\n";
  return 0;
}
```

- **Remember:** State one invariant for `Source vs ABI break` before you write code that uses it.
- **Common mistake:** Using `Source vs ABI break` by copy-paste without knowing what it owns or when it is valid.

Practice: open `examples/01_*.cpp`, predict the output, change one line, re-predict.

## 2. Deprecation

### Plain English

Today's idea — **Deprecation** — fits inside the wider theme of API breakage & compatibility. Read it as a tool: what job does it do, what rules does it enforce, and what breaks if you ignore those rules?

### Tiny code

```cpp
// Explore: Deprecation
#include <iostream>
int main() {
  std::cout << "practice: Deprecation\n";
  return 0;
}
```

- **Remember:** State one invariant for `Deprecation` before you write code that uses it.
- **Common mistake:** Using `Deprecation` by copy-paste without knowing what it owns or when it is valid.

Practice: open `examples/02_*.cpp`, predict the output, change one line, re-predict.

## 3. Default args hazards

### Plain English

Today's idea — **Default args hazards** — fits inside the wider theme of API breakage & compatibility. Read it as a tool: what job does it do, what rules does it enforce, and what breaks if you ignore those rules?

### Tiny code

```cpp
// Explore: Default args hazards
#include <iostream>
int main() {
  std::cout << "practice: Default args hazards\n";
  return 0;
}
```

- **Remember:** State one invariant for `Default args hazards` before you write code that uses it.
- **Common mistake:** Using `Default args hazards` by copy-paste without knowing what it owns or when it is valid.

Practice: open `examples/03_*.cpp`, predict the output, change one line, re-predict.

## 4. Overload additions

### Plain English

Today's idea — **Overload additions** — fits inside the wider theme of API breakage & compatibility. Read it as a tool: what job does it do, what rules does it enforce, and what breaks if you ignore those rules?

### Tiny code

```cpp
// Explore: Overload additions
#include <iostream>
int main() {
  std::cout << "practice: Overload additions\n";
  return 0;
}
```

- **Remember:** State one invariant for `Overload additions` before you write code that uses it.
- **Common mistake:** Using `Overload additions` by copy-paste without knowing what it owns or when it is valid.

Practice: open `examples/04_*.cpp`, predict the output, change one line, re-predict.

## 5. Layout changes

### Plain English

Today's idea — **Layout changes** — fits inside the wider theme of API breakage & compatibility. Read it as a tool: what job does it do, what rules does it enforce, and what breaks if you ignore those rules?

### Tiny code

```cpp
// Explore: Layout changes
#include <iostream>
int main() {
  std::cout << "practice: Layout changes\n";
  return 0;
}
```

- **Remember:** State one invariant for `Layout changes` before you write code that uses it.
- **Common mistake:** Using `Layout changes` by copy-paste without knowing what it owns or when it is valid.

Practice: open `examples/05_*.cpp`, predict the output, change one line, re-predict.

## 6. Inline vs out-of-line

### Plain English

Today's idea — **Inline vs out-of-line** — fits inside the wider theme of API breakage & compatibility. Read it as a tool: what job does it do, what rules does it enforce, and what breaks if you ignore those rules?

### Tiny code

```cpp
// Explore: Inline vs out-of-line
#include <iostream>
int main() {
  std::cout << "practice: Inline vs out-of-line\n";
  return 0;
}
```

- **Remember:** State one invariant for `Inline vs out-of-line` before you write code that uses it.
- **Common mistake:** Using `Inline vs out-of-line` by copy-paste without knowing what it owns or when it is valid.

Practice: open `examples/06_*.cpp`, predict the output, change one line, re-predict.

## 7. Version macros

### Plain English

Today's idea — **Version macros** — fits inside the wider theme of API breakage & compatibility. Read it as a tool: what job does it do, what rules does it enforce, and what breaks if you ignore those rules?

### Tiny code

```cpp
// Explore: Version macros
#include <iostream>
int main() {
  std::cout << "practice: Version macros\n";
  return 0;
}
```

- **Remember:** State one invariant for `Version macros` before you write code that uses it.
- **Common mistake:** Using `Version macros` by copy-paste without knowing what it owns or when it is valid.

Practice: open `examples/07_*.cpp`, predict the output, change one line, re-predict.

## 8. Migration guides

### Plain English

Today's idea — **Migration guides** — fits inside the wider theme of API breakage & compatibility. Read it as a tool: what job does it do, what rules does it enforce, and what breaks if you ignore those rules?

### Tiny code

```cpp
// Explore: Migration guides
#include <iostream>
int main() {
  std::cout << "practice: Migration guides\n";
  return 0;
}
```

- **Remember:** State one invariant for `Migration guides` before you write code that uses it.
- **Common mistake:** Using `Migration guides` by copy-paste without knowing what it owns or when it is valid.

Practice: open `examples/08_*.cpp`, predict the output, change one line, re-predict.

## 9. Tests for compat

### Plain English

Today's idea — **Tests for compat** — fits inside the wider theme of API breakage & compatibility. Read it as a tool: what job does it do, what rules does it enforce, and what breaks if you ignore those rules?

### Tiny code

```cpp
// Explore: Tests for compat
#include <iostream>
int main() {
  std::cout << "practice: Tests for compat\n";
  return 0;
}
```

- **Remember:** State one invariant for `Tests for compat` before you write code that uses it.
- **Common mistake:** Using `Tests for compat` by copy-paste without knowing what it owns or when it is valid.

Practice: open `examples/09_*.cpp`, predict the output, change one line, re-predict.

## 10. Evolve a library

### Plain English

Today's idea — **Evolve a library** — fits inside the wider theme of API breakage & compatibility. Read it as a tool: what job does it do, what rules does it enforce, and what breaks if you ignore those rules?

### Tiny code

```cpp
// Explore: Evolve a library
#include <iostream>
int main() {
  std::cout << "practice: Evolve a library\n";
  return 0;
}
```

- **Remember:** State one invariant for `Evolve a library` before you write code that uses it.
- **Common mistake:** Using `Evolve a library` by copy-paste without knowing what it owns or when it is valid.

Practice: open `examples/10_*.cpp`, predict the output, change one line, re-predict.

---

## What you should be able to do after Day 179

- Explain `API breakage & compatibility` to a peer without looking at notes.
- Compile and run all 10 examples with `-std=c++17 -Wall -Wextra` (use newer flags only when the day needs C++20+).
- Answer the 5 questions in `questions.md` before peeking at `answers.md`.
- Write one tiny extra program that combines at least 3 of today's concepts.

Or open this day in the **Badsha hub** (`python3 hub/server.py`) and use Learn / Practice / Quiz tabs.
