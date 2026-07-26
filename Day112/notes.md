# Day 112 -- C++20 overview

Today's goal: understand **C++20 overview** in plain English, see a tiny code sample for each idea, then practice in `examples/`.

How to study this day:
1. Read each concept's **Plain English** section.
2. Skim the code sample -- predict what it does.
3. Run the matching file under `examples/`.
4. Only then try `questions.md`.

| # | Concept |
|--:|---------|
| 1 | Big themes of C++20 |
| 2 | Modules idea |
| 3 | Concepts idea |
| 4 | Ranges idea |
| 5 | Coroutines idea |
| 6 | calendar/timezone idea |
| 7 | span |
| 8 | format idea |
| 9 | Three-way comparison |
| 10 | Migration tips |

---

## 1. Big themes of C++20

### Plain English

Today's idea — **Big themes of C++20** — fits inside the wider theme of C++20 overview. Read it as a tool: what job does it do, what rules does it enforce, and what breaks if you ignore those rules?

### Tiny code

```cpp
// Explore: Big themes of C++20
#include <iostream>
int main() {
  std::cout << "practice: Big themes of C++20\n";
  return 0;
}
```

- **Remember:** State one invariant for `Big themes of C++20` before you write code that uses it.
- **Common mistake:** Using `Big themes of C++20` by copy-paste without knowing what it owns or when it is valid.

Practice: open `examples/01_*.cpp`, predict the output, change one line, re-predict.

## 2. Modules idea

### Plain English

Today's idea — **Modules idea** — fits inside the wider theme of C++20 overview. Read it as a tool: what job does it do, what rules does it enforce, and what breaks if you ignore those rules?

### Tiny code

```cpp
// Explore: Modules idea
#include <iostream>
int main() {
  std::cout << "practice: Modules idea\n";
  return 0;
}
```

- **Remember:** State one invariant for `Modules idea` before you write code that uses it.
- **Common mistake:** Using `Modules idea` by copy-paste without knowing what it owns or when it is valid.

Practice: open `examples/02_*.cpp`, predict the output, change one line, re-predict.

## 3. Concepts idea

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

Practice: open `examples/03_*.cpp`, predict the output, change one line, re-predict.

## 4. Ranges idea

### Plain English

Modern C++ (20+) adds safer views (`span`, ranges), clearer comparisons (`<=>`), and better formatting. Use them when your toolchain supports them; otherwise stick to C++17 patterns taught earlier.

### Tiny code

```cpp
// C++20 sketch
// std::span<int> s = arr;
// auto evens = v | std::views::filter([](int x){ return x % 2 == 0; });
```

- **Remember:** Check your compiler's C++20/23 support before relying on these.
- **Common mistake:** Assuming every machine in class/CI has full C++20 library support.

Practice: open `examples/04_*.cpp`, predict the output, change one line, re-predict.

## 5. Coroutines idea

### Plain English

Modern C++ (20+) adds safer views (`span`, ranges), clearer comparisons (`<=>`), and better formatting. Use them when your toolchain supports them; otherwise stick to C++17 patterns taught earlier.

### Tiny code

```cpp
// C++20 sketch
// std::span<int> s = arr;
// auto evens = v | std::views::filter([](int x){ return x % 2 == 0; });
```

- **Remember:** Check your compiler's C++20/23 support before relying on these.
- **Common mistake:** Assuming every machine in class/CI has full C++20 library support.

Practice: open `examples/05_*.cpp`, predict the output, change one line, re-predict.

## 6. calendar/timezone idea

### Plain English

Iterators are like advanced pointers into a container. Algorithms take `[begin, end)` half-open ranges. Know when inserts/erases invalidate them.

### Tiny code

```cpp
std::vector<int> v{1,2,3};
for (auto it = v.begin(); it != v.end(); ++it)
  std::cout << *it << ' ';
```

- **Remember:** After erase, use the iterator that `erase` returns.
- **Common mistake:** Incrementing an invalidated iterator → undefined behaviour.

Practice: open `examples/06_*.cpp`, predict the output, change one line, re-predict.

## 7. span

### Plain English

Modern C++ (20+) adds safer views (`span`, ranges), clearer comparisons (`<=>`), and better formatting. Use them when your toolchain supports them; otherwise stick to C++17 patterns taught earlier.

### Tiny code

```cpp
// C++20 sketch
// std::span<int> s = arr;
// auto evens = v | std::views::filter([](int x){ return x % 2 == 0; });
```

- **Remember:** Check your compiler's C++20/23 support before relying on these.
- **Common mistake:** Assuming every machine in class/CI has full C++20 library support.

Practice: open `examples/07_*.cpp`, predict the output, change one line, re-predict.

## 8. format idea

### Plain English

Modern C++ (20+) adds safer views (`span`, ranges), clearer comparisons (`<=>`), and better formatting. Use them when your toolchain supports them; otherwise stick to C++17 patterns taught earlier.

### Tiny code

```cpp
// C++20 sketch
// std::span<int> s = arr;
// auto evens = v | std::views::filter([](int x){ return x % 2 == 0; });
```

- **Remember:** Check your compiler's C++20/23 support before relying on these.
- **Common mistake:** Assuming every machine in class/CI has full C++20 library support.

Practice: open `examples/08_*.cpp`, predict the output, change one line, re-predict.

## 9. Three-way comparison

### Plain English

Today's idea — **Three-way comparison** — fits inside the wider theme of C++20 overview. Read it as a tool: what job does it do, what rules does it enforce, and what breaks if you ignore those rules?

### Tiny code

```cpp
// Explore: Three-way comparison
#include <iostream>
int main() {
  std::cout << "practice: Three-way comparison\n";
  return 0;
}
```

- **Remember:** State one invariant for `Three-way comparison` before you write code that uses it.
- **Common mistake:** Using `Three-way comparison` by copy-paste without knowing what it owns or when it is valid.

Practice: open `examples/09_*.cpp`, predict the output, change one line, re-predict.

## 10. Migration tips

### Plain English

Today's idea — **Migration tips** — fits inside the wider theme of C++20 overview. Read it as a tool: what job does it do, what rules does it enforce, and what breaks if you ignore those rules?

### Tiny code

```cpp
// Explore: Migration tips
#include <iostream>
int main() {
  std::cout << "practice: Migration tips\n";
  return 0;
}
```

- **Remember:** State one invariant for `Migration tips` before you write code that uses it.
- **Common mistake:** Using `Migration tips` by copy-paste without knowing what it owns or when it is valid.

Practice: open `examples/10_*.cpp`, predict the output, change one line, re-predict.

---

## What you should be able to do after Day 112

- Explain `C++20 overview` to a peer without looking at notes.
- Compile and run all 10 examples with `-std=c++17 -Wall -Wextra` (use newer flags only when the day needs C++20+).
- Answer the 5 questions in `questions.md` before peeking at `answers.md`.
- Write one tiny extra program that combines at least 3 of today's concepts.

Or open this day in the **Badsha hub** (`python3 hub/server.py`) and use Learn / Practice / Quiz tabs.
