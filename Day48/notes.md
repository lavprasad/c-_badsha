# Day 48 -- References collapsing & forwarding

Today's goal: understand **References collapsing & forwarding** in plain English, see a tiny code sample for each idea, then practice in `examples/`.

How to study this day:
1. Read each concept's **Plain English** section.
2. Skim the code sample -- predict what it does.
3. Run the matching file under `examples/`.
4. Only then try `questions.md`.

| # | Concept |
|--:|---------|
| 1 | lvalue/rvalue ref collapse |
| 2 | Universal references (T&&) |
| 3 | std::forward |
| 4 | make_pair style factories |
| 5 | Forwarding in wrappers |
| 6 | reference_wrapper |
| 7 | Common deduction mistakes |
| 8 | auto&& in range-for |
| 9 | Emplace forwarding |
| 10 | A thin wrapper demo |

---

## 1. lvalue/rvalue ref collapse

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

Practice: open `examples/01_*.cpp`, predict the output, change one line, re-predict.

## 2. Universal references (T&&)

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

Practice: open `examples/02_*.cpp`, predict the output, change one line, re-predict.

## 3. std::forward

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

Practice: open `examples/03_*.cpp`, predict the output, change one line, re-predict.

## 4. make_pair style factories

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

Practice: open `examples/04_*.cpp`, predict the output, change one line, re-predict.

## 5. Forwarding in wrappers

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

Practice: open `examples/05_*.cpp`, predict the output, change one line, re-predict.

## 6. reference_wrapper

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

## 7. Common deduction mistakes

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

Practice: open `examples/07_*.cpp`, predict the output, change one line, re-predict.

## 8. auto&& in range-for

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

Practice: open `examples/08_*.cpp`, predict the output, change one line, re-predict.

## 9. Emplace forwarding

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

Practice: open `examples/09_*.cpp`, predict the output, change one line, re-predict.

## 10. A thin wrapper demo

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

Practice: open `examples/10_*.cpp`, predict the output, change one line, re-predict.

---

## What you should be able to do after Day 48

- Explain `References collapsing & forwarding` to a peer without looking at notes.
- Compile and run all 10 examples with `-std=c++17 -Wall -Wextra` (use newer flags only when the day needs C++20+).
- Answer the 5 questions in `questions.md` before peeking at `answers.md`.
- Write one tiny extra program that combines at least 3 of today's concepts.

Or open this day in the **Badsha hub** (`python3 hub/server.py`) and use Learn / Practice / Quiz tabs.
