# Day 132 -- Type traits library tour

Today's goal: understand **Type traits library tour** in plain English, see a tiny code sample for each idea, then practice in `examples/`.

How to study this day:
1. Read each concept's **Plain English** section.
2. Skim the code sample -- predict what it does.
3. Run the matching file under `examples/`.
4. Only then try `questions.md`.

| # | Concept |
|--:|---------|
| 1 | Primary type categories |
| 2 | Composite categories |
| 3 | Type properties |
| 4 | Type relations |
| 5 | Transformations |
| 6 | decay / remove_cvref |
| 7 | is_invocable |
| 8 | invocation_result |
| 9 | Using in APIs |
| 10 | Static checks suite |

---

## 1. Primary type categories

### Plain English

Today's idea — **Primary type categories** — fits inside the wider theme of Type traits library tour. Read it as a tool: what job does it do, what rules does it enforce, and what breaks if you ignore those rules?

### Tiny code

```cpp
// Explore: Primary type categories
#include <iostream>
int main() {
  std::cout << "practice: Primary type categories\n";
  return 0;
}
```

- **Remember:** State one invariant for `Primary type categories` before you write code that uses it.
- **Common mistake:** Using `Primary type categories` by copy-paste without knowing what it owns or when it is valid.

Practice: open `examples/01_*.cpp`, predict the output, change one line, re-predict.

## 2. Composite categories

### Plain English

Today's idea — **Composite categories** — fits inside the wider theme of Type traits library tour. Read it as a tool: what job does it do, what rules does it enforce, and what breaks if you ignore those rules?

### Tiny code

```cpp
// Explore: Composite categories
#include <iostream>
int main() {
  std::cout << "practice: Composite categories\n";
  return 0;
}
```

- **Remember:** State one invariant for `Composite categories` before you write code that uses it.
- **Common mistake:** Using `Composite categories` by copy-paste without knowing what it owns or when it is valid.

Practice: open `examples/02_*.cpp`, predict the output, change one line, re-predict.

## 3. Type properties

### Plain English

Today's idea — **Type properties** — fits inside the wider theme of Type traits library tour. Read it as a tool: what job does it do, what rules does it enforce, and what breaks if you ignore those rules?

### Tiny code

```cpp
// Explore: Type properties
#include <iostream>
int main() {
  std::cout << "practice: Type properties\n";
  return 0;
}
```

- **Remember:** State one invariant for `Type properties` before you write code that uses it.
- **Common mistake:** Using `Type properties` by copy-paste without knowing what it owns or when it is valid.

Practice: open `examples/03_*.cpp`, predict the output, change one line, re-predict.

## 4. Type relations

### Plain English

Today's idea — **Type relations** — fits inside the wider theme of Type traits library tour. Read it as a tool: what job does it do, what rules does it enforce, and what breaks if you ignore those rules?

### Tiny code

```cpp
// Explore: Type relations
#include <iostream>
int main() {
  std::cout << "practice: Type relations\n";
  return 0;
}
```

- **Remember:** State one invariant for `Type relations` before you write code that uses it.
- **Common mistake:** Using `Type relations` by copy-paste without knowing what it owns or when it is valid.

Practice: open `examples/04_*.cpp`, predict the output, change one line, re-predict.

## 5. Transformations

### Plain English

STL algorithms are verbs over iterator ranges. Prefer them over hand-rolled loops when the intent matches (`find`, `sort`, `transform`). The erase-remove idiom deletes elements by value/predicate from a sequence container.

### Tiny code

```cpp
v.erase(std::remove(v.begin(), v.end(), 0), v.end());
std::sort(v.begin(), v.end());
```

- **Remember:** `remove` only slides elements — you still need `erase`.
- **Common mistake:** Calling `std::remove` and forgetting the container `erase`.

Practice: open `examples/05_*.cpp`, predict the output, change one line, re-predict.

## 6. decay / remove_cvref

### Plain English

Today's idea — **decay / remove_cvref** — fits inside the wider theme of Type traits library tour. Read it as a tool: what job does it do, what rules does it enforce, and what breaks if you ignore those rules?

### Tiny code

```cpp
// Explore: decay / remove_cvref
#include <iostream>
int main() {
  std::cout << "practice: decay / remove_cvref\n";
  return 0;
}
```

- **Remember:** State one invariant for `decay / remove_cvref` before you write code that uses it.
- **Common mistake:** Using `decay / remove_cvref` by copy-paste without knowing what it owns or when it is valid.

Practice: open `examples/06_*.cpp`, predict the output, change one line, re-predict.

## 7. is_invocable

### Plain English

Today's idea — **is_invocable** — fits inside the wider theme of Type traits library tour. Read it as a tool: what job does it do, what rules does it enforce, and what breaks if you ignore those rules?

### Tiny code

```cpp
// Explore: is_invocable
#include <iostream>
int main() {
  std::cout << "practice: is_invocable\n";
  return 0;
}
```

- **Remember:** State one invariant for `is_invocable` before you write code that uses it.
- **Common mistake:** Using `is_invocable` by copy-paste without knowing what it owns or when it is valid.

Practice: open `examples/07_*.cpp`, predict the output, change one line, re-predict.

## 8. invocation_result

### Plain English

Today's idea — **invocation_result** — fits inside the wider theme of Type traits library tour. Read it as a tool: what job does it do, what rules does it enforce, and what breaks if you ignore those rules?

### Tiny code

```cpp
// Explore: invocation_result
#include <iostream>
int main() {
  std::cout << "practice: invocation_result\n";
  return 0;
}
```

- **Remember:** State one invariant for `invocation_result` before you write code that uses it.
- **Common mistake:** Using `invocation_result` by copy-paste without knowing what it owns or when it is valid.

Practice: open `examples/08_*.cpp`, predict the output, change one line, re-predict.

## 9. Using in APIs

### Plain English

Today's idea — **Using in APIs** — fits inside the wider theme of Type traits library tour. Read it as a tool: what job does it do, what rules does it enforce, and what breaks if you ignore those rules?

### Tiny code

```cpp
// Explore: Using in APIs
#include <iostream>
int main() {
  std::cout << "practice: Using in APIs\n";
  return 0;
}
```

- **Remember:** State one invariant for `Using in APIs` before you write code that uses it.
- **Common mistake:** Using `Using in APIs` by copy-paste without knowing what it owns or when it is valid.

Practice: open `examples/09_*.cpp`, predict the output, change one line, re-predict.

## 10. Static checks suite

### Plain English

Today's idea — **Static checks suite** — fits inside the wider theme of Type traits library tour. Read it as a tool: what job does it do, what rules does it enforce, and what breaks if you ignore those rules?

### Tiny code

```cpp
// Explore: Static checks suite
#include <iostream>
int main() {
  std::cout << "practice: Static checks suite\n";
  return 0;
}
```

- **Remember:** State one invariant for `Static checks suite` before you write code that uses it.
- **Common mistake:** Using `Static checks suite` by copy-paste without knowing what it owns or when it is valid.

Practice: open `examples/10_*.cpp`, predict the output, change one line, re-predict.

---

## What you should be able to do after Day 132

- Explain `Type traits library tour` to a peer without looking at notes.
- Compile and run all 10 examples with `-std=c++17 -Wall -Wextra` (use newer flags only when the day needs C++20+).
- Answer the 5 questions in `questions.md` before peeking at `answers.md`.
- Write one tiny extra program that combines at least 3 of today's concepts.

Or open this day in the **Badsha hub** (`python3 hub/server.py`) and use Learn / Practice / Quiz tabs.
