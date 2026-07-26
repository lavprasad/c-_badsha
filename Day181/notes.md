# Day 181 -- Career / craft habits

Today's goal: understand **Career / craft habits** in plain English, see a tiny code sample for each idea, then practice in `examples/`.

How to study this day:
1. Read each concept's **Plain English** section.
2. Skim the code sample -- predict what it does.
3. Run the matching file under `examples/`.
4. Only then try `questions.md`.

| # | Concept |
|--:|---------|
| 1 | Deliberate practice |
| 2 | Side projects |
| 3 | Reading standards carefully |
| 4 | Writing explainers |
| 5 | Code review culture |
| 6 | Mentoring |
| 7 | Avoiding cargo cult |
| 8 | Keeping notes |
| 9 | Health & pacing |
| 10 | 30-day craft plan |

---

## 1. Deliberate practice

### Plain English

Bit tricks set, clear, and test individual flags inside an integer. Prefer unsigned types for shift-heavy code. `std::bitset` makes fixed-width bit sets readable.

### Tiny code

```cpp
unsigned flags = 0;
flags |= (1u << 3);           // set bit 3
bool on = flags & (1u << 3);  // test
flags &= ~(1u << 3);          // clear
```

- **Remember:** Shifting into or past the sign bit on signed ints can be UB.
- **Common mistake:** Using signed `int` for bitmasks and shifting into the sign bit.

Practice: open `examples/01_*.cpp`, predict the output, change one line, re-predict.

## 2. Side projects

### Plain English

Bit tricks set, clear, and test individual flags inside an integer. Prefer unsigned types for shift-heavy code. `std::bitset` makes fixed-width bit sets readable.

### Tiny code

```cpp
unsigned flags = 0;
flags |= (1u << 3);           // set bit 3
bool on = flags & (1u << 3);  // test
flags &= ~(1u << 3);          // clear
```

- **Remember:** Shifting into or past the sign bit on signed ints can be UB.
- **Common mistake:** Using signed `int` for bitmasks and shifting into the sign bit.

Practice: open `examples/02_*.cpp`, predict the output, change one line, re-predict.

## 3. Reading standards carefully

### Plain English

Bit tricks set, clear, and test individual flags inside an integer. Prefer unsigned types for shift-heavy code. `std::bitset` makes fixed-width bit sets readable.

### Tiny code

```cpp
unsigned flags = 0;
flags |= (1u << 3);           // set bit 3
bool on = flags & (1u << 3);  // test
flags &= ~(1u << 3);          // clear
```

- **Remember:** Shifting into or past the sign bit on signed ints can be UB.
- **Common mistake:** Using signed `int` for bitmasks and shifting into the sign bit.

Practice: open `examples/03_*.cpp`, predict the output, change one line, re-predict.

## 4. Writing explainers

### Plain English

Bit tricks set, clear, and test individual flags inside an integer. Prefer unsigned types for shift-heavy code. `std::bitset` makes fixed-width bit sets readable.

### Tiny code

```cpp
unsigned flags = 0;
flags |= (1u << 3);           // set bit 3
bool on = flags & (1u << 3);  // test
flags &= ~(1u << 3);          // clear
```

- **Remember:** Shifting into or past the sign bit on signed ints can be UB.
- **Common mistake:** Using signed `int` for bitmasks and shifting into the sign bit.

Practice: open `examples/04_*.cpp`, predict the output, change one line, re-predict.

## 5. Code review culture

### Plain English

Bit tricks set, clear, and test individual flags inside an integer. Prefer unsigned types for shift-heavy code. `std::bitset` makes fixed-width bit sets readable.

### Tiny code

```cpp
unsigned flags = 0;
flags |= (1u << 3);           // set bit 3
bool on = flags & (1u << 3);  // test
flags &= ~(1u << 3);          // clear
```

- **Remember:** Shifting into or past the sign bit on signed ints can be UB.
- **Common mistake:** Using signed `int` for bitmasks and shifting into the sign bit.

