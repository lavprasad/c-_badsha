# Day 36 -- std::function & callables

Today's goal: understand **std::function & callables** in plain English, see a tiny code sample for each idea, then practice in `examples/`.

How to study this day:
1. Read each concept's **Plain English** section.
2. Skim the code sample -- predict what it does.
3. Run the matching file under `examples/`.
4. Only then try `questions.md`.

| # | Concept |
|--:|---------|
| 1 | Callable concept |
| 2 | Function pointers vs std::function |
| 3 | Storing lambdas |
| 4 | Member function pointers idea |
| 5 | std::bind basics (and when to avoid) |
| 6 | Type erasure cost |
| 7 | Callbacks in APIs |
| 8 | Nullable callables |
| 9 | Performance considerations |
| 10 | A small event bus |

---

## 1. Callable concept

### Plain English

A lambda is a small unnamed function object. Capture `[=]` by value or `[&]` by reference carefully — referenced locals must outlive the lambda.

### Tiny code

```cpp
int factor = 2;
auto twice = [factor](int x) { return x * factor; };
std::vector<int> v{1,2,3};
std::sort(v.begin(), v.end(), [](int a, int b){ return a > b; });
```

- **Remember:** Do not capture locals by reference and return the lambda upward.
- **Common mistake:** Dangling captures after the stack frame ends.

Practice: open `examples/01_*.cpp`, predict the output, change one line, re-predict.

## 2. Function pointers vs std::function

### Plain English

A lambda is a small unnamed function object. Capture `[=]` by value or `[&]` by reference carefully — referenced locals must outlive the lambda.

### Tiny code

```cpp
int factor = 2;
auto twice = [factor](int x) { return x * factor; };
std::vector<int> v{1,2,3};
std::sort(v.begin(), v.end(), [](int a, int b){ return a > b; });
```

- **Remember:** Do not capture locals by reference and return the lambda upward.
- **Common mistake:** Dangling captures after the stack frame ends.

Practice: open `examples/02_*.cpp`, predict the output, change one line, re-predict.

## 3. Storing lambdas

### Plain English

A lambda is a small unnamed function object. Capture `[=]` by value or `[&]` by reference carefully — referenced locals must outlive the lambda.

### Tiny code

```cpp
int factor = 2;
auto twice = [factor](int x) { return x * factor; };
std::vector<int> v{1,2,3};
std::sort(v.begin(), v.end(), [](int a, int b){ return a > b; });
```

- **Remember:** Do not capture locals by reference and return the lambda upward.
- **Common mistake:** Dangling captures after the stack frame ends.

Practice: open `examples/03_*.cpp`, predict the output, change one line, re-predict.

## 4. Member function pointers idea

### Plain English

A lambda is a small unnamed function object. Capture `[=]` by value or `[&]` by reference carefully — referenced locals must outlive the lambda.

### Tiny code

```cpp
int factor = 2;
auto twice = [factor](int x) { return x * factor; };
std::vector<int> v{1,2,3};
std::sort(v.begin(), v.end(), [](int a, int b){ return a > b; });
```

- **Remember:** Do not capture locals by reference and return the lambda upward.
- **Common mistake:** Dangling captures after the stack frame ends.

Practice: open `examples/04_*.cpp`, predict the output, change one line, re-predict.

## 5. std::bind basics (and when to avoid)

### Plain English

A lambda is a small unnamed function object. Capture `[=]` by value or `[&]` by reference carefully — referenced locals must outlive the lambda.

### Tiny code

```cpp
int factor = 2;
auto twice = [factor](int x) { return x * factor; };
std::vector<int> v{1,2,3};
std::sort(v.begin(), v.end(), [](int a, int b){ return a > b; });
```

- **Remember:** Do not capture locals by reference and return the lambda upward.
- **Common mistake:** Dangling captures after the stack frame ends.

Practice: open `examples/05_*.cpp`, predict the output, change one line, re-predict.

## 6. Type erasure cost

### Plain English

A lambda is a small unnamed function object. Capture `[=]` by value or `[&]` by reference carefully — referenced locals must outlive the lambda.

### Tiny code

```cpp
int factor = 2;
auto twice = [factor](int x) { return x * factor; };
std::vector<int> v{1,2,3};
std::sort(v.begin(), v.end(), [](int a, int b){ return a > b; });
```

- **Remember:** Do not capture locals by reference and return the lambda upward.
- **Common mistake:** Dangling captures after the stack frame ends.

Practice: open `examples/06_*.cpp`, predict the output, change one line, re-predict.

## 7. Callbacks in APIs

### Plain English

A lambda is a small unnamed function object. Capture `[=]` by value or `[&]` by reference carefully — referenced locals must outlive the lambda.

### Tiny code

```cpp
int factor = 2;
auto twice = [factor](int x) { return x * factor; };
std::vector<int> v{1,2,3};
std::sort(v.begin(), v.end(), [](int a, int b){ return a > b; });
```

- **Remember:** Do not capture locals by reference and return the lambda upward.
- **Common mistake:** Dangling captures after the stack frame ends.

Practice: open `examples/07_*.cpp`, predict the output, change one line, re-predict.

## 8. Nullable callables

### Plain English

A lambda is a small unnamed function object. Capture `[=]` by value or `[&]` by reference carefully — referenced locals must outlive the lambda.

### Tiny code

```cpp
int factor = 2;
auto twice = [factor](int x) { return x * factor; };
std::vector<int> v{1,2,3};
std::sort(v.begin(), v.end(), [](int a, int b){ return a > b; });
```

- **Remember:** Do not capture locals by reference and return the lambda upward.
- **Common mistake:** Dangling captures after the stack frame ends.

Practice: open `examples/08_*.cpp`, predict the output, change one line, re-predict.

## 9. Performance considerations

### Plain English

A lambda is a small unnamed function object. Capture `[=]` by value or `[&]` by reference carefully — referenced locals must outlive the lambda.

### Tiny code

```cpp
int factor = 2;
auto twice = [factor](int x) { return x * factor; };
std::vector<int> v{1,2,3};
std::sort(v.begin(), v.end(), [](int a, int b){ return a > b; });
```

- **Remember:** Do not capture locals by reference and return the lambda upward.
- **Common mistake:** Dangling captures after the stack frame ends.

Practice: open `examples/09_*.cpp`, predict the output, change one line, re-predict.

## 10. A small event bus

### Plain English

A lambda is a small unnamed function object. Capture `[=]` by value or `[&]` by reference carefully — referenced locals must outlive the lambda.

### Tiny code

```cpp
int factor = 2;
auto twice = [factor](int x) { return x * factor; };
std::vector<int> v{1,2,3};
std::sort(v.begin(), v.end(), [](int a, int b){ return a > b; });
```

- **Remember:** Do not capture locals by reference and return the lambda upward.
- **Common mistake:** Dangling captures after the stack frame ends.

Practice: open `examples/10_*.cpp`, predict the output, change one line, re-predict.

---

## What you should be able to do after Day 36

- Explain `std::function & callables` to a peer without looking at notes.
- Compile and run all 10 examples with `-std=c++17 -Wall -Wextra` (use newer flags only when the day needs C++20+).
- Answer the 5 questions in `questions.md` before peeking at `answers.md`.
- Write one tiny extra program that combines at least 3 of today's concepts.

Or open this day in the **Badsha hub** (`python3 hub/server.py`) and use Learn / Practice / Quiz tabs.
