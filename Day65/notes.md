# Day 65 -- Behavioral patterns

Today's goal: understand **Behavioral patterns** in plain English, see a tiny code sample for each idea, then practice in `examples/`.

How to study this day:
1. Read each concept's **Plain English** section.
2. Skim the code sample -- predict what it does.
3. Run the matching file under `examples/`.
4. Only then try `questions.md`.

| # | Concept |
|--:|---------|
| 1 | Strategy |
| 2 | Observer |
| 3 | Command |
| 4 | State |
| 5 | Template method |
| 6 | Visitor |
| 7 | Mediator |
| 8 | Chain of responsibility |
| 9 | Iterator pattern vs STL |
| 10 | A game AI strategy |

---

## 1. Strategy

### Plain English

Today's idea — **Strategy** — fits inside the wider theme of Behavioral patterns. Read it as a tool: what job does it do, what rules does it enforce, and what breaks if you ignore those rules?

### Tiny code

```cpp
// Explore: Strategy
#include <iostream>
int main() {
  std::cout << "practice: Strategy\n";
  return 0;
}
```

- **Remember:** State one invariant for `Strategy` before you write code that uses it.
- **Common mistake:** Using `Strategy` by copy-paste without knowing what it owns or when it is valid.

Practice: open `examples/01_*.cpp`, predict the output, change one line, re-predict.

## 2. Observer

### Plain English

Today's idea — **Observer** — fits inside the wider theme of Behavioral patterns. Read it as a tool: what job does it do, what rules does it enforce, and what breaks if you ignore those rules?

### Tiny code

```cpp
// Explore: Observer
#include <iostream>
int main() {
  std::cout << "practice: Observer\n";
  return 0;
}
```

- **Remember:** State one invariant for `Observer` before you write code that uses it.
- **Common mistake:** Using `Observer` by copy-paste without knowing what it owns or when it is valid.

Practice: open `examples/02_*.cpp`, predict the output, change one line, re-predict.

## 3. Command

### Plain English

Today's idea — **Command** — fits inside the wider theme of Behavioral patterns. Read it as a tool: what job does it do, what rules does it enforce, and what breaks if you ignore those rules?

### Tiny code

```cpp
// Explore: Command
#include <iostream>
int main() {
  std::cout << "practice: Command\n";
  return 0;
}
```

- **Remember:** State one invariant for `Command` before you write code that uses it.
- **Common mistake:** Using `Command` by copy-paste without knowing what it owns or when it is valid.

Practice: open `examples/03_*.cpp`, predict the output, change one line, re-predict.

## 4. State

### Plain English

Today's idea — **State** — fits inside the wider theme of Behavioral patterns. Read it as a tool: what job does it do, what rules does it enforce, and what breaks if you ignore those rules?

### Tiny code

```cpp
// Explore: State
#include <iostream>
int main() {
  std::cout << "practice: State\n";
  return 0;
}
```

- **Remember:** State one invariant for `State` before you write code that uses it.
- **Common mistake:** Using `State` by copy-paste without knowing what it owns or when it is valid.

Practice: open `examples/04_*.cpp`, predict the output, change one line, re-predict.

## 5. Template method

### Plain English

Templates generate code per type. They move errors to compile time and remove runtime virtual dispatch. Keep them readable; constrain parameters when you can.

### Tiny code

```cpp
template <typename T>
T clamp_pos(T x) {
  return x < T{0} ? T{0} : x;
}
```

- **Remember:** Templates usually live in headers so every TU can instantiate them.
- **Common mistake:** Putting a template definition only in a `.cpp` and wondering why the linker fails.

Practice: open `examples/05_*.cpp`, predict the output, change one line, re-predict.

## 6. Visitor

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

## 7. Mediator

### Plain English

Today's idea — **Mediator** — fits inside the wider theme of Behavioral patterns. Read it as a tool: what job does it do, what rules does it enforce, and what breaks if you ignore those rules?

### Tiny code

```cpp
// Explore: Mediator
#include <iostream>
int main() {
  std::cout << "practice: Mediator\n";
  return 0;
}
```

- **Remember:** State one invariant for `Mediator` before you write code that uses it.
- **Common mistake:** Using `Mediator` by copy-paste without knowing what it owns or when it is valid.

Practice: open `examples/07_*.cpp`, predict the output, change one line, re-predict.

## 8. Chain of responsibility

### Plain English

Today's idea — **Chain of responsibility** — fits inside the wider theme of Behavioral patterns. Read it as a tool: what job does it do, what rules does it enforce, and what breaks if you ignore those rules?

### Tiny code

```cpp
// Explore: Chain of responsibility
#include <iostream>
int main() {
  std::cout << "practice: Chain of responsibility\n";
  return 0;
}
```

- **Remember:** State one invariant for `Chain of responsibility` before you write code that uses it.
- **Common mistake:** Using `Chain of responsibility` by copy-paste without knowing what it owns or when it is valid.

Practice: open `examples/08_*.cpp`, predict the output, change one line, re-predict.

## 9. Iterator pattern vs STL

### Plain English

Iterators are like advanced pointers into a container. Algorithms take `[begin, end)` half-open ranges. Know when inserts/erases invalidate them.

### Tiny code

```cpp
std::vector<int> v{1,2,3};
for (auto it = v.begin(); it != v.end(); ++it)
  std::cout << *it << ' ';
```

- **Remember:** After erase, use the iterator that `erase` returns.
- **Common mistake:** Incrementing an invalidated iterator → undefined behaviour.

Practice: open `examples/09_*.cpp`, predict the output, change one line, re-predict.

## 10. A game AI strategy

### Plain English

Today's idea — **A game AI strategy** — fits inside the wider theme of Behavioral patterns. Read it as a tool: what job does it do, what rules does it enforce, and what breaks if you ignore those rules?

### Tiny code

```cpp
// Explore: A game AI strategy
#include <iostream>
int main() {
  std::cout << "practice: A game AI strategy\n";
  return 0;
}
```

- **Remember:** State one invariant for `A game AI strategy` before you write code that uses it.
- **Common mistake:** Using `A game AI strategy` by copy-paste without knowing what it owns or when it is valid.

Practice: open `examples/10_*.cpp`, predict the output, change one line, re-predict.

---

## What you should be able to do after Day 65

- Explain `Behavioral patterns` to a peer without looking at notes.
- Compile and run all 10 examples with `-std=c++17 -Wall -Wextra` (use newer flags only when the day needs C++20+).
- Answer the 5 questions in `questions.md` before peeking at `answers.md`.
- Write one tiny extra program that combines at least 3 of today's concepts.

Or open this day in the **Badsha hub** (`python3 hub/server.py`) and use Learn / Practice / Quiz tabs.
