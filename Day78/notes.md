# Day 78 -- Naming & style

Today's goal: understand **Naming & style** in plain English, see a tiny code sample for each idea, then practice in `examples/`.

How to study this day:
1. Read each concept's **Plain English** section.
2. Skim the code sample -- predict what it does.
3. Run the matching file under `examples/`.
4. Only then try `questions.md`.

| # | Concept |
|--:|---------|
| 1 | Types vs values |
| 2 | Verbs for functions |
| 3 | Avoid abbreviations |
| 4 | Consistent prefixes |
| 5 | File naming |
| 6 | Namespace naming |
| 7 | Bool names |
| 8 | Duration suffixes |
| 9 | Style guides overview |
| 10 | Renaming pass |

---

## 1. Types vs values

### Plain English

Today's idea — **Types vs values** — fits inside the wider theme of Naming & style. Read it as a tool: what job does it do, what rules does it enforce, and what breaks if you ignore those rules?

### Tiny code

```cpp
// Explore: Types vs values
#include <iostream>
int main() {
  std::cout << "practice: Types vs values\n";
  return 0;
}
```

- **Remember:** State one invariant for `Types vs values` before you write code that uses it.
- **Common mistake:** Using `Types vs values` by copy-paste without knowing what it owns or when it is valid.

Practice: open `examples/01_*.cpp`, predict the output, change one line, re-predict.

## 2. Verbs for functions

### Plain English

Today's idea — **Verbs for functions** — fits inside the wider theme of Naming & style. Read it as a tool: what job does it do, what rules does it enforce, and what breaks if you ignore those rules?

### Tiny code

```cpp
// Explore: Verbs for functions
#include <iostream>
int main() {
  std::cout << "practice: Verbs for functions\n";
  return 0;
}
```

- **Remember:** State one invariant for `Verbs for functions` before you write code that uses it.
- **Common mistake:** Using `Verbs for functions` by copy-paste without knowing what it owns or when it is valid.

Practice: open `examples/02_*.cpp`, predict the output, change one line, re-predict.

## 3. Avoid abbreviations

### Plain English

Today's idea — **Avoid abbreviations** — fits inside the wider theme of Naming & style. Read it as a tool: what job does it do, what rules does it enforce, and what breaks if you ignore those rules?

### Tiny code

```cpp
// Explore: Avoid abbreviations
#include <iostream>
int main() {
  std::cout << "practice: Avoid abbreviations\n";
  return 0;
}
```

- **Remember:** State one invariant for `Avoid abbreviations` before you write code that uses it.
- **Common mistake:** Using `Avoid abbreviations` by copy-paste without knowing what it owns or when it is valid.

Practice: open `examples/03_*.cpp`, predict the output, change one line, re-predict.

## 4. Consistent prefixes

### Plain English

These patterns turn nested loops into linear or logarithmic passes. Binary search needs a monotonic predicate. Two pointers / sliding windows need a clear invariant.

### Tiny code

```cpp
auto it = std::lower_bound(v.begin(), v.end(), x);
bool found = it != v.end() && *it == x;
```

- **Remember:** Write down the invariant before coding the loop.
- **Common mistake:** Off-by-one errors in binary search bounds (`lo`/`hi`).

Practice: open `examples/04_*.cpp`, predict the output, change one line, re-predict.

## 5. File naming

### Plain English

Today's idea — **File naming** — fits inside the wider theme of Naming & style. Read it as a tool: what job does it do, what rules does it enforce, and what breaks if you ignore those rules?

### Tiny code

```cpp
// Explore: File naming
#include <iostream>
int main() {
  std::cout << "practice: File naming\n";
  return 0;
}
```

- **Remember:** State one invariant for `File naming` before you write code that uses it.
- **Common mistake:** Using `File naming` by copy-paste without knowing what it owns or when it is valid.

Practice: open `examples/05_*.cpp`, predict the output, change one line, re-predict.

## 6. Namespace naming

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

Practice: open `examples/06_*.cpp`, predict the output, change one line, re-predict.

## 7. Bool names

### Plain English

Today's idea — **Bool names** — fits inside the wider theme of Naming & style. Read it as a tool: what job does it do, what rules does it enforce, and what breaks if you ignore those rules?

### Tiny code

```cpp
// Explore: Bool names
#include <iostream>
int main() {
  std::cout << "practice: Bool names\n";
  return 0;
}
```

- **Remember:** State one invariant for `Bool names` before you write code that uses it.
- **Common mistake:** Using `Bool names` by copy-paste without knowing what it owns or when it is valid.

Practice: open `examples/07_*.cpp`, predict the output, change one line, re-predict.

## 8. Duration suffixes

### Plain English

`std::chrono` measures time with clocks and durations. Use `steady_clock` to measure elapsed time; `system_clock` for wall-clock dates.

### Tiny code

```cpp
using clock = std::chrono::steady_clock;
auto t0 = clock::now();
// work...
auto ms = std::chrono::duration_cast<std::chrono::milliseconds>(clock::now() - t0);
```

- **Remember:** `steady_clock` never goes backwards — good for benchmarks.
- **Common mistake:** Using `system_clock` for elapsed timing across daylight-saving adjustments.

Practice: open `examples/08_*.cpp`, predict the output, change one line, re-predict.

## 9. Style guides overview

### Plain English

Today's idea — **Style guides overview** — fits inside the wider theme of Naming & style. Read it as a tool: what job does it do, what rules does it enforce, and what breaks if you ignore those rules?

### Tiny code

```cpp
// Explore: Style guides overview
#include <iostream>
int main() {
  std::cout << "practice: Style guides overview\n";
  return 0;
}
```

- **Remember:** State one invariant for `Style guides overview` before you write code that uses it.
- **Common mistake:** Using `Style guides overview` by copy-paste without knowing what it owns or when it is valid.

Practice: open `examples/09_*.cpp`, predict the output, change one line, re-predict.

## 10. Renaming pass

### Plain English

Today's idea — **Renaming pass** — fits inside the wider theme of Naming & style. Read it as a tool: what job does it do, what rules does it enforce, and what breaks if you ignore those rules?

### Tiny code

```cpp
// Explore: Renaming pass
#include <iostream>
int main() {
  std::cout << "practice: Renaming pass\n";
  return 0;
}
```

- **Remember:** State one invariant for `Renaming pass` before you write code that uses it.
- **Common mistake:** Using `Renaming pass` by copy-paste without knowing what it owns or when it is valid.

Practice: open `examples/10_*.cpp`, predict the output, change one line, re-predict.

---

## What you should be able to do after Day 78

- Explain `Naming & style` to a peer without looking at notes.
- Compile and run all 10 examples with `-std=c++17 -Wall -Wextra` (use newer flags only when the day needs C++20+).
- Answer the 5 questions in `questions.md` before peeking at `answers.md`.
- Write one tiny extra program that combines at least 3 of today's concepts.

Or open this day in the **Badsha hub** (`python3 hub/server.py`) and use Learn / Practice / Quiz tabs.
