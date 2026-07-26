# Day 64 -- Structural patterns

Today's goal: understand **Structural patterns** in plain English, see a tiny code sample for each idea, then practice in `examples/`.

How to study this day:
1. Read each concept's **Plain English** section.
2. Skim the code sample -- predict what it does.
3. Run the matching file under `examples/`.
4. Only then try `questions.md`.

| # | Concept |
|--:|---------|
| 1 | Adapter |
| 2 | Bridge |
| 3 | Composite |
| 4 | Decorator |
| 5 | Facade |
| 6 | Flyweight |
| 7 | Proxy |
| 8 | C++ idiomatic forms |
| 9 | When not to pattern |
| 10 | A UI widget composite |

---

## 1. Adapter

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

## 2. Bridge

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

Practice: open `examples/02_*.cpp`, predict the output, change one line, re-predict.

## 3. Composite

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

Practice: open `examples/03_*.cpp`, predict the output, change one line, re-predict.

## 4. Decorator

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

Practice: open `examples/04_*.cpp`, predict the output, change one line, re-predict.

## 5. Facade

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

Practice: open `examples/05_*.cpp`, predict the output, change one line, re-predict.

## 6. Flyweight

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

Practice: open `examples/06_*.cpp`, predict the output, change one line, re-predict.

## 7. Proxy

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

Practice: open `examples/07_*.cpp`, predict the output, change one line, re-predict.

## 8. C++ idiomatic forms

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

Practice: open `examples/08_*.cpp`, predict the output, change one line, re-predict.

## 9. When not to pattern

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

## 10. A UI widget composite

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

Practice: open `examples/10_*.cpp`, predict the output, change one line, re-predict.

---

## What you should be able to do after Day 64

- Explain `Structural patterns` to a peer without looking at notes.
- Compile and run all 10 examples with `-std=c++17 -Wall -Wextra` (use newer flags only when the day needs C++20+).
- Answer the 5 questions in `questions.md` before peeking at `answers.md`.
- Write one tiny extra program that combines at least 3 of today's concepts.

Or open this day in the **Badsha hub** (`python3 hub/server.py`) and use Learn / Practice / Quiz tabs.
