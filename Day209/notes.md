# Day 209 -- Formal methods lite for C++

Today's goal: understand **Formal methods lite for C++** in plain English, see a tiny code sample for each idea, then practice in `examples/`.

How to study this day:
1. Read each concept's **Plain English** section.
2. Skim the code sample -- predict what it does.
3. Run the matching file under `examples/`.
4. Only then try `questions.md`.

| # | Concept |
|--:|---------|
| 1 | Contracts idea |
| 2 | Invariants |
| 3 | Model checking idea |
| 4 | Proof outlines |
| 5 | CBMC mindset |
| 6 | What is practical |
| 7 | Types as proofs lite |
| 8 | Testing oracle |
| 9 | Limits |
| 10 | Specify a function |

---

## 1. Contracts idea

### Plain English

Today's idea — **Contracts idea** — fits inside the wider theme of Formal methods lite for C++. Read it as a tool: what job does it do, what rules does it enforce, and what breaks if you ignore those rules?

### Tiny code

```cpp
// Explore: Contracts idea
#include <iostream>
int main() {
  std::cout << "practice: Contracts idea\n";
  return 0;
}
```

- **Remember:** State one invariant for `Contracts idea` before you write code that uses it.
- **Common mistake:** Using `Contracts idea` by copy-paste without knowing what it owns or when it is valid.

Practice: open `examples/01_*.cpp`, predict the output, change one line, re-predict.

## 2. Invariants

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

Practice: open `examples/02_*.cpp`, predict the output, change one line, re-predict.

## 3. Model checking idea

### Plain English

Today's idea — **Model checking idea** — fits inside the wider theme of Formal methods lite for C++. Read it as a tool: what job does it do, what rules does it enforce, and what breaks if you ignore those rules?

### Tiny code

```cpp
// Explore: Model checking idea
#include <iostream>
int main() {
  std::cout << "practice: Model checking idea\n";
  return 0;
}
```

- **Remember:** State one invariant for `Model checking idea` before you write code that uses it.
- **Common mistake:** Using `Model checking idea` by copy-paste without knowing what it owns or when it is valid.

Practice: open `examples/03_*.cpp`, predict the output, change one line, re-predict.

## 4. Proof outlines

### Plain English

Today's idea — **Proof outlines** — fits inside the wider theme of Formal methods lite for C++. Read it as a tool: what job does it do, what rules does it enforce, and what breaks if you ignore those rules?

### Tiny code

```cpp
// Explore: Proof outlines
#include <iostream>
int main() {
  std::cout << "practice: Proof outlines\n";
  return 0;
}
```

- **Remember:** State one invariant for `Proof outlines` before you write code that uses it.
- **Common mistake:** Using `Proof outlines` by copy-paste without knowing what it owns or when it is valid.

Practice: open `examples/04_*.cpp`, predict the output, change one line, re-predict.

## 5. CBMC mindset

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

Practice: open `examples/05_*.cpp`, predict the output, change one line, re-predict.

## 6. What is practical

### Plain English

Today's idea — **What is practical** — fits inside the wider theme of Formal methods lite for C++. Read it as a tool: what job does it do, what rules does it enforce, and what breaks if you ignore those rules?

### Tiny code

```cpp
// Explore: What is practical
#include <iostream>
int main() {
  std::cout << "practice: What is practical\n";
  return 0;
}
```

- **Remember:** State one invariant for `What is practical` before you write code that uses it.
- **Common mistake:** Using `What is practical` by copy-paste without knowing what it owns or when it is valid.

Practice: open `examples/06_*.cpp`, predict the output, change one line, re-predict.

## 7. Types as proofs lite

### Plain English

Today's idea — **Types as proofs lite** — fits inside the wider theme of Formal methods lite for C++. Read it as a tool: what job does it do, what rules does it enforce, and what breaks if you ignore those rules?

### Tiny code

```cpp
// Explore: Types as proofs lite
#include <iostream>
int main() {
  std::cout << "practice: Types as proofs lite\n";
  return 0;
}
```

- **Remember:** State one invariant for `Types as proofs lite` before you write code that uses it.
- **Common mistake:** Using `Types as proofs lite` by copy-paste without knowing what it owns or when it is valid.

Practice: open `examples/07_*.cpp`, predict the output, change one line, re-predict.

## 8. Testing oracle

### Plain English

Projects glue skills: clear requirements, small modules, tests, and honest docs. Start with a tiny vertical slice that runs end-to-end, then thicken features.

### Tiny code

```cpp
int main(int argc, char** argv) {
  if (argc < 2) {
    std::cerr << "usage: tool <file>\n";
    return 1;
  }
  // ...
}
```

- **Remember:** Ship a working subset before polishing edge cases.
- **Common mistake:** Building scaffolding for weeks with nothing runnable.

Practice: open `examples/08_*.cpp`, predict the output, change one line, re-predict.

## 9. Limits

### Plain English

Today's idea — **Limits** — fits inside the wider theme of Formal methods lite for C++. Read it as a tool: what job does it do, what rules does it enforce, and what breaks if you ignore those rules?

### Tiny code

```cpp
// Explore: Limits
#include <iostream>
int main() {
  std::cout << "practice: Limits\n";
  return 0;
}
```

- **Remember:** State one invariant for `Limits` before you write code that uses it.
- **Common mistake:** Using `Limits` by copy-paste without knowing what it owns or when it is valid.

Practice: open `examples/09_*.cpp`, predict the output, change one line, re-predict.

## 10. Specify a function

### Plain English

Today's idea — **Specify a function** — fits inside the wider theme of Formal methods lite for C++. Read it as a tool: what job does it do, what rules does it enforce, and what breaks if you ignore those rules?

### Tiny code

```cpp
// Explore: Specify a function
#include <iostream>
int main() {
  std::cout << "practice: Specify a function\n";
  return 0;
}
```

- **Remember:** State one invariant for `Specify a function` before you write code that uses it.
- **Common mistake:** Using `Specify a function` by copy-paste without knowing what it owns or when it is valid.

Practice: open `examples/10_*.cpp`, predict the output, change one line, re-predict.

---

## What you should be able to do after Day 209

- Explain `Formal methods lite for C++` to a peer without looking at notes.
- Compile and run all 10 examples with `-std=c++17 -Wall -Wextra` (use newer flags only when the day needs C++20+).
- Answer the 5 questions in `questions.md` before peeking at `answers.md`.
- Write one tiny extra program that combines at least 3 of today's concepts.

Or open this day in the **Badsha hub** (`python3 hub/server.py`) and use Learn / Practice / Quiz tabs.
