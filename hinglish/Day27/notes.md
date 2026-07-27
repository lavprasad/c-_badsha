# Day 27 -- Time & chrono basics

Aaj ka goal: **Time & chrono basics** ko aasan Hinglish me samajhna, har idea ka chhota code sample dekhna, phir `examples/` me practice karna.

Is din ko padhne ka tarika:
1. Har concept ka **Aasan Bhasha** section padho.
2. Code sample par nazar daalo -- pehle predict karo ki output kya aayega.
3. `examples/` me us concept ki file chalao.
4. Uske baad hi `questions.md` kholo.

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

### Aasan Bhasha

`std::chrono` clocks aur durations se time naapta hai. Beeta hua time naapne ke liye `steady_clock`; wall-clock dates ke liye `system_clock`.

### Chhota code

```cpp
using clock = std::chrono::steady_clock;
auto t0 = clock::now();
// work...
auto ms = std::chrono::duration_cast<std::chrono::milliseconds>(clock::now() - t0);
```

- **Yaad rakho:** `steady_clock` kabhi peeche nahi jaata — benchmarks ke liye badhiya.
- **Aam galti:** Elapsed time ke liye `system_clock` use karna aur daylight-saving me phas jaana.

Practice: `examples/01_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 2. duration and time_point

### Aasan Bhasha

`std::chrono` clocks aur durations se time naapta hai. Beeta hua time naapne ke liye `steady_clock`; wall-clock dates ke liye `system_clock`.

### Chhota code

```cpp
using clock = std::chrono::steady_clock;
auto t0 = clock::now();
// work...
auto ms = std::chrono::duration_cast<std::chrono::milliseconds>(clock::now() - t0);
```

- **Yaad rakho:** `steady_clock` kabhi peeche nahi jaata — benchmarks ke liye badhiya.
- **Aam galti:** Elapsed time ke liye `system_clock` use karna aur daylight-saving me phas jaana.

Practice: `examples/02_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 3. Measuring elapsed time

### Aasan Bhasha

`std::chrono` clocks aur durations se time naapta hai. Beeta hua time naapne ke liye `steady_clock`; wall-clock dates ke liye `system_clock`.

### Chhota code

```cpp
using clock = std::chrono::steady_clock;
auto t0 = clock::now();
// work...
auto ms = std::chrono::duration_cast<std::chrono::milliseconds>(clock::now() - t0);
```

- **Yaad rakho:** `steady_clock` kabhi peeche nahi jaata — benchmarks ke liye badhiya.
- **Aam galti:** Elapsed time ke liye `system_clock` use karna aur daylight-saving me phas jaana.

Practice: `examples/03_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 4. sleep_for

### Aasan Bhasha

`std::chrono` clocks aur durations se time naapta hai. Beeta hua time naapne ke liye `steady_clock`; wall-clock dates ke liye `system_clock`.

### Chhota code

```cpp
using clock = std::chrono::steady_clock;
auto t0 = clock::now();
// work...
auto ms = std::chrono::duration_cast<std::chrono::milliseconds>(clock::now() - t0);
```

- **Yaad rakho:** `steady_clock` kabhi peeche nahi jaata — benchmarks ke liye badhiya.
- **Aam galti:** Elapsed time ke liye `system_clock` use karna aur daylight-saving me phas jaana.

Practice: `examples/04_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 5. Casting durations

### Aasan Bhasha

`std::chrono` clocks aur durations se time naapta hai. Beeta hua time naapne ke liye `steady_clock`; wall-clock dates ke liye `system_clock`.

### Chhota code

```cpp
using clock = std::chrono::steady_clock;
auto t0 = clock::now();
// work...
auto ms = std::chrono::duration_cast<std::chrono::milliseconds>(clock::now() - t0);
```

- **Yaad rakho:** `steady_clock` kabhi peeche nahi jaata — benchmarks ke liye badhiya.
- **Aam galti:** Elapsed time ke liye `system_clock` use karna aur daylight-saving me phas jaana.

