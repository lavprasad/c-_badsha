# Day 84 -- Condition variables

Today's goal: understand **Condition variables** in plain English, see a tiny code sample for each idea, then practice in `examples/`.

How to study this day:
1. Read each concept's **Plain English** section.
2. Skim the code sample -- predict what it does.
3. Run the matching file under `examples/`.
4. Only then try `questions.md`.

| # | Concept |
|--:|---------|
| 1 | wait / notify |
| 2 | Spurious wakeups |
| 3 | Predicate waits |
| 4 | Producer-consumer |
| 5 | notify_one vs notify_all |
| 6 | with unique_lock |
| 7 | Lost wakeup pitfalls |
| 8 | Timeout waits |
| 9 | Shutdown signals |
| 10 | A blocking queue |

---

## 1. wait / notify

### Plain English

Today's idea — **wait / notify** — fits inside the wider theme of Condition variables. Read it as a tool: what job does it do, what rules does it enforce, and what breaks if you ignore those rules?

### Tiny code

```cpp
// Explore: wait / notify
#include <iostream>
int main() {
  std::cout << "practice: wait / notify\n";
  return 0;
}
```

- **Remember:** State one invariant for `wait / notify` before you write code that uses it.
- **Common mistake:** Using `wait / notify` by copy-paste without knowing what it owns or when it is valid.

Practice: open `examples/01_*.cpp`, predict the output, change one line, re-predict.

## 2. Spurious wakeups

### Plain English

Today's idea — **Spurious wakeups** — fits inside the wider theme of Condition variables. Read it as a tool: what job does it do, what rules does it enforce, and what breaks if you ignore those rules?

### Tiny code

```cpp
// Explore: Spurious wakeups
#include <iostream>
int main() {
  std::cout << "practice: Spurious wakeups\n";
  return 0;
}
```

- **Remember:** State one invariant for `Spurious wakeups` before you write code that uses it.
- **Common mistake:** Using `Spurious wakeups` by copy-paste without knowing what it owns or when it is valid.

Practice: open `examples/02_*.cpp`, predict the output, change one line, re-predict.

## 3. Predicate waits

### Plain English

Today's idea — **Predicate waits** — fits inside the wider theme of Condition variables. Read it as a tool: what job does it do, what rules does it enforce, and what breaks if you ignore those rules?

### Tiny code

```cpp
// Explore: Predicate waits
#include <iostream>
int main() {
  std::cout << "practice: Predicate waits\n";
  return 0;
}
```

- **Remember:** State one invariant for `Predicate waits` before you write code that uses it.
- **Common mistake:** Using `Predicate waits` by copy-paste without knowing what it owns or when it is valid.

Practice: open `examples/03_*.cpp`, predict the output, change one line, re-predict.

## 4. Producer-consumer

### Plain English

Today's idea — **Producer-consumer** — fits inside the wider theme of Condition variables. Read it as a tool: what job does it do, what rules does it enforce, and what breaks if you ignore those rules?

### Tiny code

```cpp
// Explore: Producer-consumer
#include <iostream>
int main() {
  std::cout << "practice: Producer-consumer\n";
  return 0;
}
```

- **Remember:** State one invariant for `Producer-consumer` before you write code that uses it.
- **Common mistake:** Using `Producer-consumer` by copy-paste without knowing what it owns or when it is valid.

Practice: open `examples/04_*.cpp`, predict the output, change one line, re-predict.

## 5. notify_one vs notify_all

### Plain English

Today's idea — **notify_one vs notify_all** — fits inside the wider theme of Condition variables. Read it as a tool: what job does it do, what rules does it enforce, and what breaks if you ignore those rules?

### Tiny code

```cpp
// Explore: notify_one vs notify_all
#include <iostream>
int main() {
  std::cout << "practice: notify_one vs notify_all\n";
  return 0;
}
```

- **Remember:** State one invariant for `notify_one vs notify_all` before you write code that uses it.
- **Common mistake:** Using `notify_one vs notify_all` by copy-paste without knowing what it owns or when it is valid.

