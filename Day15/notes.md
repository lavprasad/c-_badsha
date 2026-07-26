# Day 15 -- Copy control deep dive

Today's goal: understand **Copy control deep dive** in plain English, see a tiny code sample for each idea, then practice in `examples/`.

How to study this day:
1. Read each concept's **Plain English** section.
2. Skim the code sample -- predict what it does.
3. Run the matching file under `examples/`.
4. Only then try `questions.md`.

| # | Concept |
|--:|---------|
| 1 | Defaulted special members |
| 2 | Deleted special members |
| 3 | Copy constructor details |
| 4 | Copy assignment details |
| 5 | Self-assignment safety |
| 6 | Rule of three |
| 7 | Rule of five |
| 8 | Rule of zero |
| 9 | When the compiler deletes your copy |
| 10 | Diagnostic patterns |

---

## 1. Defaulted special members

### Plain English

If your class owns a resource (heap memory, file handle), you must define how it copies, moves, and destroys — or delete copying. If it owns nothing special, write nothing (rule of zero) and use members that already manage themselves.

### Tiny code

```cpp
struct Buf {
  int* p;
  explicit Buf(int n) : p(new int[n]) {}
  ~Buf() { delete[] p; }
  Buf(const Buf&) = delete;
  Buf& operator=(const Buf&) = delete;
};
```

- **Remember:** Rule of zero first; if you need a destructor, revisit copy/move.
- **Common mistake:** Shallow-copying a raw pointer so two objects `delete` the same memory.

Practice: open `examples/01_*.cpp`, predict the output, change one line, re-predict.

## 2. Deleted special members

### Plain English

If your class owns a resource (heap memory, file handle), you must define how it copies, moves, and destroys — or delete copying. If it owns nothing special, write nothing (rule of zero) and use members that already manage themselves.

### Tiny code

```cpp
struct Buf {
  int* p;
  explicit Buf(int n) : p(new int[n]) {}
  ~Buf() { delete[] p; }
  Buf(const Buf&) = delete;
  Buf& operator=(const Buf&) = delete;
};
```

- **Remember:** Rule of zero first; if you need a destructor, revisit copy/move.
- **Common mistake:** Shallow-copying a raw pointer so two objects `delete` the same memory.

Practice: open `examples/02_*.cpp`, predict the output, change one line, re-predict.

## 3. Copy constructor details

### Plain English

If your class owns a resource (heap memory, file handle), you must define how it copies, moves, and destroys — or delete copying. If it owns nothing special, write nothing (rule of zero) and use members that already manage themselves.

### Tiny code

```cpp
struct Buf {
  int* p;
  explicit Buf(int n) : p(new int[n]) {}
  ~Buf() { delete[] p; }
  Buf(const Buf&) = delete;
  Buf& operator=(const Buf&) = delete;
};
```

- **Remember:** Rule of zero first; if you need a destructor, revisit copy/move.
- **Common mistake:** Shallow-copying a raw pointer so two objects `delete` the same memory.

Practice: open `examples/03_*.cpp`, predict the output, change one line, re-predict.

## 4. Copy assignment details

### Plain English

If your class owns a resource (heap memory, file handle), you must define how it copies, moves, and destroys — or delete copying. If it owns nothing special, write nothing (rule of zero) and use members that already manage themselves.

### Tiny code

```cpp
struct Buf {
  int* p;
  explicit Buf(int n) : p(new int[n]) {}
  ~Buf() { delete[] p; }
  Buf(const Buf&) = delete;
  Buf& operator=(const Buf&) = delete;
};
```

- **Remember:** Rule of zero first; if you need a destructor, revisit copy/move.
- **Common mistake:** Shallow-copying a raw pointer so two objects `delete` the same memory.

Practice: open `examples/04_*.cpp`, predict the output, change one line, re-predict.

## 5. Self-assignment safety

### Plain English

If your class owns a resource (heap memory, file handle), you must define how it copies, moves, and destroys — or delete copying. If it owns nothing special, write nothing (rule of zero) and use members that already manage themselves.

### Tiny code

```cpp
struct Buf {
  int* p;
  explicit Buf(int n) : p(new int[n]) {}
  ~Buf() { delete[] p; }
  Buf(const Buf&) = delete;
  Buf& operator=(const Buf&) = delete;
};
```

