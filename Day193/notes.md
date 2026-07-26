# Day 193 -- C++ for interviews: language traps

Today's goal: understand **C++ for interviews: language traps** in plain English, see a tiny code sample for each idea, then practice in `examples/`.

How to study this day:
1. Read each concept's **Plain English** section.
2. Skim the code sample -- predict what it does.
3. Run the matching file under `examples/`.
4. Only then try `questions.md`.

| # | Concept |
|--:|---------|
| 1 | Object lifetime traps |
| 2 | Move traps |
| 3 | Virtual traps |
| 4 | Template traps |
| 5 | UB traps |
| 6 | const traps |
| 7 | threading traps |
| 8 | STL invalidation |
| 9 | Initialization traps |
| 10 | Quiz day |

---

## 1. Object lifetime traps

### Plain English

Today's idea — **Object lifetime traps** — fits inside the wider theme of C++ for interviews: language traps. Read it as a tool: what job does it do, what rules does it enforce, and what breaks if you ignore those rules?

### Tiny code

```cpp
// Explore: Object lifetime traps
#include <iostream>
int main() {
  std::cout << "practice: Object lifetime traps\n";
  return 0;
}
```

- **Remember:** State one invariant for `Object lifetime traps` before you write code that uses it.
- **Common mistake:** Using `Object lifetime traps` by copy-paste without knowing what it owns or when it is valid.

Practice: open `examples/01_*.cpp`, predict the output, change one line, re-predict.

## 2. Move traps

### Plain English

Today's idea — **Move traps** — fits inside the wider theme of C++ for interviews: language traps. Read it as a tool: what job does it do, what rules does it enforce, and what breaks if you ignore those rules?

### Tiny code

```cpp
// Explore: Move traps
#include <iostream>
int main() {
  std::cout << "practice: Move traps\n";
  return 0;
}
```

- **Remember:** State one invariant for `Move traps` before you write code that uses it.
- **Common mistake:** Using `Move traps` by copy-paste without knowing what it owns or when it is valid.

Practice: open `examples/02_*.cpp`, predict the output, change one line, re-predict.

## 3. Virtual traps

### Plain English

Virtual functions let you call the derived implementation through a base pointer/reference. Abstract classes (pure virtuals) define interfaces. Always give polymorphic bases a virtual destructor.

### Tiny code

```cpp
struct Shape {
  virtual ~Shape() = default;
  virtual double area() const = 0;
};
struct Circle : Shape {
  double r;
  double area() const override { return 3.14 * r * r; }
};
```

- **Remember:** Use `override` so signature mistakes fail at compile time.
- **Common mistake:** Deleting a derived object via a non-virtual base destructor.

Practice: open `examples/03_*.cpp`, predict the output, change one line, re-predict.

## 4. Template traps

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

Practice: open `examples/04_*.cpp`, predict the output, change one line, re-predict.

## 5. UB traps

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

Practice: open `examples/05_*.cpp`, predict the output, change one line, re-predict.

## 6. const traps

### Plain English

Today's idea — **const traps** — fits inside the wider theme of C++ for interviews: language traps. Read it as a tool: what job does it do, what rules does it enforce, and what breaks if you ignore those rules?

### Tiny code

```cpp
// Explore: const traps
#include <iostream>
int main() {
  std::cout << "practice: const traps\n";
  return 0;
}
```

- **Remember:** State one invariant for `const traps` before you write code that uses it.
- **Common mistake:** Using `const traps` by copy-paste without knowing what it owns or when it is valid.

Practice: open `examples/06_*.cpp`, predict the output, change one line, re-predict.

## 7. threading traps

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

## 8. STL invalidation

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

Practice: open `examples/08_*.cpp`, predict the output, change one line, re-predict.

## 9. Initialization traps

### Plain English

Today's idea — **Initialization traps** — fits inside the wider theme of C++ for interviews: language traps. Read it as a tool: what job does it do, what rules does it enforce, and what breaks if you ignore those rules?

### Tiny code

```cpp
// Explore: Initialization traps
#include <iostream>
int main() {
  std::cout << "practice: Initialization traps\n";
  return 0;
}
```

- **Remember:** State one invariant for `Initialization traps` before you write code that uses it.
- **Common mistake:** Using `Initialization traps` by copy-paste without knowing what it owns or when it is valid.

Practice: open `examples/09_*.cpp`, predict the output, change one line, re-predict.

## 10. Quiz day

### Plain English

Today's idea — **Quiz day** — fits inside the wider theme of C++ for interviews: language traps. Read it as a tool: what job does it do, what rules does it enforce, and what breaks if you ignore those rules?

### Tiny code

```cpp
// Explore: Quiz day
#include <iostream>
int main() {
  std::cout << "practice: Quiz day\n";
  return 0;
}
```

- **Remember:** State one invariant for `Quiz day` before you write code that uses it.
- **Common mistake:** Using `Quiz day` by copy-paste without knowing what it owns or when it is valid.

Practice: open `examples/10_*.cpp`, predict the output, change one line, re-predict.

---

## What you should be able to do after Day 193

- Explain `C++ for interviews: language traps` to a peer without looking at notes.
- Compile and run all 10 examples with `-std=c++17 -Wall -Wextra` (use newer flags only when the day needs C++20+).
- Answer the 5 questions in `questions.md` before peeking at `answers.md`.
- Write one tiny extra program that combines at least 3 of today's concepts.

Or open this day in the **Badsha hub** (`python3 hub/server.py`) and use Learn / Practice / Quiz tabs.
