# Day 194 -- Reading the standard (practical)

Today's goal: understand **Reading the standard (practical)** in plain English, see a tiny code sample for each idea, then practice in `examples/`.

How to study this day:
1. Read each concept's **Plain English** section.
2. Skim the code sample -- predict what it does.
3. Run the matching file under `examples/`.
4. Only then try `questions.md`.

| # | Concept |
|--:|---------|
| 1 | How to navigate |
| 2 | Normative vs notes |
| 3 | Ill-formed vs UB |
| 4 | Library clauses |
| 5 | Implementation freedom |
| 6 | Defect reports idea |
| 7 | cppreference vs standard |
| 8 | Citing versions |
| 9 | Experiment + read |
| 10 | Look up one rule |

---

## 1. How to navigate

### Plain English

Today's idea — **How to navigate** — fits inside the wider theme of Reading the standard (practical). Read it as a tool: what job does it do, what rules does it enforce, and what breaks if you ignore those rules?

### Tiny code

```cpp
// Explore: How to navigate
#include <iostream>
int main() {
  std::cout << "practice: How to navigate\n";
  return 0;
}
```

- **Remember:** State one invariant for `How to navigate` before you write code that uses it.
- **Common mistake:** Using `How to navigate` by copy-paste without knowing what it owns or when it is valid.

Practice: open `examples/01_*.cpp`, predict the output, change one line, re-predict.

## 2. Normative vs notes

### Plain English

Today's idea — **Normative vs notes** — fits inside the wider theme of Reading the standard (practical). Read it as a tool: what job does it do, what rules does it enforce, and what breaks if you ignore those rules?

### Tiny code

```cpp
// Explore: Normative vs notes
#include <iostream>
int main() {
  std::cout << "practice: Normative vs notes\n";
  return 0;
}
```

- **Remember:** State one invariant for `Normative vs notes` before you write code that uses it.
- **Common mistake:** Using `Normative vs notes` by copy-paste without knowing what it owns or when it is valid.

Practice: open `examples/02_*.cpp`, predict the output, change one line, re-predict.

## 3. Ill-formed vs UB

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

Practice: open `examples/03_*.cpp`, predict the output, change one line, re-predict.

## 4. Library clauses

### Plain English

Today's idea — **Library clauses** — fits inside the wider theme of Reading the standard (practical). Read it as a tool: what job does it do, what rules does it enforce, and what breaks if you ignore those rules?

### Tiny code

```cpp
// Explore: Library clauses
#include <iostream>
int main() {
  std::cout << "practice: Library clauses\n";
  return 0;
}
```

- **Remember:** State one invariant for `Library clauses` before you write code that uses it.
- **Common mistake:** Using `Library clauses` by copy-paste without knowing what it owns or when it is valid.

Practice: open `examples/04_*.cpp`, predict the output, change one line, re-predict.

## 5. Implementation freedom

### Plain English

Today's idea — **Implementation freedom** — fits inside the wider theme of Reading the standard (practical). Read it as a tool: what job does it do, what rules does it enforce, and what breaks if you ignore those rules?

### Tiny code

```cpp
// Explore: Implementation freedom
#include <iostream>
int main() {
  std::cout << "practice: Implementation freedom\n";
  return 0;
}
```

- **Remember:** State one invariant for `Implementation freedom` before you write code that uses it.
- **Common mistake:** Using `Implementation freedom` by copy-paste without knowing what it owns or when it is valid.

Practice: open `examples/05_*.cpp`, predict the output, change one line, re-predict.

## 6. Defect reports idea

### Plain English

Today's idea — **Defect reports idea** — fits inside the wider theme of Reading the standard (practical). Read it as a tool: what job does it do, what rules does it enforce, and what breaks if you ignore those rules?

### Tiny code

```cpp
// Explore: Defect reports idea
#include <iostream>
int main() {
  std::cout << "practice: Defect reports idea\n";
  return 0;
}
```

- **Remember:** State one invariant for `Defect reports idea` before you write code that uses it.
- **Common mistake:** Using `Defect reports idea` by copy-paste without knowing what it owns or when it is valid.

Practice: open `examples/06_*.cpp`, predict the output, change one line, re-predict.

## 7. cppreference vs standard

### Plain English

Today's idea — **cppreference vs standard** — fits inside the wider theme of Reading the standard (practical). Read it as a tool: what job does it do, what rules does it enforce, and what breaks if you ignore those rules?

### Tiny code

```cpp
// Explore: cppreference vs standard
#include <iostream>
int main() {
  std::cout << "practice: cppreference vs standard\n";
  return 0;
}
```

- **Remember:** State one invariant for `cppreference vs standard` before you write code that uses it.
- **Common mistake:** Using `cppreference vs standard` by copy-paste without knowing what it owns or when it is valid.

Practice: open `examples/07_*.cpp`, predict the output, change one line, re-predict.

## 8. Citing versions

### Plain English

Today's idea — **Citing versions** — fits inside the wider theme of Reading the standard (practical). Read it as a tool: what job does it do, what rules does it enforce, and what breaks if you ignore those rules?

### Tiny code

```cpp
// Explore: Citing versions
#include <iostream>
int main() {
  std::cout << "practice: Citing versions\n";
  return 0;
}
```

- **Remember:** State one invariant for `Citing versions` before you write code that uses it.
- **Common mistake:** Using `Citing versions` by copy-paste without knowing what it owns or when it is valid.

Practice: open `examples/08_*.cpp`, predict the output, change one line, re-predict.

## 9. Experiment + read

### Plain English

Today's idea — **Experiment + read** — fits inside the wider theme of Reading the standard (practical). Read it as a tool: what job does it do, what rules does it enforce, and what breaks if you ignore those rules?

### Tiny code

```cpp
// Explore: Experiment + read
#include <iostream>
int main() {
  std::cout << "practice: Experiment + read\n";
  return 0;
}
```

- **Remember:** State one invariant for `Experiment + read` before you write code that uses it.
- **Common mistake:** Using `Experiment + read` by copy-paste without knowing what it owns or when it is valid.

Practice: open `examples/09_*.cpp`, predict the output, change one line, re-predict.

## 10. Look up one rule

### Plain English

Today's idea — **Look up one rule** — fits inside the wider theme of Reading the standard (practical). Read it as a tool: what job does it do, what rules does it enforce, and what breaks if you ignore those rules?

### Tiny code

```cpp
// Explore: Look up one rule
#include <iostream>
int main() {
  std::cout << "practice: Look up one rule\n";
  return 0;
}
```

- **Remember:** State one invariant for `Look up one rule` before you write code that uses it.
- **Common mistake:** Using `Look up one rule` by copy-paste without knowing what it owns or when it is valid.

Practice: open `examples/10_*.cpp`, predict the output, change one line, re-predict.

---

## What you should be able to do after Day 194

- Explain `Reading the standard (practical)` to a peer without looking at notes.
- Compile and run all 10 examples with `-std=c++17 -Wall -Wextra` (use newer flags only when the day needs C++20+).
- Answer the 5 questions in `questions.md` before peeking at `answers.md`.
- Write one tiny extra program that combines at least 3 of today's concepts.

Or open this day in the **Badsha hub** (`python3 hub/server.py`) and use Learn / Practice / Quiz tabs.
