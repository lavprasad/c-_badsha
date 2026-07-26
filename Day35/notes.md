# Day 35 -- Lambda mastery

Today's goal: understand **Lambda mastery** in plain English, see a tiny code sample for each idea, then practice in `examples/`.

How to study this day:
1. Read each concept's **Plain English** section.
2. Skim the code sample -- predict what it does.
3. Run the matching file under `examples/`.
4. Only then try `questions.md`.

| # | Concept |
|--:|---------|
| 1 | Syntax recap |
| 2 | Capture by value/reference |
| 3 | mutable lambdas |
| 4 | Generic lambdas (auto params) |
| 5 | Returning lambdas |
| 6 | Storing in std::function |
| 7 | Immediately-invoked lambdas |
| 8 | Lambdas as comparators |
| 9 | Capture init (C++14) |
| 10 | Common capture bugs |

---

## 1. Syntax recap

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

## 2. Capture by value/reference

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

## 3. mutable lambdas

### Plain English

`const` is a promise: 'I will not change this through this name.' It catches bugs at compile time and documents intent. Put `const` on observers and on parameters you only read.

### Tiny code

```cpp
void print(const std::string& s);  // no copy, no mutate
struct Counter {
  int n = 0;
  int get() const { return n; }  // may call on const objects
};
```

- **Remember:** Prefer `const T&` for read-only parameters bigger than a machine word.
- **Common mistake:** Casting away `const` to mutate something that callers assumed was fixed.

Practice: open `examples/03_*.cpp`, predict the output, change one line, re-predict.

## 4. Generic lambdas (auto params)

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

## 5. Returning lambdas

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

## 6. Storing in std::function

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

## 7. Immediately-invoked lambdas

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

## 8. Lambdas as comparators

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

## 9. Capture init (C++14)

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

## 10. Common capture bugs

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

## What you should be able to do after Day 35

- Explain `Lambda mastery` to a peer without looking at notes.
- Compile and run all 10 examples with `-std=c++17 -Wall -Wextra` (use newer flags only when the day needs C++20+).
- Answer the 5 questions in `questions.md` before peeking at `answers.md`.
- Write one tiny extra program that combines at least 3 of today's concepts.

Or open this day in the **Badsha hub** (`python3 hub/server.py`) and use Learn / Practice / Quiz tabs.
