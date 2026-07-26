# Day 58 -- Nested types & enums in classes

Today's goal: understand **Nested types & enums in classes** in plain English, see a tiny code sample for each idea, then practice in `examples/`.

How to study this day:
1. Read each concept's **Plain English** section.
2. Skim the code sample -- predict what it does.
3. Run the matching file under `examples/`.
4. Only then try `questions.md`.

| # | Concept |
|--:|---------|
| 1 | Nested classes |
| 2 | Nested enums |
| 3 | Access to outer members |
| 4 | Pimpl with nested impl |
| 5 | Iterator as nested type |
| 6 | Scoped names |
| 7 | Forwarding nested types |
| 8 | API surface control |
| 9 | Header size impact |
| 10 | A list node nesting |

---

## 1. Nested classes

### Plain English

An enum names a small set of choices. Prefer `enum class` so names stay scoped (`Color::Red`) and do not silently become ints.

### Tiny code

```cpp
enum class Color { Red, Green, Blue };
Color c = Color::Red;
// int x = c;  // error — good
int x = static_cast<int>(c);
```

- **Remember:** Use `enum class` unless you truly need old C-style unscoped enums.
- **Common mistake:** Switching on an enum without covering all cases or a `default`.

Practice: open `examples/01_*.cpp`, predict the output, change one line, re-predict.

## 2. Nested enums

### Plain English

An enum names a small set of choices. Prefer `enum class` so names stay scoped (`Color::Red`) and do not silently become ints.

### Tiny code

```cpp
enum class Color { Red, Green, Blue };
Color c = Color::Red;
// int x = c;  // error — good
int x = static_cast<int>(c);
```

- **Remember:** Use `enum class` unless you truly need old C-style unscoped enums.
- **Common mistake:** Switching on an enum without covering all cases or a `default`.

Practice: open `examples/02_*.cpp`, predict the output, change one line, re-predict.

## 3. Access to outer members

### Plain English

An enum names a small set of choices. Prefer `enum class` so names stay scoped (`Color::Red`) and do not silently become ints.

### Tiny code

```cpp
enum class Color { Red, Green, Blue };
Color c = Color::Red;
// int x = c;  // error — good
int x = static_cast<int>(c);
```

- **Remember:** Use `enum class` unless you truly need old C-style unscoped enums.
- **Common mistake:** Switching on an enum without covering all cases or a `default`.

Practice: open `examples/03_*.cpp`, predict the output, change one line, re-predict.

## 4. Pimpl with nested impl

### Plain English

An enum names a small set of choices. Prefer `enum class` so names stay scoped (`Color::Red`) and do not silently become ints.

### Tiny code

```cpp
enum class Color { Red, Green, Blue };
Color c = Color::Red;
// int x = c;  // error — good
int x = static_cast<int>(c);
```

- **Remember:** Use `enum class` unless you truly need old C-style unscoped enums.
- **Common mistake:** Switching on an enum without covering all cases or a `default`.

Practice: open `examples/04_*.cpp`, predict the output, change one line, re-predict.

## 5. Iterator as nested type

### Plain English

An enum names a small set of choices. Prefer `enum class` so names stay scoped (`Color::Red`) and do not silently become ints.

### Tiny code

```cpp
enum class Color { Red, Green, Blue };
Color c = Color::Red;
// int x = c;  // error — good
int x = static_cast<int>(c);
```

- **Remember:** Use `enum class` unless you truly need old C-style unscoped enums.
- **Common mistake:** Switching on an enum without covering all cases or a `default`.

Practice: open `examples/05_*.cpp`, predict the output, change one line, re-predict.

## 6. Scoped names

### Plain English

An enum names a small set of choices. Prefer `enum class` so names stay scoped (`Color::Red`) and do not silently become ints.

### Tiny code

```cpp
enum class Color { Red, Green, Blue };
Color c = Color::Red;
// int x = c;  // error — good
int x = static_cast<int>(c);
```

- **Remember:** Use `enum class` unless you truly need old C-style unscoped enums.
- **Common mistake:** Switching on an enum without covering all cases or a `default`.

Practice: open `examples/06_*.cpp`, predict the output, change one line, re-predict.

## 7. Forwarding nested types

### Plain English

An enum names a small set of choices. Prefer `enum class` so names stay scoped (`Color::Red`) and do not silently become ints.

### Tiny code

```cpp
enum class Color { Red, Green, Blue };
Color c = Color::Red;
// int x = c;  // error — good
int x = static_cast<int>(c);
```

- **Remember:** Use `enum class` unless you truly need old C-style unscoped enums.
- **Common mistake:** Switching on an enum without covering all cases or a `default`.

Practice: open `examples/07_*.cpp`, predict the output, change one line, re-predict.

## 8. API surface control

### Plain English

An enum names a small set of choices. Prefer `enum class` so names stay scoped (`Color::Red`) and do not silently become ints.

### Tiny code

```cpp
enum class Color { Red, Green, Blue };
Color c = Color::Red;
// int x = c;  // error — good
int x = static_cast<int>(c);
```

- **Remember:** Use `enum class` unless you truly need old C-style unscoped enums.
- **Common mistake:** Switching on an enum without covering all cases or a `default`.

Practice: open `examples/08_*.cpp`, predict the output, change one line, re-predict.

## 9. Header size impact

### Plain English

An enum names a small set of choices. Prefer `enum class` so names stay scoped (`Color::Red`) and do not silently become ints.

### Tiny code

```cpp
enum class Color { Red, Green, Blue };
Color c = Color::Red;
// int x = c;  // error — good
int x = static_cast<int>(c);
```

- **Remember:** Use `enum class` unless you truly need old C-style unscoped enums.
- **Common mistake:** Switching on an enum without covering all cases or a `default`.

Practice: open `examples/09_*.cpp`, predict the output, change one line, re-predict.

## 10. A list node nesting

### Plain English

An enum names a small set of choices. Prefer `enum class` so names stay scoped (`Color::Red`) and do not silently become ints.

### Tiny code

```cpp
enum class Color { Red, Green, Blue };
Color c = Color::Red;
// int x = c;  // error — good
int x = static_cast<int>(c);
```

- **Remember:** Use `enum class` unless you truly need old C-style unscoped enums.
- **Common mistake:** Switching on an enum without covering all cases or a `default`.

Practice: open `examples/10_*.cpp`, predict the output, change one line, re-predict.

---

## What you should be able to do after Day 58

- Explain `Nested types & enums in classes` to a peer without looking at notes.
- Compile and run all 10 examples with `-std=c++17 -Wall -Wextra` (use newer flags only when the day needs C++20+).
- Answer the 5 questions in `questions.md` before peeking at `answers.md`.
- Write one tiny extra program that combines at least 3 of today's concepts.

Or open this day in the **Badsha hub** (`python3 hub/server.py`) and use Learn / Practice / Quiz tabs.
