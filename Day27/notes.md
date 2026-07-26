# Day 27 -- Time & chrono basics

Today's goal: understand **Time & chrono basics** in plain English, see a tiny code sample for each idea, then practice in `examples/`.

How to study this day:
1. Read each concept's **Plain English** section.
2. Skim the code sample -- predict what it does.
3. Run the matching file under `examples/`.
4. Only then try `questions.md`.

| # | Concept |
|--:|---------|
| 1 | std::chrono clocks |
| 2 | duration and time_point |
| 3 | Measuring elapsed time |
| 4 | sleep_for |
| 5 | Casting durations |
| 6 | steady_clock vs system_clock |
| 7 | Formatting time (C++17 limits) |
| 8 | Timeouts idea |
| 9 | Avoiding clock skew |
| 10 | A simple timer class |

---

## 1. std::chrono clocks

### Plain English

`std::chrono` measures time with clocks and durations. Use `steady_clock` to measure elapsed time; `system_clock` for wall-clock dates.

### Tiny code

```cpp
using clock = std::chrono::steady_clock;
auto t0 = clock::now();
// work...
auto ms = std::chrono::duration_cast<std::chrono::milliseconds>(clock::now() - t0);
```

- **Remember:** `steady_clock` never goes backwards — good for benchmarks.
- **Common mistake:** Using `system_clock` for elapsed timing across daylight-saving adjustments.

Practice: open `examples/01_*.cpp`, predict the output, change one line, re-predict.

## 2. duration and time_point

### Plain English

`std::chrono` measures time with clocks and durations. Use `steady_clock` to measure elapsed time; `system_clock` for wall-clock dates.

### Tiny code

```cpp
using clock = std::chrono::steady_clock;
auto t0 = clock::now();
// work...
auto ms = std::chrono::duration_cast<std::chrono::milliseconds>(clock::now() - t0);
```

- **Remember:** `steady_clock` never goes backwards — good for benchmarks.
- **Common mistake:** Using `system_clock` for elapsed timing across daylight-saving adjustments.

Practice: open `examples/02_*.cpp`, predict the output, change one line, re-predict.

## 3. Measuring elapsed time

### Plain English

`std::chrono` measures time with clocks and durations. Use `steady_clock` to measure elapsed time; `system_clock` for wall-clock dates.

### Tiny code

```cpp
using clock = std::chrono::steady_clock;
auto t0 = clock::now();
// work...
auto ms = std::chrono::duration_cast<std::chrono::milliseconds>(clock::now() - t0);
```

- **Remember:** `steady_clock` never goes backwards — good for benchmarks.
- **Common mistake:** Using `system_clock` for elapsed timing across daylight-saving adjustments.

Practice: open `examples/03_*.cpp`, predict the output, change one line, re-predict.

## 4. sleep_for

### Plain English

`std::chrono` measures time with clocks and durations. Use `steady_clock` to measure elapsed time; `system_clock` for wall-clock dates.

### Tiny code

```cpp
using clock = std::chrono::steady_clock;
auto t0 = clock::now();
// work...
auto ms = std::chrono::duration_cast<std::chrono::milliseconds>(clock::now() - t0);
```

- **Remember:** `steady_clock` never goes backwards — good for benchmarks.
- **Common mistake:** Using `system_clock` for elapsed timing across daylight-saving adjustments.

Practice: open `examples/04_*.cpp`, predict the output, change one line, re-predict.

## 5. Casting durations

### Plain English

`std::chrono` measures time with clocks and durations. Use `steady_clock` to measure elapsed time; `system_clock` for wall-clock dates.

### Tiny code

```cpp
using clock = std::chrono::steady_clock;
auto t0 = clock::now();
// work...
auto ms = std::chrono::duration_cast<std::chrono::milliseconds>(clock::now() - t0);
```

- **Remember:** `steady_clock` never goes backwards — good for benchmarks.
- **Common mistake:** Using `system_clock` for elapsed timing across daylight-saving adjustments.

