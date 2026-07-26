# Day 173 -- Interview warmups B

Today's goal: understand **Interview warmups B** in plain English, see a tiny code sample for each idea, then practice in `examples/`.

How to study this day:
1. Read each concept's **Plain English** section.
2. Skim the code sample -- predict what it does.
3. Run the matching file under `examples/`.
4. Only then try `questions.md`.

| # | Concept |
|--:|---------|
| 1 | Arrays/hash set |
| 2 | String processing |
| 3 | Linked list ops |
| 4 | Tree BFS/DFS |
| 5 | Graph BFS |
| 6 | Heap top-k |
| 7 | Binary search |
| 8 | Simple DP |
| 9 | Design talk |
| 10 | Mock session notes |

---

## 1. Arrays/hash set

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

Practice: open `examples/01_*.cpp`, predict the output, change one line, re-predict.

## 2. String processing

### Plain English

Today's idea — **String processing** — fits inside the wider theme of Interview warmups B. Read it as a tool: what job does it do, what rules does it enforce, and what breaks if you ignore those rules?

### Tiny code

```cpp
// Explore: String processing
#include <iostream>
int main() {
  std::cout << "practice: String processing\n";
  return 0;
}
```

- **Remember:** State one invariant for `String processing` before you write code that uses it.
- **Common mistake:** Using `String processing` by copy-paste without knowing what it owns or when it is valid.

Practice: open `examples/02_*.cpp`, predict the output, change one line, re-predict.

## 3. Linked list ops

### Plain English

Today's idea — **Linked list ops** — fits inside the wider theme of Interview warmups B. Read it as a tool: what job does it do, what rules does it enforce, and what breaks if you ignore those rules?

### Tiny code

```cpp
// Explore: Linked list ops
#include <iostream>
int main() {
  std::cout << "practice: Linked list ops\n";
  return 0;
}
```

- **Remember:** State one invariant for `Linked list ops` before you write code that uses it.
- **Common mistake:** Using `Linked list ops` by copy-paste without knowing what it owns or when it is valid.

Practice: open `examples/03_*.cpp`, predict the output, change one line, re-predict.

## 4. Tree BFS/DFS

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

Practice: open `examples/04_*.cpp`, predict the output, change one line, re-predict.

## 5. Graph BFS

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

Practice: open `examples/05_*.cpp`, predict the output, change one line, re-predict.

## 6. Heap top-k

### Plain English

The heap lives until you release it. Prefer smart pointers and containers over raw `new`/`delete`. If you must use raw ownership, every `new` has exactly one matching `delete` on every path.

### Tiny code

```cpp
// Prefer:
auto p = std::make_unique<int[]>(10);
// instead of new int[10] / delete[]
```

- **Remember:** Match `new` with `delete` and `new[]` with `delete[]`.
- **Common mistake:** Using `delete` on array memory allocated with `new[]`.

Practice: open `examples/06_*.cpp`, predict the output, change one line, re-predict.

## 7. Binary search

### Plain English

These patterns turn nested loops into linear or logarithmic passes. Binary search needs a monotonic predicate. Two pointers / sliding windows need a clear invariant.

### Tiny code

```cpp
auto it = std::lower_bound(v.begin(), v.end(), x);
bool found = it != v.end() && *it == x;
```

- **Remember:** Write down the invariant before coding the loop.
- **Common mistake:** Off-by-one errors in binary search bounds (`lo`/`hi`).

Practice: open `examples/07_*.cpp`, predict the output, change one line, re-predict.

## 8. Simple DP

### Plain English

DP solves overlapping subproblems once and stores answers. Greedy picks locally best choices when a proof allows it. Backtracking explores choices and undoes them.

### Tiny code

```cpp
std::vector<long long> dp(n + 1);
dp[0] = 0;
for (int i = 1; i <= n; ++i)
  dp[i] = dp[i - 1] + i;  // toy example
```

- **Remember:** Define the state and transition in words before coding.
- **Common mistake:** Memoising without a clear state key → wrong answers.

Practice: open `examples/08_*.cpp`, predict the output, change one line, re-predict.

## 9. Design talk

### Plain English

Today's idea — **Design talk** — fits inside the wider theme of Interview warmups B. Read it as a tool: what job does it do, what rules does it enforce, and what breaks if you ignore those rules?

### Tiny code

```cpp
// Explore: Design talk
#include <iostream>
int main() {
  std::cout << "practice: Design talk\n";
  return 0;
}
```

- **Remember:** State one invariant for `Design talk` before you write code that uses it.
- **Common mistake:** Using `Design talk` by copy-paste without knowing what it owns or when it is valid.

Practice: open `examples/09_*.cpp`, predict the output, change one line, re-predict.

## 10. Mock session notes

### Plain English

Today's idea — **Mock session notes** — fits inside the wider theme of Interview warmups B. Read it as a tool: what job does it do, what rules does it enforce, and what breaks if you ignore those rules?

### Tiny code

```cpp
// Explore: Mock session notes
#include <iostream>
int main() {
  std::cout << "practice: Mock session notes\n";
  return 0;
}
```

- **Remember:** State one invariant for `Mock session notes` before you write code that uses it.
- **Common mistake:** Using `Mock session notes` by copy-paste without knowing what it owns or when it is valid.

Practice: open `examples/10_*.cpp`, predict the output, change one line, re-predict.

---

## What you should be able to do after Day 173

- Explain `Interview warmups B` to a peer without looking at notes.
- Compile and run all 10 examples with `-std=c++17 -Wall -Wextra` (use newer flags only when the day needs C++20+).
- Answer the 5 questions in `questions.md` before peeking at `answers.md`.
- Write one tiny extra program that combines at least 3 of today's concepts.

Or open this day in the **Badsha hub** (`python3 hub/server.py`) and use Learn / Practice / Quiz tabs.