Practice: open `examples/05_*.cpp`, predict the output, change one line, re-predict.

## 6. Mentoring

### Plain English

Bit tricks set, clear, and test individual flags inside an integer. Prefer unsigned types for shift-heavy code. `std::bitset` makes fixed-width bit sets readable.

### Tiny code

```cpp
unsigned flags = 0;
flags |= (1u << 3);           // set bit 3
bool on = flags & (1u << 3);  // test
flags &= ~(1u << 3);          // clear
```

- **Remember:** Shifting into or past the sign bit on signed ints can be UB.
- **Common mistake:** Using signed `int` for bitmasks and shifting into the sign bit.

Practice: open `examples/06_*.cpp`, predict the output, change one line, re-predict.

## 7. Avoiding cargo cult

### Plain English

Bit tricks set, clear, and test individual flags inside an integer. Prefer unsigned types for shift-heavy code. `std::bitset` makes fixed-width bit sets readable.

### Tiny code

```cpp
unsigned flags = 0;
flags |= (1u << 3);           // set bit 3
bool on = flags & (1u << 3);  // test
flags &= ~(1u << 3);          // clear
```

- **Remember:** Shifting into or past the sign bit on signed ints can be UB.
- **Common mistake:** Using signed `int` for bitmasks and shifting into the sign bit.

Practice: open `examples/07_*.cpp`, predict the output, change one line, re-predict.

## 8. Keeping notes

### Plain English

Bit tricks set, clear, and test individual flags inside an integer. Prefer unsigned types for shift-heavy code. `std::bitset` makes fixed-width bit sets readable.

### Tiny code

```cpp
unsigned flags = 0;
flags |= (1u << 3);           // set bit 3
bool on = flags & (1u << 3);  // test
flags &= ~(1u << 3);          // clear
```

- **Remember:** Shifting into or past the sign bit on signed ints can be UB.
- **Common mistake:** Using signed `int` for bitmasks and shifting into the sign bit.

Practice: open `examples/08_*.cpp`, predict the output, change one line, re-predict.

## 9. Health & pacing

### Plain English

Bit tricks set, clear, and test individual flags inside an integer. Prefer unsigned types for shift-heavy code. `std::bitset` makes fixed-width bit sets readable.

### Tiny code

```cpp
unsigned flags = 0;
flags |= (1u << 3);           // set bit 3
bool on = flags & (1u << 3);  // test
flags &= ~(1u << 3);          // clear
```

- **Remember:** Shifting into or past the sign bit on signed ints can be UB.
- **Common mistake:** Using signed `int` for bitmasks and shifting into the sign bit.

Practice: open `examples/09_*.cpp`, predict the output, change one line, re-predict.

## 10. 30-day craft plan

### Plain English

Bit tricks set, clear, and test individual flags inside an integer. Prefer unsigned types for shift-heavy code. `std::bitset` makes fixed-width bit sets readable.

### Tiny code

```cpp
unsigned flags = 0;
flags |= (1u << 3);           // set bit 3
bool on = flags & (1u << 3);  // test
flags &= ~(1u << 3);          // clear
```

- **Remember:** Shifting into or past the sign bit on signed ints can be UB.
- **Common mistake:** Using signed `int` for bitmasks and shifting into the sign bit.

Practice: open `examples/10_*.cpp`, predict the output, change one line, re-predict.

---

## What you should be able to do after Day 181

- Explain `Career / craft habits` to a peer without looking at notes.
- Compile and run all 10 examples with `-std=c++17 -Wall -Wextra` (use newer flags only when the day needs C++20+).
- Answer the 5 questions in `questions.md` before peeking at `answers.md`.
- Write one tiny extra program that combines at least 3 of today's concepts.

Or open this day in the **Badsha hub** (`python3 hub/server.py`) and use Learn / Practice / Quiz tabs.
