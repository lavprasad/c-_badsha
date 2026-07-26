# Day 154 -- Linked lists

Today's goal: understand **Linked lists** in plain English, see a tiny code sample for each idea, then practice in `examples/`.

How to study this day:
1. Read each concept's **Plain English** section.
2. Skim the code sample -- predict what it does.
3. Run the matching file under `examples/`.
4. Only then try `questions.md`.

| # | Concept |
|--:|---------|
| 1 | Singly list |
| 2 | Doubly list |
| 3 | Dummy heads |
| 4 | Reverse list |
| 5 | Cycle detection |
| 6 | Merge lists |
| 7 | Intersection |
| 8 | Memory ownership |
| 9 | vs vector |
| 10 | Implement list |

---

## 1. Singly list

### Plain English

Today's idea — **Singly list** — fits inside the wider theme of Linked lists. Read it as a tool: what job does it do, what rules does it enforce, and what breaks if you ignore those rules?

### Tiny code

```cpp
// Explore: Singly list
#include <iostream>
int main() {
  std::cout << "practice: Singly list\n";
  return 0;
}
```

- **Remember:** State one invariant for `Singly list` before you write code that uses it.
- **Common mistake:** Using `Singly list` by copy-paste without knowing what it owns or when it is valid.

Practice: open `examples/01_*.cpp`, predict the output, change one line, re-predict.

## 2. Doubly list

### Plain English

Today's idea — **Doubly list** — fits inside the wider theme of Linked lists. Read it as a tool: what job does it do, what rules does it enforce, and what breaks if you ignore those rules?

### Tiny code

```cpp
// Explore: Doubly list
#include <iostream>
int main() {
  std::cout << "practice: Doubly list\n";
  return 0;
}
```

- **Remember:** State one invariant for `Doubly list` before you write code that uses it.
- **Common mistake:** Using `Doubly list` by copy-paste without knowing what it owns or when it is valid.

Practice: open `examples/02_*.cpp`, predict the output, change one line, re-predict.

## 3. Dummy heads

### Plain English

Today's idea — **Dummy heads** — fits inside the wider theme of Linked lists. Read it as a tool: what job does it do, what rules does it enforce, and what breaks if you ignore those rules?

### Tiny code

```cpp
// Explore: Dummy heads
#include <iostream>
int main() {
  std::cout << "practice: Dummy heads\n";
  return 0;
}
```

- **Remember:** State one invariant for `Dummy heads` before you write code that uses it.
- **Common mistake:** Using `Dummy heads` by copy-paste without knowing what it owns or when it is valid.

Practice: open `examples/03_*.cpp`, predict the output, change one line, re-predict.

## 4. Reverse list

### Plain English

Today's idea — **Reverse list** — fits inside the wider theme of Linked lists. Read it as a tool: what job does it do, what rules does it enforce, and what breaks if you ignore those rules?

### Tiny code

```cpp
// Explore: Reverse list
#include <iostream>
int main() {
  std::cout << "practice: Reverse list\n";
  return 0;
}
```

- **Remember:** State one invariant for `Reverse list` before you write code that uses it.
- **Common mistake:** Using `Reverse list` by copy-paste without knowing what it owns or when it is valid.

Practice: open `examples/04_*.cpp`, predict the output, change one line, re-predict.

## 5. Cycle detection

### Plain English

Today's idea — **Cycle detection** — fits inside the wider theme of Linked lists. Read it as a tool: what job does it do, what rules does it enforce, and what breaks if you ignore those rules?

### Tiny code

```cpp
// Explore: Cycle detection
#include <iostream>
int main() {
  std::cout << "practice: Cycle detection\n";
  return 0;
}
```

- **Remember:** State one invariant for `Cycle detection` before you write code that uses it.
- **Common mistake:** Using `Cycle detection` by copy-paste without knowing what it owns or when it is valid.

Practice: open `examples/05_*.cpp`, predict the output, change one line, re-predict.

## 6. Merge lists

### Plain English

Today's idea — **Merge lists** — fits inside the wider theme of Linked lists. Read it as a tool: what job does it do, what rules does it enforce, and what breaks if you ignore those rules?

### Tiny code

```cpp
// Explore: Merge lists
#include <iostream>
int main() {
  std::cout << "practice: Merge lists\n";
  return 0;
}
```

- **Remember:** State one invariant for `Merge lists` before you write code that uses it.
- **Common mistake:** Using `Merge lists` by copy-paste without knowing what it owns or when it is valid.

Practice: open `examples/06_*.cpp`, predict the output, change one line, re-predict.

## 7. Intersection

### Plain English

Today's idea — **Intersection** — fits inside the wider theme of Linked lists. Read it as a tool: what job does it do, what rules does it enforce, and what breaks if you ignore those rules?

### Tiny code

```cpp
// Explore: Intersection
#include <iostream>
int main() {
  std::cout << "practice: Intersection\n";
  return 0;
}
```

- **Remember:** State one invariant for `Intersection` before you write code that uses it.
- **Common mistake:** Using `Intersection` by copy-paste without knowing what it owns or when it is valid.

Practice: open `examples/07_*.cpp`, predict the output, change one line, re-predict.

## 8. Memory ownership

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

## 9. vs vector

### Plain English

Today's idea — **vs vector** — fits inside the wider theme of Linked lists. Read it as a tool: what job does it do, what rules does it enforce, and what breaks if you ignore those rules?

### Tiny code

```cpp
// Explore: vs vector
#include <iostream>
int main() {
  std::cout << "practice: vs vector\n";
  return 0;
}
```

- **Remember:** State one invariant for `vs vector` before you write code that uses it.
- **Common mistake:** Using `vs vector` by copy-paste without knowing what it owns or when it is valid.

Practice: open `examples/09_*.cpp`, predict the output, change one line, re-predict.

## 10. Implement list

### Plain English

Today's idea — **Implement list** — fits inside the wider theme of Linked lists. Read it as a tool: what job does it do, what rules does it enforce, and what breaks if you ignore those rules?

### Tiny code

```cpp
// Explore: Implement list
#include <iostream>
int main() {
  std::cout << "practice: Implement list\n";
  return 0;
}
```

- **Remember:** State one invariant for `Implement list` before you write code that uses it.
- **Common mistake:** Using `Implement list` by copy-paste without knowing what it owns or when it is valid.

Practice: open `examples/10_*.cpp`, predict the output, change one line, re-predict.

---

## What you should be able to do after Day 154

- Explain `Linked lists` to a peer without looking at notes.
- Compile and run all 10 examples with `-std=c++17 -Wall -Wextra` (use newer flags only when the day needs C++20+).
- Answer the 5 questions in `questions.md` before peeking at `answers.md`.
- Write one tiny extra program that combines at least 3 of today's concepts.

Or open this day in the **Badsha hub** (`python3 hub/server.py`) and use Learn / Practice / Quiz tabs.
