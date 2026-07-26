# Day 96 -- Regular expressions

Today's goal: understand **Regular expressions** in plain English, see a tiny code sample for each idea, then practice in `examples/`.

How to study this day:
1. Read each concept's **Plain English** section.
2. Skim the code sample -- predict what it does.
3. Run the matching file under `examples/`.
4. Only then try `questions.md`.

| # | Concept |
|--:|---------|
| 1 | std::regex basics |
| 2 | match vs search |
| 3 | Capture groups |
| 4 | replace |
| 5 | Performance warnings |
| 6 | ReDoS awareness |
| 7 | When not to regex |
| 8 | ECMAScript grammar notes |
| 9 | Token extract |
| 10 | Validate an email-ish |

---

## 1. std::regex basics

### Plain English

Today's idea — **std::regex basics** — fits inside the wider theme of Regular expressions. Read it as a tool: what job does it do, what rules does it enforce, and what breaks if you ignore those rules?

### Tiny code

```cpp
// Explore: std::regex basics
#include <iostream>
int main() {
  std::cout << "practice: std::regex basics\n";
  return 0;
}
```

- **Remember:** State one invariant for `std::regex basics` before you write code that uses it.
- **Common mistake:** Using `std::regex basics` by copy-paste without knowing what it owns or when it is valid.

Practice: open `examples/01_*.cpp`, predict the output, change one line, re-predict.

## 2. match vs search

### Plain English

Today's idea — **match vs search** — fits inside the wider theme of Regular expressions. Read it as a tool: what job does it do, what rules does it enforce, and what breaks if you ignore those rules?

### Tiny code

```cpp
// Explore: match vs search
#include <iostream>
int main() {
  std::cout << "practice: match vs search\n";
  return 0;
}
```

- **Remember:** State one invariant for `match vs search` before you write code that uses it.
- **Common mistake:** Using `match vs search` by copy-paste without knowing what it owns or when it is valid.

Practice: open `examples/02_*.cpp`, predict the output, change one line, re-predict.

## 3. Capture groups

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

## 4. replace

### Plain English

Today's idea — **replace** — fits inside the wider theme of Regular expressions. Read it as a tool: what job does it do, what rules does it enforce, and what breaks if you ignore those rules?

### Tiny code

```cpp
// Explore: replace
#include <iostream>
int main() {
  std::cout << "practice: replace\n";
  return 0;
}
```

- **Remember:** State one invariant for `replace` before you write code that uses it.
- **Common mistake:** Using `replace` by copy-paste without knowing what it owns or when it is valid.

Practice: open `examples/04_*.cpp`, predict the output, change one line, re-predict.

## 5. Performance warnings

### Plain English

Today's idea — **Performance warnings** — fits inside the wider theme of Regular expressions. Read it as a tool: what job does it do, what rules does it enforce, and what breaks if you ignore those rules?

### Tiny code

```cpp
// Explore: Performance warnings
#include <iostream>
int main() {
  std::cout << "practice: Performance warnings\n";
  return 0;
}
```

- **Remember:** State one invariant for `Performance warnings` before you write code that uses it.
- **Common mistake:** Using `Performance warnings` by copy-paste without knowing what it owns or when it is valid.

Practice: open `examples/05_*.cpp`, predict the output, change one line, re-predict.

## 6. ReDoS awareness

### Plain English

Today's idea — **ReDoS awareness** — fits inside the wider theme of Regular expressions. Read it as a tool: what job does it do, what rules does it enforce, and what breaks if you ignore those rules?

### Tiny code

```cpp
// Explore: ReDoS awareness
#include <iostream>
int main() {
  std::cout << "practice: ReDoS awareness\n";
  return 0;
}
```

- **Remember:** State one invariant for `ReDoS awareness` before you write code that uses it.
- **Common mistake:** Using `ReDoS awareness` by copy-paste without knowing what it owns or when it is valid.

Practice: open `examples/06_*.cpp`, predict the output, change one line, re-predict.

## 7. When not to regex

### Plain English

Today's idea — **When not to regex** — fits inside the wider theme of Regular expressions. Read it as a tool: what job does it do, what rules does it enforce, and what breaks if you ignore those rules?

### Tiny code

```cpp
// Explore: When not to regex
#include <iostream>
int main() {
  std::cout << "practice: When not to regex\n";
  return 0;
}
```

- **Remember:** State one invariant for `When not to regex` before you write code that uses it.
- **Common mistake:** Using `When not to regex` by copy-paste without knowing what it owns or when it is valid.

Practice: open `examples/07_*.cpp`, predict the output, change one line, re-predict.

## 8. ECMAScript grammar notes

### Plain English

Today's idea — **ECMAScript grammar notes** — fits inside the wider theme of Regular expressions. Read it as a tool: what job does it do, what rules does it enforce, and what breaks if you ignore those rules?

### Tiny code

```cpp
// Explore: ECMAScript grammar notes
#include <iostream>
int main() {
  std::cout << "practice: ECMAScript grammar notes\n";
  return 0;
}
```

- **Remember:** State one invariant for `ECMAScript grammar notes` before you write code that uses it.
- **Common mistake:** Using `ECMAScript grammar notes` by copy-paste without knowing what it owns or when it is valid.

Practice: open `examples/08_*.cpp`, predict the output, change one line, re-predict.

## 9. Token extract

### Plain English

Today's idea — **Token extract** — fits inside the wider theme of Regular expressions. Read it as a tool: what job does it do, what rules does it enforce, and what breaks if you ignore those rules?

### Tiny code

```cpp
// Explore: Token extract
#include <iostream>
int main() {
  std::cout << "practice: Token extract\n";
  return 0;
}
```

- **Remember:** State one invariant for `Token extract` before you write code that uses it.
- **Common mistake:** Using `Token extract` by copy-paste without knowing what it owns or when it is valid.

Practice: open `examples/09_*.cpp`, predict the output, change one line, re-predict.

## 10. Validate an email-ish

### Plain English

Today's idea — **Validate an email-ish** — fits inside the wider theme of Regular expressions. Read it as a tool: what job does it do, what rules does it enforce, and what breaks if you ignore those rules?

### Tiny code

```cpp
// Explore: Validate an email-ish
#include <iostream>
int main() {
  std::cout << "practice: Validate an email-ish\n";
  return 0;
}
```

- **Remember:** State one invariant for `Validate an email-ish` before you write code that uses it.
- **Common mistake:** Using `Validate an email-ish` by copy-paste without knowing what it owns or when it is valid.

Practice: open `examples/10_*.cpp`, predict the output, change one line, re-predict.

---

## What you should be able to do after Day 96

- Explain `Regular expressions` to a peer without looking at notes.
- Compile and run all 10 examples with `-std=c++17 -Wall -Wextra` (use newer flags only when the day needs C++20+).
- Answer the 5 questions in `questions.md` before peeking at `answers.md`.
- Write one tiny extra program that combines at least 3 of today's concepts.

Or open this day in the **Badsha hub** (`python3 hub/server.py`) and use Learn / Practice / Quiz tabs.
