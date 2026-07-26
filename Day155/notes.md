# Day 155 -- Stacks & queues practice

Today's goal: understand **Stacks & queues practice** in plain English, see a tiny code sample for each idea, then practice in `examples/`.

How to study this day:
1. Read each concept's **Plain English** section.
2. Skim the code sample -- predict what it does.
3. Run the matching file under `examples/`.
4. Only then try `questions.md`.

| # | Concept |
|--:|---------|
| 1 | Matching parentheses |
| 2 | Monotonic stack |
| 3 | Min stack |
| 4 | Queue via stacks |
| 5 | Sliding window max idea |
| 6 | Expression eval |
| 7 | BFS layers |
| 8 | Undo buffers |
| 9 | Complexity notes |
| 10 | Practice set B |

---

## 1. Matching parentheses

### Plain English

Today's idea — **Matching parentheses** — fits inside the wider theme of Stacks & queues practice. Read it as a tool: what job does it do, what rules does it enforce, and what breaks if you ignore those rules?

### Tiny code

```cpp
// Explore: Matching parentheses
#include <iostream>
int main() {
  std::cout << "practice: Matching parentheses\n";
  return 0;
}
```

- **Remember:** State one invariant for `Matching parentheses` before you write code that uses it.
- **Common mistake:** Using `Matching parentheses` by copy-paste without knowing what it owns or when it is valid.

Practice: open `examples/01_*.cpp`, predict the output, change one line, re-predict.

## 2. Monotonic stack

### Plain English

Today's idea — **Monotonic stack** — fits inside the wider theme of Stacks & queues practice. Read it as a tool: what job does it do, what rules does it enforce, and what breaks if you ignore those rules?

### Tiny code

```cpp
// Explore: Monotonic stack
#include <iostream>
int main() {
  std::cout << "practice: Monotonic stack\n";
  return 0;
}
```

- **Remember:** State one invariant for `Monotonic stack` before you write code that uses it.
- **Common mistake:** Using `Monotonic stack` by copy-paste without knowing what it owns or when it is valid.

Practice: open `examples/02_*.cpp`, predict the output, change one line, re-predict.

## 3. Min stack

### Plain English

Today's idea — **Min stack** — fits inside the wider theme of Stacks & queues practice. Read it as a tool: what job does it do, what rules does it enforce, and what breaks if you ignore those rules?

### Tiny code

```cpp
// Explore: Min stack
#include <iostream>
int main() {
  std::cout << "practice: Min stack\n";
  return 0;
}
```

- **Remember:** State one invariant for `Min stack` before you write code that uses it.
- **Common mistake:** Using `Min stack` by copy-paste without knowing what it owns or when it is valid.

Practice: open `examples/03_*.cpp`, predict the output, change one line, re-predict.

## 4. Queue via stacks

### Plain English

Today's idea — **Queue via stacks** — fits inside the wider theme of Stacks & queues practice. Read it as a tool: what job does it do, what rules does it enforce, and what breaks if you ignore those rules?

### Tiny code

```cpp
// Explore: Queue via stacks
#include <iostream>
int main() {
  std::cout << "practice: Queue via stacks\n";
  return 0;
}
```

- **Remember:** State one invariant for `Queue via stacks` before you write code that uses it.
- **Common mistake:** Using `Queue via stacks` by copy-paste without knowing what it owns or when it is valid.

Practice: open `examples/04_*.cpp`, predict the output, change one line, re-predict.

## 5. Sliding window max idea

### Plain English

These patterns turn nested loops into linear or logarithmic passes. Binary search needs a monotonic predicate. Two pointers / sliding windows need a clear invariant.

### Tiny code

```cpp
auto it = std::lower_bound(v.begin(), v.end(), x);
bool found = it != v.end() && *it == x;
```

- **Remember:** Write down the invariant before coding the loop.
- **Common mistake:** Off-by-one errors in binary search bounds (`lo`/`hi`).

Practice: open `examples/05_*.cpp`, predict the output, change one line, re-predict.

## 6. Expression eval

### Plain English

Today's idea — **Expression eval** — fits inside the wider theme of Stacks & queues practice. Read it as a tool: what job does it do, what rules does it enforce, and what breaks if you ignore those rules?

### Tiny code

```cpp
// Explore: Expression eval
#include <iostream>
int main() {
  std::cout << "practice: Expression eval\n";
  return 0;
}
```

- **Remember:** State one invariant for `Expression eval` before you write code that uses it.
- **Common mistake:** Using `Expression eval` by copy-paste without knowing what it owns or when it is valid.

Practice: open `examples/06_*.cpp`, predict the output, change one line, re-predict.

## 7. BFS layers

### Plain English

Graphs are nodes plus edges. BFS finds shortest paths in unweighted graphs; Dijkstra handles non-negative weights. Union-Find tracks connected components efficiently.

### Tiny code

```cpp
// BFS sketch
std::queue<int> q;
q.push(start);
seen[start] = true;
```

- **Remember:** Pick adjacency lists unless the graph is tiny and dense.
- **Common mistake:** Forgetting to mark nodes visited → infinite loops.

Practice: open `examples/07_*.cpp`, predict the output, change one line, re-predict.

## 8. Undo buffers

### Plain English

Today's idea — **Undo buffers** — fits inside the wider theme of Stacks & queues practice. Read it as a tool: what job does it do, what rules does it enforce, and what breaks if you ignore those rules?

### Tiny code

```cpp
// Explore: Undo buffers
#include <iostream>
int main() {
  std::cout << "practice: Undo buffers\n";
  return 0;
}
```

- **Remember:** State one invariant for `Undo buffers` before you write code that uses it.
- **Common mistake:** Using `Undo buffers` by copy-paste without knowing what it owns or when it is valid.

Practice: open `examples/08_*.cpp`, predict the output, change one line, re-predict.

## 9. Complexity notes

### Plain English

Big-O describes how cost grows with input size. Prefer a clearer O(n log n) algorithm over a clever O(n²) one once n gets large. Measure when constants matter.

### Tiny code

```cpp
// Sorting n items: typically O(n log n)
std::sort(v.begin(), v.end());
```

- **Remember:** Asymptotics first; micro-optimisations later with a profiler.
- **Common mistake:** Optimising a cold path while leaving an O(n²) hot loop alone.

Practice: open `examples/09_*.cpp`, predict the output, change one line, re-predict.

## 10. Practice set B

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

## What you should be able to do after Day 155

- Explain `Stacks & queues practice` to a peer without looking at notes.
- Compile and run all 10 examples with `-std=c++17 -Wall -Wextra` (use newer flags only when the day needs C++20+).
- Answer the 5 questions in `questions.md` before peeking at `answers.md`.
- Write one tiny extra program that combines at least 3 of today's concepts.

Or open this day in the **Badsha hub** (`python3 hub/server.py`) and use Learn / Practice / Quiz tabs.
