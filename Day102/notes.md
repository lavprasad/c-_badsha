# Day 102 -- SIMD intuition

Today's goal: understand **SIMD intuition** in plain English, see a tiny code sample for each idea, then practice in `examples/`.

How to study this day:
1. Read each concept's **Plain English** section.
2. Skim the code sample -- predict what it does.
3. Run the matching file under `examples/`.
4. Only then try `questions.md`.

| # | Concept |
|--:|---------|
| 1 | What SIMD is |
| 2 | Vector registers idea |
| 3 | Auto-vectorization |
| 4 | Alignment |
| 5 | Horizontal vs vertical |
| 6 | When SIMD helps |
| 7 | Portability |
| 8 | Intrinsics caution |
| 9 | Verify correctness first |
| 10 | Sum with compiler help |

---

## 1. What SIMD is

### Plain English

Today's idea — **What SIMD is** — fits inside the wider theme of SIMD intuition. Read it as a tool: what job does it do, what rules does it enforce, and what breaks if you ignore those rules?

### Tiny code

```cpp
// Explore: What SIMD is
#include <iostream>
int main() {
  std::cout << "practice: What SIMD is\n";
  return 0;
}
```

- **Remember:** State one invariant for `What SIMD is` before you write code that uses it.
- **Common mistake:** Using `What SIMD is` by copy-paste without knowing what it owns or when it is valid.

Practice: open `examples/01_*.cpp`, predict the output, change one line, re-predict.

## 2. Vector registers idea

### Plain English

Today's idea — **Vector registers idea** — fits inside the wider theme of SIMD intuition. Read it as a tool: what job does it do, what rules does it enforce, and what breaks if you ignore those rules?

### Tiny code

```cpp
// Explore: Vector registers idea
#include <iostream>
int main() {
  std::cout << "practice: Vector registers idea\n";
  return 0;
}
```

- **Remember:** State one invariant for `Vector registers idea` before you write code that uses it.
- **Common mistake:** Using `Vector registers idea` by copy-paste without knowing what it owns or when it is valid.

Practice: open `examples/02_*.cpp`, predict the output, change one line, re-predict.

## 3. Auto-vectorization

### Plain English

Today's idea — **Auto-vectorization** — fits inside the wider theme of SIMD intuition. Read it as a tool: what job does it do, what rules does it enforce, and what breaks if you ignore those rules?

### Tiny code

```cpp
// Explore: Auto-vectorization
#include <iostream>
int main() {
  std::cout << "practice: Auto-vectorization\n";
  return 0;
}
```

- **Remember:** State one invariant for `Auto-vectorization` before you write code that uses it.
- **Common mistake:** Using `Auto-vectorization` by copy-paste without knowing what it owns or when it is valid.

Practice: open `examples/03_*.cpp`, predict the output, change one line, re-predict.

## 4. Alignment

### Plain English

Today's idea — **Alignment** — fits inside the wider theme of SIMD intuition. Read it as a tool: what job does it do, what rules does it enforce, and what breaks if you ignore those rules?

### Tiny code

```cpp
// Explore: Alignment
#include <iostream>
int main() {
  std::cout << "practice: Alignment\n";
  return 0;
}
```

- **Remember:** State one invariant for `Alignment` before you write code that uses it.
- **Common mistake:** Using `Alignment` by copy-paste without knowing what it owns or when it is valid.

Practice: open `examples/04_*.cpp`, predict the output, change one line, re-predict.

## 5. Horizontal vs vertical

### Plain English

Today's idea — **Horizontal vs vertical** — fits inside the wider theme of SIMD intuition. Read it as a tool: what job does it do, what rules does it enforce, and what breaks if you ignore those rules?

### Tiny code

```cpp
// Explore: Horizontal vs vertical
#include <iostream>
int main() {
  std::cout << "practice: Horizontal vs vertical\n";
  return 0;
}
```

- **Remember:** State one invariant for `Horizontal vs vertical` before you write code that uses it.
- **Common mistake:** Using `Horizontal vs vertical` by copy-paste without knowing what it owns or when it is valid.

