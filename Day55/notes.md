# Day 55 -- Operator overloading advanced

Today's goal: understand **Operator overloading advanced** in plain English, see a tiny code sample for each idea, then practice in `examples/`.

How to study this day:
1. Read each concept's **Plain English** section.
2. Skim the code sample -- predict what it does.
3. Run the matching file under `examples/`.
4. Only then try `questions.md`.

| # | Concept |
|--:|---------|
| 1 | Arithmetic operators set |
| 2 | Relational via <=> preview motivation |
| 3 | Increment operators |
| 4 | Arrow operator |
| 5 | Comma operator (don't) |
| 6 | New/delete operators idea |
| 7 | User-defined literals intro |
| 8 | Consistency rules |
| 9 | Expression templates idea |
| 10 | A Money type |

---

## 1. Arithmetic operators set

### Plain English

Operator overloading lets your types use familiar symbols (`+`, `==`, `<<`) when the meaning is obvious. If the symbol would surprise readers, use a named function instead.

### Tiny code

```cpp
struct Point { int x, y; };
bool operator==(Point a, Point b) {
  return a.x == b.x && a.y == b.y;
}
std::ostream& operator<<(std::ostream& os, Point p) {
  return os << '(' << p.x << ',' << p.y << ')';
}
```

- **Remember:** Overload only when the meaning matches built-in intuition.
- **Common mistake:** Clever operators that hide expensive work or mutate unexpectedly.

Practice: open `examples/01_*.cpp`, predict the output, change one line, re-predict.

## 2. Relational via <=> preview motivation

### Plain English

Operator overloading lets your types use familiar symbols (`+`, `==`, `<<`) when the meaning is obvious. If the symbol would surprise readers, use a named function instead.

### Tiny code

```cpp
struct Point { int x, y; };
bool operator==(Point a, Point b) {
  return a.x == b.x && a.y == b.y;
}
std::ostream& operator<<(std::ostream& os, Point p) {
  return os << '(' << p.x << ',' << p.y << ')';
}
```

- **Remember:** Overload only when the meaning matches built-in intuition.
- **Common mistake:** Clever operators that hide expensive work or mutate unexpectedly.

Practice: open `examples/02_*.cpp`, predict the output, change one line, re-predict.

## 3. Increment operators

### Plain English

Operator overloading lets your types use familiar symbols (`+`, `==`, `<<`) when the meaning is obvious. If the symbol would surprise readers, use a named function instead.

### Tiny code

```cpp
struct Point { int x, y; };
bool operator==(Point a, Point b) {
  return a.x == b.x && a.y == b.y;
}
std::ostream& operator<<(std::ostream& os, Point p) {
  return os << '(' << p.x << ',' << p.y << ')';
}
```

- **Remember:** Overload only when the meaning matches built-in intuition.
- **Common mistake:** Clever operators that hide expensive work or mutate unexpectedly.

Practice: open `examples/03_*.cpp`, predict the output, change one line, re-predict.

## 4. Arrow operator

### Plain English

Operator overloading lets your types use familiar symbols (`+`, `==`, `<<`) when the meaning is obvious. If the symbol would surprise readers, use a named function instead.

### Tiny code

```cpp
struct Point { int x, y; };
bool operator==(Point a, Point b) {
  return a.x == b.x && a.y == b.y;
}
std::ostream& operator<<(std::ostream& os, Point p) {
  return os << '(' << p.x << ',' << p.y << ')';
}
```

- **Remember:** Overload only when the meaning matches built-in intuition.
- **Common mistake:** Clever operators that hide expensive work or mutate unexpectedly.

Practice: open `examples/04_*.cpp`, predict the output, change one line, re-predict.

## 5. Comma operator (don't)

### Plain English

Operator overloading lets your types use familiar symbols (`+`, `==`, `<<`) when the meaning is obvious. If the symbol would surprise readers, use a named function instead.

### Tiny code

```cpp
struct Point { int x, y; };
bool operator==(Point a, Point b) {
  return a.x == b.x && a.y == b.y;
}
std::ostream& operator<<(std::ostream& os, Point p) {
  return os << '(' << p.x << ',' << p.y << ')';
}
```

- **Remember:** Overload only when the meaning matches built-in intuition.
- **Common mistake:** Clever operators that hide expensive work or mutate unexpectedly.

Practice: open `examples/05_*.cpp`, predict the output, change one line, re-predict.

## 6. New/delete operators idea

### Plain English

Operator overloading lets your types use familiar symbols (`+`, `==`, `<<`) when the meaning is obvious. If the symbol would surprise readers, use a named function instead.

### Tiny code

```cpp
struct Point { int x, y; };
bool operator==(Point a, Point b) {
  return a.x == b.x && a.y == b.y;
}
std::ostream& operator<<(std::ostream& os, Point p) {
  return os << '(' << p.x << ',' << p.y << ')';
}
```

- **Remember:** Overload only when the meaning matches built-in intuition.
- **Common mistake:** Clever operators that hide expensive work or mutate unexpectedly.

Practice: open `examples/06_*.cpp`, predict the output, change one line, re-predict.

## 7. User-defined literals intro

### Plain English

Operator overloading lets your types use familiar symbols (`+`, `==`, `<<`) when the meaning is obvious. If the symbol would surprise readers, use a named function instead.

### Tiny code

```cpp
struct Point { int x, y; };
bool operator==(Point a, Point b) {
  return a.x == b.x && a.y == b.y;
}
std::ostream& operator<<(std::ostream& os, Point p) {
  return os << '(' << p.x << ',' << p.y << ')';
}
```

- **Remember:** Overload only when the meaning matches built-in intuition.
- **Common mistake:** Clever operators that hide expensive work or mutate unexpectedly.

Practice: open `examples/07_*.cpp`, predict the output, change one line, re-predict.

## 8. Consistency rules

### Plain English

Operator overloading lets your types use familiar symbols (`+`, `==`, `<<`) when the meaning is obvious. If the symbol would surprise readers, use a named function instead.

### Tiny code

```cpp
struct Point { int x, y; };
bool operator==(Point a, Point b) {
  return a.x == b.x && a.y == b.y;
}
std::ostream& operator<<(std::ostream& os, Point p) {
  return os << '(' << p.x << ',' << p.y << ')';
}
```

- **Remember:** Overload only when the meaning matches built-in intuition.
- **Common mistake:** Clever operators that hide expensive work or mutate unexpectedly.

Practice: open `examples/08_*.cpp`, predict the output, change one line, re-predict.

## 9. Expression templates idea

### Plain English

Operator overloading lets your types use familiar symbols (`+`, `==`, `<<`) when the meaning is obvious. If the symbol would surprise readers, use a named function instead.

### Tiny code

```cpp
struct Point { int x, y; };
bool operator==(Point a, Point b) {
  return a.x == b.x && a.y == b.y;
}
std::ostream& operator<<(std::ostream& os, Point p) {
  return os << '(' << p.x << ',' << p.y << ')';
}
```

- **Remember:** Overload only when the meaning matches built-in intuition.
- **Common mistake:** Clever operators that hide expensive work or mutate unexpectedly.

Practice: open `examples/09_*.cpp`, predict the output, change one line, re-predict.

## 10. A Money type

### Plain English

Operator overloading lets your types use familiar symbols (`+`, `==`, `<<`) when the meaning is obvious. If the symbol would surprise readers, use a named function instead.

### Tiny code

```cpp
struct Point { int x, y; };
bool operator==(Point a, Point b) {
  return a.x == b.x && a.y == b.y;
}
std::ostream& operator<<(std::ostream& os, Point p) {
  return os << '(' << p.x << ',' << p.y << ')';
}
```

- **Remember:** Overload only when the meaning matches built-in intuition.
- **Common mistake:** Clever operators that hide expensive work or mutate unexpectedly.

Practice: open `examples/10_*.cpp`, predict the output, change one line, re-predict.

---

## What you should be able to do after Day 55

- Explain `Operator overloading advanced` to a peer without looking at notes.
- Compile and run all 10 examples with `-std=c++17 -Wall -Wextra` (use newer flags only when the day needs C++20+).
- Answer the 5 questions in `questions.md` before peeking at `answers.md`.
- Write one tiny extra program that combines at least 3 of today's concepts.

Or open this day in the **Badsha hub** (`python3 hub/server.py`) and use Learn / Practice / Quiz tabs.
