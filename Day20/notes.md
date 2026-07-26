# Day 20 -- std::string mastery

Today's goal: understand **std::string mastery** in plain English, see a tiny code sample for each idea, then practice in `examples/`.

How to study this day:
1. Read each concept's **Plain English** section.
2. Skim the code sample -- predict what it does.
3. Run the matching file under `examples/`.
4. Only then try `questions.md`.

| # | Concept |
|--:|---------|
| 1 | Construction and SSO idea |
| 2 | find / rfind / substr |
| 3 | append / insert / erase |
| 4 | compare and relational ops |
| 5 | c_str() and data() |
| 6 | string_view preview motivation |
| 7 | Conversion to/from numbers |
| 8 | UTF-8 awareness (basics) |
| 9 | Performance tips |
| 10 | Common string bugs |

---

## 1. Construction and SSO idea

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

## 2. find / rfind / substr

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

## 3. append / insert / erase

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

## 4. compare and relational ops

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

## 5. c_str() and data()

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

## 6. string_view preview motivation

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

## 7. Conversion to/from numbers

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

## 8. UTF-8 awareness (basics)

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

## 9. Performance tips

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

## 10. Common string bugs

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

## What you should be able to do after Day 20

- Explain `std::string mastery` to a peer without looking at notes.
- Compile and run all 10 examples with `-std=c++17 -Wall -Wextra` (use newer flags only when the day needs C++20+).
- Answer the 5 questions in `questions.md` before peeking at `answers.md`.
- Write one tiny extra program that combines at least 3 of today's concepts.

Or open this day in the **Badsha hub** (`python3 hub/server.py`) and use Learn / Practice / Quiz tabs.