Practice: open `examples/05_*.cpp`, predict the output, change one line, re-predict.

## 6. When SIMD helps

### Plain English

Today's idea — **When SIMD helps** — fits inside the wider theme of SIMD intuition. Read it as a tool: what job does it do, what rules does it enforce, and what breaks if you ignore those rules?

### Tiny code

```cpp
// Explore: When SIMD helps
#include <iostream>
int main() {
  std::cout << "practice: When SIMD helps\n";
  return 0;
}
```

- **Remember:** State one invariant for `When SIMD helps` before you write code that uses it.
- **Common mistake:** Using `When SIMD helps` by copy-paste without knowing what it owns or when it is valid.

Practice: open `examples/06_*.cpp`, predict the output, change one line, re-predict.

## 7. Portability

### Plain English

Today's idea — **Portability** — fits inside the wider theme of SIMD intuition. Read it as a tool: what job does it do, what rules does it enforce, and what breaks if you ignore those rules?

### Tiny code

```cpp
// Explore: Portability
#include <iostream>
int main() {
  std::cout << "practice: Portability\n";
  return 0;
}
```

- **Remember:** State one invariant for `Portability` before you write code that uses it.
- **Common mistake:** Using `Portability` by copy-paste without knowing what it owns or when it is valid.

Practice: open `examples/07_*.cpp`, predict the output, change one line, re-predict.

## 8. Intrinsics caution

### Plain English

Today's idea — **Intrinsics caution** — fits inside the wider theme of SIMD intuition. Read it as a tool: what job does it do, what rules does it enforce, and what breaks if you ignore those rules?

### Tiny code

```cpp
// Explore: Intrinsics caution
#include <iostream>
int main() {
  std::cout << "practice: Intrinsics caution\n";
  return 0;
}
```

- **Remember:** State one invariant for `Intrinsics caution` before you write code that uses it.
- **Common mistake:** Using `Intrinsics caution` by copy-paste without knowing what it owns or when it is valid.

Practice: open `examples/08_*.cpp`, predict the output, change one line, re-predict.

## 9. Verify correctness first

### Plain English

Today's idea — **Verify correctness first** — fits inside the wider theme of SIMD intuition. Read it as a tool: what job does it do, what rules does it enforce, and what breaks if you ignore those rules?

### Tiny code

```cpp
// Explore: Verify correctness first
#include <iostream>
int main() {
  std::cout << "practice: Verify correctness first\n";
  return 0;
}
```

- **Remember:** State one invariant for `Verify correctness first` before you write code that uses it.
- **Common mistake:** Using `Verify correctness first` by copy-paste without knowing what it owns or when it is valid.

Practice: open `examples/09_*.cpp`, predict the output, change one line, re-predict.

## 10. Sum with compiler help

### Plain English

Today's idea — **Sum with compiler help** — fits inside the wider theme of SIMD intuition. Read it as a tool: what job does it do, what rules does it enforce, and what breaks if you ignore those rules?

### Tiny code

```cpp
// Explore: Sum with compiler help
#include <iostream>
int main() {
  std::cout << "practice: Sum with compiler help\n";
  return 0;
}
```

- **Remember:** State one invariant for `Sum with compiler help` before you write code that uses it.
- **Common mistake:** Using `Sum with compiler help` by copy-paste without knowing what it owns or when it is valid.

Practice: open `examples/10_*.cpp`, predict the output, change one line, re-predict.

---

## What you should be able to do after Day 102

- Explain `SIMD intuition` to a peer without looking at notes.
- Compile and run all 10 examples with `-std=c++17 -Wall -Wextra` (use newer flags only when the day needs C++20+).
- Answer the 5 questions in `questions.md` before peeking at `answers.md`.
- Write one tiny extra program that combines at least 3 of today's concepts.

Or open this day in the **Badsha hub** (`python3 hub/server.py`) and use Learn / Practice / Quiz tabs.
