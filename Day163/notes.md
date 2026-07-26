# Day 163 -- Binary search mastery

Today's goal: understand **Binary search mastery** in plain English, see a tiny code sample for each idea, then practice in `examples/`.

How to study this day:
1. Read each concept's **Plain English** section.
2. Skim the code sample -- predict what it does.
3. Run the matching file under `examples/`.
4. Only then try `questions.md`.

| # | Concept |
|--:|---------|
| 1 | Lower/upper bound |
| 2 | Binary search on answer |
| 3 | Monotonic predicates |
| 4 | Off-by-one traps |
| 5 | Search in rotated |
| 6 | Floating binary search |
| 7 | STL helpers |
| 8 | Invariant thinking |
| 9 | Testing boundaries |
| 10 | Practice set E |

---

## 1. Lower/upper bound

### Plain English

These patterns turn nested loops into linear or logarithmic passes. Binary search needs a monotonic predicate. Two pointers / sliding windows need a clear invariant.

### Tiny code

```cpp
auto it = std::lower_bound(v.begin(), v.end(), x);
bool found = it != v.end() && *it == x;
```

- **Remember:** Write down the invariant before coding the loop.
- **Common mistake:** Off-by-one errors in binary search bounds (`lo`/`hi`).

Practice: open `examples/01_*.cpp`, predict the output, change one line, re-predict.

## 2. Binary search on answer

### Plain English

These patterns turn nested loops into linear or logarithmic passes. Binary search needs a monotonic predicate. Two pointers / sliding windows need a clear invariant.

### Tiny code

```cpp
auto it = std::lower_bound(v.begin(), v.end(), x);
bool found = it != v.end() && *it == x;
```

- **Remember:** Write down the invariant before coding the loop.
- **Common mistake:** Off-by-one errors in binary search bounds (`lo`/`hi`).

Practice: open `examples/02_*.cpp`, predict the output, change one line, re-predict.

## 3. Monotonic predicates

### Plain English

These patterns turn nested loops into linear or logarithmic passes. Binary search needs a monotonic predicate. Two pointers / sliding windows need a clear invariant.

### Tiny code

```cpp
auto it = std::lower_bound(v.begin(), v.end(), x);
bool found = it != v.end() && *it == x;
```

- **Remember:** Write down the invariant before coding the loop.
- **Common mistake:** Off-by-one errors in binary search bounds (`lo`/`hi`).

Practice: open `examples/03_*.cpp`, predict the output, change one line, re-predict.

## 4. Off-by-one traps

### Plain English

These patterns turn nested loops into linear or logarithmic passes. Binary search needs a monotonic predicate. Two pointers / sliding windows need a clear invariant.

### Tiny code

```cpp
auto it = std::lower_bound(v.begin(), v.end(), x);
bool found = it != v.end() && *it == x;
```

- **Remember:** Write down the invariant before coding the loop.
- **Common mistake:** Off-by-one errors in binary search bounds (`lo`/`hi`).

Practice: open `examples/04_*.cpp`, predict the output, change one line, re-predict.

## 5. Search in rotated

### Plain English

These patterns turn nested loops into linear or logarithmic passes. Binary search needs a monotonic predicate. Two pointers / sliding windows need a clear invariant.

### Tiny code

```cpp
auto it = std::lower_bound(v.begin(), v.end(), x);
bool found = it != v.end() && *it == x;
```

- **Remember:** Write down the invariant before coding the loop.
- **Common mistake:** Off-by-one errors in binary search bounds (`lo`/`hi`).

Practice: open `examples/05_*.cpp`, predict the output, change one line, re-predict.

## 6. Floating binary search

### Plain English

Floating-point numbers approximate reals. Equality with `==` is often wrong; compare with a tolerance appropriate to your scale. Watch for NaN and accumulation error.

### Tiny code

```cpp
bool nearly_equal(double a, double b, double eps = 1e-9) {
  return std::fabs(a - b) <= eps;
}
```

- **Remember:** Never loop with `double` counters expecting exact sums.
- **Common mistake:** `if (f == 0.1)` style checks that fail due to representation.

Practice: open `examples/06_*.cpp`, predict the output, change one line, re-predict.

## 7. STL helpers

### Plain English

These patterns turn nested loops into linear or logarithmic passes. Binary search needs a monotonic predicate. Two pointers / sliding windows need a clear invariant.

### Tiny code

```cpp
auto it = std::lower_bound(v.begin(), v.end(), x);
bool found = it != v.end() && *it == x;
```

- **Remember:** Write down the invariant before coding the loop.
- **Common mistake:** Off-by-one errors in binary search bounds (`lo`/`hi`).

Practice: open `examples/07_*.cpp`, predict the output, change one line, re-predict.

## 8. Invariant thinking

### Plain English

`optional<T>` is either a T or empty — better than magic sentinel values. `variant` holds one of several types. Prefer them over raw unions or `void*` for clarity.

### Tiny code

```cpp
#include <optional>
std::optional<int> parse(bool ok) {
  if (!ok) return std::nullopt;
  return 42;
}
int x = parse(true).value_or(-1);
```

- **Remember:** Check `optional` (or use `value_or`) before calling `value()`.
- **Common mistake:** Calling `opt.value()` on an empty optional → exception.

Practice: open `examples/08_*.cpp`, predict the output, change one line, re-predict.

## 9. Testing boundaries

### Plain English

These patterns turn nested loops into linear or logarithmic passes. Binary search needs a monotonic predicate. Two pointers / sliding windows need a clear invariant.

### Tiny code

```cpp
auto it = std::lower_bound(v.begin(), v.end(), x);
bool found = it != v.end() && *it == x;
```

- **Remember:** Write down the invariant before coding the loop.
- **Common mistake:** Off-by-one errors in binary search bounds (`lo`/`hi`).

Practice: open `examples/09_*.cpp`, predict the output, change one line, re-predict.

## 10. Practice set E

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

Practice: open `examples/10_*.cpp`, predict the output, change one line, re-predict.

---

## What you should be able to do after Day 163

- Explain `Binary search mastery` to a peer without looking at notes.
- Compile and run all 10 examples with `-std=c++17 -Wall -Wextra` (use newer flags only when the day needs C++20+).
- Answer the 5 questions in `questions.md` before peeking at `answers.md`.
- Write one tiny extra program that combines at least 3 of today's concepts.

Or open this day in the **Badsha hub** (`python3 hub/server.py`) and use Learn / Practice / Quiz tabs.
