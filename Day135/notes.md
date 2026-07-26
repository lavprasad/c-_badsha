# Day 135 -- Proxy & reference types

Today's goal: understand **Proxy & reference types** in plain English, see a tiny code sample for each idea, then practice in `examples/`.

How to study this day:
1. Read each concept's **Plain English** section.
2. Skim the code sample -- predict what it does.
3. Run the matching file under `examples/`.
4. Only then try `questions.md`.

| # | Concept |
|--:|---------|
| 1 | vector<bool> caution |
| 2 | Proxy references |
| 3 | expression proxies |
| 4 | arrow proxy |
| 5 | Lifetime_wrapper |
| 6 | Optional references idea |
| 7 | Lifetime lifetime |
| 8 | API surprises |
| 9 | Avoiding proxies |
| 10 | Safe wrapper |

---

## 1. vector<bool> caution

### Plain English

Today's idea — **vector<bool> caution** — fits inside the wider theme of Proxy & reference types. Read it as a tool: what job does it do, what rules does it enforce, and what breaks if you ignore those rules?

### Tiny code

```cpp
// Explore: vector<bool> caution
#include <iostream>
int main() {
  std::cout << "practice: vector<bool> caution\n";
  return 0;
}
```

- **Remember:** State one invariant for `vector<bool> caution` before you write code that uses it.
- **Common mistake:** Using `vector<bool> caution` by copy-paste without knowing what it owns or when it is valid.

Practice: open `examples/01_*.cpp`, predict the output, change one line, re-predict.

## 2. Proxy references

### Plain English

Today's idea — **Proxy references** — fits inside the wider theme of Proxy & reference types. Read it as a tool: what job does it do, what rules does it enforce, and what breaks if you ignore those rules?

### Tiny code

```cpp
// Explore: Proxy references
#include <iostream>
int main() {
  std::cout << "practice: Proxy references\n";
  return 0;
}
```

- **Remember:** State one invariant for `Proxy references` before you write code that uses it.
- **Common mistake:** Using `Proxy references` by copy-paste without knowing what it owns or when it is valid.

Practice: open `examples/02_*.cpp`, predict the output, change one line, re-predict.

## 3. expression proxies

### Plain English

Today's idea — **expression proxies** — fits inside the wider theme of Proxy & reference types. Read it as a tool: what job does it do, what rules does it enforce, and what breaks if you ignore those rules?

### Tiny code

```cpp
// Explore: expression proxies
#include <iostream>
int main() {
  std::cout << "practice: expression proxies\n";
  return 0;
}
```

- **Remember:** State one invariant for `expression proxies` before you write code that uses it.
- **Common mistake:** Using `expression proxies` by copy-paste without knowing what it owns or when it is valid.

Practice: open `examples/03_*.cpp`, predict the output, change one line, re-predict.

## 4. arrow proxy

### Plain English

Today's idea — **arrow proxy** — fits inside the wider theme of Proxy & reference types. Read it as a tool: what job does it do, what rules does it enforce, and what breaks if you ignore those rules?

### Tiny code

```cpp
// Explore: arrow proxy
#include <iostream>
int main() {
  std::cout << "practice: arrow proxy\n";
  return 0;
}
```

- **Remember:** State one invariant for `arrow proxy` before you write code that uses it.
- **Common mistake:** Using `arrow proxy` by copy-paste without knowing what it owns or when it is valid.

Practice: open `examples/04_*.cpp`, predict the output, change one line, re-predict.

## 5. Lifetime_wrapper

### Plain English

Today's idea — **Lifetime_wrapper** — fits inside the wider theme of Proxy & reference types. Read it as a tool: what job does it do, what rules does it enforce, and what breaks if you ignore those rules?

### Tiny code

```cpp
// Explore: Lifetime_wrapper
#include <iostream>
int main() {
  std::cout << "practice: Lifetime_wrapper\n";
  return 0;
}
```

