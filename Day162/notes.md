# Day 162 -- Sorting deep dive

Today's goal: understand **Sorting deep dive** in plain English, see a tiny code sample for each idea, then practice in `examples/`.

How to study this day:
1. Read each concept's **Plain English** section.
2. Skim the code sample -- predict what it does.
3. Run the matching file under `examples/`.
4. Only then try `questions.md`.

| # | Concept |
|--:|---------|
| 1 | Quicksort intuition |
| 2 | Mergesort |
| 3 | Heapsort |
| 4 | Stability |
| 5 | std::sort realities |
| 6 | Partial sort |
| 7 | Counting/radix idea |
| 8 | Comparator strict weak ordering |
| 9 | Debugging bad comparators |
| 10 | Sort practice |

---

## 1. Quicksort intuition

### Plain English

Today's idea — **Quicksort intuition** — fits inside the wider theme of Sorting deep dive. Read it as a tool: what job does it do, what rules does it enforce, and what breaks if you ignore those rules?

### Tiny code

```cpp
// Explore: Quicksort intuition
#include <iostream>
int main() {
  std::cout << "practice: Quicksort intuition\n";
  return 0;
}
```

- **Remember:** State one invariant for `Quicksort intuition` before you write code that uses it.
- **Common mistake:** Using `Quicksort intuition` by copy-paste without knowing what it owns or when it is valid.

Practice: open `examples/01_*.cpp`, predict the output, change one line, re-predict.

## 2. Mergesort

### Plain English

Today's idea — **Mergesort** — fits inside the wider theme of Sorting deep dive. Read it as a tool: what job does it do, what rules does it enforce, and what breaks if you ignore those rules?

### Tiny code

```cpp
// Explore: Mergesort
#include <iostream>
int main() {
  std::cout << "practice: Mergesort\n";
  return 0;
}
```

- **Remember:** State one invariant for `Mergesort` before you write code that uses it.
- **Common mistake:** Using `Mergesort` by copy-paste without knowing what it owns or when it is valid.

Practice: open `examples/02_*.cpp`, predict the output, change one line, re-predict.

## 3. Heapsort

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

Practice: open `examples/03_*.cpp`, predict the output, change one line, re-predict.

## 4. Stability

### Plain English

Today's idea — **Stability** — fits inside the wider theme of Sorting deep dive. Read it as a tool: what job does it do, what rules does it enforce, and what breaks if you ignore those rules?

### Tiny code

```cpp
// Explore: Stability
#include <iostream>
int main() {
  std::cout << "practice: Stability\n";
  return 0;
}
```

- **Remember:** State one invariant for `Stability` before you write code that uses it.
- **Common mistake:** Using `Stability` by copy-paste without knowing what it owns or when it is valid.

Practice: open `examples/04_*.cpp`, predict the output, change one line, re-predict.

## 5. std::sort realities

### Plain English

STL algorithms are verbs over iterator ranges. Prefer them over hand-rolled loops when the intent matches (`find`, `sort`, `transform`). The erase-remove idiom deletes elements by value/predicate from a sequence container.

### Tiny code

```cpp
v.erase(std::remove(v.begin(), v.end(), 0), v.end());
std::sort(v.begin(), v.end());
```

- **Remember:** `remove` only slides elements — you still need `erase`.
- **Common mistake:** Calling `std::remove` and forgetting the container `erase`.

Practice: open `examples/05_*.cpp`, predict the output, change one line, re-predict.

## 6. Partial sort

### Plain English

Today's idea — **Partial sort** — fits inside the wider theme of Sorting deep dive. Read it as a tool: what job does it do, what rules does it enforce, and what breaks if you ignore those rules?

### Tiny code

```cpp
// Explore: Partial sort
#include <iostream>
int main() {
  std::cout << "practice: Partial sort\n";
  return 0;
}
```

- **Remember:** State one invariant for `Partial sort` before you write code that uses it.
- **Common mistake:** Using `Partial sort` by copy-paste without knowing what it owns or when it is valid.

Practice: open `examples/06_*.cpp`, predict the output, change one line, re-predict.

## 7. Counting/radix idea

### Plain English

Today's idea — **Counting/radix idea** — fits inside the wider theme of Sorting deep dive. Read it as a tool: what job does it do, what rules does it enforce, and what breaks if you ignore those rules?

### Tiny code

```cpp
// Explore: Counting/radix idea
#include <iostream>
int main() {
  std::cout << "practice: Counting/radix idea\n";
  return 0;
}
```

- **Remember:** State one invariant for `Counting/radix idea` before you write code that uses it.
- **Common mistake:** Using `Counting/radix idea` by copy-paste without knowing what it owns or when it is valid.

Practice: open `examples/07_*.cpp`, predict the output, change one line, re-predict.

## 8. Comparator strict weak ordering

### Plain English

Today's idea — **Comparator strict weak ordering** — fits inside the wider theme of Sorting deep dive. Read it as a tool: what job does it do, what rules does it enforce, and what breaks if you ignore those rules?

### Tiny code

```cpp
// Explore: Comparator strict weak ordering
#include <iostream>
int main() {
  std::cout << "practice: Comparator strict weak ordering\n";
  return 0;
}
```

- **Remember:** State one invariant for `Comparator strict weak ordering` before you write code that uses it.
- **Common mistake:** Using `Comparator strict weak ordering` by copy-paste without knowing what it owns or when it is valid.

Practice: open `examples/08_*.cpp`, predict the output, change one line, re-predict.

## 9. Debugging bad comparators

### Plain English

Assertions document invariants. `assert` is for runtime checks in debug builds; `static_assert` fails at compile time. Sanitizers catch many memory and UB bugs early.

### Tiny code

```cpp
#include <cassert>
assert(index < size);
static_assert(sizeof(int) >= 4, "need 32-bit int");
```

- **Remember:** Asserts are not for user-facing error handling.
- **Common mistake:** Putting required validation only in `assert` — it disappears in release (`NDEBUG`).

Practice: open `examples/09_*.cpp`, predict the output, change one line, re-predict.

## 10. Sort practice

### Plain English

Today's idea — **Sort practice** — fits inside the wider theme of Sorting deep dive. Read it as a tool: what job does it do, what rules does it enforce, and what breaks if you ignore those rules?

### Tiny code

```cpp
// Explore: Sort practice
#include <iostream>
int main() {
  std::cout << "practice: Sort practice\n";
  return 0;
}
```

- **Remember:** State one invariant for `Sort practice` before you write code that uses it.
- **Common mistake:** Using `Sort practice` by copy-paste without knowing what it owns or when it is valid.

Practice: open `examples/10_*.cpp`, predict the output, change one line, re-predict.

---

## What you should be able to do after Day 162

- Explain `Sorting deep dive` to a peer without looking at notes.
- Compile and run all 10 examples with `-std=c++17 -Wall -Wextra` (use newer flags only when the day needs C++20+).
- Answer the 5 questions in `questions.md` before peeking at `answers.md`.
- Write one tiny extra program that combines at least 3 of today's concepts.

Or open this day in the **Badsha hub** (`python3 hub/server.py`) and use Learn / Practice / Quiz tabs.
