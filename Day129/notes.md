# Day 129 -- constexpr programming

Today's goal: understand **constexpr programming** in plain English, see a tiny code sample for each idea, then practice in `examples/`.

How to study this day:
1. Read each concept's **Plain English** section.
2. Skim the code sample -- predict what it does.
3. Run the matching file under `examples/`.
4. Only then try `questions.md`.

| # | Concept |
|--:|---------|
| 1 | What can be constexpr |
| 2 | Containers in constexpr (limits by standard) |
| 3 | Algorithms at compile time |
| 4 | Diagnostic static_assert |
| 5 | Lookup tables |
| 6 | Parsing at compile time |
| 7 | Performance of constexpr |
| 8 | if constexpr |
| 9 | Testing constexpr |
| 10 | Compile-time CRC sketch |

---

## 1. What can be constexpr

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

## 2. Containers in constexpr (limits by standard)

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

## 3. Algorithms at compile time

### Plain English

STL algorithms are verbs over iterator ranges. Prefer them over hand-rolled loops when the intent matches (`find`, `sort`, `transform`). The erase-remove idiom deletes elements by value/predicate from a sequence container.

### Tiny code

```cpp
v.erase(std::remove(v.begin(), v.end(), 0), v.end());
std::sort(v.begin(), v.end());
```

- **Remember:** `remove` only slides elements — you still need `erase`.
- **Common mistake:** Calling `std::remove` and forgetting the container `erase`.

Practice: open `examples/03_*.cpp`, predict the output, change one line, re-predict.

## 4. Diagnostic static_assert

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

## 5. Lookup tables

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

## 6. Parsing at compile time

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

Practice: open `examples/06_*.cpp`, predict the output, change one line, re-predict.

## 7. Performance of constexpr

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

Practice: open `examples/07_*.cpp`, predict the output, change one line, re-predict.

## 8. if constexpr

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

## 9. Testing constexpr

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

## 10. Compile-time CRC sketch

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

## What you should be able to do after Day 129

- Explain `constexpr programming` to a peer without looking at notes.
- Compile and run all 10 examples with `-std=c++17 -Wall -Wextra` (use newer flags only when the day needs C++20+).
- Answer the 5 questions in `questions.md` before peeking at `answers.md`.
- Write one tiny extra program that combines at least 3 of today's concepts.

Or open this day in the **Badsha hub** (`python3 hub/server.py`) and use Learn / Practice / Quiz tabs.
