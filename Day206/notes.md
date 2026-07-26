# Day 206 -- Graphics pipeline awareness

Today's goal: understand **Graphics pipeline awareness** in plain English, see a tiny code sample for each idea, then practice in `examples/`.

How to study this day:
1. Read each concept's **Plain English** section.
2. Skim the code sample -- predict what it does.
3. Run the matching file under `examples/`.
4. Only then try `questions.md`.

| # | Concept |
|--:|---------|
| 1 | Vertices to pixels idea |
| 2 | CPU/GPU sync |
| 3 | Buffers |
| 4 | Shaders idea |
| 5 | Frame pacing |
| 6 | Resource lifetimes |
| 7 | Validation layers idea |
| 8 | Engine architecture lite |
| 9 | Asset pipelines |
| 10 | Mental frame walk |

---

## 1. Vertices to pixels idea

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

## 2. CPU/GPU sync

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

Practice: open `examples/02_*.cpp`, predict the output, change one line, re-predict.

## 3. Buffers

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

## 4. Shaders idea

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

## 5. Frame pacing

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

## 6. Resource lifetimes

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

## 7. Validation layers idea

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

## 8. Engine architecture lite

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

Practice: open `examples/08_*.cpp`, predict the output, change one line, re-predict.

## 9. Asset pipelines

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

Practice: open `examples/09_*.cpp`, predict the output, change one line, re-predict.

## 10. Mental frame walk

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

## What you should be able to do after Day 206

- Explain `Graphics pipeline awareness` to a peer without looking at notes.
- Compile and run all 10 examples with `-std=c++17 -Wall -Wextra` (use newer flags only when the day needs C++20+).
- Answer the 5 questions in `questions.md` before peeking at `answers.md`.
- Write one tiny extra program that combines at least 3 of today's concepts.

Or open this day in the **Badsha hub** (`python3 hub/server.py`) and use Learn / Practice / Quiz tabs.
