# Day 156 -- Hashing practice

Today's goal: understand **Hashing practice** in plain English, see a tiny code sample for each idea, then practice in `examples/`.

How to study this day:
1. Read each concept's **Plain English** section.
2. Skim the code sample -- predict what it does.
3. Run the matching file under `examples/`.
4. Only then try `questions.md`.

| # | Concept |
|--:|---------|
| 1 | Frequency maps |
| 2 | Two-sum |
| 3 | Anagrams |
| 4 | Subarray sum |
| 5 | First unique |
| 6 | Custom keys |
| 7 | Collision handling idea |
| 8 | Load factor |
| 9 | Rolling hash uses |
| 10 | Practice set C |

---

## 1. Frequency maps

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

## 2. Two-sum

### Plain English

Today's idea — **Two-sum** — fits inside the wider theme of Hashing practice. Read it as a tool: what job does it do, what rules does it enforce, and what breaks if you ignore those rules?

### Tiny code

```cpp
// Explore: Two-sum
#include <iostream>
int main() {
  std::cout << "practice: Two-sum\n";
  return 0;
}
```

- **Remember:** State one invariant for `Two-sum` before you write code that uses it.
- **Common mistake:** Using `Two-sum` by copy-paste without knowing what it owns or when it is valid.

Practice: open `examples/02_*.cpp`, predict the output, change one line, re-predict.

## 3. Anagrams

### Plain English

Today's idea — **Anagrams** — fits inside the wider theme of Hashing practice. Read it as a tool: what job does it do, what rules does it enforce, and what breaks if you ignore those rules?

### Tiny code

```cpp
// Explore: Anagrams
#include <iostream>
int main() {
  std::cout << "practice: Anagrams\n";
  return 0;
}
```

- **Remember:** State one invariant for `Anagrams` before you write code that uses it.
- **Common mistake:** Using `Anagrams` by copy-paste without knowing what it owns or when it is valid.

Practice: open `examples/03_*.cpp`, predict the output, change one line, re-predict.

## 4. Subarray sum

### Plain English

Today's idea — **Subarray sum** — fits inside the wider theme of Hashing practice. Read it as a tool: what job does it do, what rules does it enforce, and what breaks if you ignore those rules?

### Tiny code

```cpp
// Explore: Subarray sum
#include <iostream>
int main() {
  std::cout << "practice: Subarray sum\n";
  return 0;
}
```

- **Remember:** State one invariant for `Subarray sum` before you write code that uses it.
- **Common mistake:** Using `Subarray sum` by copy-paste without knowing what it owns or when it is valid.

Practice: open `examples/04_*.cpp`, predict the output, change one line, re-predict.

## 5. First unique

### Plain English

Today's idea — **First unique** — fits inside the wider theme of Hashing practice. Read it as a tool: what job does it do, what rules does it enforce, and what breaks if you ignore those rules?

### Tiny code

```cpp
// Explore: First unique
#include <iostream>
int main() {
  std::cout << "practice: First unique\n";
  return 0;
}
```

- **Remember:** State one invariant for `First unique` before you write code that uses it.
- **Common mistake:** Using `First unique` by copy-paste without knowing what it owns or when it is valid.

Practice: open `examples/05_*.cpp`, predict the output, change one line, re-predict.

## 6. Custom keys

### Plain English

Today's idea — **Custom keys** — fits inside the wider theme of Hashing practice. Read it as a tool: what job does it do, what rules does it enforce, and what breaks if you ignore those rules?

### Tiny code

```cpp
// Explore: Custom keys
#include <iostream>
int main() {
  std::cout << "practice: Custom keys\n";
  return 0;
}
```

- **Remember:** State one invariant for `Custom keys` before you write code that uses it.
- **Common mistake:** Using `Custom keys` by copy-paste without knowing what it owns or when it is valid.

Practice: open `examples/06_*.cpp`, predict the output, change one line, re-predict.

## 7. Collision handling idea

### Plain English

Today's idea — **Collision handling idea** — fits inside the wider theme of Hashing practice. Read it as a tool: what job does it do, what rules does it enforce, and what breaks if you ignore those rules?

### Tiny code

```cpp
// Explore: Collision handling idea
#include <iostream>
int main() {
  std::cout << "practice: Collision handling idea\n";
  return 0;
}
```

- **Remember:** State one invariant for `Collision handling idea` before you write code that uses it.
- **Common mistake:** Using `Collision handling idea` by copy-paste without knowing what it owns or when it is valid.

Practice: open `examples/07_*.cpp`, predict the output, change one line, re-predict.

## 8. Load factor

### Plain English

Today's idea — **Load factor** — fits inside the wider theme of Hashing practice. Read it as a tool: what job does it do, what rules does it enforce, and what breaks if you ignore those rules?

### Tiny code

```cpp
// Explore: Load factor
#include <iostream>
int main() {
  std::cout << "practice: Load factor\n";
  return 0;
}
```

- **Remember:** State one invariant for `Load factor` before you write code that uses it.
- **Common mistake:** Using `Load factor` by copy-paste without knowing what it owns or when it is valid.

Practice: open `examples/08_*.cpp`, predict the output, change one line, re-predict.

## 9. Rolling hash uses

### Plain English

Today's idea — **Rolling hash uses** — fits inside the wider theme of Hashing practice. Read it as a tool: what job does it do, what rules does it enforce, and what breaks if you ignore those rules?

### Tiny code

```cpp
// Explore: Rolling hash uses
#include <iostream>
int main() {
  std::cout << "practice: Rolling hash uses\n";
  return 0;
}
```

- **Remember:** State one invariant for `Rolling hash uses` before you write code that uses it.
- **Common mistake:** Using `Rolling hash uses` by copy-paste without knowing what it owns or when it is valid.

Practice: open `examples/09_*.cpp`, predict the output, change one line, re-predict.

## 10. Practice set C

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

## What you should be able to do after Day 156

- Explain `Hashing practice` to a peer without looking at notes.
- Compile and run all 10 examples with `-std=c++17 -Wall -Wextra` (use newer flags only when the day needs C++20+).
- Answer the 5 questions in `questions.md` before peeking at `answers.md`.
- Write one tiny extra program that combines at least 3 of today's concepts.

Or open this day in the **Badsha hub** (`python3 hub/server.py`) and use Learn / Practice / Quiz tabs.
