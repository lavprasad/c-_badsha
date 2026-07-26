# Day 33 -- string_view (C++17)

Today's goal: understand **string_view (C++17)** in plain English, see a tiny code sample for each idea, then practice in `examples/`.

How to study this day:
1. Read each concept's **Plain English** section.
2. Skim the code sample -- predict what it does.
3. Run the matching file under `examples/`.
4. Only then try `questions.md`.

| # | Concept |
|--:|---------|
| 1 | What string_view is |
| 2 | Non-owning views |
| 3 | Lifetime with string and C-strings |
| 4 | Lifetime traps (dangling) |
| 5 | remove_prefix / remove_suffix |
| 6 | find on string_view |
| 7 | API design with string_view |
| 8 | Null-termination caution |
| 9 | Lifetimeing to string when needed |
| 10 | A tokenizer sketch |

---

## 1. What string_view is

### Plain English

`std::string` owns character data and grows as needed. Prefer it over raw `char*` for safety. `string_view` is a non-owning window — great for read-only parameters, dangerous if it outlives the string.

### Tiny code

```cpp
std::string s = "hello";
std::string_view v = s;  // ok while s lives
auto t = s.substr(0, 2); // "he"
```

- **Remember:** Never return a `string_view` that points at a local temporary.
- **Common mistake:** Mixing `getline` and `>>` without clearing the leftover newline.

Practice: open `examples/01_*.cpp`, predict the output, change one line, re-predict.

## 2. Non-owning views

### Plain English

`std::string` owns character data and grows as needed. Prefer it over raw `char*` for safety. `string_view` is a non-owning window — great for read-only parameters, dangerous if it outlives the string.

### Tiny code

```cpp
std::string s = "hello";
std::string_view v = s;  // ok while s lives
auto t = s.substr(0, 2); // "he"
```

- **Remember:** Never return a `string_view` that points at a local temporary.
- **Common mistake:** Mixing `getline` and `>>` without clearing the leftover newline.

Practice: open `examples/02_*.cpp`, predict the output, change one line, re-predict.

## 3. Lifetime with string and C-strings

### Plain English

`std::string` owns character data and grows as needed. Prefer it over raw `char*` for safety. `string_view` is a non-owning window — great for read-only parameters, dangerous if it outlives the string.

### Tiny code

```cpp
std::string s = "hello";
std::string_view v = s;  // ok while s lives
auto t = s.substr(0, 2); // "he"
```

- **Remember:** Never return a `string_view` that points at a local temporary.
- **Common mistake:** Mixing `getline` and `>>` without clearing the leftover newline.

Practice: open `examples/03_*.cpp`, predict the output, change one line, re-predict.

## 4. Lifetime traps (dangling)

### Plain English

`std::string` owns character data and grows as needed. Prefer it over raw `char*` for safety. `string_view` is a non-owning window — great for read-only parameters, dangerous if it outlives the string.

### Tiny code

```cpp
std::string s = "hello";
std::string_view v = s;  // ok while s lives
auto t = s.substr(0, 2); // "he"
```

- **Remember:** Never return a `string_view` that points at a local temporary.
- **Common mistake:** Mixing `getline` and `>>` without clearing the leftover newline.

Practice: open `examples/04_*.cpp`, predict the output, change one line, re-predict.

## 5. remove_prefix / remove_suffix

### Plain English

`std::string` owns character data and grows as needed. Prefer it over raw `char*` for safety. `string_view` is a non-owning window — great for read-only parameters, dangerous if it outlives the string.

### Tiny code

```cpp
std::string s = "hello";
std::string_view v = s;  // ok while s lives
auto t = s.substr(0, 2); // "he"
```

- **Remember:** Never return a `string_view` that points at a local temporary.
- **Common mistake:** Mixing `getline` and `>>` without clearing the leftover newline.

Practice: open `examples/05_*.cpp`, predict the output, change one line, re-predict.

## 6. find on string_view

### Plain English

`std::string` owns character data and grows as needed. Prefer it over raw `char*` for safety. `string_view` is a non-owning window — great for read-only parameters, dangerous if it outlives the string.

### Tiny code

```cpp
std::string s = "hello";
std::string_view v = s;  // ok while s lives
auto t = s.substr(0, 2); // "he"
```

- **Remember:** Never return a `string_view` that points at a local temporary.
- **Common mistake:** Mixing `getline` and `>>` without clearing the leftover newline.

Practice: open `examples/06_*.cpp`, predict the output, change one line, re-predict.

## 7. API design with string_view

### Plain English

`std::string` owns character data and grows as needed. Prefer it over raw `char*` for safety. `string_view` is a non-owning window — great for read-only parameters, dangerous if it outlives the string.

### Tiny code

```cpp
std::string s = "hello";
std::string_view v = s;  // ok while s lives
auto t = s.substr(0, 2); // "he"
```

- **Remember:** Never return a `string_view` that points at a local temporary.
- **Common mistake:** Mixing `getline` and `>>` without clearing the leftover newline.

Practice: open `examples/07_*.cpp`, predict the output, change one line, re-predict.

## 8. Null-termination caution

### Plain English

`std::string` owns character data and grows as needed. Prefer it over raw `char*` for safety. `string_view` is a non-owning window — great for read-only parameters, dangerous if it outlives the string.

### Tiny code

```cpp
std::string s = "hello";
std::string_view v = s;  // ok while s lives
auto t = s.substr(0, 2); // "he"
```

- **Remember:** Never return a `string_view` that points at a local temporary.
- **Common mistake:** Mixing `getline` and `>>` without clearing the leftover newline.

Practice: open `examples/08_*.cpp`, predict the output, change one line, re-predict.

## 9. Lifetimeing to string when needed

### Plain English

`std::string` owns character data and grows as needed. Prefer it over raw `char*` for safety. `string_view` is a non-owning window — great for read-only parameters, dangerous if it outlives the string.

### Tiny code

```cpp
std::string s = "hello";
std::string_view v = s;  // ok while s lives
auto t = s.substr(0, 2); // "he"
```

- **Remember:** Never return a `string_view` that points at a local temporary.
- **Common mistake:** Mixing `getline` and `>>` without clearing the leftover newline.

Practice: open `examples/09_*.cpp`, predict the output, change one line, re-predict.

## 10. A tokenizer sketch

### Plain English

`std::string` owns character data and grows as needed. Prefer it over raw `char*` for safety. `string_view` is a non-owning window — great for read-only parameters, dangerous if it outlives the string.

### Tiny code

```cpp
std::string s = "hello";
std::string_view v = s;  // ok while s lives
auto t = s.substr(0, 2); // "he"
```

- **Remember:** Never return a `string_view` that points at a local temporary.
- **Common mistake:** Mixing `getline` and `>>` without clearing the leftover newline.

Practice: open `examples/10_*.cpp`, predict the output, change one line, re-predict.

---

## What you should be able to do after Day 33

- Explain `string_view (C++17)` to a peer without looking at notes.
- Compile and run all 10 examples with `-std=c++17 -Wall -Wextra` (use newer flags only when the day needs C++20+).
- Answer the 5 questions in `questions.md` before peeking at `answers.md`.
- Write one tiny extra program that combines at least 3 of today's concepts.

Or open this day in the **Badsha hub** (`python3 hub/server.py`) and use Learn / Practice / Quiz tabs.
