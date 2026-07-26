# Day 100 -- Profiling basics

Today's goal: understand **Profiling basics** in plain English, see a tiny code sample for each idea, then practice in `examples/`.

How to study this day:
1. Read each concept's **Plain English** section.
2. Skim the code sample -- predict what it does.
3. Run the matching file under `examples/`.
4. Only then try `questions.md`.

| # | Concept |
|--:|---------|
| 1 | Measure before optimize |
| 2 | Timers |
| 3 | Sampling idea |
| 4 | Hotspots |
| 5 | Microbenchmark pitfalls |
| 6 | Compiler optimizing away |
| 7 | DoNotOptimize idea |
| 8 | I/O vs CPU bound |
| 9 | Flamegraph mindset |
| 10 | Profile a sort |

---

## 1. Measure before optimize

### Plain English

Today's idea — **Measure before optimize** — fits inside the wider theme of Profiling basics. Read it as a tool: what job does it do, what rules does it enforce, and what breaks if you ignore those rules?

### Tiny code

```cpp
// Explore: Measure before optimize
#include <iostream>
int main() {
  std::cout << "practice: Measure before optimize\n";
  return 0;
}
```

- **Remember:** State one invariant for `Measure before optimize` before you write code that uses it.
- **Common mistake:** Using `Measure before optimize` by copy-paste without knowing what it owns or when it is valid.

Practice: open `examples/01_*.cpp`, predict the output, change one line, re-predict.

## 2. Timers

### Plain English

Today's idea — **Timers** — fits inside the wider theme of Profiling basics. Read it as a tool: what job does it do, what rules does it enforce, and what breaks if you ignore those rules?

### Tiny code

```cpp
// Explore: Timers
#include <iostream>
int main() {
  std::cout << "practice: Timers\n";
  return 0;
}
```

- **Remember:** State one invariant for `Timers` before you write code that uses it.
- **Common mistake:** Using `Timers` by copy-paste without knowing what it owns or when it is valid.

Practice: open `examples/02_*.cpp`, predict the output, change one line, re-predict.

## 3. Sampling idea

### Plain English

Today's idea — **Sampling idea** — fits inside the wider theme of Profiling basics. Read it as a tool: what job does it do, what rules does it enforce, and what breaks if you ignore those rules?

### Tiny code

```cpp
// Explore: Sampling idea
#include <iostream>
int main() {
  std::cout << "practice: Sampling idea\n";
  return 0;
}
```

- **Remember:** State one invariant for `Sampling idea` before you write code that uses it.
- **Common mistake:** Using `Sampling idea` by copy-paste without knowing what it owns or when it is valid.

Practice: open `examples/03_*.cpp`, predict the output, change one line, re-predict.

## 4. Hotspots

### Plain English

Today's idea — **Hotspots** — fits inside the wider theme of Profiling basics. Read it as a tool: what job does it do, what rules does it enforce, and what breaks if you ignore those rules?

### Tiny code

```cpp
// Explore: Hotspots
#include <iostream>
int main() {
  std::cout << "practice: Hotspots\n";
  return 0;
}
```

- **Remember:** State one invariant for `Hotspots` before you write code that uses it.
- **Common mistake:** Using `Hotspots` by copy-paste without knowing what it owns or when it is valid.

Practice: open `examples/04_*.cpp`, predict the output, change one line, re-predict.

## 5. Microbenchmark pitfalls

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

Practice: open `examples/05_*.cpp`, predict the output, change one line, re-predict.

## 6. Compiler optimizing away

### Plain English

Today's idea — **Compiler optimizing away** — fits inside the wider theme of Profiling basics. Read it as a tool: what job does it do, what rules does it enforce, and what breaks if you ignore those rules?

### Tiny code

```cpp
// Explore: Compiler optimizing away
#include <iostream>
int main() {
  std::cout << "practice: Compiler optimizing away\n";
  return 0;
}
```

- **Remember:** State one invariant for `Compiler optimizing away` before you write code that uses it.
- **Common mistake:** Using `Compiler optimizing away` by copy-paste without knowing what it owns or when it is valid.

Practice: open `examples/06_*.cpp`, predict the output, change one line, re-predict.

## 7. DoNotOptimize idea

### Plain English

Today's idea — **DoNotOptimize idea** — fits inside the wider theme of Profiling basics. Read it as a tool: what job does it do, what rules does it enforce, and what breaks if you ignore those rules?

### Tiny code

```cpp
// Explore: DoNotOptimize idea
#include <iostream>
int main() {
  std::cout << "practice: DoNotOptimize idea\n";
  return 0;
}
```

- **Remember:** State one invariant for `DoNotOptimize idea` before you write code that uses it.
- **Common mistake:** Using `DoNotOptimize idea` by copy-paste without knowing what it owns or when it is valid.

Practice: open `examples/07_*.cpp`, predict the output, change one line, re-predict.

## 8. I/O vs CPU bound

### Plain English

Today's idea — **I/O vs CPU bound** — fits inside the wider theme of Profiling basics. Read it as a tool: what job does it do, what rules does it enforce, and what breaks if you ignore those rules?

### Tiny code

```cpp
// Explore: I/O vs CPU bound
#include <iostream>
int main() {
  std::cout << "practice: I/O vs CPU bound\n";
  return 0;
}
```

- **Remember:** State one invariant for `I/O vs CPU bound` before you write code that uses it.
- **Common mistake:** Using `I/O vs CPU bound` by copy-paste without knowing what it owns or when it is valid.

Practice: open `examples/08_*.cpp`, predict the output, change one line, re-predict.

## 9. Flamegraph mindset

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

## 10. Profile a sort

### Plain English

Today's idea — **Profile a sort** — fits inside the wider theme of Profiling basics. Read it as a tool: what job does it do, what rules does it enforce, and what breaks if you ignore those rules?

### Tiny code

```cpp
// Explore: Profile a sort
#include <iostream>
int main() {
  std::cout << "practice: Profile a sort\n";
  return 0;
}
```

- **Remember:** State one invariant for `Profile a sort` before you write code that uses it.
- **Common mistake:** Using `Profile a sort` by copy-paste without knowing what it owns or when it is valid.

Practice: open `examples/10_*.cpp`, predict the output, change one line, re-predict.

---

## What you should be able to do after Day 100

- Explain `Profiling basics` to a peer without looking at notes.
- Compile and run all 10 examples with `-std=c++17 -Wall -Wextra` (use newer flags only when the day needs C++20+).
- Answer the 5 questions in `questions.md` before peeking at `answers.md`.
- Write one tiny extra program that combines at least 3 of today's concepts.

Or open this day in the **Badsha hub** (`python3 hub/server.py`) and use Learn / Practice / Quiz tabs.
