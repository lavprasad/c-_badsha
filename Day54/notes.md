# Day 54 -- Multiple inheritance

Today's goal: understand **Multiple inheritance** in plain English, see a tiny code sample for each idea, then practice in `examples/`.

How to study this day:
1. Read each concept's **Plain English** section.
2. Skim the code sample -- predict what it does.
3. Run the matching file under `examples/`.
4. Only then try `questions.md`.

| # | Concept |
|--:|---------|
| 1 | Why MI exists |
| 2 | Ambiguity |
| 3 | Virtual base classes |
| 4 | Diamond problem |
| 5 | Interface MI |
| 6 | Layout intuition |
| 7 | When to avoid MI |
| 8 | Mixin idea |
| 9 | Casting across bases |
| 10 | A device+logger mix |

---

## 1. Why MI exists

### Plain English

Inheritance models 'is-a' when the derived type can substitute for the base. Prefer composition ('has-a') when you only need to reuse implementation.

### Tiny code

```cpp
struct Engine { void start(); };
struct Car {  // has-an Engine
  Engine engine;
  void start() { engine.start(); }
};
```

- **Remember:** Deep inheritance trees get fragile — favour shallow designs.
- **Common mistake:** Inheriting just to reuse code when a member object would do.

Practice: open `examples/01_*.cpp`, predict the output, change one line, re-predict.

## 2. Ambiguity

### Plain English

Inheritance models 'is-a' when the derived type can substitute for the base. Prefer composition ('has-a') when you only need to reuse implementation.

### Tiny code

```cpp
struct Engine { void start(); };
struct Car {  // has-an Engine
  Engine engine;
  void start() { engine.start(); }
};
```

- **Remember:** Deep inheritance trees get fragile — favour shallow designs.
- **Common mistake:** Inheriting just to reuse code when a member object would do.

Practice: open `examples/02_*.cpp`, predict the output, change one line, re-predict.

## 3. Virtual base classes

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

## 4. Diamond problem

### Plain English

Inheritance models 'is-a' when the derived type can substitute for the base. Prefer composition ('has-a') when you only need to reuse implementation.

### Tiny code

```cpp
struct Engine { void start(); };
struct Car {  // has-an Engine
  Engine engine;
  void start() { engine.start(); }
};
```

- **Remember:** Deep inheritance trees get fragile — favour shallow designs.
- **Common mistake:** Inheriting just to reuse code when a member object would do.

Practice: open `examples/04_*.cpp`, predict the output, change one line, re-predict.

## 5. Interface MI

### Plain English

Inheritance models 'is-a' when the derived type can substitute for the base. Prefer composition ('has-a') when you only need to reuse implementation.

### Tiny code

```cpp
struct Engine { void start(); };
struct Car {  // has-an Engine
  Engine engine;
  void start() { engine.start(); }
};
```

- **Remember:** Deep inheritance trees get fragile — favour shallow designs.
- **Common mistake:** Inheriting just to reuse code when a member object would do.

Practice: open `examples/05_*.cpp`, predict the output, change one line, re-predict.

## 6. Layout intuition

### Plain English

Inheritance models 'is-a' when the derived type can substitute for the base. Prefer composition ('has-a') when you only need to reuse implementation.

### Tiny code

```cpp
struct Engine { void start(); };
struct Car {  // has-an Engine
  Engine engine;
  void start() { engine.start(); }
};
```

- **Remember:** Deep inheritance trees get fragile — favour shallow designs.
- **Common mistake:** Inheriting just to reuse code when a member object would do.

Practice: open `examples/06_*.cpp`, predict the output, change one line, re-predict.

## 7. When to avoid MI

### Plain English

Inheritance models 'is-a' when the derived type can substitute for the base. Prefer composition ('has-a') when you only need to reuse implementation.

### Tiny code

```cpp
struct Engine { void start(); };
struct Car {  // has-an Engine
  Engine engine;
  void start() { engine.start(); }
};
```

- **Remember:** Deep inheritance trees get fragile — favour shallow designs.
- **Common mistake:** Inheriting just to reuse code when a member object would do.

Practice: open `examples/07_*.cpp`, predict the output, change one line, re-predict.

## 8. Mixin idea

### Plain English

Inheritance models 'is-a' when the derived type can substitute for the base. Prefer composition ('has-a') when you only need to reuse implementation.

### Tiny code

```cpp
struct Engine { void start(); };
struct Car {  // has-an Engine
  Engine engine;
  void start() { engine.start(); }
};
```

- **Remember:** Deep inheritance trees get fragile — favour shallow designs.
- **Common mistake:** Inheriting just to reuse code when a member object would do.

Practice: open `examples/08_*.cpp`, predict the output, change one line, re-predict.

## 9. Casting across bases

### Plain English

Inheritance models 'is-a' when the derived type can substitute for the base. Prefer composition ('has-a') when you only need to reuse implementation.

### Tiny code

```cpp
struct Engine { void start(); };
struct Car {  // has-an Engine
  Engine engine;
  void start() { engine.start(); }
};
```

- **Remember:** Deep inheritance trees get fragile — favour shallow designs.
- **Common mistake:** Inheriting just to reuse code when a member object would do.

Practice: open `examples/09_*.cpp`, predict the output, change one line, re-predict.

## 10. A device+logger mix

### Plain English

Inheritance models 'is-a' when the derived type can substitute for the base. Prefer composition ('has-a') when you only need to reuse implementation.

### Tiny code

```cpp
struct Engine { void start(); };
struct Car {  // has-an Engine
  Engine engine;
  void start() { engine.start(); }
};
```

- **Remember:** Deep inheritance trees get fragile — favour shallow designs.
- **Common mistake:** Inheriting just to reuse code when a member object would do.

Practice: open `examples/10_*.cpp`, predict the output, change one line, re-predict.

---

## What you should be able to do after Day 54

- Explain `Multiple inheritance` to a peer without looking at notes.
- Compile and run all 10 examples with `-std=c++17 -Wall -Wextra` (use newer flags only when the day needs C++20+).
- Answer the 5 questions in `questions.md` before peeking at `answers.md`.
- Write one tiny extra program that combines at least 3 of today's concepts.

Or open this day in the **Badsha hub** (`python3 hub/server.py`) and use Learn / Practice / Quiz tabs.
