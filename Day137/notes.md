# Day 137 -- Copy elision & ABI

Today's goal: understand **Copy elision & ABI** in plain English, see a tiny code sample for each idea, then practice in `examples/`.

How to study this day:
1. Read each concept's **Plain English** section.
2. Skim the code sample -- predict what it does.
3. Run the matching file under `examples/`.
4. Only then try `questions.md`.

| # | Concept |
|--:|---------|
| 1 | Mandatory elision |
| 2 | NRVO |
| 3 | When copies remain |
| 4 | ABI and registers |
| 5 | Passing large objects |
| 6 | Returning large objects |
| 7 | [[no_unique_address]] |
| 8 | Empty bases |
| 9 | Measuring |
| 10 | Elision demo |

---

## 1. Mandatory elision

### Plain English

Today's idea — **Mandatory elision** — fits inside the wider theme of Copy elision & ABI. Read it as a tool: what job does it do, what rules does it enforce, and what breaks if you ignore those rules?

### Tiny code

```cpp
// Explore: Mandatory elision
#include <iostream>
int main() {
  std::cout << "practice: Mandatory elision\n";
  return 0;
}
```

- **Remember:** State one invariant for `Mandatory elision` before you write code that uses it.
- **Common mistake:** Using `Mandatory elision` by copy-paste without knowing what it owns or when it is valid.

Practice: open `examples/01_*.cpp`, predict the output, change one line, re-predict.

## 2. NRVO

### Plain English

Today's idea — **NRVO** — fits inside the wider theme of Copy elision & ABI. Read it as a tool: what job does it do, what rules does it enforce, and what breaks if you ignore those rules?

### Tiny code

```cpp
// Explore: NRVO
#include <iostream>
int main() {
  std::cout << "practice: NRVO\n";
  return 0;
}
```

- **Remember:** State one invariant for `NRVO` before you write code that uses it.
- **Common mistake:** Using `NRVO` by copy-paste without knowing what it owns or when it is valid.

Practice: open `examples/02_*.cpp`, predict the output, change one line, re-predict.

## 3. When copies remain

### Plain English

Today's idea — **When copies remain** — fits inside the wider theme of Copy elision & ABI. Read it as a tool: what job does it do, what rules does it enforce, and what breaks if you ignore those rules?

### Tiny code

```cpp
// Explore: When copies remain
#include <iostream>
int main() {
  std::cout << "practice: When copies remain\n";
  return 0;
}
```

- **Remember:** State one invariant for `When copies remain` before you write code that uses it.
- **Common mistake:** Using `When copies remain` by copy-paste without knowing what it owns or when it is valid.

Practice: open `examples/03_*.cpp`, predict the output, change one line, re-predict.

## 4. ABI and registers

### Plain English

Today's idea — **ABI and registers** — fits inside the wider theme of Copy elision & ABI. Read it as a tool: what job does it do, what rules does it enforce, and what breaks if you ignore those rules?

### Tiny code

```cpp
// Explore: ABI and registers
#include <iostream>
int main() {
  std::cout << "practice: ABI and registers\n";
  return 0;
}
```

- **Remember:** State one invariant for `ABI and registers` before you write code that uses it.
- **Common mistake:** Using `ABI and registers` by copy-paste without knowing what it owns or when it is valid.

Practice: open `examples/04_*.cpp`, predict the output, change one line, re-predict.

## 5. Passing large objects

### Plain English

Today's idea — **Passing large objects** — fits inside the wider theme of Copy elision & ABI. Read it as a tool: what job does it do, what rules does it enforce, and what breaks if you ignore those rules?

### Tiny code

```cpp
// Explore: Passing large objects
#include <iostream>
int main() {
  std::cout << "practice: Passing large objects\n";
  return 0;
}
```

- **Remember:** State one invariant for `Passing large objects` before you write code that uses it.
- **Common mistake:** Using `Passing large objects` by copy-paste without knowing what it owns or when it is valid.

