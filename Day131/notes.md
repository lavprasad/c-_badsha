# Day 131 -- Variadic templates mastery

Today's goal: understand **Variadic templates mastery** in plain English, see a tiny code sample for each idea, then practice in `examples/`.

How to study this day:
1. Read each concept's **Plain English** section.
2. Skim the code sample -- predict what it does.
3. Run the matching file under `examples/`.
4. Only then try `questions.md`.

| # | Concept |
|--:|---------|
| 1 | Parameter packs |
| 2 | sizeof... |
| 3 | Pack expansion |
| 4 | Recursive unpacking |
| 5 | Fold alternative |
| 6 | Forwarding packs |
| 7 | Base pack inheritance |
| 8 | Common errors |
| 9 | Pretty error tips |
| 10 | tuple apply sketch |

---

## 1. Parameter packs

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

Practice: open `examples/01_*.cpp`, predict the output, change one line, re-predict.

## 2. sizeof...

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

Practice: open `examples/02_*.cpp`, predict the output, change one line, re-predict.

## 3. Pack expansion

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

Practice: open `examples/03_*.cpp`, predict the output, change one line, re-predict.

## 4. Recursive unpacking

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

## 5. Fold alternative

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

## 6. Forwarding packs

### Plain English

Move steals resources from an object you are done with instead of deep-copying. `std::move` is a cast that enables stealing; it does not move by itself.

### Tiny code

```cpp
std::string a = "hello";
std::string b = std::move(a);  // b owns the buffer
// a is valid but unspecified (often empty)
```

- **Remember:** After `std::move(x)`, only assign to `x` or destroy it — do not read its value.
- **Common mistake:** Using a moved-from object as if it still held the old data.

Practice: open `examples/06_*.cpp`, predict the output, change one line, re-predict.

## 7. Base pack inheritance

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

## 8. Common errors

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

Practice: open `examples/08_*.cpp`, predict the output, change one line, re-predict.

## 9. Pretty error tips

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

Practice: open `examples/09_*.cpp`, predict the output, change one line, re-predict.

## 10. tuple apply sketch

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

Practice: open `examples/10_*.cpp`, predict the output, change one line, re-predict.

---

## What you should be able to do after Day 131

- Explain `Variadic templates mastery` to a peer without looking at notes.
- Compile and run all 10 examples with `-std=c++17 -Wall -Wextra` (use newer flags only when the day needs C++20+).
- Answer the 5 questions in `questions.md` before peeking at `answers.md`.
- Write one tiny extra program that combines at least 3 of today's concepts.

Or open this day in the **Badsha hub** (`python3 hub/server.py`) and use Learn / Practice / Quiz tabs.
