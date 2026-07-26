# Day 69 -- Mixin & traits

Today's goal: understand **Mixin & traits** in plain English, see a tiny code sample for each idea, then practice in `examples/`.

How to study this day:
1. Read each concept's **Plain English** section.
2. Skim the code sample -- predict what it does.
3. Run the matching file under `examples/`.
4. Only then try `questions.md`.

| # | Concept |
|--:|---------|
| 1 | Traits classes |
| 2 | iterator_traits |
| 3 | char_traits idea |
| 4 | Custom traits |
| 5 | Mixins via templates |
| 6 | Empty base optimization |
| 7 | Detecting members |
| 8 | Tag dispatch |
| 9 | Combining traits |
| 10 | A serialize traits |

---

## 1. Traits classes

### Plain English

A class bundles data with the operations that keep it valid. Constructors establish invariants; destructors release resources. `struct` defaults to public, `class` to private — that is the main difference.

### Tiny code

```cpp
class Counter {
  int n_ = 0;
public:
  void inc() { ++n_; }
  int get() const { return n_; }
};
```

- **Remember:** Keep data private if invariants matter; expose operations.
- **Common mistake:** Public data fields that let callers break class invariants.

Practice: open `examples/01_*.cpp`, predict the output, change one line, re-predict.

## 2. iterator_traits

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

## 3. char_traits idea

### Plain English

Today's idea — **char_traits idea** — fits inside the wider theme of Mixin & traits. Read it as a tool: what job does it do, what rules does it enforce, and what breaks if you ignore those rules?

### Tiny code

```cpp
// Explore: char_traits idea
#include <iostream>
int main() {
  std::cout << "practice: char_traits idea\n";
  return 0;
}
```

- **Remember:** State one invariant for `char_traits idea` before you write code that uses it.
- **Common mistake:** Using `char_traits idea` by copy-paste without knowing what it owns or when it is valid.

Practice: open `examples/03_*.cpp`, predict the output, change one line, re-predict.

## 4. Custom traits

### Plain English

Today's idea — **Custom traits** — fits inside the wider theme of Mixin & traits. Read it as a tool: what job does it do, what rules does it enforce, and what breaks if you ignore those rules?

### Tiny code

```cpp
// Explore: Custom traits
#include <iostream>
int main() {
  std::cout << "practice: Custom traits\n";
  return 0;
}
```

- **Remember:** State one invariant for `Custom traits` before you write code that uses it.
- **Common mistake:** Using `Custom traits` by copy-paste without knowing what it owns or when it is valid.

Practice: open `examples/04_*.cpp`, predict the output, change one line, re-predict.

## 5. Mixins via templates

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

Practice: open `examples/05_*.cpp`, predict the output, change one line, re-predict.

## 6. Empty base optimization

### Plain English

Today's idea — **Empty base optimization** — fits inside the wider theme of Mixin & traits. Read it as a tool: what job does it do, what rules does it enforce, and what breaks if you ignore those rules?

### Tiny code

```cpp
// Explore: Empty base optimization
#include <iostream>
int main() {
  std::cout << "practice: Empty base optimization\n";
  return 0;
}
```

- **Remember:** State one invariant for `Empty base optimization` before you write code that uses it.
- **Common mistake:** Using `Empty base optimization` by copy-paste without knowing what it owns or when it is valid.

Practice: open `examples/06_*.cpp`, predict the output, change one line, re-predict.

## 7. Detecting members

### Plain English

Today's idea — **Detecting members** — fits inside the wider theme of Mixin & traits. Read it as a tool: what job does it do, what rules does it enforce, and what breaks if you ignore those rules?

### Tiny code

```cpp
// Explore: Detecting members
#include <iostream>
int main() {
  std::cout << "practice: Detecting members\n";
  return 0;
}
```

- **Remember:** State one invariant for `Detecting members` before you write code that uses it.
- **Common mistake:** Using `Detecting members` by copy-paste without knowing what it owns or when it is valid.

Practice: open `examples/07_*.cpp`, predict the output, change one line, re-predict.

## 8. Tag dispatch

### Plain English

Today's idea — **Tag dispatch** — fits inside the wider theme of Mixin & traits. Read it as a tool: what job does it do, what rules does it enforce, and what breaks if you ignore those rules?

### Tiny code

```cpp
// Explore: Tag dispatch
#include <iostream>
int main() {
  std::cout << "practice: Tag dispatch\n";
  return 0;
}
```

- **Remember:** State one invariant for `Tag dispatch` before you write code that uses it.
- **Common mistake:** Using `Tag dispatch` by copy-paste without knowing what it owns or when it is valid.

Practice: open `examples/08_*.cpp`, predict the output, change one line, re-predict.

## 9. Combining traits

### Plain English

Today's idea — **Combining traits** — fits inside the wider theme of Mixin & traits. Read it as a tool: what job does it do, what rules does it enforce, and what breaks if you ignore those rules?

### Tiny code

```cpp
// Explore: Combining traits
#include <iostream>
int main() {
  std::cout << "practice: Combining traits\n";
  return 0;
}
```

- **Remember:** State one invariant for `Combining traits` before you write code that uses it.
- **Common mistake:** Using `Combining traits` by copy-paste without knowing what it owns or when it is valid.

Practice: open `examples/09_*.cpp`, predict the output, change one line, re-predict.

## 10. A serialize traits

### Plain English

Today's idea — **A serialize traits** — fits inside the wider theme of Mixin & traits. Read it as a tool: what job does it do, what rules does it enforce, and what breaks if you ignore those rules?

### Tiny code

```cpp
// Explore: A serialize traits
#include <iostream>
int main() {
  std::cout << "practice: A serialize traits\n";
  return 0;
}
```

- **Remember:** State one invariant for `A serialize traits` before you write code that uses it.
- **Common mistake:** Using `A serialize traits` by copy-paste without knowing what it owns or when it is valid.

Practice: open `examples/10_*.cpp`, predict the output, change one line, re-predict.

---

## What you should be able to do after Day 69

- Explain `Mixin & traits` to a peer without looking at notes.
- Compile and run all 10 examples with `-std=c++17 -Wall -Wextra` (use newer flags only when the day needs C++20+).
- Answer the 5 questions in `questions.md` before peeking at `answers.md`.
- Write one tiny extra program that combines at least 3 of today's concepts.

Or open this day in the **Badsha hub** (`python3 hub/server.py`) and use Learn / Practice / Quiz tabs.
