# Day 136 -- Small Buffer Optimization

Today's goal: understand **Small Buffer Optimization** in plain English, see a tiny code sample for each idea, then practice in `examples/`.

How to study this day:
1. Read each concept's **Plain English** section.
2. Skim the code sample -- predict what it does.
3. Run the matching file under `examples/`.
4. Only then try `questions.md`.

| # | Concept |
|--:|---------|
| 1 | SBO / SSO idea |
| 2 | When it helps |
| 3 | Implementation sketch |
| 4 | Alignment in buffer |
| 5 | Move interactions |
| 6 | Debugging SBO |
| 7 | Measuring benefit |
| 8 | std::function SBO |
| 9 | Tradeoffs |
| 10 | Tiny sbo_string |

---

## 1. SBO / SSO idea

### Plain English

`std::string` owns character data and grows as needed. Prefer it over raw `char*` for safety. `string_view` is a non-owning window — great for read-only parameters, dangerous if it outlives the string.

### Tiny code

```cpp
std::string s = "hello";
std::string_view v = s;  // ok while s lives
auto t = s.substr(0, 2); // "he"
```

- **Remember:** Never return a `string_view` that points at a local temporary.
- **Common mistake:** Mixing `getline` and `>>` without clearing the leftover newline.

Practice: open `examples/01_*.cpp`, predict the output, change one line, re-predict.

## 2. When it helps

### Plain English

Today's idea — **When it helps** — fits inside the wider theme of Small Buffer Optimization. Read it as a tool: what job does it do, what rules does it enforce, and what breaks if you ignore those rules?

### Tiny code

```cpp
// Explore: When it helps
#include <iostream>
int main() {
  std::cout << "practice: When it helps\n";
  return 0;
}
```

- **Remember:** State one invariant for `When it helps` before you write code that uses it.
- **Common mistake:** Using `When it helps` by copy-paste without knowing what it owns or when it is valid.

Practice: open `examples/02_*.cpp`, predict the output, change one line, re-predict.

## 3. Implementation sketch

### Plain English

Today's idea — **Implementation sketch** — fits inside the wider theme of Small Buffer Optimization. Read it as a tool: what job does it do, what rules does it enforce, and what breaks if you ignore those rules?

### Tiny code

```cpp
// Explore: Implementation sketch
#include <iostream>
int main() {
  std::cout << "practice: Implementation sketch\n";
  return 0;
}
```

- **Remember:** State one invariant for `Implementation sketch` before you write code that uses it.
- **Common mistake:** Using `Implementation sketch` by copy-paste without knowing what it owns or when it is valid.

Practice: open `examples/03_*.cpp`, predict the output, change one line, re-predict.

## 4. Alignment in buffer

### Plain English

Today's idea — **Alignment in buffer** — fits inside the wider theme of Small Buffer Optimization. Read it as a tool: what job does it do, what rules does it enforce, and what breaks if you ignore those rules?

### Tiny code

```cpp
// Explore: Alignment in buffer
#include <iostream>
int main() {
  std::cout << "practice: Alignment in buffer\n";
  return 0;
}
```

- **Remember:** State one invariant for `Alignment in buffer` before you write code that uses it.
- **Common mistake:** Using `Alignment in buffer` by copy-paste without knowing what it owns or when it is valid.

Practice: open `examples/04_*.cpp`, predict the output, change one line, re-predict.

## 5. Move interactions

### Plain English

Today's idea — **Move interactions** — fits inside the wider theme of Small Buffer Optimization. Read it as a tool: what job does it do, what rules does it enforce, and what breaks if you ignore those rules?

### Tiny code

```cpp
// Explore: Move interactions
#include <iostream>
int main() {
  std::cout << "practice: Move interactions\n";
  return 0;
}
```

- **Remember:** State one invariant for `Move interactions` before you write code that uses it.
- **Common mistake:** Using `Move interactions` by copy-paste without knowing what it owns or when it is valid.

Practice: open `examples/05_*.cpp`, predict the output, change one line, re-predict.

## 6. Debugging SBO

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

## 7. Measuring benefit

### Plain English

Today's idea — **Measuring benefit** — fits inside the wider theme of Small Buffer Optimization. Read it as a tool: what job does it do, what rules does it enforce, and what breaks if you ignore those rules?

### Tiny code

```cpp
// Explore: Measuring benefit
#include <iostream>
int main() {
  std::cout << "practice: Measuring benefit\n";
  return 0;
}
```

- **Remember:** State one invariant for `Measuring benefit` before you write code that uses it.
- **Common mistake:** Using `Measuring benefit` by copy-paste without knowing what it owns or when it is valid.

Practice: open `examples/07_*.cpp`, predict the output, change one line, re-predict.

## 8. std::function SBO

### Plain English

A lambda is a small unnamed function object. Capture `[=]` by value or `[&]` by reference carefully — referenced locals must outlive the lambda.

### Tiny code

```cpp
int factor = 2;
auto twice = [factor](int x) { return x * factor; };
std::vector<int> v{1,2,3};
std::sort(v.begin(), v.end(), [](int a, int b){ return a > b; });
```

- **Remember:** Do not capture locals by reference and return the lambda upward.
- **Common mistake:** Dangling captures after the stack frame ends.

Practice: open `examples/08_*.cpp`, predict the output, change one line, re-predict.

## 9. Tradeoffs

### Plain English

Today's idea — **Tradeoffs** — fits inside the wider theme of Small Buffer Optimization. Read it as a tool: what job does it do, what rules does it enforce, and what breaks if you ignore those rules?

### Tiny code

```cpp
// Explore: Tradeoffs
#include <iostream>
int main() {
  std::cout << "practice: Tradeoffs\n";
  return 0;
}
```

- **Remember:** State one invariant for `Tradeoffs` before you write code that uses it.
- **Common mistake:** Using `Tradeoffs` by copy-paste without knowing what it owns or when it is valid.

Practice: open `examples/09_*.cpp`, predict the output, change one line, re-predict.

## 10. Tiny sbo_string

### Plain English

Today's idea — **Tiny sbo_string** — fits inside the wider theme of Small Buffer Optimization. Read it as a tool: what job does it do, what rules does it enforce, and what breaks if you ignore those rules?

### Tiny code

```cpp
// Explore: Tiny sbo_string
#include <iostream>
int main() {
  std::cout << "practice: Tiny sbo_string\n";
  return 0;
}
```

- **Remember:** State one invariant for `Tiny sbo_string` before you write code that uses it.
- **Common mistake:** Using `Tiny sbo_string` by copy-paste without knowing what it owns or when it is valid.

Practice: open `examples/10_*.cpp`, predict the output, change one line, re-predict.

---

## What you should be able to do after Day 136

- Explain `Small Buffer Optimization` to a peer without looking at notes.
- Compile and run all 10 examples with `-std=c++17 -Wall -Wextra` (use newer flags only when the day needs C++20+).
- Answer the 5 questions in `questions.md` before peeking at `answers.md`.
- Write one tiny extra program that combines at least 3 of today's concepts.

Or open this day in the **Badsha hub** (`python3 hub/server.py`) and use Learn / Practice / Quiz tabs.
