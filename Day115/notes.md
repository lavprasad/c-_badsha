# Day 115 -- std::span

Today's goal: understand **std::span** in plain English, see a tiny code sample for each idea, then practice in `examples/`.

How to study this day:
1. Read each concept's **Plain English** section.
2. Skim the code sample -- predict what it does.
3. Run the matching file under `examples/`.
4. Only then try `questions.md`.

| # | Concept |
|--:|---------|
| 1 | Non-owning contiguous view |
| 2 | span from array/vector |
| 3 | subspan |
| 4 | Dynamic vs static extent |
| 5 | API boundaries |
| 6 | vs string_view |
| 7 | Lifetime safety |
| 8 | Iteration |
| 9 | const span |
| 10 | Sum a span |

---

## 1. Non-owning contiguous view

### Plain English

Modern C++ (20+) adds safer views (`span`, ranges), clearer comparisons (`<=>`), and better formatting. Use them when your toolchain supports them; otherwise stick to C++17 patterns taught earlier.

### Tiny code

```cpp
// C++20 sketch
// std::span<int> s = arr;
// auto evens = v | std::views::filter([](int x){ return x % 2 == 0; });
```

- **Remember:** Check your compiler's C++20/23 support before relying on these.
- **Common mistake:** Assuming every machine in class/CI has full C++20 library support.

Practice: open `examples/01_*.cpp`, predict the output, change one line, re-predict.

## 2. span from array/vector

### Plain English

Modern C++ (20+) adds safer views (`span`, ranges), clearer comparisons (`<=>`), and better formatting. Use them when your toolchain supports them; otherwise stick to C++17 patterns taught earlier.

### Tiny code

```cpp
// C++20 sketch
// std::span<int> s = arr;
// auto evens = v | std::views::filter([](int x){ return x % 2 == 0; });
```

- **Remember:** Check your compiler's C++20/23 support before relying on these.
- **Common mistake:** Assuming every machine in class/CI has full C++20 library support.

Practice: open `examples/02_*.cpp`, predict the output, change one line, re-predict.

## 3. subspan

### Plain English

Modern C++ (20+) adds safer views (`span`, ranges), clearer comparisons (`<=>`), and better formatting. Use them when your toolchain supports them; otherwise stick to C++17 patterns taught earlier.

### Tiny code

```cpp
// C++20 sketch
// std::span<int> s = arr;
// auto evens = v | std::views::filter([](int x){ return x % 2 == 0; });
```

- **Remember:** Check your compiler's C++20/23 support before relying on these.
- **Common mistake:** Assuming every machine in class/CI has full C++20 library support.

Practice: open `examples/03_*.cpp`, predict the output, change one line, re-predict.

## 4. Dynamic vs static extent

### Plain English

Modern C++ (20+) adds safer views (`span`, ranges), clearer comparisons (`<=>`), and better formatting. Use them when your toolchain supports them; otherwise stick to C++17 patterns taught earlier.

### Tiny code

```cpp
// C++20 sketch
// std::span<int> s = arr;
// auto evens = v | std::views::filter([](int x){ return x % 2 == 0; });
```

- **Remember:** Check your compiler's C++20/23 support before relying on these.
- **Common mistake:** Assuming every machine in class/CI has full C++20 library support.

Practice: open `examples/04_*.cpp`, predict the output, change one line, re-predict.

## 5. API boundaries

### Plain English

Modern C++ (20+) adds safer views (`span`, ranges), clearer comparisons (`<=>`), and better formatting. Use them when your toolchain supports them; otherwise stick to C++17 patterns taught earlier.

### Tiny code

```cpp
// C++20 sketch
// std::span<int> s = arr;
// auto evens = v | std::views::filter([](int x){ return x % 2 == 0; });
```

- **Remember:** Check your compiler's C++20/23 support before relying on these.
- **Common mistake:** Assuming every machine in class/CI has full C++20 library support.

Practice: open `examples/05_*.cpp`, predict the output, change one line, re-predict.

## 6. vs string_view

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

## 7. Lifetime safety

### Plain English

Modern C++ (20+) adds safer views (`span`, ranges), clearer comparisons (`<=>`), and better formatting. Use them when your toolchain supports them; otherwise stick to C++17 patterns taught earlier.

### Tiny code

```cpp
// C++20 sketch
// std::span<int> s = arr;
// auto evens = v | std::views::filter([](int x){ return x % 2 == 0; });
```

- **Remember:** Check your compiler's C++20/23 support before relying on these.
- **Common mistake:** Assuming every machine in class/CI has full C++20 library support.

Practice: open `examples/07_*.cpp`, predict the output, change one line, re-predict.

## 8. Iteration

### Plain English

Modern C++ (20+) adds safer views (`span`, ranges), clearer comparisons (`<=>`), and better formatting. Use them when your toolchain supports them; otherwise stick to C++17 patterns taught earlier.

### Tiny code

```cpp
// C++20 sketch
// std::span<int> s = arr;
// auto evens = v | std::views::filter([](int x){ return x % 2 == 0; });
```

- **Remember:** Check your compiler's C++20/23 support before relying on these.
- **Common mistake:** Assuming every machine in class/CI has full C++20 library support.

Practice: open `examples/08_*.cpp`, predict the output, change one line, re-predict.

## 9. const span

### Plain English

Modern C++ (20+) adds safer views (`span`, ranges), clearer comparisons (`<=>`), and better formatting. Use them when your toolchain supports them; otherwise stick to C++17 patterns taught earlier.

### Tiny code

```cpp
// C++20 sketch
// std::span<int> s = arr;
// auto evens = v | std::views::filter([](int x){ return x % 2 == 0; });
```

- **Remember:** Check your compiler's C++20/23 support before relying on these.
- **Common mistake:** Assuming every machine in class/CI has full C++20 library support.

Practice: open `examples/09_*.cpp`, predict the output, change one line, re-predict.

## 10. Sum a span

### Plain English

Modern C++ (20+) adds safer views (`span`, ranges), clearer comparisons (`<=>`), and better formatting. Use them when your toolchain supports them; otherwise stick to C++17 patterns taught earlier.

### Tiny code

```cpp
// C++20 sketch
// std::span<int> s = arr;
// auto evens = v | std::views::filter([](int x){ return x % 2 == 0; });
```

- **Remember:** Check your compiler's C++20/23 support before relying on these.
- **Common mistake:** Assuming every machine in class/CI has full C++20 library support.

Practice: open `examples/10_*.cpp`, predict the output, change one line, re-predict.

---

## What you should be able to do after Day 115

- Explain `std::span` to a peer without looking at notes.
- Compile and run all 10 examples with `-std=c++17 -Wall -Wextra` (use newer flags only when the day needs C++20+).
- Answer the 5 questions in `questions.md` before peeking at `answers.md`.
- Write one tiny extra program that combines at least 3 of today's concepts.

Or open this day in the **Badsha hub** (`python3 hub/server.py`) and use Learn / Practice / Quiz tabs.
