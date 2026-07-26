# Day 41 -- Sequence containers deep dive

Today's goal: understand **Sequence containers deep dive** in plain English, see a tiny code sample for each idea, then practice in `examples/`.

How to study this day:
1. Read each concept's **Plain English** section.
2. Skim the code sample -- predict what it does.
3. Run the matching file under `examples/`.
4. Only then try `questions.md`.

| # | Concept |
|--:|---------|
| 1 | vector vs deque vs list |
| 2 | forward_list |
| 3 | array |
| 4 | When list wins (rarely) |
| 5 | Cache locality |
| 6 | splice operations |
| 7 | size complexity notes |
| 8 | iterator stability |
| 9 | API differences |
| 10 | Benchmark mindset |

---

## 1. vector vs deque vs list

### Plain English

Today's idea — **vector vs deque vs list** — fits inside the wider theme of Sequence containers deep dive. Read it as a tool: what job does it do, what rules does it enforce, and what breaks if you ignore those rules?

### Tiny code

```cpp
// Explore: vector vs deque vs list
#include <iostream>
int main() {
  std::cout << "practice: vector vs deque vs list\n";
  return 0;
}
```

- **Remember:** State one invariant for `vector vs deque vs list` before you write code that uses it.
- **Common mistake:** Using `vector vs deque vs list` by copy-paste without knowing what it owns or when it is valid.

Practice: open `examples/01_*.cpp`, predict the output, change one line, re-predict.

## 2. forward_list

### Plain English

Today's idea — **forward_list** — fits inside the wider theme of Sequence containers deep dive. Read it as a tool: what job does it do, what rules does it enforce, and what breaks if you ignore those rules?

### Tiny code

```cpp
// Explore: forward_list
#include <iostream>
int main() {
  std::cout << "practice: forward_list\n";
  return 0;
}
```

- **Remember:** State one invariant for `forward_list` before you write code that uses it.
- **Common mistake:** Using `forward_list` by copy-paste without knowing what it owns or when it is valid.

Practice: open `examples/02_*.cpp`, predict the output, change one line, re-predict.

## 3. array

### Plain English

Today's idea — **array** — fits inside the wider theme of Sequence containers deep dive. Read it as a tool: what job does it do, what rules does it enforce, and what breaks if you ignore those rules?

### Tiny code

```cpp
// Explore: array
#include <iostream>
int main() {
  std::cout << "practice: array\n";
  return 0;
}
```

- **Remember:** State one invariant for `array` before you write code that uses it.
- **Common mistake:** Using `array` by copy-paste without knowing what it owns or when it is valid.

Practice: open `examples/03_*.cpp`, predict the output, change one line, re-predict.

## 4. When list wins (rarely)

### Plain English

Today's idea — **When list wins (rarely)** — fits inside the wider theme of Sequence containers deep dive. Read it as a tool: what job does it do, what rules does it enforce, and what breaks if you ignore those rules?

### Tiny code

```cpp
// Explore: When list wins (rarely)
#include <iostream>
int main() {
  std::cout << "practice: When list wins (rarely)\n";
  return 0;
}
```

- **Remember:** State one invariant for `When list wins (rarely)` before you write code that uses it.
- **Common mistake:** Using `When list wins (rarely)` by copy-paste without knowing what it owns or when it is valid.

Practice: open `examples/04_*.cpp`, predict the output, change one line, re-predict.

## 5. Cache locality

### Plain English

Today's idea — **Cache locality** — fits inside the wider theme of Sequence containers deep dive. Read it as a tool: what job does it do, what rules does it enforce, and what breaks if you ignore those rules?

### Tiny code

```cpp
// Explore: Cache locality
#include <iostream>
int main() {
  std::cout << "practice: Cache locality\n";
  return 0;
}
```

- **Remember:** State one invariant for `Cache locality` before you write code that uses it.
- **Common mistake:** Using `Cache locality` by copy-paste without knowing what it owns or when it is valid.

Practice: open `examples/05_*.cpp`, predict the output, change one line, re-predict.

## 6. splice operations

### Plain English

Today's idea — **splice operations** — fits inside the wider theme of Sequence containers deep dive. Read it as a tool: what job does it do, what rules does it enforce, and what breaks if you ignore those rules?

### Tiny code

```cpp
// Explore: splice operations
#include <iostream>
int main() {
  std::cout << "practice: splice operations\n";
  return 0;
}
```

- **Remember:** State one invariant for `splice operations` before you write code that uses it.
- **Common mistake:** Using `splice operations` by copy-paste without knowing what it owns or when it is valid.

Practice: open `examples/06_*.cpp`, predict the output, change one line, re-predict.

## 7. size complexity notes

### Plain English

Big-O describes how cost grows with input size. Prefer a clearer O(n log n) algorithm over a clever O(n²) one once n gets large. Measure when constants matter.

### Tiny code

```cpp
// Sorting n items: typically O(n log n)
std::sort(v.begin(), v.end());
```

- **Remember:** Asymptotics first; micro-optimisations later with a profiler.
- **Common mistake:** Optimising a cold path while leaving an O(n²) hot loop alone.

Practice: open `examples/07_*.cpp`, predict the output, change one line, re-predict.

## 8. iterator stability

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

Practice: open `examples/08_*.cpp`, predict the output, change one line, re-predict.

## 9. API differences

### Plain English

Today's idea — **API differences** — fits inside the wider theme of Sequence containers deep dive. Read it as a tool: what job does it do, what rules does it enforce, and what breaks if you ignore those rules?

### Tiny code

```cpp
// Explore: API differences
#include <iostream>
int main() {
  std::cout << "practice: API differences\n";
  return 0;
}
```

- **Remember:** State one invariant for `API differences` before you write code that uses it.
- **Common mistake:** Using `API differences` by copy-paste without knowing what it owns or when it is valid.

Practice: open `examples/09_*.cpp`, predict the output, change one line, re-predict.

## 10. Benchmark mindset

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

Practice: open `examples/10_*.cpp`, predict the output, change one line, re-predict.

---

## What you should be able to do after Day 41

- Explain `Sequence containers deep dive` to a peer without looking at notes.
- Compile and run all 10 examples with `-std=c++17 -Wall -Wextra` (use newer flags only when the day needs C++20+).
- Answer the 5 questions in `questions.md` before peeking at `answers.md`.
- Write one tiny extra program that combines at least 3 of today's concepts.

Or open this day in the **Badsha hub** (`python3 hub/server.py`) and use Learn / Practice / Quiz tabs.