- **Remember:** State one invariant for `Lifetime_wrapper` before you write code that uses it.
- **Common mistake:** Using `Lifetime_wrapper` by copy-paste without knowing what it owns or when it is valid.

Practice: open `examples/05_*.cpp`, predict the output, change one line, re-predict.

## 6. Optional references idea

### Plain English

`optional<T>` is either a T or empty — better than magic sentinel values. `variant` holds one of several types. Prefer them over raw unions or `void*` for clarity.

### Tiny code

```cpp
#include <optional>
std::optional<int> parse(bool ok) {
  if (!ok) return std::nullopt;
  return 42;
}
int x = parse(true).value_or(-1);
```

- **Remember:** Check `optional` (or use `value_or`) before calling `value()`.
- **Common mistake:** Calling `opt.value()` on an empty optional → exception.

Practice: open `examples/06_*.cpp`, predict the output, change one line, re-predict.

## 7. Lifetime lifetime

### Plain English

Today's idea — **Lifetime lifetime** — fits inside the wider theme of Proxy & reference types. Read it as a tool: what job does it do, what rules does it enforce, and what breaks if you ignore those rules?

### Tiny code

```cpp
// Explore: Lifetime lifetime
#include <iostream>
int main() {
  std::cout << "practice: Lifetime lifetime\n";
  return 0;
}
```

- **Remember:** State one invariant for `Lifetime lifetime` before you write code that uses it.
- **Common mistake:** Using `Lifetime lifetime` by copy-paste without knowing what it owns or when it is valid.

Practice: open `examples/07_*.cpp`, predict the output, change one line, re-predict.

## 8. API surprises

### Plain English

Today's idea — **API surprises** — fits inside the wider theme of Proxy & reference types. Read it as a tool: what job does it do, what rules does it enforce, and what breaks if you ignore those rules?

### Tiny code

```cpp
// Explore: API surprises
#include <iostream>
int main() {
  std::cout << "practice: API surprises\n";
  return 0;
}
```

- **Remember:** State one invariant for `API surprises` before you write code that uses it.
- **Common mistake:** Using `API surprises` by copy-paste without knowing what it owns or when it is valid.

Practice: open `examples/08_*.cpp`, predict the output, change one line, re-predict.

## 9. Avoiding proxies

### Plain English

Today's idea — **Avoiding proxies** — fits inside the wider theme of Proxy & reference types. Read it as a tool: what job does it do, what rules does it enforce, and what breaks if you ignore those rules?

### Tiny code

```cpp
// Explore: Avoiding proxies
#include <iostream>
int main() {
  std::cout << "practice: Avoiding proxies\n";
  return 0;
}
```

- **Remember:** State one invariant for `Avoiding proxies` before you write code that uses it.
- **Common mistake:** Using `Avoiding proxies` by copy-paste without knowing what it owns or when it is valid.

Practice: open `examples/09_*.cpp`, predict the output, change one line, re-predict.

## 10. Safe wrapper

### Plain English

Today's idea — **Safe wrapper** — fits inside the wider theme of Proxy & reference types. Read it as a tool: what job does it do, what rules does it enforce, and what breaks if you ignore those rules?

### Tiny code

```cpp
// Explore: Safe wrapper
#include <iostream>
int main() {
  std::cout << "practice: Safe wrapper\n";
  return 0;
}
```

- **Remember:** State one invariant for `Safe wrapper` before you write code that uses it.
- **Common mistake:** Using `Safe wrapper` by copy-paste without knowing what it owns or when it is valid.

Practice: open `examples/10_*.cpp`, predict the output, change one line, re-predict.

---

## What you should be able to do after Day 135

- Explain `Proxy & reference types` to a peer without looking at notes.
- Compile and run all 10 examples with `-std=c++17 -Wall -Wextra` (use newer flags only when the day needs C++20+).
- Answer the 5 questions in `questions.md` before peeking at `answers.md`.
- Write one tiny extra program that combines at least 3 of today's concepts.

Or open this day in the **Badsha hub** (`python3 hub/server.py`) and use Learn / Practice / Quiz tabs.
