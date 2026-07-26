# Day 147 -- Database-ish in process

Today's goal: understand **Database-ish in process** in plain English, see a tiny code sample for each idea, then practice in `examples/`.

How to study this day:
1. Read each concept's **Plain English** section.
2. Skim the code sample -- predict what it does.
3. Run the matching file under `examples/`.
4. Only then try `questions.md`.

| # | Concept |
|--:|---------|
| 1 | B-tree idea |
| 2 | Hash indexes |
| 3 | WAL idea |
| 4 | Pages and buffers |
| 5 | Transactions lite |
| 6 | Serialization of rows |
| 7 | Query planning lite |
| 8 | Concurrency control idea |
| 9 | Durability |
| 10 | Tiny KV store |

---

## 1. B-tree idea

### Plain English

Today's idea — **B-tree idea** — fits inside the wider theme of Database-ish in process. Read it as a tool: what job does it do, what rules does it enforce, and what breaks if you ignore those rules?

### Tiny code

```cpp
// Explore: B-tree idea
#include <iostream>
int main() {
  std::cout << "practice: B-tree idea\n";
  return 0;
}
```

- **Remember:** State one invariant for `B-tree idea` before you write code that uses it.
- **Common mistake:** Using `B-tree idea` by copy-paste without knowing what it owns or when it is valid.

Practice: open `examples/01_*.cpp`, predict the output, change one line, re-predict.

## 2. Hash indexes

### Plain English

Today's idea — **Hash indexes** — fits inside the wider theme of Database-ish in process. Read it as a tool: what job does it do, what rules does it enforce, and what breaks if you ignore those rules?

### Tiny code

```cpp
// Explore: Hash indexes
#include <iostream>
int main() {
  std::cout << "practice: Hash indexes\n";
  return 0;
}
```

- **Remember:** State one invariant for `Hash indexes` before you write code that uses it.
- **Common mistake:** Using `Hash indexes` by copy-paste without knowing what it owns or when it is valid.

Practice: open `examples/02_*.cpp`, predict the output, change one line, re-predict.

## 3. WAL idea

### Plain English

Today's idea — **WAL idea** — fits inside the wider theme of Database-ish in process. Read it as a tool: what job does it do, what rules does it enforce, and what breaks if you ignore those rules?

### Tiny code

```cpp
// Explore: WAL idea
#include <iostream>
int main() {
  std::cout << "practice: WAL idea\n";
  return 0;
}
```

- **Remember:** State one invariant for `WAL idea` before you write code that uses it.
- **Common mistake:** Using `WAL idea` by copy-paste without knowing what it owns or when it is valid.

Practice: open `examples/03_*.cpp`, predict the output, change one line, re-predict.

## 4. Pages and buffers

### Plain English

Today's idea — **Pages and buffers** — fits inside the wider theme of Database-ish in process. Read it as a tool: what job does it do, what rules does it enforce, and what breaks if you ignore those rules?

### Tiny code

```cpp
// Explore: Pages and buffers
#include <iostream>
int main() {
  std::cout << "practice: Pages and buffers\n";
  return 0;
}
```

- **Remember:** State one invariant for `Pages and buffers` before you write code that uses it.
- **Common mistake:** Using `Pages and buffers` by copy-paste without knowing what it owns or when it is valid.

Practice: open `examples/04_*.cpp`, predict the output, change one line, re-predict.

## 5. Transactions lite

### Plain English

Today's idea — **Transactions lite** — fits inside the wider theme of Database-ish in process. Read it as a tool: what job does it do, what rules does it enforce, and what breaks if you ignore those rules?

### Tiny code

```cpp
// Explore: Transactions lite
#include <iostream>
int main() {
  std::cout << "practice: Transactions lite\n";
  return 0;
}
```

- **Remember:** State one invariant for `Transactions lite` before you write code that uses it.
- **Common mistake:** Using `Transactions lite` by copy-paste without knowing what it owns or when it is valid.

