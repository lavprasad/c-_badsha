# Day 144 -- Game-dev C++ patterns

Today's goal: understand **Game-dev C++ patterns** in plain English, see a tiny code sample for each idea, then practice in `examples/`.

How to study this day:
1. Read each concept's **Plain English** section.
2. Skim the code sample -- predict what it does.
3. Run the matching file under `examples/`.
4. Only then try `questions.md`.

| # | Concept |
|--:|---------|
| 1 | Entity component idea |
| 2 | Data-oriented design |
| 3 | Frame allocators |
| 4 | Object pools |
| 5 | Handle systems |
| 6 | Hot/cold split |
| 7 | Deterministic sim |
| 8 | Asset loading |
| 9 | Update loops |
| 10 | Tiny ECS sketch |

---

## 1. Entity component idea

### Plain English

Today's idea — **Entity component idea** — fits inside the wider theme of Game-dev C++ patterns. Read it as a tool: what job does it do, what rules does it enforce, and what breaks if you ignore those rules?

### Tiny code

```cpp
// Explore: Entity component idea
#include <iostream>
int main() {
  std::cout << "practice: Entity component idea\n";
  return 0;
}
```

- **Remember:** State one invariant for `Entity component idea` before you write code that uses it.
- **Common mistake:** Using `Entity component idea` by copy-paste without knowing what it owns or when it is valid.

Practice: open `examples/01_*.cpp`, predict the output, change one line, re-predict.

## 2. Data-oriented design

### Plain English

Today's idea — **Data-oriented design** — fits inside the wider theme of Game-dev C++ patterns. Read it as a tool: what job does it do, what rules does it enforce, and what breaks if you ignore those rules?

### Tiny code

```cpp
// Explore: Data-oriented design
#include <iostream>
int main() {
  std::cout << "practice: Data-oriented design\n";
  return 0;
}
```

- **Remember:** State one invariant for `Data-oriented design` before you write code that uses it.
- **Common mistake:** Using `Data-oriented design` by copy-paste without knowing what it owns or when it is valid.

Practice: open `examples/02_*.cpp`, predict the output, change one line, re-predict.

## 3. Frame allocators

### Plain English

Today's idea — **Frame allocators** — fits inside the wider theme of Game-dev C++ patterns. Read it as a tool: what job does it do, what rules does it enforce, and what breaks if you ignore those rules?

### Tiny code

```cpp
// Explore: Frame allocators
#include <iostream>
int main() {
  std::cout << "practice: Frame allocators\n";
  return 0;
}
```

- **Remember:** State one invariant for `Frame allocators` before you write code that uses it.
- **Common mistake:** Using `Frame allocators` by copy-paste without knowing what it owns or when it is valid.

Practice: open `examples/03_*.cpp`, predict the output, change one line, re-predict.

## 4. Object pools

### Plain English

Today's idea — **Object pools** — fits inside the wider theme of Game-dev C++ patterns. Read it as a tool: what job does it do, what rules does it enforce, and what breaks if you ignore those rules?

### Tiny code

```cpp
// Explore: Object pools
#include <iostream>
int main() {
  std::cout << "practice: Object pools\n";
  return 0;
}
```

- **Remember:** State one invariant for `Object pools` before you write code that uses it.
- **Common mistake:** Using `Object pools` by copy-paste without knowing what it owns or when it is valid.

Practice: open `examples/04_*.cpp`, predict the output, change one line, re-predict.

## 5. Handle systems

### Plain English

Today's idea — **Handle systems** — fits inside the wider theme of Game-dev C++ patterns. Read it as a tool: what job does it do, what rules does it enforce, and what breaks if you ignore those rules?

### Tiny code

```cpp
// Explore: Handle systems
#include <iostream>
int main() {
  std::cout << "practice: Handle systems\n";
  return 0;
}
```

- **Remember:** State one invariant for `Handle systems` before you write code that uses it.
- **Common mistake:** Using `Handle systems` by copy-paste without knowing what it owns or when it is valid.

Practice: open `examples/05_*.cpp`, predict the output, change one line, re-predict.

## 6. Hot/cold split

### Plain English

Today's idea — **Hot/cold split** — fits inside the wider theme of Game-dev C++ patterns. Read it as a tool: what job does it do, what rules does it enforce, and what breaks if you ignore those rules?

### Tiny code

```cpp
// Explore: Hot/cold split
#include <iostream>
int main() {
  std::cout << "practice: Hot/cold split\n";
  return 0;
}
```

- **Remember:** State one invariant for `Hot/cold split` before you write code that uses it.
- **Common mistake:** Using `Hot/cold split` by copy-paste without knowing what it owns or when it is valid.

Practice: open `examples/06_*.cpp`, predict the output, change one line, re-predict.

## 7. Deterministic sim

### Plain English

Today's idea — **Deterministic sim** — fits inside the wider theme of Game-dev C++ patterns. Read it as a tool: what job does it do, what rules does it enforce, and what breaks if you ignore those rules?

### Tiny code

```cpp
// Explore: Deterministic sim
#include <iostream>
int main() {
  std::cout << "practice: Deterministic sim\n";
  return 0;
}
```

- **Remember:** State one invariant for `Deterministic sim` before you write code that uses it.
- **Common mistake:** Using `Deterministic sim` by copy-paste without knowing what it owns or when it is valid.

Practice: open `examples/07_*.cpp`, predict the output, change one line, re-predict.

## 8. Asset loading

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

Practice: open `examples/08_*.cpp`, predict the output, change one line, re-predict.

## 9. Update loops

### Plain English

Today's idea — **Update loops** — fits inside the wider theme of Game-dev C++ patterns. Read it as a tool: what job does it do, what rules does it enforce, and what breaks if you ignore those rules?

### Tiny code

```cpp
// Explore: Update loops
#include <iostream>
int main() {
  std::cout << "practice: Update loops\n";
  return 0;
}
```

- **Remember:** State one invariant for `Update loops` before you write code that uses it.
- **Common mistake:** Using `Update loops` by copy-paste without knowing what it owns or when it is valid.

Practice: open `examples/09_*.cpp`, predict the output, change one line, re-predict.

## 10. Tiny ECS sketch

### Plain English

Today's idea — **Tiny ECS sketch** — fits inside the wider theme of Game-dev C++ patterns. Read it as a tool: what job does it do, what rules does it enforce, and what breaks if you ignore those rules?

### Tiny code

```cpp
// Explore: Tiny ECS sketch
#include <iostream>
int main() {
  std::cout << "practice: Tiny ECS sketch\n";
  return 0;
}
```

- **Remember:** State one invariant for `Tiny ECS sketch` before you write code that uses it.
- **Common mistake:** Using `Tiny ECS sketch` by copy-paste without knowing what it owns or when it is valid.

Practice: open `examples/10_*.cpp`, predict the output, change one line, re-predict.

---

## What you should be able to do after Day 144

- Explain `Game-dev C++ patterns` to a peer without looking at notes.
- Compile and run all 10 examples with `-std=c++17 -Wall -Wextra` (use newer flags only when the day needs C++20+).
- Answer the 5 questions in `questions.md` before peeking at `answers.md`.
- Write one tiny extra program that combines at least 3 of today's concepts.

Or open this day in the **Badsha hub** (`python3 hub/server.py`) and use Learn / Practice / Quiz tabs.
