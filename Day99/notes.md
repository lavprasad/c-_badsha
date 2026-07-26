# Day 99 -- Caching & locality

Today's goal: understand **Caching & locality** in plain English, see a tiny code sample for each idea, then practice in `examples/`.

How to study this day:
1. Read each concept's **Plain English** section.
2. Skim the code sample -- predict what it does.
3. Run the matching file under `examples/`.
4. Only then try `questions.md`.

| # | Concept |
|--:|---------|
| 1 | CPU caches |
| 2 | Spatial locality |
| 3 | Temporal locality |
| 4 | AoS vs SoA |
| 5 | False sharing again |
| 6 | Prefetch intuition |
| 7 | Working set |
| 8 | Cold vs hot paths |
| 9 | Measuring with timing |
| 10 | SoA transform demo |

---

## 1. CPU caches

### Plain English

Today's idea — **CPU caches** — fits inside the wider theme of Caching & locality. Read it as a tool: what job does it do, what rules does it enforce, and what breaks if you ignore those rules?

### Tiny code

```cpp
// Explore: CPU caches
#include <iostream>
int main() {
  std::cout << "practice: CPU caches\n";
  return 0;
}
```

- **Remember:** State one invariant for `CPU caches` before you write code that uses it.
- **Common mistake:** Using `CPU caches` by copy-paste without knowing what it owns or when it is valid.

Practice: open `examples/01_*.cpp`, predict the output, change one line, re-predict.

## 2. Spatial locality

### Plain English

Today's idea — **Spatial locality** — fits inside the wider theme of Caching & locality. Read it as a tool: what job does it do, what rules does it enforce, and what breaks if you ignore those rules?

### Tiny code

```cpp
// Explore: Spatial locality
#include <iostream>
int main() {
  std::cout << "practice: Spatial locality\n";
  return 0;
}
```

- **Remember:** State one invariant for `Spatial locality` before you write code that uses it.
- **Common mistake:** Using `Spatial locality` by copy-paste without knowing what it owns or when it is valid.

Practice: open `examples/02_*.cpp`, predict the output, change one line, re-predict.

## 3. Temporal locality

### Plain English

Today's idea — **Temporal locality** — fits inside the wider theme of Caching & locality. Read it as a tool: what job does it do, what rules does it enforce, and what breaks if you ignore those rules?

### Tiny code

```cpp
// Explore: Temporal locality
#include <iostream>
int main() {
  std::cout << "practice: Temporal locality\n";
  return 0;
}
```

- **Remember:** State one invariant for `Temporal locality` before you write code that uses it.
- **Common mistake:** Using `Temporal locality` by copy-paste without knowing what it owns or when it is valid.

Practice: open `examples/03_*.cpp`, predict the output, change one line, re-predict.

## 4. AoS vs SoA

### Plain English

Today's idea — **AoS vs SoA** — fits inside the wider theme of Caching & locality. Read it as a tool: what job does it do, what rules does it enforce, and what breaks if you ignore those rules?

### Tiny code

```cpp
// Explore: AoS vs SoA
#include <iostream>
int main() {
  std::cout << "practice: AoS vs SoA\n";
  return 0;
}
```

- **Remember:** State one invariant for `AoS vs SoA` before you write code that uses it.
- **Common mistake:** Using `AoS vs SoA` by copy-paste without knowing what it owns or when it is valid.

Practice: open `examples/04_*.cpp`, predict the output, change one line, re-predict.

## 5. False sharing again

### Plain English

Today's idea — **False sharing again** — fits inside the wider theme of Caching & locality. Read it as a tool: what job does it do, what rules does it enforce, and what breaks if you ignore those rules?

### Tiny code

```cpp
// Explore: False sharing again
#include <iostream>
int main() {
  std::cout << "practice: False sharing again\n";
  return 0;
}
```

- **Remember:** State one invariant for `False sharing again` before you write code that uses it.
- **Common mistake:** Using `False sharing again` by copy-paste without knowing what it owns or when it is valid.

Practice: open `examples/05_*.cpp`, predict the output, change one line, re-predict.

## 6. Prefetch intuition

### Plain English

Today's idea — **Prefetch intuition** — fits inside the wider theme of Caching & locality. Read it as a tool: what job does it do, what rules does it enforce, and what breaks if you ignore those rules?

### Tiny code

```cpp
// Explore: Prefetch intuition
#include <iostream>
int main() {
  std::cout << "practice: Prefetch intuition\n";
  return 0;
}
```

- **Remember:** State one invariant for `Prefetch intuition` before you write code that uses it.
- **Common mistake:** Using `Prefetch intuition` by copy-paste without knowing what it owns or when it is valid.

Practice: open `examples/06_*.cpp`, predict the output, change one line, re-predict.

## 7. Working set

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

Practice: open `examples/07_*.cpp`, predict the output, change one line, re-predict.

## 8. Cold vs hot paths

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

Practice: open `examples/08_*.cpp`, predict the output, change one line, re-predict.

## 9. Measuring with timing

### Plain English

Today's idea — **Measuring with timing** — fits inside the wider theme of Caching & locality. Read it as a tool: what job does it do, what rules does it enforce, and what breaks if you ignore those rules?

### Tiny code

```cpp
// Explore: Measuring with timing
#include <iostream>
int main() {
  std::cout << "practice: Measuring with timing\n";
  return 0;
}
```

- **Remember:** State one invariant for `Measuring with timing` before you write code that uses it.
- **Common mistake:** Using `Measuring with timing` by copy-paste without knowing what it owns or when it is valid.

Practice: open `examples/09_*.cpp`, predict the output, change one line, re-predict.

## 10. SoA transform demo

### Plain English

STL algorithms are verbs over iterator ranges. Prefer them over hand-rolled loops when the intent matches (`find`, `sort`, `transform`). The erase-remove idiom deletes elements by value/predicate from a sequence container.

### Tiny code

```cpp
v.erase(std::remove(v.begin(), v.end(), 0), v.end());
std::sort(v.begin(), v.end());
```

- **Remember:** `remove` only slides elements — you still need `erase`.
- **Common mistake:** Calling `std::remove` and forgetting the container `erase`.

Practice: open `examples/10_*.cpp`, predict the output, change one line, re-predict.

---

## What you should be able to do after Day 99

- Explain `Caching & locality` to a peer without looking at notes.
- Compile and run all 10 examples with `-std=c++17 -Wall -Wextra` (use newer flags only when the day needs C++20+).
- Answer the 5 questions in `questions.md` before peeking at `answers.md`.
- Write one tiny extra program that combines at least 3 of today's concepts.

Or open this day in the **Badsha hub** (`python3 hub/server.py`) and use Learn / Practice / Quiz tabs.