Practice: open `examples/05_*.cpp`, predict the output, change one line, re-predict.

## 6. Serialization of rows

### Plain English

Today's idea — **Serialization of rows** — fits inside the wider theme of Database-ish in process. Read it as a tool: what job does it do, what rules does it enforce, and what breaks if you ignore those rules?

### Tiny code

```cpp
// Explore: Serialization of rows
#include <iostream>
int main() {
  std::cout << "practice: Serialization of rows\n";
  return 0;
}
```

- **Remember:** State one invariant for `Serialization of rows` before you write code that uses it.
- **Common mistake:** Using `Serialization of rows` by copy-paste without knowing what it owns or when it is valid.

Practice: open `examples/06_*.cpp`, predict the output, change one line, re-predict.

## 7. Query planning lite

### Plain English

Today's idea — **Query planning lite** — fits inside the wider theme of Database-ish in process. Read it as a tool: what job does it do, what rules does it enforce, and what breaks if you ignore those rules?

### Tiny code

```cpp
// Explore: Query planning lite
#include <iostream>
int main() {
  std::cout << "practice: Query planning lite\n";
  return 0;
}
```

- **Remember:** State one invariant for `Query planning lite` before you write code that uses it.
- **Common mistake:** Using `Query planning lite` by copy-paste without knowing what it owns or when it is valid.

Practice: open `examples/07_*.cpp`, predict the output, change one line, re-predict.

## 8. Concurrency control idea

### Plain English

Today's idea — **Concurrency control idea** — fits inside the wider theme of Database-ish in process. Read it as a tool: what job does it do, what rules does it enforce, and what breaks if you ignore those rules?

### Tiny code

```cpp
// Explore: Concurrency control idea
#include <iostream>
int main() {
  std::cout << "practice: Concurrency control idea\n";
  return 0;
}
```

- **Remember:** State one invariant for `Concurrency control idea` before you write code that uses it.
- **Common mistake:** Using `Concurrency control idea` by copy-paste without knowing what it owns or when it is valid.

Practice: open `examples/08_*.cpp`, predict the output, change one line, re-predict.

## 9. Durability

### Plain English

Today's idea — **Durability** — fits inside the wider theme of Database-ish in process. Read it as a tool: what job does it do, what rules does it enforce, and what breaks if you ignore those rules?

### Tiny code

```cpp
// Explore: Durability
#include <iostream>
int main() {
  std::cout << "practice: Durability\n";
  return 0;
}
```

- **Remember:** State one invariant for `Durability` before you write code that uses it.
- **Common mistake:** Using `Durability` by copy-paste without knowing what it owns or when it is valid.

Practice: open `examples/09_*.cpp`, predict the output, change one line, re-predict.

## 10. Tiny KV store

### Plain English

Today's idea — **Tiny KV store** — fits inside the wider theme of Database-ish in process. Read it as a tool: what job does it do, what rules does it enforce, and what breaks if you ignore those rules?

### Tiny code

```cpp
// Explore: Tiny KV store
#include <iostream>
int main() {
  std::cout << "practice: Tiny KV store\n";
  return 0;
}
```

- **Remember:** State one invariant for `Tiny KV store` before you write code that uses it.
- **Common mistake:** Using `Tiny KV store` by copy-paste without knowing what it owns or when it is valid.

Practice: open `examples/10_*.cpp`, predict the output, change one line, re-predict.

---

## What you should be able to do after Day 147

- Explain `Database-ish in process` to a peer without looking at notes.
- Compile and run all 10 examples with `-std=c++17 -Wall -Wextra` (use newer flags only when the day needs C++20+).
- Answer the 5 questions in `questions.md` before peeking at `answers.md`.
- Write one tiny extra program that combines at least 3 of today's concepts.

Or open this day in the **Badsha hub** (`python3 hub/server.py`) and use Learn / Practice / Quiz tabs.
