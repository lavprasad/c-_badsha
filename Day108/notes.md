# Day 108 -- String encoding & Unicode lite

Today's goal: understand **String encoding & Unicode lite** in plain English, see a tiny code sample for each idea, then practice in `examples/`.

How to study this day:
1. Read each concept's **Plain English** section.
2. Skim the code sample -- predict what it does.
3. Run the matching file under `examples/`.
4. Only then try `questions.md`.

| # | Concept |
|--:|---------|
| 1 | Bytes vs characters |
| 2 | UTF-8 |
| 3 | Code points vs graphemes |
| 4 | char8_t idea (C++20) |
| 5 | Validation |
| 6 | Normalization idea |
| 7 | Locale dangers |
| 8 | Wchar portability |
| 9 | API recommendations |
| 10 | Count UTF-8 code points naive |

---

## 1. Bytes vs characters

### Plain English

Today's idea — **Bytes vs characters** — fits inside the wider theme of String encoding & Unicode lite. Read it as a tool: what job does it do, what rules does it enforce, and what breaks if you ignore those rules?

### Tiny code

```cpp
// Explore: Bytes vs characters
#include <iostream>
int main() {
  std::cout << "practice: Bytes vs characters\n";
  return 0;
}
```

- **Remember:** State one invariant for `Bytes vs characters` before you write code that uses it.
- **Common mistake:** Using `Bytes vs characters` by copy-paste without knowing what it owns or when it is valid.

Practice: open `examples/01_*.cpp`, predict the output, change one line, re-predict.

## 2. UTF-8

### Plain English

Today's idea — **UTF-8** — fits inside the wider theme of String encoding & Unicode lite. Read it as a tool: what job does it do, what rules does it enforce, and what breaks if you ignore those rules?

### Tiny code

```cpp
// Explore: UTF-8
#include <iostream>
int main() {
  std::cout << "practice: UTF-8\n";
  return 0;
}
```

- **Remember:** State one invariant for `UTF-8` before you write code that uses it.
- **Common mistake:** Using `UTF-8` by copy-paste without knowing what it owns or when it is valid.

Practice: open `examples/02_*.cpp`, predict the output, change one line, re-predict.

## 3. Code points vs graphemes

### Plain English

Graphs are nodes plus edges. BFS finds shortest paths in unweighted graphs; Dijkstra handles non-negative weights. Union-Find tracks connected components efficiently.

### Tiny code

```cpp
// BFS sketch
std::queue<int> q;
q.push(start);
seen[start] = true;
```

- **Remember:** Pick adjacency lists unless the graph is tiny and dense.
- **Common mistake:** Forgetting to mark nodes visited → infinite loops.

Practice: open `examples/03_*.cpp`, predict the output, change one line, re-predict.

## 4. char8_t idea (C++20)

### Plain English

Today's idea — **char8_t idea (C++20)** — fits inside the wider theme of String encoding & Unicode lite. Read it as a tool: what job does it do, what rules does it enforce, and what breaks if you ignore those rules?

### Tiny code

```cpp
// Explore: char8_t idea (C++20)
#include <iostream>
int main() {
  std::cout << "practice: char8_t idea (C++20)\n";
  return 0;
}
```

- **Remember:** State one invariant for `char8_t idea (C++20)` before you write code that uses it.
- **Common mistake:** Using `char8_t idea (C++20)` by copy-paste without knowing what it owns or when it is valid.

Practice: open `examples/04_*.cpp`, predict the output, change one line, re-predict.

## 5. Validation

### Plain English

Today's idea — **Validation** — fits inside the wider theme of String encoding & Unicode lite. Read it as a tool: what job does it do, what rules does it enforce, and what breaks if you ignore those rules?

### Tiny code

```cpp
// Explore: Validation
#include <iostream>
int main() {
  std::cout << "practice: Validation\n";
  return 0;
}
```

- **Remember:** State one invariant for `Validation` before you write code that uses it.
- **Common mistake:** Using `Validation` by copy-paste without knowing what it owns or when it is valid.

Practice: open `examples/05_*.cpp`, predict the output, change one line, re-predict.

## 6. Normalization idea

### Plain English

Today's idea — **Normalization idea** — fits inside the wider theme of String encoding & Unicode lite. Read it as a tool: what job does it do, what rules does it enforce, and what breaks if you ignore those rules?

### Tiny code

```cpp
// Explore: Normalization idea
#include <iostream>
int main() {
  std::cout << "practice: Normalization idea\n";
  return 0;
}
```

- **Remember:** State one invariant for `Normalization idea` before you write code that uses it.
- **Common mistake:** Using `Normalization idea` by copy-paste without knowing what it owns or when it is valid.

Practice: open `examples/06_*.cpp`, predict the output, change one line, re-predict.

## 7. Locale dangers

### Plain English

Today's idea — **Locale dangers** — fits inside the wider theme of String encoding & Unicode lite. Read it as a tool: what job does it do, what rules does it enforce, and what breaks if you ignore those rules?

### Tiny code

```cpp
// Explore: Locale dangers
#include <iostream>
int main() {
  std::cout << "practice: Locale dangers\n";
  return 0;
}
```

- **Remember:** State one invariant for `Locale dangers` before you write code that uses it.
- **Common mistake:** Using `Locale dangers` by copy-paste without knowing what it owns or when it is valid.

Practice: open `examples/07_*.cpp`, predict the output, change one line, re-predict.

## 8. Wchar portability

### Plain English

Today's idea — **Wchar portability** — fits inside the wider theme of String encoding & Unicode lite. Read it as a tool: what job does it do, what rules does it enforce, and what breaks if you ignore those rules?

### Tiny code

```cpp
// Explore: Wchar portability
#include <iostream>
int main() {
  std::cout << "practice: Wchar portability\n";
  return 0;
}
```

- **Remember:** State one invariant for `Wchar portability` before you write code that uses it.
- **Common mistake:** Using `Wchar portability` by copy-paste without knowing what it owns or when it is valid.

Practice: open `examples/08_*.cpp`, predict the output, change one line, re-predict.

## 9. API recommendations

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

Practice: open `examples/09_*.cpp`, predict the output, change one line, re-predict.

## 10. Count UTF-8 code points naive

### Plain English

Today's idea — **Count UTF-8 code points naive** — fits inside the wider theme of String encoding & Unicode lite. Read it as a tool: what job does it do, what rules does it enforce, and what breaks if you ignore those rules?

### Tiny code

```cpp
// Explore: Count UTF-8 code points naive
#include <iostream>
int main() {
  std::cout << "practice: Count UTF-8 code points naive\n";
  return 0;
}
```

- **Remember:** State one invariant for `Count UTF-8 code points naive` before you write code that uses it.
- **Common mistake:** Using `Count UTF-8 code points naive` by copy-paste without knowing what it owns or when it is valid.

Practice: open `examples/10_*.cpp`, predict the output, change one line, re-predict.

---

## What you should be able to do after Day 108

- Explain `String encoding & Unicode lite` to a peer without looking at notes.
- Compile and run all 10 examples with `-std=c++17 -Wall -Wextra` (use newer flags only when the day needs C++20+).
- Answer the 5 questions in `questions.md` before peeking at `answers.md`.
- Write one tiny extra program that combines at least 3 of today's concepts.

Or open this day in the **Badsha hub** (`python3 hub/server.py`) and use Learn / Practice / Quiz tabs.
