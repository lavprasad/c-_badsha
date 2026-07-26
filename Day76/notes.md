# Day 76 -- Refactoring C++ safely

Today's goal: understand **Refactoring C++ safely** in plain English, see a tiny code sample for each idea, then practice in `examples/`.

How to study this day:
1. Read each concept's **Plain English** section.
2. Skim the code sample -- predict what it does.
3. Run the matching file under `examples/`.
4. Only then try `questions.md`.

| # | Concept |
|--:|---------|
| 1 | Characterize then change |
| 2 | Extract function |
| 3 | Replace raw new |
| 4 | Narrow interfaces |
| 5 | Reduce duplication |
| 6 | Keep behaviour |
| 7 | Incremental commits |
| 8 | Compiler as ally |
| 9 | Dead code removal |
| 10 | A refactor walkthrough |

---

## 1. Characterize then change

### Plain English

Today's idea — **Characterize then change** — fits inside the wider theme of Refactoring C++ safely. Read it as a tool: what job does it do, what rules does it enforce, and what breaks if you ignore those rules?

### Tiny code

```cpp
// Explore: Characterize then change
#include <iostream>
int main() {
  std::cout << "practice: Characterize then change\n";
  return 0;
}
```

- **Remember:** State one invariant for `Characterize then change` before you write code that uses it.
- **Common mistake:** Using `Characterize then change` by copy-paste without knowing what it owns or when it is valid.

Practice: open `examples/01_*.cpp`, predict the output, change one line, re-predict.

## 2. Extract function

### Plain English

Today's idea — **Extract function** — fits inside the wider theme of Refactoring C++ safely. Read it as a tool: what job does it do, what rules does it enforce, and what breaks if you ignore those rules?

### Tiny code

```cpp
// Explore: Extract function
#include <iostream>
int main() {
  std::cout << "practice: Extract function\n";
  return 0;
}
```

- **Remember:** State one invariant for `Extract function` before you write code that uses it.
- **Common mistake:** Using `Extract function` by copy-paste without knowing what it owns or when it is valid.

Practice: open `examples/02_*.cpp`, predict the output, change one line, re-predict.

## 3. Replace raw new

### Plain English

The heap lives until you release it. Prefer smart pointers and containers over raw `new`/`delete`. If you must use raw ownership, every `new` has exactly one matching `delete` on every path.

### Tiny code

```cpp
// Prefer:
auto p = std::make_unique<int[]>(10);
// instead of new int[10] / delete[]
```

- **Remember:** Match `new` with `delete` and `new[]` with `delete[]`.
- **Common mistake:** Using `delete` on array memory allocated with `new[]`.

Practice: open `examples/03_*.cpp`, predict the output, change one line, re-predict.

## 4. Narrow interfaces

### Plain English

Today's idea — **Narrow interfaces** — fits inside the wider theme of Refactoring C++ safely. Read it as a tool: what job does it do, what rules does it enforce, and what breaks if you ignore those rules?

### Tiny code

```cpp
// Explore: Narrow interfaces
#include <iostream>
int main() {
  std::cout << "practice: Narrow interfaces\n";
  return 0;
}
```

- **Remember:** State one invariant for `Narrow interfaces` before you write code that uses it.
- **Common mistake:** Using `Narrow interfaces` by copy-paste without knowing what it owns or when it is valid.

Practice: open `examples/04_*.cpp`, predict the output, change one line, re-predict.

## 5. Reduce duplication

### Plain English

Today's idea — **Reduce duplication** — fits inside the wider theme of Refactoring C++ safely. Read it as a tool: what job does it do, what rules does it enforce, and what breaks if you ignore those rules?

### Tiny code

```cpp
// Explore: Reduce duplication
#include <iostream>
int main() {
  std::cout << "practice: Reduce duplication\n";
  return 0;
}
```

- **Remember:** State one invariant for `Reduce duplication` before you write code that uses it.
- **Common mistake:** Using `Reduce duplication` by copy-paste without knowing what it owns or when it is valid.

