# Day 151 -- Backpressure & flow control

Today's goal: understand **Backpressure & flow control** in plain English, see a tiny code sample for each idea, then practice in `examples/`.

How to study this day:
1. Read each concept's **Plain English** section.
2. Skim the code sample -- predict what it does.
3. Run the matching file under `examples/`.
4. Only then try `questions.md`.

| # | Concept |
|--:|---------|
| 1 | Producer faster than consumer |
| 2 | Bounded queues |
| 3 | Drop vs block vs sample |
| 4 | Token buckets idea |
| 5 | TCP window intuition |
| 6 | Batching |
| 7 | Latency vs loss |
| 8 | Metrics for queues |
| 9 | Failure modes |
| 10 | A bounded channel |

---

## 1. Producer faster than consumer

### Plain English

Today's idea — **Producer faster than consumer** — fits inside the wider theme of Backpressure & flow control. Read it as a tool: what job does it do, what rules does it enforce, and what breaks if you ignore those rules?

### Tiny code

```cpp
// Explore: Producer faster than consumer
#include <iostream>
int main() {
  std::cout << "practice: Producer faster than consumer\n";
  return 0;
}
```

- **Remember:** State one invariant for `Producer faster than consumer` before you write code that uses it.
- **Common mistake:** Using `Producer faster than consumer` by copy-paste without knowing what it owns or when it is valid.

Practice: open `examples/01_*.cpp`, predict the output, change one line, re-predict.

## 2. Bounded queues

### Plain English

Today's idea — **Bounded queues** — fits inside the wider theme of Backpressure & flow control. Read it as a tool: what job does it do, what rules does it enforce, and what breaks if you ignore those rules?

### Tiny code

```cpp
// Explore: Bounded queues
#include <iostream>
int main() {
  std::cout << "practice: Bounded queues\n";
  return 0;
}
```

- **Remember:** State one invariant for `Bounded queues` before you write code that uses it.
- **Common mistake:** Using `Bounded queues` by copy-paste without knowing what it owns or when it is valid.

Practice: open `examples/02_*.cpp`, predict the output, change one line, re-predict.

## 3. Drop vs block vs sample

### Plain English

Today's idea — **Drop vs block vs sample** — fits inside the wider theme of Backpressure & flow control. Read it as a tool: what job does it do, what rules does it enforce, and what breaks if you ignore those rules?

### Tiny code

```cpp
// Explore: Drop vs block vs sample
#include <iostream>
int main() {
  std::cout << "practice: Drop vs block vs sample\n";
  return 0;
}
```

- **Remember:** State one invariant for `Drop vs block vs sample` before you write code that uses it.
- **Common mistake:** Using `Drop vs block vs sample` by copy-paste without knowing what it owns or when it is valid.

Practice: open `examples/03_*.cpp`, predict the output, change one line, re-predict.

## 4. Token buckets idea

### Plain English

Today's idea — **Token buckets idea** — fits inside the wider theme of Backpressure & flow control. Read it as a tool: what job does it do, what rules does it enforce, and what breaks if you ignore those rules?

### Tiny code

```cpp
// Explore: Token buckets idea
#include <iostream>
int main() {
  std::cout << "practice: Token buckets idea\n";
  return 0;
}
```

- **Remember:** State one invariant for `Token buckets idea` before you write code that uses it.
- **Common mistake:** Using `Token buckets idea` by copy-paste without knowing what it owns or when it is valid.

Practice: open `examples/04_*.cpp`, predict the output, change one line, re-predict.

## 5. TCP window intuition

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

## 6. Batching

### Plain English

Today's idea — **Batching** — fits inside the wider theme of Backpressure & flow control. Read it as a tool: what job does it do, what rules does it enforce, and what breaks if you ignore those rules?

### Tiny code

```cpp
// Explore: Batching
#include <iostream>
int main() {
  std::cout << "practice: Batching\n";
  return 0;
}
```

- **Remember:** State one invariant for `Batching` before you write code that uses it.
- **Common mistake:** Using `Batching` by copy-paste without knowing what it owns or when it is valid.

Practice: open `examples/06_*.cpp`, predict the output, change one line, re-predict.

## 7. Latency vs loss

### Plain English

Today's idea — **Latency vs loss** — fits inside the wider theme of Backpressure & flow control. Read it as a tool: what job does it do, what rules does it enforce, and what breaks if you ignore those rules?

### Tiny code

```cpp
// Explore: Latency vs loss
#include <iostream>
int main() {
  std::cout << "practice: Latency vs loss\n";
  return 0;
}
```

- **Remember:** State one invariant for `Latency vs loss` before you write code that uses it.
- **Common mistake:** Using `Latency vs loss` by copy-paste without knowing what it owns or when it is valid.

Practice: open `examples/07_*.cpp`, predict the output, change one line, re-predict.

## 8. Metrics for queues

### Plain English

Today's idea — **Metrics for queues** — fits inside the wider theme of Backpressure & flow control. Read it as a tool: what job does it do, what rules does it enforce, and what breaks if you ignore those rules?

### Tiny code

```cpp
// Explore: Metrics for queues
#include <iostream>
int main() {
  std::cout << "practice: Metrics for queues\n";
  return 0;
}
```

- **Remember:** State one invariant for `Metrics for queues` before you write code that uses it.
- **Common mistake:** Using `Metrics for queues` by copy-paste without knowing what it owns or when it is valid.

Practice: open `examples/08_*.cpp`, predict the output, change one line, re-predict.

## 9. Failure modes

### Plain English

Today's idea — **Failure modes** — fits inside the wider theme of Backpressure & flow control. Read it as a tool: what job does it do, what rules does it enforce, and what breaks if you ignore those rules?

### Tiny code

```cpp
// Explore: Failure modes
#include <iostream>
int main() {
  std::cout << "practice: Failure modes\n";
  return 0;
}
```

- **Remember:** State one invariant for `Failure modes` before you write code that uses it.
- **Common mistake:** Using `Failure modes` by copy-paste without knowing what it owns or when it is valid.

Practice: open `examples/09_*.cpp`, predict the output, change one line, re-predict.

## 10. A bounded channel

### Plain English

Today's idea — **A bounded channel** — fits inside the wider theme of Backpressure & flow control. Read it as a tool: what job does it do, what rules does it enforce, and what breaks if you ignore those rules?

### Tiny code

```cpp
// Explore: A bounded channel
#include <iostream>
int main() {
  std::cout << "practice: A bounded channel\n";
  return 0;
}
```

- **Remember:** State one invariant for `A bounded channel` before you write code that uses it.
- **Common mistake:** Using `A bounded channel` by copy-paste without knowing what it owns or when it is valid.

Practice: open `examples/10_*.cpp`, predict the output, change one line, re-predict.

---

## What you should be able to do after Day 151

- Explain `Backpressure & flow control` to a peer without looking at notes.
- Compile and run all 10 examples with `-std=c++17 -Wall -Wextra` (use newer flags only when the day needs C++20+).
- Answer the 5 questions in `questions.md` before peeking at `answers.md`.
- Write one tiny extra program that combines at least 3 of today's concepts.

Or open this day in the **Badsha hub** (`python3 hub/server.py`) and use Learn / Practice / Quiz tabs.