Practice: open `examples/05_*.cpp`, predict the output, change one line, re-predict.

## 6. steady_clock vs system_clock

### Plain English

`std::chrono` measures time with clocks and durations. Use `steady_clock` to measure elapsed time; `system_clock` for wall-clock dates.

### Tiny code

```cpp
using clock = std::chrono::steady_clock;
auto t0 = clock::now();
// work...
auto ms = std::chrono::duration_cast<std::chrono::milliseconds>(clock::now() - t0);
```

- **Remember:** `steady_clock` never goes backwards — good for benchmarks.
- **Common mistake:** Using `system_clock` for elapsed timing across daylight-saving adjustments.

Practice: open `examples/06_*.cpp`, predict the output, change one line, re-predict.

## 7. Formatting time (C++17 limits)

### Plain English

`std::chrono` measures time with clocks and durations. Use `steady_clock` to measure elapsed time; `system_clock` for wall-clock dates.

### Tiny code

```cpp
using clock = std::chrono::steady_clock;
auto t0 = clock::now();
// work...
auto ms = std::chrono::duration_cast<std::chrono::milliseconds>(clock::now() - t0);
```

- **Remember:** `steady_clock` never goes backwards — good for benchmarks.
- **Common mistake:** Using `system_clock` for elapsed timing across daylight-saving adjustments.

Practice: open `examples/07_*.cpp`, predict the output, change one line, re-predict.

## 8. Timeouts idea

### Plain English

`std::chrono` measures time with clocks and durations. Use `steady_clock` to measure elapsed time; `system_clock` for wall-clock dates.

### Tiny code

```cpp
using clock = std::chrono::steady_clock;
auto t0 = clock::now();
// work...
auto ms = std::chrono::duration_cast<std::chrono::milliseconds>(clock::now() - t0);
```

- **Remember:** `steady_clock` never goes backwards — good for benchmarks.
- **Common mistake:** Using `system_clock` for elapsed timing across daylight-saving adjustments.

Practice: open `examples/08_*.cpp`, predict the output, change one line, re-predict.

## 9. Avoiding clock skew

### Plain English

`std::chrono` measures time with clocks and durations. Use `steady_clock` to measure elapsed time; `system_clock` for wall-clock dates.

### Tiny code

```cpp
using clock = std::chrono::steady_clock;
auto t0 = clock::now();
// work...
auto ms = std::chrono::duration_cast<std::chrono::milliseconds>(clock::now() - t0);
```

- **Remember:** `steady_clock` never goes backwards — good for benchmarks.
- **Common mistake:** Using `system_clock` for elapsed timing across daylight-saving adjustments.

Practice: open `examples/09_*.cpp`, predict the output, change one line, re-predict.

## 10. A simple timer class

### Plain English

`std::chrono` measures time with clocks and durations. Use `steady_clock` to measure elapsed time; `system_clock` for wall-clock dates.

### Tiny code

```cpp
using clock = std::chrono::steady_clock;
auto t0 = clock::now();
// work...
auto ms = std::chrono::duration_cast<std::chrono::milliseconds>(clock::now() - t0);
```

- **Remember:** `steady_clock` never goes backwards — good for benchmarks.
- **Common mistake:** Using `system_clock` for elapsed timing across daylight-saving adjustments.

Practice: open `examples/10_*.cpp`, predict the output, change one line, re-predict.

---

## What you should be able to do after Day 27

- Explain `Time & chrono basics` to a peer without looking at notes.
- Compile and run all 10 examples with `-std=c++17 -Wall -Wextra` (use newer flags only when the day needs C++20+).
- Answer the 5 questions in `questions.md` before peeking at `answers.md`.
- Write one tiny extra program that combines at least 3 of today's concepts.

Or open this day in the **Badsha hub** (`python3 hub/server.py`) and use Learn / Practice / Quiz tabs.
