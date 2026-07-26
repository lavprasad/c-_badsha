# Day 72 -- Error handling strategies compared

Today's goal: understand **Error handling strategies compared** in plain English, see a tiny code sample for each idea, then practice in `examples/`.

How to study this day:
1. Read each concept's **Plain English** section.
2. Skim the code sample -- predict what it does.
3. Run the matching file under `examples/`.
4. Only then try `questions.md`.

| # | Concept |
|--:|---------|
| 1 | Exceptions vs codes |
| 2 | optional/expected mindset |
| 3 | Hybrid approaches |
| 4 | Library boundaries |
| 5 | Performance |
| 6 | Debuggability |
| 7 | Consistency |
| 8 | noexcept boundaries |
| 9 | Logging policy |
| 10 | Choosing for a project |

---

## 1. Exceptions vs codes

### Plain English

Exceptions separate the happy path from failure. Throw when a function cannot do its job; catch at a layer that can recover or report. RAII still cleans up during unwind.

### Tiny code

```cpp
try {
  throw std::runtime_error("boom");
} catch (const std::exception& e) {
  std::cerr << e.what() << '\n';
}
```

- **Remember:** Catch by `const` reference, not by value.
- **Common mistake:** Throwing raw pointers or catching by value (slicing).

Practice: open `examples/01_*.cpp`, predict the output, change one line, re-predict.

## 2. optional/expected mindset

### Plain English

`optional<T>` is either a T or empty — better than magic sentinel values. `variant` holds one of several types. Prefer them over raw unions or `void*` for clarity.

### Tiny code

```cpp
#include <optional>
std::optional<int> parse(bool ok) {
  if (!ok) return std::nullopt;
  return 42;
}
int x = parse(true).value_or(-1);
```

- **Remember:** Check `optional` (or use `value_or`) before calling `value()`.
- **Common mistake:** Calling `opt.value()` on an empty optional → exception.

Practice: open `examples/02_*.cpp`, predict the output, change one line, re-predict.

## 3. Hybrid approaches

### Plain English

Today's idea — **Hybrid approaches** — fits inside the wider theme of Error handling strategies compared. Read it as a tool: what job does it do, what rules does it enforce, and what breaks if you ignore those rules?

### Tiny code

```cpp
// Explore: Hybrid approaches
#include <iostream>
int main() {
  std::cout << "practice: Hybrid approaches\n";
  return 0;
}
```

- **Remember:** State one invariant for `Hybrid approaches` before you write code that uses it.
- **Common mistake:** Using `Hybrid approaches` by copy-paste without knowing what it owns or when it is valid.

Practice: open `examples/03_*.cpp`, predict the output, change one line, re-predict.

## 4. Library boundaries

### Plain English

Today's idea — **Library boundaries** — fits inside the wider theme of Error handling strategies compared. Read it as a tool: what job does it do, what rules does it enforce, and what breaks if you ignore those rules?

### Tiny code

```cpp
// Explore: Library boundaries
#include <iostream>
int main() {
  std::cout << "practice: Library boundaries\n";
  return 0;
}
```

- **Remember:** State one invariant for `Library boundaries` before you write code that uses it.
- **Common mistake:** Using `Library boundaries` by copy-paste without knowing what it owns or when it is valid.

Practice: open `examples/04_*.cpp`, predict the output, change one line, re-predict.

## 5. Performance

### Plain English

Today's idea — **Performance** — fits inside the wider theme of Error handling strategies compared. Read it as a tool: what job does it do, what rules does it enforce, and what breaks if you ignore those rules?

### Tiny code

```cpp
// Explore: Performance
#include <iostream>
int main() {
  std::cout << "practice: Performance\n";
  return 0;
}
```

- **Remember:** State one invariant for `Performance` before you write code that uses it.
- **Common mistake:** Using `Performance` by copy-paste without knowing what it owns or when it is valid.

Practice: open `examples/05_*.cpp`, predict the output, change one line, re-predict.

## 6. Debuggability

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

Practice: open `examples/06_*.cpp`, predict the output, change one line, re-predict.

## 7. Consistency

### Plain English

Today's idea — **Consistency** — fits inside the wider theme of Error handling strategies compared. Read it as a tool: what job does it do, what rules does it enforce, and what breaks if you ignore those rules?

### Tiny code

```cpp
// Explore: Consistency
#include <iostream>
int main() {
  std::cout << "practice: Consistency\n";
  return 0;
}
```

- **Remember:** State one invariant for `Consistency` before you write code that uses it.
- **Common mistake:** Using `Consistency` by copy-paste without knowing what it owns or when it is valid.

Practice: open `examples/07_*.cpp`, predict the output, change one line, re-predict.

## 8. noexcept boundaries

### Plain English

Exceptions separate the happy path from failure. Throw when a function cannot do its job; catch at a layer that can recover or report. RAII still cleans up during unwind.

### Tiny code

```cpp
try {
  throw std::runtime_error("boom");
} catch (const std::exception& e) {
  std::cerr << e.what() << '\n';
}
```

- **Remember:** Catch by `const` reference, not by value.
- **Common mistake:** Throwing raw pointers or catching by value (slicing).

Practice: open `examples/08_*.cpp`, predict the output, change one line, re-predict.

## 9. Logging policy

### Plain English

Today's idea — **Logging policy** — fits inside the wider theme of Error handling strategies compared. Read it as a tool: what job does it do, what rules does it enforce, and what breaks if you ignore those rules?

### Tiny code

```cpp
// Explore: Logging policy
#include <iostream>
int main() {
  std::cout << "practice: Logging policy\n";
  return 0;
}
```

- **Remember:** State one invariant for `Logging policy` before you write code that uses it.
- **Common mistake:** Using `Logging policy` by copy-paste without knowing what it owns or when it is valid.

Practice: open `examples/09_*.cpp`, predict the output, change one line, re-predict.

## 10. Choosing for a project

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

## What you should be able to do after Day 72

- Explain `Error handling strategies compared` to a peer without looking at notes.
- Compile and run all 10 examples with `-std=c++17 -Wall -Wextra` (use newer flags only when the day needs C++20+).
- Answer the 5 questions in `questions.md` before peeking at `answers.md`.
- Write one tiny extra program that combines at least 3 of today's concepts.

Or open this day in the **Badsha hub** (`python3 hub/server.py`) and use Learn / Practice / Quiz tabs.
