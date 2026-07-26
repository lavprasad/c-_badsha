# Day 61 -- Value semantics vs reference semantics

Today's goal: understand **Value semantics vs reference semantics** in plain English, see a tiny code sample for each idea, then practice in `examples/`.

How to study this day:
1. Read each concept's **Plain English** section.
2. Skim the code sample -- predict what it does.
3. Run the matching file under `examples/`.
4. Only then try `questions.md`.

| # | Concept |
|--:|---------|
| 1 | Copyable values |
| 2 | Shared identity |
| 3 | Immutable values |
| 4 | Handle-body |
| 5 | Copy-on-write idea |
| 6 | Polymorphic values |
| 7 | Choosing ownership |
| 8 | API parameter modes |
| 9 | Return value design |
| 10 | Case study: string |

---

## 1. Copyable values

### Plain English

Today's idea — **Copyable values** — fits inside the wider theme of Value semantics vs reference semantics. Read it as a tool: what job does it do, what rules does it enforce, and what breaks if you ignore those rules?

### Tiny code

```cpp
// Explore: Copyable values
#include <iostream>
int main() {
  std::cout << "practice: Copyable values\n";
  return 0;
}
```

- **Remember:** State one invariant for `Copyable values` before you write code that uses it.
- **Common mistake:** Using `Copyable values` by copy-paste without knowing what it owns or when it is valid.

Practice: open `examples/01_*.cpp`, predict the output, change one line, re-predict.

## 2. Shared identity

### Plain English

Today's idea — **Shared identity** — fits inside the wider theme of Value semantics vs reference semantics. Read it as a tool: what job does it do, what rules does it enforce, and what breaks if you ignore those rules?

### Tiny code

```cpp
// Explore: Shared identity
#include <iostream>
int main() {
  std::cout << "practice: Shared identity\n";
  return 0;
}
```

- **Remember:** State one invariant for `Shared identity` before you write code that uses it.
- **Common mistake:** Using `Shared identity` by copy-paste without knowing what it owns or when it is valid.

Practice: open `examples/02_*.cpp`, predict the output, change one line, re-predict.

## 3. Immutable values

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

## 4. Handle-body

### Plain English

Today's idea — **Handle-body** — fits inside the wider theme of Value semantics vs reference semantics. Read it as a tool: what job does it do, what rules does it enforce, and what breaks if you ignore those rules?

### Tiny code

```cpp
// Explore: Handle-body
#include <iostream>
int main() {
  std::cout << "practice: Handle-body\n";
  return 0;
}
```

- **Remember:** State one invariant for `Handle-body` before you write code that uses it.
- **Common mistake:** Using `Handle-body` by copy-paste without knowing what it owns or when it is valid.

Practice: open `examples/04_*.cpp`, predict the output, change one line, re-predict.

## 5. Copy-on-write idea

### Plain English

Today's idea — **Copy-on-write idea** — fits inside the wider theme of Value semantics vs reference semantics. Read it as a tool: what job does it do, what rules does it enforce, and what breaks if you ignore those rules?

### Tiny code

```cpp
// Explore: Copy-on-write idea
#include <iostream>
int main() {
  std::cout << "practice: Copy-on-write idea\n";
  return 0;
}
```

- **Remember:** State one invariant for `Copy-on-write idea` before you write code that uses it.
- **Common mistake:** Using `Copy-on-write idea` by copy-paste without knowing what it owns or when it is valid.

Practice: open `examples/05_*.cpp`, predict the output, change one line, re-predict.

## 6. Polymorphic values

### Plain English

Today's idea — **Polymorphic values** — fits inside the wider theme of Value semantics vs reference semantics. Read it as a tool: what job does it do, what rules does it enforce, and what breaks if you ignore those rules?

### Tiny code

```cpp
// Explore: Polymorphic values
#include <iostream>
int main() {
  std::cout << "practice: Polymorphic values\n";
  return 0;
}
```

- **Remember:** State one invariant for `Polymorphic values` before you write code that uses it.
- **Common mistake:** Using `Polymorphic values` by copy-paste without knowing what it owns or when it is valid.

Practice: open `examples/06_*.cpp`, predict the output, change one line, re-predict.

## 7. Choosing ownership

### Plain English

Today's idea — **Choosing ownership** — fits inside the wider theme of Value semantics vs reference semantics. Read it as a tool: what job does it do, what rules does it enforce, and what breaks if you ignore those rules?

### Tiny code

```cpp
// Explore: Choosing ownership
#include <iostream>
int main() {
  std::cout << "practice: Choosing ownership\n";
  return 0;
}
```

- **Remember:** State one invariant for `Choosing ownership` before you write code that uses it.
- **Common mistake:** Using `Choosing ownership` by copy-paste without knowing what it owns or when it is valid.

Practice: open `examples/07_*.cpp`, predict the output, change one line, re-predict.

## 8. API parameter modes

### Plain English

Today's idea — **API parameter modes** — fits inside the wider theme of Value semantics vs reference semantics. Read it as a tool: what job does it do, what rules does it enforce, and what breaks if you ignore those rules?

### Tiny code

```cpp
// Explore: API parameter modes
#include <iostream>
int main() {
  std::cout << "practice: API parameter modes\n";
  return 0;
}
```

- **Remember:** State one invariant for `API parameter modes` before you write code that uses it.
- **Common mistake:** Using `API parameter modes` by copy-paste without knowing what it owns or when it is valid.

Practice: open `examples/08_*.cpp`, predict the output, change one line, re-predict.

## 9. Return value design

### Plain English

Today's idea — **Return value design** — fits inside the wider theme of Value semantics vs reference semantics. Read it as a tool: what job does it do, what rules does it enforce, and what breaks if you ignore those rules?

### Tiny code

```cpp
// Explore: Return value design
#include <iostream>
int main() {
  std::cout << "practice: Return value design\n";
  return 0;
}
```

- **Remember:** State one invariant for `Return value design` before you write code that uses it.
- **Common mistake:** Using `Return value design` by copy-paste without knowing what it owns or when it is valid.

Practice: open `examples/09_*.cpp`, predict the output, change one line, re-predict.

## 10. Case study: string

### Plain English

Today's idea — **Case study: string** — fits inside the wider theme of Value semantics vs reference semantics. Read it as a tool: what job does it do, what rules does it enforce, and what breaks if you ignore those rules?

### Tiny code

```cpp
// Explore: Case study: string
#include <iostream>
int main() {
  std::cout << "practice: Case study: string\n";
  return 0;
}
```

- **Remember:** State one invariant for `Case study: string` before you write code that uses it.
- **Common mistake:** Using `Case study: string` by copy-paste without knowing what it owns or when it is valid.

Practice: open `examples/10_*.cpp`, predict the output, change one line, re-predict.

---

## What you should be able to do after Day 61

- Explain `Value semantics vs reference semantics` to a peer without looking at notes.
- Compile and run all 10 examples with `-std=c++17 -Wall -Wextra` (use newer flags only when the day needs C++20+).
- Answer the 5 questions in `questions.md` before peeking at `answers.md`.
- Write one tiny extra program that combines at least 3 of today's concepts.

Or open this day in the **Badsha hub** (`python3 hub/server.py`) and use Learn / Practice / Quiz tabs.
