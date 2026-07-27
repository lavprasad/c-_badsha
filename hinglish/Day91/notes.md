# Day 91 -- Processes vs threads

Aaj ka goal: **Processes vs threads** ko aasan Hinglish me samajhna, har idea ka chhota code sample dekhna, phir `examples/` me practice karna.

Is din ko padhne ka tarika:
1. Har concept ka **Aasan Bhasha** section padho.
2. Code sample par nazar daalo -- pehle predict karo ki output kya aayega.
3. `examples/` me us concept ki file chalao.
4. Uske baad hi `questions.md` kholo.

| # | Concept |
|--:|---------|
| 1 | Address spaces |
| 2 | IPC overview |
| 3 | Fork mentality (POSIX) |
| 4 | Pipes idea |
| 5 | Shared memory idea |
| 6 | Signals awareness |
| 7 | Crash isolation |
| 8 | Choosing model |
| 9 | Security notes |
| 10 | Mental comparison table |

---

## 1. Address spaces

### Aasan Bhasha

Threads code ko saath-saath chalate hain. Shared mutable data ko mutex (ya atomics) chahiye. RAII locks (`lock_guard`) prefer karo taaki exception par bhi unlock ho jaaye.

### Chhota code

```cpp
std::mutex m;
int counter = 0;
{
  std::lock_guard<std::mutex> g(m);
  ++counter;
}
```

- **Yaad rakho:** Non-atomic shared data par data race undefined behaviour hai.
- **Aam galti:** Alag threads me do mutex ulte order me lock karna → deadlock.

Practice: `examples/01_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 2. IPC overview

### Aasan Bhasha

Threads code ko saath-saath chalate hain. Shared mutable data ko mutex (ya atomics) chahiye. RAII locks (`lock_guard`) prefer karo taaki exception par bhi unlock ho jaaye.

### Chhota code

```cpp
std::mutex m;
int counter = 0;
{
  std::lock_guard<std::mutex> g(m);
  ++counter;
}
```

- **Yaad rakho:** Non-atomic shared data par data race undefined behaviour hai.
- **Aam galti:** Alag threads me do mutex ulte order me lock karna → deadlock.

Practice: `examples/02_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 3. Fork mentality (POSIX)

### Aasan Bhasha

Threads code ko saath-saath chalate hain. Shared mutable data ko mutex (ya atomics) chahiye. RAII locks (`lock_guard`) prefer karo taaki exception par bhi unlock ho jaaye.

### Chhota code

```cpp
std::mutex m;
int counter = 0;
{
  std::lock_guard<std::mutex> g(m);
  ++counter;
}
```

- **Yaad rakho:** Non-atomic shared data par data race undefined behaviour hai.
- **Aam galti:** Alag threads me do mutex ulte order me lock karna → deadlock.

Practice: `examples/03_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 4. Pipes idea

### Aasan Bhasha

Threads code ko saath-saath chalate hain. Shared mutable data ko mutex (ya atomics) chahiye. RAII locks (`lock_guard`) prefer karo taaki exception par bhi unlock ho jaaye.

### Chhota code

```cpp
std::mutex m;
int counter = 0;
{
  std::lock_guard<std::mutex> g(m);
  ++counter;
}
```

- **Yaad rakho:** Non-atomic shared data par data race undefined behaviour hai.
- **Aam galti:** Alag threads me do mutex ulte order me lock karna → deadlock.

Practice: `examples/04_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 5. Shared memory idea

### Aasan Bhasha

Threads code ko saath-saath chalate hain. Shared mutable data ko mutex (ya atomics) chahiye. RAII locks (`lock_guard`) prefer karo taaki exception par bhi unlock ho jaaye.

### Chhota code

```cpp
std::mutex m;
int counter = 0;
{
  std::lock_guard<std::mutex> g(m);
  ++counter;
}
```

- **Yaad rakho:** Non-atomic shared data par data race undefined behaviour hai.
- **Aam galti:** Alag threads me do mutex ulte order me lock karna → deadlock.

Practice: `examples/05_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 6. Signals awareness

### Aasan Bhasha

Threads code ko saath-saath chalate hain. Shared mutable data ko mutex (ya atomics) chahiye. RAII locks (`lock_guard`) prefer karo taaki exception par bhi unlock ho jaaye.

### Chhota code

```cpp
std::mutex m;
int counter = 0;
{
  std::lock_guard<std::mutex> g(m);
  ++counter;
}
```

- **Yaad rakho:** Non-atomic shared data par data race undefined behaviour hai.
- **Aam galti:** Alag threads me do mutex ulte order me lock karna → deadlock.

Practice: `examples/06_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 7. Crash isolation

### Aasan Bhasha

Threads code ko saath-saath chalate hain. Shared mutable data ko mutex (ya atomics) chahiye. RAII locks (`lock_guard`) prefer karo taaki exception par bhi unlock ho jaaye.

### Chhota code

```cpp
std::mutex m;
int counter = 0;
{
  std::lock_guard<std::mutex> g(m);
  ++counter;
}
```

- **Yaad rakho:** Non-atomic shared data par data race undefined behaviour hai.
- **Aam galti:** Alag threads me do mutex ulte order me lock karna → deadlock.

Practice: `examples/07_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 8. Choosing model

### Aasan Bhasha

Threads code ko saath-saath chalate hain. Shared mutable data ko mutex (ya atomics) chahiye. RAII locks (`lock_guard`) prefer karo taaki exception par bhi unlock ho jaaye.

### Chhota code

```cpp
std::mutex m;
int counter = 0;
{
  std::lock_guard<std::mutex> g(m);
  ++counter;
}
```

- **Yaad rakho:** Non-atomic shared data par data race undefined behaviour hai.
- **Aam galti:** Alag threads me do mutex ulte order me lock karna → deadlock.

Practice: `examples/08_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 9. Security notes

### Aasan Bhasha

Threads code ko saath-saath chalate hain. Shared mutable data ko mutex (ya atomics) chahiye. RAII locks (`lock_guard`) prefer karo taaki exception par bhi unlock ho jaaye.

### Chhota code

```cpp
std::mutex m;
int counter = 0;
{
  std::lock_guard<std::mutex> g(m);
  ++counter;
}
```

- **Yaad rakho:** Non-atomic shared data par data race undefined behaviour hai.
- **Aam galti:** Alag threads me do mutex ulte order me lock karna → deadlock.

Practice: `examples/09_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 10. Mental comparison table

### Aasan Bhasha

Threads code ko saath-saath chalate hain. Shared mutable data ko mutex (ya atomics) chahiye. RAII locks (`lock_guard`) prefer karo taaki exception par bhi unlock ho jaaye.

### Chhota code

```cpp
std::mutex m;
int counter = 0;
{
  std::lock_guard<std::mutex> g(m);
  ++counter;
}
```

- **Yaad rakho:** Non-atomic shared data par data race undefined behaviour hai.
- **Aam galti:** Alag threads me do mutex ulte order me lock karna → deadlock.

Practice: `examples/10_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

---

## Day 91 ke baad aapko ye aana chahiye

- `Processes vs threads` ko bina notes dekhe kisi dost ko samjha sakna.
- Saare 10 examples `-std=c++17 -Wall -Wextra` ke saath compile aur run karna (naye flags sirf tab jab din ko C++20+ chahiye).
- `answers.md` dekhne se pehle `questions.md` ke 5 sawaal answer karna.
- Ek chhota extra program likhna jo aaj ke kam se kam 3 concepts jodta ho.

Ya is din ko **Badsha hub** me kholo (`python3 hub/server.py`) aur Learn / Practice / Quiz tabs use karo.