Practice: `examples/05_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 6. steady_clock vs system_clock

### Aasan Bhasha

`std::chrono` clocks aur durations se time naapta hai. Beeta hua time naapne ke liye `steady_clock`; wall-clock dates ke liye `system_clock`.

### Chhota code

```cpp
using clock = std::chrono::steady_clock;
auto t0 = clock::now();
// work...
auto ms = std::chrono::duration_cast<std::chrono::milliseconds>(clock::now() - t0);
```

- **Yaad rakho:** `steady_clock` kabhi peeche nahi jaata — benchmarks ke liye badhiya.
- **Aam galti:** Elapsed time ke liye `system_clock` use karna aur daylight-saving me phas jaana.

Practice: `examples/06_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 7. Formatting time (C++17 limits)

### Aasan Bhasha

`std::chrono` clocks aur durations se time naapta hai. Beeta hua time naapne ke liye `steady_clock`; wall-clock dates ke liye `system_clock`.

### Chhota code

```cpp
using clock = std::chrono::steady_clock;
auto t0 = clock::now();
// work...
auto ms = std::chrono::duration_cast<std::chrono::milliseconds>(clock::now() - t0);
```

- **Yaad rakho:** `steady_clock` kabhi peeche nahi jaata — benchmarks ke liye badhiya.
- **Aam galti:** Elapsed time ke liye `system_clock` use karna aur daylight-saving me phas jaana.

Practice: `examples/07_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 8. Timeouts idea

### Aasan Bhasha

`std::chrono` clocks aur durations se time naapta hai. Beeta hua time naapne ke liye `steady_clock`; wall-clock dates ke liye `system_clock`.

### Chhota code

```cpp
using clock = std::chrono::steady_clock;
auto t0 = clock::now();
// work...
auto ms = std::chrono::duration_cast<std::chrono::milliseconds>(clock::now() - t0);
```

- **Yaad rakho:** `steady_clock` kabhi peeche nahi jaata — benchmarks ke liye badhiya.
- **Aam galti:** Elapsed time ke liye `system_clock` use karna aur daylight-saving me phas jaana.

Practice: `examples/08_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 9. Avoiding clock skew

### Aasan Bhasha

`std::chrono` clocks aur durations se time naapta hai. Beeta hua time naapne ke liye `steady_clock`; wall-clock dates ke liye `system_clock`.

### Chhota code

```cpp
using clock = std::chrono::steady_clock;
auto t0 = clock::now();
// work...
auto ms = std::chrono::duration_cast<std::chrono::milliseconds>(clock::now() - t0);
```

- **Yaad rakho:** `steady_clock` kabhi peeche nahi jaata — benchmarks ke liye badhiya.
- **Aam galti:** Elapsed time ke liye `system_clock` use karna aur daylight-saving me phas jaana.

Practice: `examples/09_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 10. A simple timer class

### Aasan Bhasha

`std::chrono` clocks aur durations se time naapta hai. Beeta hua time naapne ke liye `steady_clock`; wall-clock dates ke liye `system_clock`.

### Chhota code

```cpp
using clock = std::chrono::steady_clock;
auto t0 = clock::now();
// work...
auto ms = std::chrono::duration_cast<std::chrono::milliseconds>(clock::now() - t0);
```

- **Yaad rakho:** `steady_clock` kabhi peeche nahi jaata — benchmarks ke liye badhiya.
- **Aam galti:** Elapsed time ke liye `system_clock` use karna aur daylight-saving me phas jaana.

Practice: `examples/10_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

---

## Day 27 ke baad aapko ye aana chahiye

- `Time & chrono basics` ko bina notes dekhe kisi dost ko samjha sakna.
- Saare 10 examples `-std=c++17 -Wall -Wextra` ke saath compile aur run karna (naye flags sirf tab jab din ko C++20+ chahiye).
- `answers.md` dekhne se pehle `questions.md` ke 5 sawaal answer karna.
- Ek chhota extra program likhna jo aaj ke kam se kam 3 concepts jodta ho.

Ya is din ko **Badsha hub** me kholo (`python3 hub/server.py`) aur Learn / Practice / Quiz tabs use karo.
