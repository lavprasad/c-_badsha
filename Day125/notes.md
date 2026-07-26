# Day 125 -- Numbers & math updates

Today's goal: understand **Numbers & math updates** in plain English, see a tiny code sample for each idea, then practice in `examples/`.

How to study this day:
1. Read each concept's **Plain English** section.
2. Skim the code sample -- predict what it does.
3. Run the matching file under `examples/`.
4. Only then try `questions.md`.

| # | Concept |
|--:|---------|
| 1 | midpoint |
| 2 | lerp |
| 3 | cmath additions awareness |
| 4 | Numeric limits |
| 5 | Safe comparisons idea |
| 6 | Integer abs |
| 7 | Floating classify |
| 8 | Math error handling |
| 9 | Constants (numbers header idea) |
| 10 | Interpolation demo |

---

## 1. midpoint

### Plain English

DP solves overlapping subproblems once and stores answers. Greedy picks locally best choices when a proof allows it. Backtracking explores choices and undoes them.

### Tiny code

```cpp
std::vector<long long> dp(n + 1);
dp[0] = 0;
for (int i = 1; i <= n; ++i)
  dp[i] = dp[i - 1] + i;  // toy example
```

- **Remember:** Define the state and transition in words before coding.
- **Common mistake:** Memoising without a clear state key → wrong answers.

Practice: open `examples/01_*.cpp`, predict the output, change one line, re-predict.

## 2. lerp

### Plain English

Today's idea — **lerp** — fits inside the wider theme of Numbers & math updates. Read it as a tool: what job does it do, what rules does it enforce, and what breaks if you ignore those rules?

### Tiny code

```cpp
// Explore: lerp
#include <iostream>
int main() {
  std::cout << "practice: lerp\n";
  return 0;
}
```

- **Remember:** State one invariant for `lerp` before you write code that uses it.
- **Common mistake:** Using `lerp` by copy-paste without knowing what it owns or when it is valid.

Practice: open `examples/02_*.cpp`, predict the output, change one line, re-predict.

## 3. cmath additions awareness

### Plain English

Today's idea — **cmath additions awareness** — fits inside the wider theme of Numbers & math updates. Read it as a tool: what job does it do, what rules does it enforce, and what breaks if you ignore those rules?

### Tiny code

```cpp
// Explore: cmath additions awareness
#include <iostream>
int main() {
  std::cout << "practice: cmath additions awareness\n";
  return 0;
}
```

- **Remember:** State one invariant for `cmath additions awareness` before you write code that uses it.
- **Common mistake:** Using `cmath additions awareness` by copy-paste without knowing what it owns or when it is valid.

Practice: open `examples/03_*.cpp`, predict the output, change one line, re-predict.

## 4. Numeric limits

### Plain English

Today's idea — **Numeric limits** — fits inside the wider theme of Numbers & math updates. Read it as a tool: what job does it do, what rules does it enforce, and what breaks if you ignore those rules?

### Tiny code

```cpp
// Explore: Numeric limits
#include <iostream>
int main() {
  std::cout << "practice: Numeric limits\n";
  return 0;
}
```

- **Remember:** State one invariant for `Numeric limits` before you write code that uses it.
- **Common mistake:** Using `Numeric limits` by copy-paste without knowing what it owns or when it is valid.

Practice: open `examples/04_*.cpp`, predict the output, change one line, re-predict.

## 5. Safe comparisons idea

### Plain English

Today's idea — **Safe comparisons idea** — fits inside the wider theme of Numbers & math updates. Read it as a tool: what job does it do, what rules does it enforce, and what breaks if you ignore those rules?

### Tiny code

```cpp
// Explore: Safe comparisons idea
#include <iostream>
int main() {
  std::cout << "practice: Safe comparisons idea\n";
  return 0;
}
```

- **Remember:** State one invariant for `Safe comparisons idea` before you write code that uses it.
- **Common mistake:** Using `Safe comparisons idea` by copy-paste without knowing what it owns or when it is valid.

Practice: open `examples/05_*.cpp`, predict the output, change one line, re-predict.

## 6. Integer abs

### Plain English

Today's idea — **Integer abs** — fits inside the wider theme of Numbers & math updates. Read it as a tool: what job does it do, what rules does it enforce, and what breaks if you ignore those rules?

### Tiny code

```cpp
// Explore: Integer abs
#include <iostream>
int main() {
  std::cout << "practice: Integer abs\n";
  return 0;
}
```

- **Remember:** State one invariant for `Integer abs` before you write code that uses it.
- **Common mistake:** Using `Integer abs` by copy-paste without knowing what it owns or when it is valid.

Practice: open `examples/06_*.cpp`, predict the output, change one line, re-predict.

## 7. Floating classify

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

## 8. Math error handling

### Plain English

Today's idea — **Math error handling** — fits inside the wider theme of Numbers & math updates. Read it as a tool: what job does it do, what rules does it enforce, and what breaks if you ignore those rules?

### Tiny code

```cpp
// Explore: Math error handling
#include <iostream>
int main() {
  std::cout << "practice: Math error handling\n";
  return 0;
}
```

- **Remember:** State one invariant for `Math error handling` before you write code that uses it.
- **Common mistake:** Using `Math error handling` by copy-paste without knowing what it owns or when it is valid.

Practice: open `examples/08_*.cpp`, predict the output, change one line, re-predict.

## 9. Constants (numbers header idea)

### Plain English

Headers declare the interface; `.cpp` files define the bodies. Include guards stop a header from being pasted twice into one translation unit. The One Definition Rule says non-inline functions have exactly one definition in the whole program.

### Tiny code

```cpp
#pragma once
struct Widget;           // forward decl — enough for pointers/refs
void use(Widget*);
```

- **Remember:** Declarations in headers, definitions in `.cpp` (templates excepted).
- **Common mistake:** Defining a non-inline function in a header included by two `.cpp` files → multiple definition linker error.

Practice: open `examples/09_*.cpp`, predict the output, change one line, re-predict.

## 10. Interpolation demo

### Plain English

Today's idea — **Interpolation demo** — fits inside the wider theme of Numbers & math updates. Read it as a tool: what job does it do, what rules does it enforce, and what breaks if you ignore those rules?

### Tiny code

```cpp
// Explore: Interpolation demo
#include <iostream>
int main() {
  std::cout << "practice: Interpolation demo\n";
  return 0;
}
```

- **Remember:** State one invariant for `Interpolation demo` before you write code that uses it.
- **Common mistake:** Using `Interpolation demo` by copy-paste without knowing what it owns or when it is valid.

Practice: open `examples/10_*.cpp`, predict the output, change one line, re-predict.

---

## What you should be able to do after Day 125

- Explain `Numbers & math updates` to a peer without looking at notes.
- Compile and run all 10 examples with `-std=c++17 -Wall -Wextra` (use newer flags only when the day needs C++20+).
- Answer the 5 questions in `questions.md` before peeking at `answers.md`.
- Write one tiny extra program that combines at least 3 of today's concepts.

Or open this day in the **Badsha hub** (`python3 hub/server.py`) and use Learn / Practice / Quiz tabs.
