# Day 24 -- Bit manipulation

Today's goal: understand **Bit manipulation** in plain English, see a tiny code sample for each idea, then practice in `examples/`.

How to study this day:
1. Read each concept's **Plain English** section.
2. Skim the code sample -- predict what it does.
3. Run the matching file under `examples/`.
4. Only then try `questions.md`.

| # | Concept |
|--:|---------|
| 1 | Bits, masks, shifts |
| 2 | Setting/clearing/toggling bits |
| 3 | Testing a bit |
| 4 | Bitwise vs logical |
| 5 | Endianness awareness |
| 6 | std::bitset |
| 7 | Counting bits (naive) |
| 8 | Power-of-two tricks |
| 9 | Flags enums |
| 10 | Safety with signed shifts |

---

## 1. Bits, masks, shifts

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

## 2. Setting/clearing/toggling bits

### Plain English

`map` keeps keys sorted (tree); `unordered_map` hashes for average O(1) lookup. Pick sorted when you need order; pick hash when you need speed and have a good hash.

### Tiny code

```cpp
std::unordered_map<std::string, int> freq;
++freq["hi"];
for (auto& [k, v] : freq) std::cout << k << ':' << v << '\n';
```

- **Remember:** `operator[]` default-inserts a value if the key is missing.
- **Common mistake:** Using `[]` when you only meant to look up — prefer `find` / `at` if missing should be an error.

Practice: open `examples/02_*.cpp`, predict the output, change one line, re-predict.

## 3. Testing a bit

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

## 4. Bitwise vs logical

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

## 5. Endianness awareness

### Plain English

Iterators are like advanced pointers into a container. Algorithms take `[begin, end)` half-open ranges. Know when inserts/erases invalidate them.

### Tiny code

```cpp
std::vector<int> v{1,2,3};
for (auto it = v.begin(); it != v.end(); ++it)
  std::cout << *it << ' ';
```

- **Remember:** After erase, use the iterator that `erase` returns.
- **Common mistake:** Incrementing an invalidated iterator → undefined behaviour.

Practice: open `examples/05_*.cpp`, predict the output, change one line, re-predict.

## 6. std::bitset

### Plain English

`map` keeps keys sorted (tree); `unordered_map` hashes for average O(1) lookup. Pick sorted when you need order; pick hash when you need speed and have a good hash.

### Tiny code

```cpp
std::unordered_map<std::string, int> freq;
++freq["hi"];
for (auto& [k, v] : freq) std::cout << k << ':' << v << '\n';
```

- **Remember:** `operator[]` default-inserts a value if the key is missing.
- **Common mistake:** Using `[]` when you only meant to look up — prefer `find` / `at` if missing should be an error.

Practice: open `examples/06_*.cpp`, predict the output, change one line, re-predict.

## 7. Counting bits (naive)

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

## 8. Power-of-two tricks

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

## 9. Flags enums

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

## 10. Safety with signed shifts

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

## What you should be able to do after Day 24

- Explain `Bit manipulation` to a peer without looking at notes.
- Compile and run all 10 examples with `-std=c++17 -Wall -Wextra` (use newer flags only when the day needs C++20+).
- Answer the 5 questions in `questions.md` before peeking at `answers.md`.
- Write one tiny extra program that combines at least 3 of today's concepts.

Or open this day in the **Badsha hub** (`python3 hub/server.py`) and use Learn / Practice / Quiz tabs.
