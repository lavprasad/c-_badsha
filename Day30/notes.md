# Day 30 -- std::pair & std::tuple

Today's goal: understand **std::pair & std::tuple** in plain English, see a tiny code sample for each idea, then practice in `examples/`.

How to study this day:
1. Read each concept's **Plain English** section.
2. Skim the code sample -- predict what it does.
3. Run the matching file under `examples/`.
4. Only then try `questions.md`.

| # | Concept |
|--:|---------|
| 1 | std::pair basics |
| 2 | std::make_pair |
| 3 | std::tuple |
| 4 | std::get and structured bindings |
| 5 | tie for unpacking |
| 6 | Comparing pairs/tuples |
| 7 | Returning multiple values |
| 8 | tuple_size / tuple_element idea |
| 9 | When to prefer a struct |
| 10 | A key-value demo |

---

## 1. std::pair basics

### Plain English

Today's idea — **std::pair basics** — fits inside the wider theme of std::pair & std::tuple. Read it as a tool: what job does it do, what rules does it enforce, and what breaks if you ignore those rules?

### Tiny code

```cpp
// Explore: std::pair basics
#include <iostream>
int main() {
  std::cout << "practice: std::pair basics\n";
  return 0;
}
```

- **Remember:** State one invariant for `std::pair basics` before you write code that uses it.
- **Common mistake:** Using `std::pair basics` by copy-paste without knowing what it owns or when it is valid.

Practice: open `examples/01_*.cpp`, predict the output, change one line, re-predict.

## 2. std::make_pair

### Plain English

Today's idea — **std::make_pair** — fits inside the wider theme of std::pair & std::tuple. Read it as a tool: what job does it do, what rules does it enforce, and what breaks if you ignore those rules?

### Tiny code

```cpp
// Explore: std::make_pair
#include <iostream>
int main() {
  std::cout << "practice: std::make_pair\n";
  return 0;
}
```

- **Remember:** State one invariant for `std::make_pair` before you write code that uses it.
- **Common mistake:** Using `std::make_pair` by copy-paste without knowing what it owns or when it is valid.

Practice: open `examples/02_*.cpp`, predict the output, change one line, re-predict.

## 3. std::tuple

### Plain English

Today's idea — **std::tuple** — fits inside the wider theme of std::pair & std::tuple. Read it as a tool: what job does it do, what rules does it enforce, and what breaks if you ignore those rules?

### Tiny code

```cpp
// Explore: std::tuple
#include <iostream>
int main() {
  std::cout << "practice: std::tuple\n";
  return 0;
}
```

- **Remember:** State one invariant for `std::tuple` before you write code that uses it.
- **Common mistake:** Using `std::tuple` by copy-paste without knowing what it owns or when it is valid.

Practice: open `examples/03_*.cpp`, predict the output, change one line, re-predict.

## 4. std::get and structured bindings

### Plain English

Sockets are OS endpoints for network bytes. TCP gives a reliable stream; you still must frame messages yourself. Always check return codes and handle partial reads/writes.

### Tiny code

```cpp
// Conceptual — details are OS-specific
// sock = socket(...);
// connect(sock, ...);
// send(sock, buf, n, 0);
```

- **Remember:** Network data is bytes; convert integers with endian helpers.
- **Common mistake:** Assuming one `recv` returns one complete application message.

Practice: open `examples/04_*.cpp`, predict the output, change one line, re-predict.

## 5. tie for unpacking

### Plain English

Today's idea — **tie for unpacking** — fits inside the wider theme of std::pair & std::tuple. Read it as a tool: what job does it do, what rules does it enforce, and what breaks if you ignore those rules?

### Tiny code

```cpp
// Explore: tie for unpacking
#include <iostream>
int main() {
  std::cout << "practice: tie for unpacking\n";
  return 0;
}
```

- **Remember:** State one invariant for `tie for unpacking` before you write code that uses it.
- **Common mistake:** Using `tie for unpacking` by copy-paste without knowing what it owns or when it is valid.

Practice: open `examples/05_*.cpp`, predict the output, change one line, re-predict.

## 6. Comparing pairs/tuples

### Plain English

Today's idea — **Comparing pairs/tuples** — fits inside the wider theme of std::pair & std::tuple. Read it as a tool: what job does it do, what rules does it enforce, and what breaks if you ignore those rules?

### Tiny code

```cpp
// Explore: Comparing pairs/tuples
#include <iostream>
int main() {
  std::cout << "practice: Comparing pairs/tuples\n";
  return 0;
}
```

- **Remember:** State one invariant for `Comparing pairs/tuples` before you write code that uses it.
- **Common mistake:** Using `Comparing pairs/tuples` by copy-paste without knowing what it owns or when it is valid.

Practice: open `examples/06_*.cpp`, predict the output, change one line, re-predict.

## 7. Returning multiple values

### Plain English

Today's idea — **Returning multiple values** — fits inside the wider theme of std::pair & std::tuple. Read it as a tool: what job does it do, what rules does it enforce, and what breaks if you ignore those rules?

### Tiny code

```cpp
// Explore: Returning multiple values
#include <iostream>
int main() {
  std::cout << "practice: Returning multiple values\n";
  return 0;
}
```

- **Remember:** State one invariant for `Returning multiple values` before you write code that uses it.
- **Common mistake:** Using `Returning multiple values` by copy-paste without knowing what it owns or when it is valid.

Practice: open `examples/07_*.cpp`, predict the output, change one line, re-predict.

## 8. tuple_size / tuple_element idea

### Plain English

Today's idea — **tuple_size / tuple_element idea** — fits inside the wider theme of std::pair & std::tuple. Read it as a tool: what job does it do, what rules does it enforce, and what breaks if you ignore those rules?

### Tiny code

```cpp
// Explore: tuple_size / tuple_element idea
#include <iostream>
int main() {
  std::cout << "practice: tuple_size / tuple_element idea\n";
  return 0;
}
```

- **Remember:** State one invariant for `tuple_size / tuple_element idea` before you write code that uses it.
- **Common mistake:** Using `tuple_size / tuple_element idea` by copy-paste without knowing what it owns or when it is valid.

Practice: open `examples/08_*.cpp`, predict the output, change one line, re-predict.

## 9. When to prefer a struct

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

Practice: open `examples/09_*.cpp`, predict the output, change one line, re-predict.

## 10. A key-value demo

### Plain English

Today's idea — **A key-value demo** — fits inside the wider theme of std::pair & std::tuple. Read it as a tool: what job does it do, what rules does it enforce, and what breaks if you ignore those rules?

### Tiny code

```cpp
// Explore: A key-value demo
#include <iostream>
int main() {
  std::cout << "practice: A key-value demo\n";
  return 0;
}
```

- **Remember:** State one invariant for `A key-value demo` before you write code that uses it.
- **Common mistake:** Using `A key-value demo` by copy-paste without knowing what it owns or when it is valid.

Practice: open `examples/10_*.cpp`, predict the output, change one line, re-predict.

---

## What you should be able to do after Day 30

- Explain `std::pair & std::tuple` to a peer without looking at notes.
- Compile and run all 10 examples with `-std=c++17 -Wall -Wextra` (use newer flags only when the day needs C++20+).
- Answer the 5 questions in `questions.md` before peeking at `answers.md`.
- Write one tiny extra program that combines at least 3 of today's concepts.

Or open this day in the **Badsha hub** (`python3 hub/server.py`) and use Learn / Practice / Quiz tabs.
