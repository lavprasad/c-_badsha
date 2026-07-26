# Day 26 -- Random numbers

Today's goal: understand **Random numbers** in plain English, see a tiny code sample for each idea, then practice in `examples/`.

How to study this day:
1. Read each concept's **Plain English** section.
2. Skim the code sample -- predict what it does.
3. Run the matching file under `examples/`.
4. Only then try `questions.md`.

| # | Concept |
|--:|---------|
| 1 | <random> overview |
| 2 | std::mt19937 |
| 3 | Distributions |
| 4 | Seeding properly |
| 5 | rand() pitfalls |
| 6 | Uniform int/real |
| 7 | Shuffling with std::shuffle |
| 8 | Reproducible seeds |
| 9 | Thread notes |
| 10 | A dice simulator |

---

## 1. <random> overview

### Plain English

Do not use `rand()` for serious work. Use `<random>`: an engine (`mt19937`) plus a distribution. Seed carefully if you need reproducibility.

### Tiny code

```cpp
std::mt19937 rng{std::random_device{}()};
std::uniform_int_distribution<int> dist(1, 6);
int roll = dist(rng);
```

- **Remember:** Create the engine once; reuse it — do not re-seed every call.
- **Common mistake:** Seeding with `time(nullptr)` every roll → correlated results.

Practice: open `examples/01_*.cpp`, predict the output, change one line, re-predict.

## 2. std::mt19937

### Plain English

Do not use `rand()` for serious work. Use `<random>`: an engine (`mt19937`) plus a distribution. Seed carefully if you need reproducibility.

### Tiny code

```cpp
std::mt19937 rng{std::random_device{}()};
std::uniform_int_distribution<int> dist(1, 6);
int roll = dist(rng);
```

- **Remember:** Create the engine once; reuse it — do not re-seed every call.
- **Common mistake:** Seeding with `time(nullptr)` every roll → correlated results.

Practice: open `examples/02_*.cpp`, predict the output, change one line, re-predict.

## 3. Distributions

### Plain English

Do not use `rand()` for serious work. Use `<random>`: an engine (`mt19937`) plus a distribution. Seed carefully if you need reproducibility.

### Tiny code

```cpp
std::mt19937 rng{std::random_device{}()};
std::uniform_int_distribution<int> dist(1, 6);
int roll = dist(rng);
```

- **Remember:** Create the engine once; reuse it — do not re-seed every call.
- **Common mistake:** Seeding with `time(nullptr)` every roll → correlated results.

Practice: open `examples/03_*.cpp`, predict the output, change one line, re-predict.

## 4. Seeding properly

### Plain English

Do not use `rand()` for serious work. Use `<random>`: an engine (`mt19937`) plus a distribution. Seed carefully if you need reproducibility.

### Tiny code

```cpp
std::mt19937 rng{std::random_device{}()};
std::uniform_int_distribution<int> dist(1, 6);
int roll = dist(rng);
```

- **Remember:** Create the engine once; reuse it — do not re-seed every call.
- **Common mistake:** Seeding with `time(nullptr)` every roll → correlated results.

Practice: open `examples/04_*.cpp`, predict the output, change one line, re-predict.

## 5. rand() pitfalls

### Plain English

Do not use `rand()` for serious work. Use `<random>`: an engine (`mt19937`) plus a distribution. Seed carefully if you need reproducibility.

### Tiny code

```cpp
std::mt19937 rng{std::random_device{}()};
std::uniform_int_distribution<int> dist(1, 6);
int roll = dist(rng);
```

- **Remember:** Create the engine once; reuse it — do not re-seed every call.
- **Common mistake:** Seeding with `time(nullptr)` every roll → correlated results.

Practice: open `examples/05_*.cpp`, predict the output, change one line, re-predict.

## 6. Uniform int/real

### Plain English

Do not use `rand()` for serious work. Use `<random>`: an engine (`mt19937`) plus a distribution. Seed carefully if you need reproducibility.

### Tiny code

```cpp
std::mt19937 rng{std::random_device{}()};
std::uniform_int_distribution<int> dist(1, 6);
int roll = dist(rng);
```

- **Remember:** Create the engine once; reuse it — do not re-seed every call.
- **Common mistake:** Seeding with `time(nullptr)` every roll → correlated results.

Practice: open `examples/06_*.cpp`, predict the output, change one line, re-predict.

## 7. Shuffling with std::shuffle

### Plain English

Do not use `rand()` for serious work. Use `<random>`: an engine (`mt19937`) plus a distribution. Seed carefully if you need reproducibility.

### Tiny code

```cpp
std::mt19937 rng{std::random_device{}()};
std::uniform_int_distribution<int> dist(1, 6);
int roll = dist(rng);
```

- **Remember:** Create the engine once; reuse it — do not re-seed every call.
- **Common mistake:** Seeding with `time(nullptr)` every roll → correlated results.

Practice: open `examples/07_*.cpp`, predict the output, change one line, re-predict.

## 8. Reproducible seeds

### Plain English

Do not use `rand()` for serious work. Use `<random>`: an engine (`mt19937`) plus a distribution. Seed carefully if you need reproducibility.

### Tiny code

```cpp
std::mt19937 rng{std::random_device{}()};
std::uniform_int_distribution<int> dist(1, 6);
int roll = dist(rng);
```

- **Remember:** Create the engine once; reuse it — do not re-seed every call.
- **Common mistake:** Seeding with `time(nullptr)` every roll → correlated results.

Practice: open `examples/08_*.cpp`, predict the output, change one line, re-predict.

## 9. Thread notes

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

## 10. A dice simulator

### Plain English

Do not use `rand()` for serious work. Use `<random>`: an engine (`mt19937`) plus a distribution. Seed carefully if you need reproducibility.

### Tiny code

```cpp
std::mt19937 rng{std::random_device{}()};
std::uniform_int_distribution<int> dist(1, 6);
int roll = dist(rng);
```

- **Remember:** Create the engine once; reuse it — do not re-seed every call.
- **Common mistake:** Seeding with `time(nullptr)` every roll → correlated results.

Practice: open `examples/10_*.cpp`, predict the output, change one line, re-predict.

---

## What you should be able to do after Day 26

- Explain `Random numbers` to a peer without looking at notes.
- Compile and run all 10 examples with `-std=c++17 -Wall -Wextra` (use newer flags only when the day needs C++20+).
- Answer the 5 questions in `questions.md` before peeking at `answers.md`.
- Write one tiny extra program that combines at least 3 of today's concepts.

Or open this day in the **Badsha hub** (`python3 hub/server.py`) and use Learn / Practice / Quiz tabs.
