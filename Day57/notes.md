# Day 57 -- Static members

Today's goal: understand **Static members** in plain English, see a tiny code sample for each idea, then practice in `examples/`.

How to study this day:
1. Read each concept's **Plain English** section.
2. Skim the code sample -- predict what it does.
3. Run the matching file under `examples/`.
4. Only then try `questions.md`.

| # | Concept |
|--:|---------|
| 1 | static data members |
| 2 | static member functions |
| 3 | Initialization order |
| 4 | Meyer's singleton |
| 5 | static in .cpp |
| 6 | constexpr static |
| 7 | Thread notes on statics |
| 8 | Counting instances |
| 9 | Factory with static |
| 10 | Avoiding global state |

---

## 1. static data members

### Plain English

Today's idea — **static data members** — fits inside the wider theme of Static members. Read it as a tool: what job does it do, what rules does it enforce, and what breaks if you ignore those rules?

### Tiny code

```cpp
// Explore: static data members
#include <iostream>
int main() {
  std::cout << "practice: static data members\n";
  return 0;
}
```

- **Remember:** State one invariant for `static data members` before you write code that uses it.
- **Common mistake:** Using `static data members` by copy-paste without knowing what it owns or when it is valid.

Practice: open `examples/01_*.cpp`, predict the output, change one line, re-predict.

## 2. static member functions

### Plain English

Today's idea — **static member functions** — fits inside the wider theme of Static members. Read it as a tool: what job does it do, what rules does it enforce, and what breaks if you ignore those rules?

### Tiny code

```cpp
// Explore: static member functions
#include <iostream>
int main() {
  std::cout << "practice: static member functions\n";
  return 0;
}
```

- **Remember:** State one invariant for `static member functions` before you write code that uses it.
- **Common mistake:** Using `static member functions` by copy-paste without knowing what it owns or when it is valid.

Practice: open `examples/02_*.cpp`, predict the output, change one line, re-predict.

## 3. Initialization order

### Plain English

Today's idea — **Initialization order** — fits inside the wider theme of Static members. Read it as a tool: what job does it do, what rules does it enforce, and what breaks if you ignore those rules?

### Tiny code

```cpp
// Explore: Initialization order
#include <iostream>
int main() {
  std::cout << "practice: Initialization order\n";
  return 0;
}
```

- **Remember:** State one invariant for `Initialization order` before you write code that uses it.
- **Common mistake:** Using `Initialization order` by copy-paste without knowing what it owns or when it is valid.

Practice: open `examples/03_*.cpp`, predict the output, change one line, re-predict.

## 4. Meyer's singleton

### Plain English

Today's idea — **Meyer's singleton** — fits inside the wider theme of Static members. Read it as a tool: what job does it do, what rules does it enforce, and what breaks if you ignore those rules?

### Tiny code

```cpp
// Explore: Meyer's singleton
#include <iostream>
int main() {
  std::cout << "practice: Meyer's singleton\n";
  return 0;
}
```

- **Remember:** State one invariant for `Meyer's singleton` before you write code that uses it.
- **Common mistake:** Using `Meyer's singleton` by copy-paste without knowing what it owns or when it is valid.

Practice: open `examples/04_*.cpp`, predict the output, change one line, re-predict.

## 5. static in .cpp

### Plain English

Today's idea — **static in .cpp** — fits inside the wider theme of Static members. Read it as a tool: what job does it do, what rules does it enforce, and what breaks if you ignore those rules?

### Tiny code

```cpp
// Explore: static in .cpp
#include <iostream>
int main() {
  std::cout << "practice: static in .cpp\n";
  return 0;
}
```

- **Remember:** State one invariant for `static in .cpp` before you write code that uses it.
- **Common mistake:** Using `static in .cpp` by copy-paste without knowing what it owns or when it is valid.

Practice: open `examples/05_*.cpp`, predict the output, change one line, re-predict.

## 6. constexpr static

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

Practice: open `examples/06_*.cpp`, predict the output, change one line, re-predict.

## 7. Thread notes on statics

### Plain English

Threads run code concurrently. Shared mutable data needs a mutex (or atomics). Prefer RAII locks (`lock_guard`) so unlock happens even on exceptions.

### Tiny code

```cpp
std::mutex m;
int counter = 0;
{
  std::lock_guard<std::mutex> g(m);
  ++counter;
}
```

- **Remember:** A data race on non-atomic shared data is undefined behaviour.
- **Common mistake:** Locking two mutexes in opposite orders in different threads → deadlock.

Practice: open `examples/07_*.cpp`, predict the output, change one line, re-predict.

## 8. Counting instances

### Plain English

Today's idea — **Counting instances** — fits inside the wider theme of Static members. Read it as a tool: what job does it do, what rules does it enforce, and what breaks if you ignore those rules?

### Tiny code

```cpp
// Explore: Counting instances
#include <iostream>
int main() {
  std::cout << "practice: Counting instances\n";
  return 0;
}
```

- **Remember:** State one invariant for `Counting instances` before you write code that uses it.
- **Common mistake:** Using `Counting instances` by copy-paste without knowing what it owns or when it is valid.

Practice: open `examples/08_*.cpp`, predict the output, change one line, re-predict.

## 9. Factory with static

### Plain English

Today's idea — **Factory with static** — fits inside the wider theme of Static members. Read it as a tool: what job does it do, what rules does it enforce, and what breaks if you ignore those rules?

### Tiny code

```cpp
// Explore: Factory with static
#include <iostream>
int main() {
  std::cout << "practice: Factory with static\n";
  return 0;
}
```

- **Remember:** State one invariant for `Factory with static` before you write code that uses it.
- **Common mistake:** Using `Factory with static` by copy-paste without knowing what it owns or when it is valid.

Practice: open `examples/09_*.cpp`, predict the output, change one line, re-predict.

## 10. Avoiding global state

### Plain English

Today's idea — **Avoiding global state** — fits inside the wider theme of Static members. Read it as a tool: what job does it do, what rules does it enforce, and what breaks if you ignore those rules?

### Tiny code

```cpp
// Explore: Avoiding global state
#include <iostream>
int main() {
  std::cout << "practice: Avoiding global state\n";
  return 0;
}
```

- **Remember:** State one invariant for `Avoiding global state` before you write code that uses it.
- **Common mistake:** Using `Avoiding global state` by copy-paste without knowing what it owns or when it is valid.

Practice: open `examples/10_*.cpp`, predict the output, change one line, re-predict.

---

## What you should be able to do after Day 57

- Explain `Static members` to a peer without looking at notes.
- Compile and run all 10 examples with `-std=c++17 -Wall -Wextra` (use newer flags only when the day needs C++20+).
- Answer the 5 questions in `questions.md` before peeking at `answers.md`.
- Write one tiny extra program that combines at least 3 of today's concepts.

Or open this day in the **Badsha hub** (`python3 hub/server.py`) and use Learn / Practice / Quiz tabs.
