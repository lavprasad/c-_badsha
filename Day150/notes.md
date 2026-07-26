# Day 150 -- Graceful shutdown & signals

Today's goal: understand **Graceful shutdown & signals** in plain English, see a tiny code sample for each idea, then practice in `examples/`.

How to study this day:
1. Read each concept's **Plain English** section.
2. Skim the code sample -- predict what it does.
3. Run the matching file under `examples/`.
4. Only then try `questions.md`.

| # | Concept |
|--:|---------|
| 1 | SIGINT/SIGTERM awareness |
| 2 | Atomic stop flags |
| 3 | Draining queues |
| 4 | Closing listeners |
| 5 | Timeouts on shutdown |
| 6 | Flushing logs |
| 7 | RAII shutdown hooks |
| 8 | Windows console ctrl idea |
| 9 | Testing shutdown |
| 10 | A clean exit sketch |

---

## 1. SIGINT/SIGTERM awareness

### Plain English

Today's idea — **SIGINT/SIGTERM awareness** — fits inside the wider theme of Graceful shutdown & signals. Read it as a tool: what job does it do, what rules does it enforce, and what breaks if you ignore those rules?

### Tiny code

```cpp
// Explore: SIGINT/SIGTERM awareness
#include <iostream>
int main() {
  std::cout << "practice: SIGINT/SIGTERM awareness\n";
  return 0;
}
```

- **Remember:** State one invariant for `SIGINT/SIGTERM awareness` before you write code that uses it.
- **Common mistake:** Using `SIGINT/SIGTERM awareness` by copy-paste without knowing what it owns or when it is valid.

Practice: open `examples/01_*.cpp`, predict the output, change one line, re-predict.

## 2. Atomic stop flags

### Plain English

Threads run code concurrently. Shared mutable data needs a mutex (or atomics). Prefer RAII locks (`lock_guard`) so unlock happens even on exceptions.

### Tiny code

```cpp
std::mutex m;
int counter = 0;
{
  std::lock_guard<std::mutex> g(m);
  ++counter;
}
```

- **Remember:** A data race on non-atomic shared data is undefined behaviour.
- **Common mistake:** Locking two mutexes in opposite orders in different threads → deadlock.

Practice: open `examples/02_*.cpp`, predict the output, change one line, re-predict.

## 3. Draining queues

### Plain English

Today's idea — **Draining queues** — fits inside the wider theme of Graceful shutdown & signals. Read it as a tool: what job does it do, what rules does it enforce, and what breaks if you ignore those rules?

### Tiny code

```cpp
// Explore: Draining queues
#include <iostream>
int main() {
  std::cout << "practice: Draining queues\n";
  return 0;
}
```

- **Remember:** State one invariant for `Draining queues` before you write code that uses it.
- **Common mistake:** Using `Draining queues` by copy-paste without knowing what it owns or when it is valid.

Practice: open `examples/03_*.cpp`, predict the output, change one line, re-predict.

## 4. Closing listeners

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

Practice: open `examples/04_*.cpp`, predict the output, change one line, re-predict.

## 5. Timeouts on shutdown

### Plain English

Today's idea — **Timeouts on shutdown** — fits inside the wider theme of Graceful shutdown & signals. Read it as a tool: what job does it do, what rules does it enforce, and what breaks if you ignore those rules?

### Tiny code

```cpp
// Explore: Timeouts on shutdown
#include <iostream>
int main() {
  std::cout << "practice: Timeouts on shutdown\n";
  return 0;
}
```

- **Remember:** State one invariant for `Timeouts on shutdown` before you write code that uses it.
- **Common mistake:** Using `Timeouts on shutdown` by copy-paste without knowing what it owns or when it is valid.

Practice: open `examples/05_*.cpp`, predict the output, change one line, re-predict.

## 6. Flushing logs

### Plain English

Today's idea — **Flushing logs** — fits inside the wider theme of Graceful shutdown & signals. Read it as a tool: what job does it do, what rules does it enforce, and what breaks if you ignore those rules?

### Tiny code

```cpp
// Explore: Flushing logs
#include <iostream>
int main() {
  std::cout << "practice: Flushing logs\n";
  return 0;
}
```

- **Remember:** State one invariant for `Flushing logs` before you write code that uses it.
- **Common mistake:** Using `Flushing logs` by copy-paste without knowing what it owns or when it is valid.

Practice: open `examples/06_*.cpp`, predict the output, change one line, re-predict.

## 7. RAII shutdown hooks

### Plain English

Today's idea — **RAII shutdown hooks** — fits inside the wider theme of Graceful shutdown & signals. Read it as a tool: what job does it do, what rules does it enforce, and what breaks if you ignore those rules?

### Tiny code

```cpp
// Explore: RAII shutdown hooks
#include <iostream>
int main() {
  std::cout << "practice: RAII shutdown hooks\n";
  return 0;
}
```

- **Remember:** State one invariant for `RAII shutdown hooks` before you write code that uses it.
- **Common mistake:** Using `RAII shutdown hooks` by copy-paste without knowing what it owns or when it is valid.

Practice: open `examples/07_*.cpp`, predict the output, change one line, re-predict.

## 8. Windows console ctrl idea

### Plain English

Today's idea — **Windows console ctrl idea** — fits inside the wider theme of Graceful shutdown & signals. Read it as a tool: what job does it do, what rules does it enforce, and what breaks if you ignore those rules?

### Tiny code

```cpp
// Explore: Windows console ctrl idea
#include <iostream>
int main() {
  std::cout << "practice: Windows console ctrl idea\n";
  return 0;
}
```

- **Remember:** State one invariant for `Windows console ctrl idea` before you write code that uses it.
- **Common mistake:** Using `Windows console ctrl idea` by copy-paste without knowing what it owns or when it is valid.

Practice: open `examples/08_*.cpp`, predict the output, change one line, re-predict.

## 9. Testing shutdown

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

Practice: open `examples/09_*.cpp`, predict the output, change one line, re-predict.

## 10. A clean exit sketch

### Plain English

Today's idea — **A clean exit sketch** — fits inside the wider theme of Graceful shutdown & signals. Read it as a tool: what job does it do, what rules does it enforce, and what breaks if you ignore those rules?

### Tiny code

```cpp
// Explore: A clean exit sketch
#include <iostream>
int main() {
  std::cout << "practice: A clean exit sketch\n";
  return 0;
}
```

- **Remember:** State one invariant for `A clean exit sketch` before you write code that uses it.
- **Common mistake:** Using `A clean exit sketch` by copy-paste without knowing what it owns or when it is valid.

Practice: open `examples/10_*.cpp`, predict the output, change one line, re-predict.

---

## What you should be able to do after Day 150

- Explain `Graceful shutdown & signals` to a peer without looking at notes.
- Compile and run all 10 examples with `-std=c++17 -Wall -Wextra` (use newer flags only when the day needs C++20+).
- Answer the 5 questions in `questions.md` before peeking at `answers.md`.
- Write one tiny extra program that combines at least 3 of today's concepts.

Or open this day in the **Badsha hub** (`python3 hub/server.py`) and use Learn / Practice / Quiz tabs.