Practice: open `examples/05_*.cpp`, predict the output, change one line, re-predict.

## 6. with unique_lock

### Plain English

Today's idea — **with unique_lock** — fits inside the wider theme of Condition variables. Read it as a tool: what job does it do, what rules does it enforce, and what breaks if you ignore those rules?

### Tiny code

```cpp
// Explore: with unique_lock
#include <iostream>
int main() {
  std::cout << "practice: with unique_lock\n";
  return 0;
}
```

- **Remember:** State one invariant for `with unique_lock` before you write code that uses it.
- **Common mistake:** Using `with unique_lock` by copy-paste without knowing what it owns or when it is valid.

Practice: open `examples/06_*.cpp`, predict the output, change one line, re-predict.

## 7. Lost wakeup pitfalls

### Plain English

Today's idea — **Lost wakeup pitfalls** — fits inside the wider theme of Condition variables. Read it as a tool: what job does it do, what rules does it enforce, and what breaks if you ignore those rules?

### Tiny code

```cpp
// Explore: Lost wakeup pitfalls
#include <iostream>
int main() {
  std::cout << "practice: Lost wakeup pitfalls\n";
  return 0;
}
```

- **Remember:** State one invariant for `Lost wakeup pitfalls` before you write code that uses it.
- **Common mistake:** Using `Lost wakeup pitfalls` by copy-paste without knowing what it owns or when it is valid.

Practice: open `examples/07_*.cpp`, predict the output, change one line, re-predict.

## 8. Timeout waits

### Plain English

Today's idea — **Timeout waits** — fits inside the wider theme of Condition variables. Read it as a tool: what job does it do, what rules does it enforce, and what breaks if you ignore those rules?

### Tiny code

```cpp
// Explore: Timeout waits
#include <iostream>
int main() {
  std::cout << "practice: Timeout waits\n";
  return 0;
}
```

- **Remember:** State one invariant for `Timeout waits` before you write code that uses it.
- **Common mistake:** Using `Timeout waits` by copy-paste without knowing what it owns or when it is valid.

Practice: open `examples/08_*.cpp`, predict the output, change one line, re-predict.

## 9. Shutdown signals

### Plain English

Today's idea — **Shutdown signals** — fits inside the wider theme of Condition variables. Read it as a tool: what job does it do, what rules does it enforce, and what breaks if you ignore those rules?

### Tiny code

```cpp
// Explore: Shutdown signals
#include <iostream>
int main() {
  std::cout << "practice: Shutdown signals\n";
  return 0;
}
```

- **Remember:** State one invariant for `Shutdown signals` before you write code that uses it.
- **Common mistake:** Using `Shutdown signals` by copy-paste without knowing what it owns or when it is valid.

Practice: open `examples/09_*.cpp`, predict the output, change one line, re-predict.

## 10. A blocking queue

### Plain English

Today's idea — **A blocking queue** — fits inside the wider theme of Condition variables. Read it as a tool: what job does it do, what rules does it enforce, and what breaks if you ignore those rules?

### Tiny code

```cpp
// Explore: A blocking queue
#include <iostream>
int main() {
  std::cout << "practice: A blocking queue\n";
  return 0;
}
```

- **Remember:** State one invariant for `A blocking queue` before you write code that uses it.
- **Common mistake:** Using `A blocking queue` by copy-paste without knowing what it owns or when it is valid.

Practice: open `examples/10_*.cpp`, predict the output, change one line, re-predict.

---

## What you should be able to do after Day 84

- Explain `Condition variables` to a peer without looking at notes.
- Compile and run all 10 examples with `-std=c++17 -Wall -Wextra` (use newer flags only when the day needs C++20+).
- Answer the 5 questions in `questions.md` before peeking at `answers.md`.
- Write one tiny extra program that combines at least 3 of today's concepts.

Or open this day in the **Badsha hub** (`python3 hub/server.py`) and use Learn / Practice / Quiz tabs.
