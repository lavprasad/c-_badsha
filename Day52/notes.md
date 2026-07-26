# Day 52 -- Inheritance design

Today's goal: understand **Inheritance design** in plain English, see a tiny code sample for each idea, then practice in `examples/`.

How to study this day:
1. Read each concept's **Plain English** section.
2. Skim the code sample -- predict what it does.
3. Run the matching file under `examples/`.
4. Only then try `questions.md`.

| # | Concept |
|--:|---------|
| 1 | is-a vs has-a |
| 2 | Public inheritance contracts |
| 3 | Protected members wisely |
| 4 | Private inheritance |
| 5 | Composition over inheritance |
| 6 | Fragile base class |
| 7 | Interface segregation idea |
| 8 | Liskov substitution intuition |
| 9 | Deep hierarchies smell |
| 10 | Refactoring to composition |

---

## 1. is-a vs has-a

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

## 2. Public inheritance contracts

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

## 3. Protected members wisely

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

Practice: open `examples/03_*.cpp`, predict the output, change one line, re-predict.

## 4. Private inheritance

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

## 5. Composition over inheritance

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

## 6. Fragile base class

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

## 7. Interface segregation idea

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

## 8. Liskov substitution intuition

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

## 9. Deep hierarchies smell

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

## 10. Refactoring to composition

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

## What you should be able to do after Day 52

- Explain `Inheritance design` to a peer without looking at notes.
- Compile and run all 10 examples with `-std=c++17 -Wall -Wextra` (use newer flags only when the day needs C++20+).
- Answer the 5 questions in `questions.md` before peeking at `answers.md`.
- Write one tiny extra program that combines at least 3 of today's concepts.

Or open this day in the **Badsha hub** (`python3 hub/server.py`) and use Learn / Practice / Quiz tabs.