Practice: open `examples/05_*.cpp`, predict the output, change one line, re-predict.

## 6. Keep behaviour

### Plain English

Today's idea — **Keep behaviour** — fits inside the wider theme of Refactoring C++ safely. Read it as a tool: what job does it do, what rules does it enforce, and what breaks if you ignore those rules?

### Tiny code

```cpp
// Explore: Keep behaviour
#include <iostream>
int main() {
  std::cout << "practice: Keep behaviour\n";
  return 0;
}
```

- **Remember:** State one invariant for `Keep behaviour` before you write code that uses it.
- **Common mistake:** Using `Keep behaviour` by copy-paste without knowing what it owns or when it is valid.

Practice: open `examples/06_*.cpp`, predict the output, change one line, re-predict.

## 7. Incremental commits

### Plain English

Today's idea — **Incremental commits** — fits inside the wider theme of Refactoring C++ safely. Read it as a tool: what job does it do, what rules does it enforce, and what breaks if you ignore those rules?

### Tiny code

```cpp
// Explore: Incremental commits
#include <iostream>
int main() {
  std::cout << "practice: Incremental commits\n";
  return 0;
}
```

- **Remember:** State one invariant for `Incremental commits` before you write code that uses it.
- **Common mistake:** Using `Incremental commits` by copy-paste without knowing what it owns or when it is valid.

Practice: open `examples/07_*.cpp`, predict the output, change one line, re-predict.

## 8. Compiler as ally

### Plain English

Today's idea — **Compiler as ally** — fits inside the wider theme of Refactoring C++ safely. Read it as a tool: what job does it do, what rules does it enforce, and what breaks if you ignore those rules?

### Tiny code

```cpp
// Explore: Compiler as ally
#include <iostream>
int main() {
  std::cout << "practice: Compiler as ally\n";
  return 0;
}
```

- **Remember:** State one invariant for `Compiler as ally` before you write code that uses it.
- **Common mistake:** Using `Compiler as ally` by copy-paste without knowing what it owns or when it is valid.

Practice: open `examples/08_*.cpp`, predict the output, change one line, re-predict.

## 9. Dead code removal

### Plain English

Today's idea — **Dead code removal** — fits inside the wider theme of Refactoring C++ safely. Read it as a tool: what job does it do, what rules does it enforce, and what breaks if you ignore those rules?

### Tiny code

```cpp
// Explore: Dead code removal
#include <iostream>
int main() {
  std::cout << "practice: Dead code removal\n";
  return 0;
}
```

- **Remember:** State one invariant for `Dead code removal` before you write code that uses it.
- **Common mistake:** Using `Dead code removal` by copy-paste without knowing what it owns or when it is valid.

Practice: open `examples/09_*.cpp`, predict the output, change one line, re-predict.

## 10. A refactor walkthrough

### Plain English

Today's idea — **A refactor walkthrough** — fits inside the wider theme of Refactoring C++ safely. Read it as a tool: what job does it do, what rules does it enforce, and what breaks if you ignore those rules?

### Tiny code

```cpp
// Explore: A refactor walkthrough
#include <iostream>
int main() {
  std::cout << "practice: A refactor walkthrough\n";
  return 0;
}
```

- **Remember:** State one invariant for `A refactor walkthrough` before you write code that uses it.
- **Common mistake:** Using `A refactor walkthrough` by copy-paste without knowing what it owns or when it is valid.

Practice: open `examples/10_*.cpp`, predict the output, change one line, re-predict.

---

## What you should be able to do after Day 76

- Explain `Refactoring C++ safely` to a peer without looking at notes.
- Compile and run all 10 examples with `-std=c++17 -Wall -Wextra` (use newer flags only when the day needs C++20+).
- Answer the 5 questions in `questions.md` before peeking at `answers.md`.
- Write one tiny extra program that combines at least 3 of today's concepts.

Or open this day in the **Badsha hub** (`python3 hub/server.py`) and use Learn / Practice / Quiz tabs.