Practice: open `examples/05_*.cpp`, predict the output, change one line, re-predict.

## 6. Returning large objects

### Plain English

Today's idea — **Returning large objects** — fits inside the wider theme of Copy elision & ABI. Read it as a tool: what job does it do, what rules does it enforce, and what breaks if you ignore those rules?

### Tiny code

```cpp
// Explore: Returning large objects
#include <iostream>
int main() {
  std::cout << "practice: Returning large objects\n";
  return 0;
}
```

- **Remember:** State one invariant for `Returning large objects` before you write code that uses it.
- **Common mistake:** Using `Returning large objects` by copy-paste without knowing what it owns or when it is valid.

Practice: open `examples/06_*.cpp`, predict the output, change one line, re-predict.

## 7. [[no_unique_address]]

### Plain English

Today's idea — **[[no_unique_address]]** — fits inside the wider theme of Copy elision & ABI. Read it as a tool: what job does it do, what rules does it enforce, and what breaks if you ignore those rules?

### Tiny code

```cpp
// Explore: [[no_unique_address]]
#include <iostream>
int main() {
  std::cout << "practice: [[no_unique_address]]\n";
  return 0;
}
```

- **Remember:** State one invariant for `[[no_unique_address]]` before you write code that uses it.
- **Common mistake:** Using `[[no_unique_address]]` by copy-paste without knowing what it owns or when it is valid.

Practice: open `examples/07_*.cpp`, predict the output, change one line, re-predict.

## 8. Empty bases

### Plain English

Today's idea — **Empty bases** — fits inside the wider theme of Copy elision & ABI. Read it as a tool: what job does it do, what rules does it enforce, and what breaks if you ignore those rules?

### Tiny code

```cpp
// Explore: Empty bases
#include <iostream>
int main() {
  std::cout << "practice: Empty bases\n";
  return 0;
}
```

- **Remember:** State one invariant for `Empty bases` before you write code that uses it.
- **Common mistake:** Using `Empty bases` by copy-paste without knowing what it owns or when it is valid.

Practice: open `examples/08_*.cpp`, predict the output, change one line, re-predict.

## 9. Measuring

### Plain English

Today's idea — **Measuring** — fits inside the wider theme of Copy elision & ABI. Read it as a tool: what job does it do, what rules does it enforce, and what breaks if you ignore those rules?

### Tiny code

```cpp
// Explore: Measuring
#include <iostream>
int main() {
  std::cout << "practice: Measuring\n";
  return 0;
}
```

- **Remember:** State one invariant for `Measuring` before you write code that uses it.
- **Common mistake:** Using `Measuring` by copy-paste without knowing what it owns or when it is valid.

Practice: open `examples/09_*.cpp`, predict the output, change one line, re-predict.

## 10. Elision demo

### Plain English

Today's idea — **Elision demo** — fits inside the wider theme of Copy elision & ABI. Read it as a tool: what job does it do, what rules does it enforce, and what breaks if you ignore those rules?

### Tiny code

```cpp
// Explore: Elision demo
#include <iostream>
int main() {
  std::cout << "practice: Elision demo\n";
  return 0;
}
```

- **Remember:** State one invariant for `Elision demo` before you write code that uses it.
- **Common mistake:** Using `Elision demo` by copy-paste without knowing what it owns or when it is valid.

Practice: open `examples/10_*.cpp`, predict the output, change one line, re-predict.

---

## What you should be able to do after Day 137

- Explain `Copy elision & ABI` to a peer without looking at notes.
- Compile and run all 10 examples with `-std=c++17 -Wall -Wextra` (use newer flags only when the day needs C++20+).
- Answer the 5 questions in `questions.md` before peeking at `answers.md`.
- Write one tiny extra program that combines at least 3 of today's concepts.

Or open this day in the **Badsha hub** (`python3 hub/server.py`) and use Learn / Practice / Quiz tabs.
