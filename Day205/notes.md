# Day 205 -- Audio / realtime constraints

Today's goal: understand **Audio / realtime constraints** in plain English, see a tiny code sample for each idea, then practice in `examples/`.

How to study this day:
1. Read each concept's **Plain English** section.
2. Skim the code sample -- predict what it does.
3. Run the matching file under `examples/`.
4. Only then try `questions.md`.

| # | Concept |
|--:|---------|
| 1 | Callback threads |
| 2 | No alloc in callback |
| 3 | Lock-free queues |
| 4 | Jitter |
| 5 | Sample formats |
| 6 | Underruns |
| 7 | Priority |
| 8 | Testing realtime |
| 9 | Safety |
| 10 | Ring buffer |

---

## 1. Callback threads

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

Practice: open `examples/01_*.cpp`, predict the output, change one line, re-predict.

## 2. No alloc in callback

### Plain English

Today's idea — **No alloc in callback** — fits inside the wider theme of Audio / realtime constraints. Read it as a tool: what job does it do, what rules does it enforce, and what breaks if you ignore those rules?

### Tiny code

```cpp
// Explore: No alloc in callback
#include <iostream>
int main() {
  std::cout << "practice: No alloc in callback\n";
  return 0;
}
```

- **Remember:** State one invariant for `No alloc in callback` before you write code that uses it.
- **Common mistake:** Using `No alloc in callback` by copy-paste without knowing what it owns or when it is valid.

Practice: open `examples/02_*.cpp`, predict the output, change one line, re-predict.

## 3. Lock-free queues

### Plain English

Today's idea — **Lock-free queues** — fits inside the wider theme of Audio / realtime constraints. Read it as a tool: what job does it do, what rules does it enforce, and what breaks if you ignore those rules?

### Tiny code

```cpp
// Explore: Lock-free queues
#include <iostream>
int main() {
  std::cout << "practice: Lock-free queues\n";
  return 0;
}
```

- **Remember:** State one invariant for `Lock-free queues` before you write code that uses it.
- **Common mistake:** Using `Lock-free queues` by copy-paste without knowing what it owns or when it is valid.

Practice: open `examples/03_*.cpp`, predict the output, change one line, re-predict.

## 4. Jitter

### Plain English

Today's idea — **Jitter** — fits inside the wider theme of Audio / realtime constraints. Read it as a tool: what job does it do, what rules does it enforce, and what breaks if you ignore those rules?

### Tiny code

```cpp
// Explore: Jitter
#include <iostream>
int main() {
  std::cout << "practice: Jitter\n";
  return 0;
}
```

- **Remember:** State one invariant for `Jitter` before you write code that uses it.
- **Common mistake:** Using `Jitter` by copy-paste without knowing what it owns or when it is valid.

Practice: open `examples/04_*.cpp`, predict the output, change one line, re-predict.

## 5. Sample formats

### Plain English

Modern C++ (20+) adds safer views (`span`, ranges), clearer comparisons (`<=>`), and better formatting. Use them when your toolchain supports them; otherwise stick to C++17 patterns taught earlier.

### Tiny code

```cpp
// C++20 sketch
// std::span<int> s = arr;
// auto evens = v | std::views::filter([](int x){ return x % 2 == 0; });
```

- **Remember:** Check your compiler's C++20/23 support before relying on these.
- **Common mistake:** Assuming every machine in class/CI has full C++20 library support.

Practice: open `examples/05_*.cpp`, predict the output, change one line, re-predict.

## 6. Underruns

### Plain English

Today's idea — **Underruns** — fits inside the wider theme of Audio / realtime constraints. Read it as a tool: what job does it do, what rules does it enforce, and what breaks if you ignore those rules?

### Tiny code

```cpp
// Explore: Underruns
#include <iostream>
int main() {
  std::cout << "practice: Underruns\n";
  return 0;
}
```

- **Remember:** State one invariant for `Underruns` before you write code that uses it.
- **Common mistake:** Using `Underruns` by copy-paste without knowing what it owns or when it is valid.

Practice: open `examples/06_*.cpp`, predict the output, change one line, re-predict.

## 7. Priority

### Plain English

Today's idea — **Priority** — fits inside the wider theme of Audio / realtime constraints. Read it as a tool: what job does it do, what rules does it enforce, and what breaks if you ignore those rules?

### Tiny code

```cpp
// Explore: Priority
#include <iostream>
int main() {
  std::cout << "practice: Priority\n";
  return 0;
}
```

- **Remember:** State one invariant for `Priority` before you write code that uses it.
- **Common mistake:** Using `Priority` by copy-paste without knowing what it owns or when it is valid.

Practice: open `examples/07_*.cpp`, predict the output, change one line, re-predict.

## 8. Testing realtime

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

Practice: open `examples/08_*.cpp`, predict the output, change one line, re-predict.

## 9. Safety

### Plain English

Today's idea — **Safety** — fits inside the wider theme of Audio / realtime constraints. Read it as a tool: what job does it do, what rules does it enforce, and what breaks if you ignore those rules?

### Tiny code

```cpp
// Explore: Safety
#include <iostream>
int main() {
  std::cout << "practice: Safety\n";
  return 0;
}
```

- **Remember:** State one invariant for `Safety` before you write code that uses it.
- **Common mistake:** Using `Safety` by copy-paste without knowing what it owns or when it is valid.

Practice: open `examples/09_*.cpp`, predict the output, change one line, re-predict.

## 10. Ring buffer

### Plain English

Today's idea — **Ring buffer** — fits inside the wider theme of Audio / realtime constraints. Read it as a tool: what job does it do, what rules does it enforce, and what breaks if you ignore those rules?

### Tiny code

```cpp
// Explore: Ring buffer
#include <iostream>
int main() {
  std::cout << "practice: Ring buffer\n";
  return 0;
}
```

- **Remember:** State one invariant for `Ring buffer` before you write code that uses it.
- **Common mistake:** Using `Ring buffer` by copy-paste without knowing what it owns or when it is valid.

Practice: open `examples/10_*.cpp`, predict the output, change one line, re-predict.

---

## What you should be able to do after Day 205

- Explain `Audio / realtime constraints` to a peer without looking at notes.
- Compile and run all 10 examples with `-std=c++17 -Wall -Wextra` (use newer flags only when the day needs C++20+).
- Answer the 5 questions in `questions.md` before peeking at `answers.md`.
- Write one tiny extra program that combines at least 3 of today's concepts.

Or open this day in the **Badsha hub** (`python3 hub/server.py`) and use Learn / Practice / Quiz tabs.