- **Remember:** Rule of zero first; if you need a destructor, revisit copy/move.
- **Common mistake:** Shallow-copying a raw pointer so two objects `delete` the same memory.

Practice: open `examples/05_*.cpp`, predict the output, change one line, re-predict.

## 6. Rule of three

### Plain English

If your class owns a resource (heap memory, file handle), you must define how it copies, moves, and destroys — or delete copying. If it owns nothing special, write nothing (rule of zero) and use members that already manage themselves.

### Tiny code

```cpp
struct Buf {
  int* p;
  explicit Buf(int n) : p(new int[n]) {}
  ~Buf() { delete[] p; }
  Buf(const Buf&) = delete;
  Buf& operator=(const Buf&) = delete;
};
```

- **Remember:** Rule of zero first; if you need a destructor, revisit copy/move.
- **Common mistake:** Shallow-copying a raw pointer so two objects `delete` the same memory.

Practice: open `examples/06_*.cpp`, predict the output, change one line, re-predict.

## 7. Rule of five

### Plain English

If your class owns a resource (heap memory, file handle), you must define how it copies, moves, and destroys — or delete copying. If it owns nothing special, write nothing (rule of zero) and use members that already manage themselves.

### Tiny code

```cpp
struct Buf {
  int* p;
  explicit Buf(int n) : p(new int[n]) {}
  ~Buf() { delete[] p; }
  Buf(const Buf&) = delete;
  Buf& operator=(const Buf&) = delete;
};
```

- **Remember:** Rule of zero first; if you need a destructor, revisit copy/move.
- **Common mistake:** Shallow-copying a raw pointer so two objects `delete` the same memory.

Practice: open `examples/07_*.cpp`, predict the output, change one line, re-predict.

## 8. Rule of zero

### Plain English

If your class owns a resource (heap memory, file handle), you must define how it copies, moves, and destroys — or delete copying. If it owns nothing special, write nothing (rule of zero) and use members that already manage themselves.

### Tiny code

```cpp
struct Buf {
  int* p;
  explicit Buf(int n) : p(new int[n]) {}
  ~Buf() { delete[] p; }
  Buf(const Buf&) = delete;
  Buf& operator=(const Buf&) = delete;
};
```

- **Remember:** Rule of zero first; if you need a destructor, revisit copy/move.
- **Common mistake:** Shallow-copying a raw pointer so two objects `delete` the same memory.

Practice: open `examples/08_*.cpp`, predict the output, change one line, re-predict.

## 9. When the compiler deletes your copy

### Plain English

The heap lives until you release it. Prefer smart pointers and containers over raw `new`/`delete`. If you must use raw ownership, every `new` has exactly one matching `delete` on every path.

### Tiny code

```cpp
// Prefer:
auto p = std::make_unique<int[]>(10);
// instead of new int[10] / delete[]
```

- **Remember:** Match `new` with `delete` and `new[]` with `delete[]`.
- **Common mistake:** Using `delete` on array memory allocated with `new[]`.

Practice: open `examples/09_*.cpp`, predict the output, change one line, re-predict.

## 10. Diagnostic patterns

### Plain English

Today's idea — **Diagnostic patterns** — fits inside the wider theme of Copy control deep dive. Read it as a tool: what job does it do, what rules does it enforce, and what breaks if you ignore those rules?

### Tiny code

```cpp
// Explore: Diagnostic patterns
#include <iostream>
int main() {
  std::cout << "practice: Diagnostic patterns\n";
  return 0;
}
```

- **Remember:** State one invariant for `Diagnostic patterns` before you write code that uses it.
- **Common mistake:** Using `Diagnostic patterns` by copy-paste without knowing what it owns or when it is valid.

Practice: open `examples/10_*.cpp`, predict the output, change one line, re-predict.

---

## What you should be able to do after Day 15

- Explain `Copy control deep dive` to a peer without looking at notes.
- Compile and run all 10 examples with `-std=c++17 -Wall -Wextra` (use newer flags only when the day needs C++20+).
- Answer the 5 questions in `questions.md` before peeking at `answers.md`.
- Write one tiny extra program that combines at least 3 of today's concepts.

Or open this day in the **Badsha hub** (`python3 hub/server.py`) and use Learn / Practice / Quiz tabs.
