# Day 146 -- Scientific computing C++

Today's goal: understand **Scientific computing C++** in plain English, see a tiny code sample for each idea, then practice in `examples/`.

How to study this day:
1. Read each concept's **Plain English** section.
2. Skim the code sample -- predict what it does.
3. Run the matching file under `examples/`.
4. Only then try `questions.md`.

| # | Concept |
|--:|---------|
| 1 | Numerics stability |
| 2 | BLAS mindset |
| 3 | Contiguous storage |
| 4 | Stride and layout |
| 5 | Parallel reductions |
| 6 | Precision choice |
| 7 | Reproducibility |
| 8 | Interfacing Python idea |
| 9 | Units types |
| 10 | Dot product careful |

---

## 1. Numerics stability

### Plain English

Today's idea — **Numerics stability** — fits inside the wider theme of Scientific computing C++. Read it as a tool: what job does it do, what rules does it enforce, and what breaks if you ignore those rules?

### Tiny code

```cpp
// Explore: Numerics stability
#include <iostream>
int main() {
  std::cout << "practice: Numerics stability\n";
  return 0;
}
```

- **Remember:** State one invariant for `Numerics stability` before you write code that uses it.
- **Common mistake:** Using `Numerics stability` by copy-paste without knowing what it owns or when it is valid.

Practice: open `examples/01_*.cpp`, predict the output, change one line, re-predict.

## 2. BLAS mindset

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

## 3. Contiguous storage

### Plain English

Today's idea — **Contiguous storage** — fits inside the wider theme of Scientific computing C++. Read it as a tool: what job does it do, what rules does it enforce, and what breaks if you ignore those rules?

### Tiny code

```cpp
// Explore: Contiguous storage
#include <iostream>
int main() {
  std::cout << "practice: Contiguous storage\n";
  return 0;
}
```

- **Remember:** State one invariant for `Contiguous storage` before you write code that uses it.
- **Common mistake:** Using `Contiguous storage` by copy-paste without knowing what it owns or when it is valid.

Practice: open `examples/03_*.cpp`, predict the output, change one line, re-predict.

## 4. Stride and layout

### Plain English

Today's idea — **Stride and layout** — fits inside the wider theme of Scientific computing C++. Read it as a tool: what job does it do, what rules does it enforce, and what breaks if you ignore those rules?

### Tiny code

```cpp
// Explore: Stride and layout
#include <iostream>
int main() {
  std::cout << "practice: Stride and layout\n";
  return 0;
}
```

- **Remember:** State one invariant for `Stride and layout` before you write code that uses it.
- **Common mistake:** Using `Stride and layout` by copy-paste without knowing what it owns or when it is valid.

Practice: open `examples/04_*.cpp`, predict the output, change one line, re-predict.

## 5. Parallel reductions

### Plain English

Today's idea — **Parallel reductions** — fits inside the wider theme of Scientific computing C++. Read it as a tool: what job does it do, what rules does it enforce, and what breaks if you ignore those rules?

### Tiny code

```cpp
// Explore: Parallel reductions
#include <iostream>
int main() {
  std::cout << "practice: Parallel reductions\n";
  return 0;
}
```

- **Remember:** State one invariant for `Parallel reductions` before you write code that uses it.
- **Common mistake:** Using `Parallel reductions` by copy-paste without knowing what it owns or when it is valid.

Practice: open `examples/05_*.cpp`, predict the output, change one line, re-predict.

## 6. Precision choice

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

## 7. Reproducibility

### Plain English

Today's idea — **Reproducibility** — fits inside the wider theme of Scientific computing C++. Read it as a tool: what job does it do, what rules does it enforce, and what breaks if you ignore those rules?

### Tiny code

```cpp
// Explore: Reproducibility
#include <iostream>
int main() {
  std::cout << "practice: Reproducibility\n";
  return 0;
}
```

- **Remember:** State one invariant for `Reproducibility` before you write code that uses it.
- **Common mistake:** Using `Reproducibility` by copy-paste without knowing what it owns or when it is valid.

Practice: open `examples/07_*.cpp`, predict the output, change one line, re-predict.

## 8. Interfacing Python idea

### Plain English

Today's idea — **Interfacing Python idea** — fits inside the wider theme of Scientific computing C++. Read it as a tool: what job does it do, what rules does it enforce, and what breaks if you ignore those rules?

### Tiny code

```cpp
// Explore: Interfacing Python idea
#include <iostream>
int main() {
  std::cout << "practice: Interfacing Python idea\n";
  return 0;
}
```

- **Remember:** State one invariant for `Interfacing Python idea` before you write code that uses it.
- **Common mistake:** Using `Interfacing Python idea` by copy-paste without knowing what it owns or when it is valid.

Practice: open `examples/08_*.cpp`, predict the output, change one line, re-predict.

## 9. Units types

### Plain English

Today's idea — **Units types** — fits inside the wider theme of Scientific computing C++. Read it as a tool: what job does it do, what rules does it enforce, and what breaks if you ignore those rules?

### Tiny code

```cpp
// Explore: Units types
#include <iostream>
int main() {
  std::cout << "practice: Units types\n";
  return 0;
}
```

- **Remember:** State one invariant for `Units types` before you write code that uses it.
- **Common mistake:** Using `Units types` by copy-paste without knowing what it owns or when it is valid.

Practice: open `examples/09_*.cpp`, predict the output, change one line, re-predict.

## 10. Dot product careful

### Plain English

Today's idea — **Dot product careful** — fits inside the wider theme of Scientific computing C++. Read it as a tool: what job does it do, what rules does it enforce, and what breaks if you ignore those rules?

### Tiny code

```cpp
// Explore: Dot product careful
#include <iostream>
int main() {
  std::cout << "practice: Dot product careful\n";
  return 0;
}
```

- **Remember:** State one invariant for `Dot product careful` before you write code that uses it.
- **Common mistake:** Using `Dot product careful` by copy-paste without knowing what it owns or when it is valid.

Practice: open `examples/10_*.cpp`, predict the output, change one line, re-predict.

---

## What you should be able to do after Day 146

- Explain `Scientific computing C++` to a peer without looking at notes.
- Compile and run all 10 examples with `-std=c++17 -Wall -Wextra` (use newer flags only when the day needs C++20+).
- Answer the 5 questions in `questions.md` before peeking at `answers.md`.
- Write one tiny extra program that combines at least 3 of today's concepts.

Or open this day in the **Badsha hub** (`python3 hub/server.py`) and use Learn / Practice / Quiz tabs.
