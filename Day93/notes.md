# Day 93 -- I/O multiplexing idea

Today's goal: understand **I/O multiplexing idea** in plain English, see a tiny code sample for each idea, then practice in `examples/`.

How to study this day:
1. Read each concept's **Plain English** section.
2. Skim the code sample -- predict what it does.
3. Run the matching file under `examples/`.
4. Only then try `questions.md`.

| # | Concept |
|--:|---------|
| 1 | Why select/poll |
| 2 | Non-blocking sockets |
| 3 | Event loops |
| 4 | Edge vs level trigger idea |
| 5 | epoll mental model |
| 6 | Timeouts |
| 7 | Scalability |
| 8 | Callback style |
| 9 | Backpressure |
| 10 | Tiny poll loop sketch |

---

## 1. Why select/poll

### Plain English

Sockets are OS endpoints for network bytes. TCP gives a reliable stream; you still must frame messages yourself. Always check return codes and handle partial reads/writes.

### Tiny code

```cpp
// Conceptual — details are OS-specific
// sock = socket(...);
// connect(sock, ...);
// send(sock, buf, n, 0);
```

- **Remember:** Network data is bytes; convert integers with endian helpers.
- **Common mistake:** Assuming one `recv` returns one complete application message.

Practice: open `examples/01_*.cpp`, predict the output, change one line, re-predict.

## 2. Non-blocking sockets

### Plain English

Sockets are OS endpoints for network bytes. TCP gives a reliable stream; you still must frame messages yourself. Always check return codes and handle partial reads/writes.

### Tiny code

```cpp
// Conceptual — details are OS-specific
// sock = socket(...);
// connect(sock, ...);
// send(sock, buf, n, 0);
```

- **Remember:** Network data is bytes; convert integers with endian helpers.
- **Common mistake:** Assuming one `recv` returns one complete application message.

Practice: open `examples/02_*.cpp`, predict the output, change one line, re-predict.

## 3. Event loops

### Plain English

Today's idea — **Event loops** — fits inside the wider theme of I/O multiplexing idea. Read it as a tool: what job does it do, what rules does it enforce, and what breaks if you ignore those rules?

### Tiny code

```cpp
// Explore: Event loops
#include <iostream>
int main() {
  std::cout << "practice: Event loops\n";
  return 0;
}
```

- **Remember:** State one invariant for `Event loops` before you write code that uses it.
- **Common mistake:** Using `Event loops` by copy-paste without knowing what it owns or when it is valid.

Practice: open `examples/03_*.cpp`, predict the output, change one line, re-predict.

## 4. Edge vs level trigger idea

### Plain English

Today's idea — **Edge vs level trigger idea** — fits inside the wider theme of I/O multiplexing idea. Read it as a tool: what job does it do, what rules does it enforce, and what breaks if you ignore those rules?

### Tiny code

```cpp
// Explore: Edge vs level trigger idea
#include <iostream>
int main() {
  std::cout << "practice: Edge vs level trigger idea\n";
  return 0;
}
```

- **Remember:** State one invariant for `Edge vs level trigger idea` before you write code that uses it.
- **Common mistake:** Using `Edge vs level trigger idea` by copy-paste without knowing what it owns or when it is valid.

Practice: open `examples/04_*.cpp`, predict the output, change one line, re-predict.

## 5. epoll mental model

### Plain English

Sockets are OS endpoints for network bytes. TCP gives a reliable stream; you still must frame messages yourself. Always check return codes and handle partial reads/writes.

### Tiny code

```cpp
// Conceptual — details are OS-specific
// sock = socket(...);
// connect(sock, ...);
// send(sock, buf, n, 0);
```

- **Remember:** Network data is bytes; convert integers with endian helpers.
- **Common mistake:** Assuming one `recv` returns one complete application message.

Practice: open `examples/05_*.cpp`, predict the output, change one line, re-predict.

## 6. Timeouts

### Plain English

Today's idea — **Timeouts** — fits inside the wider theme of I/O multiplexing idea. Read it as a tool: what job does it do, what rules does it enforce, and what breaks if you ignore those rules?

### Tiny code

```cpp
// Explore: Timeouts
#include <iostream>
int main() {
  std::cout << "practice: Timeouts\n";
  return 0;
}
```

- **Remember:** State one invariant for `Timeouts` before you write code that uses it.
- **Common mistake:** Using `Timeouts` by copy-paste without knowing what it owns or when it is valid.

Practice: open `examples/06_*.cpp`, predict the output, change one line, re-predict.

## 7. Scalability

### Plain English

Today's idea — **Scalability** — fits inside the wider theme of I/O multiplexing idea. Read it as a tool: what job does it do, what rules does it enforce, and what breaks if you ignore those rules?

### Tiny code

```cpp
// Explore: Scalability
#include <iostream>
int main() {
  std::cout << "practice: Scalability\n";
  return 0;
}
```

- **Remember:** State one invariant for `Scalability` before you write code that uses it.
- **Common mistake:** Using `Scalability` by copy-paste without knowing what it owns or when it is valid.

Practice: open `examples/07_*.cpp`, predict the output, change one line, re-predict.

## 8. Callback style

### Plain English

Today's idea — **Callback style** — fits inside the wider theme of I/O multiplexing idea. Read it as a tool: what job does it do, what rules does it enforce, and what breaks if you ignore those rules?

### Tiny code

```cpp
// Explore: Callback style
#include <iostream>
int main() {
  std::cout << "practice: Callback style\n";
  return 0;
}
```

- **Remember:** State one invariant for `Callback style` before you write code that uses it.
- **Common mistake:** Using `Callback style` by copy-paste without knowing what it owns or when it is valid.

Practice: open `examples/08_*.cpp`, predict the output, change one line, re-predict.

## 9. Backpressure

### Plain English

Today's idea — **Backpressure** — fits inside the wider theme of I/O multiplexing idea. Read it as a tool: what job does it do, what rules does it enforce, and what breaks if you ignore those rules?

### Tiny code

```cpp
// Explore: Backpressure
#include <iostream>
int main() {
  std::cout << "practice: Backpressure\n";
  return 0;
}
```

- **Remember:** State one invariant for `Backpressure` before you write code that uses it.
- **Common mistake:** Using `Backpressure` by copy-paste without knowing what it owns or when it is valid.

Practice: open `examples/09_*.cpp`, predict the output, change one line, re-predict.

## 10. Tiny poll loop sketch

### Plain English

Sockets are OS endpoints for network bytes. TCP gives a reliable stream; you still must frame messages yourself. Always check return codes and handle partial reads/writes.

### Tiny code

```cpp
// Conceptual — details are OS-specific
// sock = socket(...);
// connect(sock, ...);
// send(sock, buf, n, 0);
```

- **Remember:** Network data is bytes; convert integers with endian helpers.
- **Common mistake:** Assuming one `recv` returns one complete application message.

Practice: open `examples/10_*.cpp`, predict the output, change one line, re-predict.

---

## What you should be able to do after Day 93

- Explain `I/O multiplexing idea` to a peer without looking at notes.
- Compile and run all 10 examples with `-std=c++17 -Wall -Wextra` (use newer flags only when the day needs C++20+).
- Answer the 5 questions in `questions.md` before peeking at `answers.md`.
- Write one tiny extra program that combines at least 3 of today's concepts.

Or open this day in the **Badsha hub** (`python3 hub/server.py`) and use Learn / Practice / Quiz tabs.
