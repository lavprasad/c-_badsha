# Day 16 -- const correctness

Today's goal: understand **const correctness** in plain English, see a tiny code sample for each idea, then practice in `examples/`.

How to study this day:
1. Read each concept's **Plain English** section.
2. Skim the code sample -- predict what it does.
3. Run the matching file under `examples/`.
4. Only then try `questions.md`.

| # | Concept |
|--:|---------|
| 1 | const variables |
| 2 | const pointers vs pointer-to-const |
| 3 | const member functions |
| 4 | mutable members |
| 5 | const_cast dangers |
| 6 | Passing const T& |
| 7 | Returning const references |
| 8 | Logical vs bitwise const |
| 9 | const iterators |
| 10 | Designing const-friendly APIs |

---

## 1. const variables

### Plain English

`const` is a promise: 'I will not change this through this name.' It catches bugs at compile time and documents intent. Put `const` on observers and on parameters you only read.

### Tiny code

```cpp
void print(const std::string& s);  // no copy, no mutate
struct Counter {
  int n = 0;
  int get() const { return n; }  // may call on const objects
};
```

- **Remember:** Prefer `const T&` for read-only parameters bigger than a machine word.
- **Common mistake:** Casting away `const` to mutate something that callers assumed was fixed.

Practice: open `examples/01_*.cpp`, predict the output, change one line, re-predict.

## 2. const pointers vs pointer-to-const

### Plain English

`const` is a promise: 'I will not change this through this name.' It catches bugs at compile time and documents intent. Put `const` on observers and on parameters you only read.

### Tiny code

```cpp
void print(const std::string& s);  // no copy, no mutate
struct Counter {
  int n = 0;
  int get() const { return n; }  // may call on const objects
};
```

- **Remember:** Prefer `const T&` for read-only parameters bigger than a machine word.
- **Common mistake:** Casting away `const` to mutate something that callers assumed was fixed.

Practice: open `examples/02_*.cpp`, predict the output, change one line, re-predict.

## 3. const member functions

### Plain English

`const` is a promise: 'I will not change this through this name.' It catches bugs at compile time and documents intent. Put `const` on observers and on parameters you only read.

### Tiny code

```cpp
void print(const std::string& s);  // no copy, no mutate
struct Counter {
  int n = 0;
  int get() const { return n; }  // may call on const objects
};
```

- **Remember:** Prefer `const T&` for read-only parameters bigger than a machine word.
- **Common mistake:** Casting away `const` to mutate something that callers assumed was fixed.

Practice: open `examples/03_*.cpp`, predict the output, change one line, re-predict.

## 4. mutable members

### Plain English

`const` is a promise: 'I will not change this through this name.' It catches bugs at compile time and documents intent. Put `const` on observers and on parameters you only read.

### Tiny code

```cpp
void print(const std::string& s);  // no copy, no mutate
struct Counter {
  int n = 0;
  int get() const { return n; }  // may call on const objects
};
```

- **Remember:** Prefer `const T&` for read-only parameters bigger than a machine word.
- **Common mistake:** Casting away `const` to mutate something that callers assumed was fixed.

Practice: open `examples/04_*.cpp`, predict the output, change one line, re-predict.

## 5. const_cast dangers

### Plain English

`const` is a promise: 'I will not change this through this name.' It catches bugs at compile time and documents intent. Put `const` on observers and on parameters you only read.

### Tiny code

```cpp
void print(const std::string& s);  // no copy, no mutate
struct Counter {
  int n = 0;
  int get() const { return n; }  // may call on const objects
};
```

- **Remember:** Prefer `const T&` for read-only parameters bigger than a machine word.
- **Common mistake:** Casting away `const` to mutate something that callers assumed was fixed.

Practice: open `examples/05_*.cpp`, predict the output, change one line, re-predict.

## 6. Passing const T&

### Plain English

`const` is a promise: 'I will not change this through this name.' It catches bugs at compile time and documents intent. Put `const` on observers and on parameters you only read.

### Tiny code

```cpp
void print(const std::string& s);  // no copy, no mutate
struct Counter {
  int n = 0;
  int get() const { return n; }  // may call on const objects
};
```

- **Remember:** Prefer `const T&` for read-only parameters bigger than a machine word.
- **Common mistake:** Casting away `const` to mutate something that callers assumed was fixed.

Practice: open `examples/06_*.cpp`, predict the output, change one line, re-predict.

## 7. Returning const references

### Plain English

`const` is a promise: 'I will not change this through this name.' It catches bugs at compile time and documents intent. Put `const` on observers and on parameters you only read.

### Tiny code

```cpp
void print(const std::string& s);  // no copy, no mutate
struct Counter {
  int n = 0;
  int get() const { return n; }  // may call on const objects
};
```

- **Remember:** Prefer `const T&` for read-only parameters bigger than a machine word.
- **Common mistake:** Casting away `const` to mutate something that callers assumed was fixed.

Practice: open `examples/07_*.cpp`, predict the output, change one line, re-predict.

## 8. Logical vs bitwise const

### Plain English

`const` is a promise: 'I will not change this through this name.' It catches bugs at compile time and documents intent. Put `const` on observers and on parameters you only read.

### Tiny code

```cpp
void print(const std::string& s);  // no copy, no mutate
struct Counter {
  int n = 0;
  int get() const { return n; }  // may call on const objects
};
```

- **Remember:** Prefer `const T&` for read-only parameters bigger than a machine word.
- **Common mistake:** Casting away `const` to mutate something that callers assumed was fixed.

Practice: open `examples/08_*.cpp`, predict the output, change one line, re-predict.

## 9. const iterators

### Plain English

`const` is a promise: 'I will not change this through this name.' It catches bugs at compile time and documents intent. Put `const` on observers and on parameters you only read.

### Tiny code

```cpp
void print(const std::string& s);  // no copy, no mutate
struct Counter {
  int n = 0;
  int get() const { return n; }  // may call on const objects
};
```

- **Remember:** Prefer `const T&` for read-only parameters bigger than a machine word.
- **Common mistake:** Casting away `const` to mutate something that callers assumed was fixed.

Practice: open `examples/09_*.cpp`, predict the output, change one line, re-predict.

## 10. Designing const-friendly APIs

### Plain English

`const` is a promise: 'I will not change this through this name.' It catches bugs at compile time and documents intent. Put `const` on observers and on parameters you only read.

### Tiny code

```cpp
void print(const std::string& s);  // no copy, no mutate
struct Counter {
  int n = 0;
  int get() const { return n; }  // may call on const objects
};
```

- **Remember:** Prefer `const T&` for read-only parameters bigger than a machine word.
- **Common mistake:** Casting away `const` to mutate something that callers assumed was fixed.

Practice: open `examples/10_*.cpp`, predict the output, change one line, re-predict.

---

## What you should be able to do after Day 16

- Explain `const correctness` to a peer without looking at notes.
- Compile and run all 10 examples with `-std=c++17 -Wall -Wextra` (use newer flags only when the day needs C++20+).
- Answer the 5 questions in `questions.md` before peeking at `answers.md`.
- Write one tiny extra program that combines at least 3 of today's concepts.

Or open this day in the **Badsha hub** (`python3 hub/server.py`) and use Learn / Practice / Quiz tabs.
