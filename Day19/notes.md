# Day 19 -- std::array & std::vector mastery

Today's goal: understand **std::array & std::vector mastery** in plain English, see a tiny code sample for each idea, then practice in `examples/`.

How to study this day:
1. Read each concept's **Plain English** section.
2. Skim the code sample -- predict what it does.
3. Run the matching file under `examples/`.
4. Only then try `questions.md`.

| # | Concept |
|--:|---------|
| 1 | std::array vs C array |
| 2 | vector growth strategy |
| 3 | reserve vs resize |
| 4 | emplace_back vs push_back |
| 5 | Iterators and invalidation |
| 6 | erase-remove idiom preview |
| 7 | 2D vectors |
| 8 | Passing containers efficiently |
| 9 | at() vs operator[] |
| 10 | Capacity vs size |

---

## 1. std::array vs C array

### Plain English

`std::vector` is a growable array in contiguous memory — your default sequence container. `reserve` avoids repeated reallocations. Reallocation invalidates pointers/iterators into the vector.

### Tiny code

```cpp
std::vector<int> v;
v.reserve(100);
for (int i = 0; i < 100; ++i) v.push_back(i);
```

- **Remember:** Call `reserve` when you know the final size ahead of time.
- **Common mistake:** Keeping a pointer/iterator into a vector across a `push_back` that reallocates.

Practice: open `examples/01_*.cpp`, predict the output, change one line, re-predict.

## 2. vector growth strategy

### Plain English

`std::vector` is a growable array in contiguous memory — your default sequence container. `reserve` avoids repeated reallocations. Reallocation invalidates pointers/iterators into the vector.

### Tiny code

```cpp
std::vector<int> v;
v.reserve(100);
for (int i = 0; i < 100; ++i) v.push_back(i);
```

- **Remember:** Call `reserve` when you know the final size ahead of time.
- **Common mistake:** Keeping a pointer/iterator into a vector across a `push_back` that reallocates.

Practice: open `examples/02_*.cpp`, predict the output, change one line, re-predict.

## 3. reserve vs resize

### Plain English

`std::vector` is a growable array in contiguous memory — your default sequence container. `reserve` avoids repeated reallocations. Reallocation invalidates pointers/iterators into the vector.

### Tiny code

```cpp
std::vector<int> v;
v.reserve(100);
for (int i = 0; i < 100; ++i) v.push_back(i);
```

- **Remember:** Call `reserve` when you know the final size ahead of time.
- **Common mistake:** Keeping a pointer/iterator into a vector across a `push_back` that reallocates.

Practice: open `examples/03_*.cpp`, predict the output, change one line, re-predict.

## 4. emplace_back vs push_back

### Plain English

`std::vector` is a growable array in contiguous memory — your default sequence container. `reserve` avoids repeated reallocations. Reallocation invalidates pointers/iterators into the vector.

### Tiny code

```cpp
std::vector<int> v;
v.reserve(100);
for (int i = 0; i < 100; ++i) v.push_back(i);
```

- **Remember:** Call `reserve` when you know the final size ahead of time.
- **Common mistake:** Keeping a pointer/iterator into a vector across a `push_back` that reallocates.

Practice: open `examples/04_*.cpp`, predict the output, change one line, re-predict.

## 5. Iterators and invalidation

### Plain English

`std::vector` is a growable array in contiguous memory — your default sequence container. `reserve` avoids repeated reallocations. Reallocation invalidates pointers/iterators into the vector.

### Tiny code

```cpp
std::vector<int> v;
v.reserve(100);
for (int i = 0; i < 100; ++i) v.push_back(i);
```

- **Remember:** Call `reserve` when you know the final size ahead of time.
- **Common mistake:** Keeping a pointer/iterator into a vector across a `push_back` that reallocates.

Practice: open `examples/05_*.cpp`, predict the output, change one line, re-predict.

## 6. erase-remove idiom preview

### Plain English

`std::vector` is a growable array in contiguous memory — your default sequence container. `reserve` avoids repeated reallocations. Reallocation invalidates pointers/iterators into the vector.

### Tiny code

```cpp
std::vector<int> v;
v.reserve(100);
for (int i = 0; i < 100; ++i) v.push_back(i);
```

- **Remember:** Call `reserve` when you know the final size ahead of time.
- **Common mistake:** Keeping a pointer/iterator into a vector across a `push_back` that reallocates.

Practice: open `examples/06_*.cpp`, predict the output, change one line, re-predict.

## 7. 2D vectors

### Plain English

`std::vector` is a growable array in contiguous memory — your default sequence container. `reserve` avoids repeated reallocations. Reallocation invalidates pointers/iterators into the vector.

### Tiny code

```cpp
std::vector<int> v;
v.reserve(100);
for (int i = 0; i < 100; ++i) v.push_back(i);
```

- **Remember:** Call `reserve` when you know the final size ahead of time.
- **Common mistake:** Keeping a pointer/iterator into a vector across a `push_back` that reallocates.

Practice: open `examples/07_*.cpp`, predict the output, change one line, re-predict.

## 8. Passing containers efficiently

### Plain English

`std::vector` is a growable array in contiguous memory — your default sequence container. `reserve` avoids repeated reallocations. Reallocation invalidates pointers/iterators into the vector.

### Tiny code

```cpp
std::vector<int> v;
v.reserve(100);
for (int i = 0; i < 100; ++i) v.push_back(i);
```

- **Remember:** Call `reserve` when you know the final size ahead of time.
- **Common mistake:** Keeping a pointer/iterator into a vector across a `push_back` that reallocates.

Practice: open `examples/08_*.cpp`, predict the output, change one line, re-predict.

## 9. at() vs operator[]

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

## 10. Capacity vs size

### Plain English

`std::vector` is a growable array in contiguous memory — your default sequence container. `reserve` avoids repeated reallocations. Reallocation invalidates pointers/iterators into the vector.

### Tiny code

```cpp
std::vector<int> v;
v.reserve(100);
for (int i = 0; i < 100; ++i) v.push_back(i);
```

- **Remember:** Call `reserve` when you know the final size ahead of time.
- **Common mistake:** Keeping a pointer/iterator into a vector across a `push_back` that reallocates.

Practice: open `examples/10_*.cpp`, predict the output, change one line, re-predict.

---

## What you should be able to do after Day 19

- Explain `std::array & std::vector mastery` to a peer without looking at notes.
- Compile and run all 10 examples with `-std=c++17 -Wall -Wextra` (use newer flags only when the day needs C++20+).
- Answer the 5 questions in `questions.md` before peeking at `answers.md`.
- Write one tiny extra program that combines at least 3 of today's concepts.

Or open this day in the **Badsha hub** (`python3 hub/server.py`) and use Learn / Practice / Quiz tabs.
