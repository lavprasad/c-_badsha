# Day 185 -- Project: Thread pool library

Today's goal: understand **Project: Thread pool library** in plain English, see a tiny code sample for each idea, then practice in `examples/`.

How to study this day:
1. Read each concept's **Plain English** section.
2. Skim the code sample -- predict what it does.
3. Run the matching file under `examples/`.
4. Only then try `questions.md`.

| # | Concept |
|--:|---------|
| 1 | API design |
| 2 | Queue |
| 3 | Workers |
| 4 | Futures |
| 5 | Shutdown |
| 6 | Exception prop |
| 7 | Benchmarks |
| 8 | Docs |
| 9 | Example apps |
| 10 | Ship thread_pool |

---

## 1. API design

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

## 2. Queue

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

## 3. Workers

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

Practice: open `examples/03_*.cpp`, predict the output, change one line, re-predict.

## 4. Futures

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

Practice: open `examples/04_*.cpp`, predict the output, change one line, re-predict.

## 5. Shutdown

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

Practice: open `examples/05_*.cpp`, predict the output, change one line, re-predict.

## 6. Exception prop

### Plain English

Exceptions separate the happy path from failure. Throw when a function cannot do its job; catch at a layer that can recover or report. RAII still cleans up during unwind.

### Tiny code

```cpp
try {
  throw std::runtime_error("boom");
} catch (const std::exception& e) {
  std::cerr << e.what() << '\n';
}
```

- **Remember:** Catch by `const` reference, not by value.
- **Common mistake:** Throwing raw pointers or catching by value (slicing).

Practice: open `examples/06_*.cpp`, predict the output, change one line, re-predict.

## 7. Benchmarks

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

Practice: open `examples/07_*.cpp`, predict the output, change one line, re-predict.

## 8. Docs

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

Practice: open `examples/08_*.cpp`, predict the output, change one line, re-predict.

## 9. Example apps

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

Practice: open `examples/09_*.cpp`, predict the output, change one line, re-predict.

## 10. Ship thread_pool

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

Practice: open `examples/10_*.cpp`, predict the output, change one line, re-predict.

---

## What you should be able to do after Day 185

- Explain `Project: Thread pool library` to a peer without looking at notes.
- Compile and run all 10 examples with `-std=c++17 -Wall -Wextra` (use newer flags only when the day needs C++20+).
- Answer the 5 questions in `questions.md` before peeking at `answers.md`.
- Write one tiny extra program that combines at least 3 of today's concepts.

Or open this day in the **Badsha hub** (`python3 hub/server.py`) and use Learn / Practice / Quiz tabs.
