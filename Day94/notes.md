# Day 94 -- Serialization basics

Today's goal: understand **Serialization basics** in plain English, see a tiny code sample for each idea, then practice in `examples/`.

How to study this day:
1. Read each concept's **Plain English** section.
2. Skim the code sample -- predict what it does.
3. Run the matching file under `examples/`.
4. Only then try `questions.md`.

| # | Concept |
|--:|---------|
| 1 | Binary layouts |
| 2 | Endianness |
| 3 | Length prefixes |
| 4 | Text formats (CSV/JSON idea) |
| 5 | Versioning |
| 6 | Padding traps |
| 7 | Checksums |
| 8 | Schema evolution |
| 9 | Security (untrusted input) |
| 10 | A TLV encoder |

---

## 1. Binary layouts

### Plain English

Today's idea — **Binary layouts** — fits inside the wider theme of Serialization basics. Read it as a tool: what job does it do, what rules does it enforce, and what breaks if you ignore those rules?

### Tiny code

```cpp
// Explore: Binary layouts
#include <iostream>
int main() {
  std::cout << "practice: Binary layouts\n";
  return 0;
}
```

- **Remember:** State one invariant for `Binary layouts` before you write code that uses it.
- **Common mistake:** Using `Binary layouts` by copy-paste without knowing what it owns or when it is valid.

Practice: open `examples/01_*.cpp`, predict the output, change one line, re-predict.

## 2. Endianness

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

Practice: open `examples/02_*.cpp`, predict the output, change one line, re-predict.

## 3. Length prefixes

### Plain English

These patterns turn nested loops into linear or logarithmic passes. Binary search needs a monotonic predicate. Two pointers / sliding windows need a clear invariant.

### Tiny code

```cpp
auto it = std::lower_bound(v.begin(), v.end(), x);
bool found = it != v.end() && *it == x;
```

- **Remember:** Write down the invariant before coding the loop.
- **Common mistake:** Off-by-one errors in binary search bounds (`lo`/`hi`).

Practice: open `examples/03_*.cpp`, predict the output, change one line, re-predict.

## 4. Text formats (CSV/JSON idea)

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

## 5. Versioning

### Plain English

Today's idea — **Versioning** — fits inside the wider theme of Serialization basics. Read it as a tool: what job does it do, what rules does it enforce, and what breaks if you ignore those rules?

### Tiny code

```cpp
// Explore: Versioning
#include <iostream>
int main() {
  std::cout << "practice: Versioning\n";
  return 0;
}
```

- **Remember:** State one invariant for `Versioning` before you write code that uses it.
- **Common mistake:** Using `Versioning` by copy-paste without knowing what it owns or when it is valid.

Practice: open `examples/05_*.cpp`, predict the output, change one line, re-predict.

## 6. Padding traps

### Plain English

Today's idea — **Padding traps** — fits inside the wider theme of Serialization basics. Read it as a tool: what job does it do, what rules does it enforce, and what breaks if you ignore those rules?

### Tiny code

```cpp
// Explore: Padding traps
#include <iostream>
int main() {
  std::cout << "practice: Padding traps\n";
  return 0;
}
```

- **Remember:** State one invariant for `Padding traps` before you write code that uses it.
- **Common mistake:** Using `Padding traps` by copy-paste without knowing what it owns or when it is valid.

Practice: open `examples/06_*.cpp`, predict the output, change one line, re-predict.

## 7. Checksums

### Plain English

Today's idea — **Checksums** — fits inside the wider theme of Serialization basics. Read it as a tool: what job does it do, what rules does it enforce, and what breaks if you ignore those rules?

### Tiny code

```cpp
// Explore: Checksums
#include <iostream>
int main() {
  std::cout << "practice: Checksums\n";
  return 0;
}
```

- **Remember:** State one invariant for `Checksums` before you write code that uses it.
- **Common mistake:** Using `Checksums` by copy-paste without knowing what it owns or when it is valid.

Practice: open `examples/07_*.cpp`, predict the output, change one line, re-predict.

## 8. Schema evolution

### Plain English

Today's idea — **Schema evolution** — fits inside the wider theme of Serialization basics. Read it as a tool: what job does it do, what rules does it enforce, and what breaks if you ignore those rules?

### Tiny code

```cpp
// Explore: Schema evolution
#include <iostream>
int main() {
  std::cout << "practice: Schema evolution\n";
  return 0;
}
```

- **Remember:** State one invariant for `Schema evolution` before you write code that uses it.
- **Common mistake:** Using `Schema evolution` by copy-paste without knowing what it owns or when it is valid.

Practice: open `examples/08_*.cpp`, predict the output, change one line, re-predict.

## 9. Security (untrusted input)

### Plain English

Today's idea — **Security (untrusted input)** — fits inside the wider theme of Serialization basics. Read it as a tool: what job does it do, what rules does it enforce, and what breaks if you ignore those rules?

### Tiny code

```cpp
// Explore: Security (untrusted input)
#include <iostream>
int main() {
  std::cout << "practice: Security (untrusted input)\n";
  return 0;
}
```

- **Remember:** State one invariant for `Security (untrusted input)` before you write code that uses it.
- **Common mistake:** Using `Security (untrusted input)` by copy-paste without knowing what it owns or when it is valid.

Practice: open `examples/09_*.cpp`, predict the output, change one line, re-predict.

## 10. A TLV encoder

### Plain English

Today's idea — **A TLV encoder** — fits inside the wider theme of Serialization basics. Read it as a tool: what job does it do, what rules does it enforce, and what breaks if you ignore those rules?

### Tiny code

```cpp
// Explore: A TLV encoder
#include <iostream>
int main() {
  std::cout << "practice: A TLV encoder\n";
  return 0;
}
```

- **Remember:** State one invariant for `A TLV encoder` before you write code that uses it.
- **Common mistake:** Using `A TLV encoder` by copy-paste without knowing what it owns or when it is valid.

Practice: open `examples/10_*.cpp`, predict the output, change one line, re-predict.

---

## What you should be able to do after Day 94

- Explain `Serialization basics` to a peer without looking at notes.
- Compile and run all 10 examples with `-std=c++17 -Wall -Wextra` (use newer flags only when the day needs C++20+).
- Answer the 5 questions in `questions.md` before peeking at `answers.md`.
- Write one tiny extra program that combines at least 3 of today's concepts.

Or open this day in the **Badsha hub** (`python3 hub/server.py`) and use Learn / Practice / Quiz tabs.
