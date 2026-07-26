# Day 161 -- Union-Find / DSU

Today's goal: understand **Union-Find / DSU** in plain English, see a tiny code sample for each idea, then practice in `examples/`.

How to study this day:
1. Read each concept's **Plain English** section.
2. Skim the code sample -- predict what it does.
3. Run the matching file under `examples/`.
4. Only then try `questions.md`.

| # | Concept |
|--:|---------|
| 1 | Parent array |
| 2 | Path compression |
| 3 | Union by rank |
| 4 | Connected queries |
| 5 | Kruskal idea |
| 6 | Offline queries |
| 7 | Complexity |
| 8 | Variants |
| 9 | Bugs to avoid |
| 10 | DSU implement |

---

## 1. Parent array

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

Practice: open `examples/01_*.cpp`, predict the output, change one line, re-predict.

## 2. Path compression

### Plain English

`std::filesystem` gives portable paths and directory walks. Prefer `path` objects over hand-rolled string concatenation for joining folders.

### Tiny code

```cpp
#include <filesystem>
namespace fs = std::filesystem;
for (auto& e : fs::directory_iterator(".")) {
  std::cout << e.path() << '\n';
}
```

- **Remember:** Check `exists` / handle errors — disks fail.
- **Common mistake:** Assuming `/` path separators on every OS without using `path`.

Practice: open `examples/02_*.cpp`, predict the output, change one line, re-predict.

## 3. Union by rank

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

Practice: open `examples/03_*.cpp`, predict the output, change one line, re-predict.

## 4. Connected queries

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

## 5. Kruskal idea

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

## 6. Offline queries

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

Practice: open `examples/06_*.cpp`, predict the output, change one line, re-predict.

## 7. Complexity

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

## 8. Variants

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

Practice: open `examples/08_*.cpp`, predict the output, change one line, re-predict.

## 9. Bugs to avoid

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

Practice: open `examples/09_*.cpp`, predict the output, change one line, re-predict.

## 10. DSU implement

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

Practice: open `examples/10_*.cpp`, predict the output, change one line, re-predict.

---

## What you should be able to do after Day 161

- Explain `Union-Find / DSU` to a peer without looking at notes.
- Compile and run all 10 examples with `-std=c++17 -Wall -Wextra` (use newer flags only when the day needs C++20+).
- Answer the 5 questions in `questions.md` before peeking at `answers.md`.
- Write one tiny extra program that combines at least 3 of today's concepts.

Or open this day in the **Badsha hub** (`python3 hub/server.py`) and use Learn / Practice / Quiz tabs.
