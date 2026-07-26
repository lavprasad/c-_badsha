# Day 25 -- Floating-point realities

Today's goal: understand **Floating-point realities** in plain English, see a tiny code sample for each idea, then practice in `examples/`.

How to study this day:
1. Read each concept's **Plain English** section.
2. Skim the code sample -- predict what it does.
3. Run the matching file under `examples/`.
4. Only then try `questions.md`.

| # | Concept |
|--:|---------|
| 1 | IEEE-754 intuition |
| 2 | Precision limits |
| 3 | Comparing floats safely |
| 4 | NaN and infinity |
| 5 | Rounding modes idea |
| 6 | Accumulation error |
| 7 | float vs double choice |
| 8 | Printing floats |
| 9 | Integer ↔ float conversions |
| 10 | When to avoid float |

---

## 1. IEEE-754 intuition

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

Practice: open `examples/01_*.cpp`, predict the output, change one line, re-predict.

## 2. Precision limits

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

Practice: open `examples/02_*.cpp`, predict the output, change one line, re-predict.

## 3. Comparing floats safely

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

Practice: open `examples/03_*.cpp`, predict the output, change one line, re-predict.

## 4. NaN and infinity

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

Practice: open `examples/04_*.cpp`, predict the output, change one line, re-predict.

## 5. Rounding modes idea

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

Practice: open `examples/05_*.cpp`, predict the output, change one line, re-predict.

## 6. Accumulation error

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

## 7. float vs double choice

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

Practice: open `examples/07_*.cpp`, predict the output, change one line, re-predict.

## 8. Printing floats

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

Practice: open `examples/08_*.cpp`, predict the output, change one line, re-predict.

## 9. Integer ↔ float conversions

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

Practice: open `examples/09_*.cpp`, predict the output, change one line, re-predict.

## 10. When to avoid float

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

Practice: open `examples/10_*.cpp`, predict the output, change one line, re-predict.

---

## What you should be able to do after Day 25

- Explain `Floating-point realities` to a peer without looking at notes.
- Compile and run all 10 examples with `-std=c++17 -Wall -Wextra` (use newer flags only when the day needs C++20+).
- Answer the 5 questions in `questions.md` before peeking at `answers.md`.
- Write one tiny extra program that combines at least 3 of today's concepts.

Or open this day in the **Badsha hub** (`python3 hub/server.py`) and use Learn / Practice / Quiz tabs.
