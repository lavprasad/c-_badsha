# Day 153 -- Arrays & two pointers

Today's goal: understand **Arrays & two pointers** in plain English, see a tiny code sample for each idea, then practice in `examples/`.

How to study this day:
1. Read each concept's **Plain English** section.
2. Skim the code sample -- predict what it does.
3. Run the matching file under `examples/`.
4. Only then try `questions.md`.

| # | Concept |
|--:|---------|
| 1 | Two pointers pattern |
| 2 | Sliding window |
| 3 | Prefix sums |
| 4 | In-place transforms |
| 5 | Dutch national flag |
| 6 | Kadane idea |
| 7 | Rotate array |
| 8 | Merge sorted |
| 9 | Remove duplicates |
| 10 | Practice set A |

---

## 1. Two pointers pattern

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

## 2. Sliding window

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

## 3. Prefix sums

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

## 4. In-place transforms

### Plain English

STL algorithms are verbs over iterator ranges. Prefer them over hand-rolled loops when the intent matches (`find`, `sort`, `transform`). The erase-remove idiom deletes elements by value/predicate from a sequence container.

### Tiny code

```cpp
v.erase(std::remove(v.begin(), v.end(), 0), v.end());
std::sort(v.begin(), v.end());
```

- **Remember:** `remove` only slides elements — you still need `erase`.
- **Common mistake:** Calling `std::remove` and forgetting the container `erase`.

Practice: open `examples/04_*.cpp`, predict the output, change one line, re-predict.

## 5. Dutch national flag

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

## 6. Kadane idea

### Plain English

These patterns turn nested loops into linear or logarithmic passes. Binary search needs a monotonic predicate. Two pointers / sliding windows need a clear invariant.

### Tiny code

```cpp
auto it = std::lower_bound(v.begin(), v.end(), x);
bool found = it != v.end() && *it == x;
```

- **Remember:** Write down the invariant before coding the loop.
- **Common mistake:** Off-by-one errors in binary search bounds (`lo`/`hi`).

Practice: open `examples/06_*.cpp`, predict the output, change one line, re-predict.

## 7. Rotate array

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

## 8. Merge sorted

### Plain English

These patterns turn nested loops into linear or logarithmic passes. Binary search needs a monotonic predicate. Two pointers / sliding windows need a clear invariant.

### Tiny code

```cpp
auto it = std::lower_bound(v.begin(), v.end(), x);
bool found = it != v.end() && *it == x;
```

- **Remember:** Write down the invariant before coding the loop.
- **Common mistake:** Off-by-one errors in binary search bounds (`lo`/`hi`).

Practice: open `examples/08_*.cpp`, predict the output, change one line, re-predict.

## 9. Remove duplicates

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

## 10. Practice set A

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

## What you should be able to do after Day 153

- Explain `Arrays & two pointers` to a peer without looking at notes.
- Compile and run all 10 examples with `-std=c++17 -Wall -Wextra` (use newer flags only when the day needs C++20+).
- Answer the 5 questions in `questions.md` before peeking at `answers.md`.
- Write one tiny extra program that combines at least 3 of today's concepts.

Or open this day in the **Badsha hub** (`python3 hub/server.py`) and use Learn / Practice / Quiz tabs.
