# Day 26 -- Random numbers

Aaj ka goal: **Random numbers** ko aasan Hinglish me samajhna, har idea ka chhota code sample dekhna, phir `examples/` me practice karna.

Is din ko padhne ka tarika:
1. Har concept ka **Aasan Bhasha** section padho.
2. Code sample par nazar daalo -- pehle predict karo ki output kya aayega.
3. `examples/` me us concept ki file chalao.
4. Uske baad hi `questions.md` kholo.

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

### Aasan Bhasha

Serious kaam ke liye `rand()` mat use karo. `<random>` use karo: ek engine (`mt19937`) aur ek distribution. Reproducibility chahiye to seed dhyan se do.

### Chhota code

```cpp
std::mt19937 rng{std::random_device{}()};
std::uniform_int_distribution<int> dist(1, 6);
int roll = dist(rng);
```

- **Yaad rakho:** Engine ek baar banao aur reuse karo — har call par re-seed mat karo.
- **Aam galti:** Har roll par `time(nullptr)` se seed karna → correlated results.

Practice: `examples/01_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 2. std::mt19937

### Aasan Bhasha

Serious kaam ke liye `rand()` mat use karo. `<random>` use karo: ek engine (`mt19937`) aur ek distribution. Reproducibility chahiye to seed dhyan se do.

### Chhota code

```cpp
std::mt19937 rng{std::random_device{}()};
std::uniform_int_distribution<int> dist(1, 6);
int roll = dist(rng);
```

- **Yaad rakho:** Engine ek baar banao aur reuse karo — har call par re-seed mat karo.
- **Aam galti:** Har roll par `time(nullptr)` se seed karna → correlated results.

Practice: `examples/02_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 3. Distributions

### Aasan Bhasha

Serious kaam ke liye `rand()` mat use karo. `<random>` use karo: ek engine (`mt19937`) aur ek distribution. Reproducibility chahiye to seed dhyan se do.

### Chhota code

```cpp
std::mt19937 rng{std::random_device{}()};
std::uniform_int_distribution<int> dist(1, 6);
int roll = dist(rng);
```

- **Yaad rakho:** Engine ek baar banao aur reuse karo — har call par re-seed mat karo.
- **Aam galti:** Har roll par `time(nullptr)` se seed karna → correlated results.

Practice: `examples/03_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 4. Seeding properly

### Aasan Bhasha

Serious kaam ke liye `rand()` mat use karo. `<random>` use karo: ek engine (`mt19937`) aur ek distribution. Reproducibility chahiye to seed dhyan se do.

### Chhota code

```cpp
std::mt19937 rng{std::random_device{}()};
std::uniform_int_distribution<int> dist(1, 6);
int roll = dist(rng);
```

- **Yaad rakho:** Engine ek baar banao aur reuse karo — har call par re-seed mat karo.
- **Aam galti:** Har roll par `time(nullptr)` se seed karna → correlated results.

Practice: `examples/04_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 5. rand() pitfalls

### Aasan Bhasha

Serious kaam ke liye `rand()` mat use karo. `<random>` use karo: ek engine (`mt19937`) aur ek distribution. Reproducibility chahiye to seed dhyan se do.

### Chhota code

```cpp
std::mt19937 rng{std::random_device{}()};
std::uniform_int_distribution<int> dist(1, 6);
int roll = dist(rng);
```

- **Yaad rakho:** Engine ek baar banao aur reuse karo — har call par re-seed mat karo.
- **Aam galti:** Har roll par `time(nullptr)` se seed karna → correlated results.

Practice: `examples/05_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 6. Uniform int/real

### Aasan Bhasha

Serious kaam ke liye `rand()` mat use karo. `<random>` use karo: ek engine (`mt19937`) aur ek distribution. Reproducibility chahiye to seed dhyan se do.

### Chhota code

```cpp
std::mt19937 rng{std::random_device{}()};
std::uniform_int_distribution<int> dist(1, 6);
int roll = dist(rng);
```

- **Yaad rakho:** Engine ek baar banao aur reuse karo — har call par re-seed mat karo.
- **Aam galti:** Har roll par `time(nullptr)` se seed karna → correlated results.

Practice: `examples/06_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 7. Shuffling with std::shuffle

### Aasan Bhasha

Serious kaam ke liye `rand()` mat use karo. `<random>` use karo: ek engine (`mt19937`) aur ek distribution. Reproducibility chahiye to seed dhyan se do.

### Chhota code

```cpp
std::mt19937 rng{std::random_device{}()};
std::uniform_int_distribution<int> dist(1, 6);
int roll = dist(rng);
```

- **Yaad rakho:** Engine ek baar banao aur reuse karo — har call par re-seed mat karo.
- **Aam galti:** Har roll par `time(nullptr)` se seed karna → correlated results.

Practice: `examples/07_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 8. Reproducible seeds

### Aasan Bhasha

Serious kaam ke liye `rand()` mat use karo. `<random>` use karo: ek engine (`mt19937`) aur ek distribution. Reproducibility chahiye to seed dhyan se do.

### Chhota code

```cpp
std::mt19937 rng{std::random_device{}()};
std::uniform_int_distribution<int> dist(1, 6);
int roll = dist(rng);
```

- **Yaad rakho:** Engine ek baar banao aur reuse karo — har call par re-seed mat karo.
- **Aam galti:** Har roll par `time(nullptr)` se seed karna → correlated results.

Practice: `examples/08_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 9. Thread notes

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

## 10. A dice simulator

### Aasan Bhasha

Serious kaam ke liye `rand()` mat use karo. `<random>` use karo: ek engine (`mt19937`) aur ek distribution. Reproducibility chahiye to seed dhyan se do.

### Chhota code

```cpp
std::mt19937 rng{std::random_device{}()};
std::uniform_int_distribution<int> dist(1, 6);
int roll = dist(rng);
```

- **Yaad rakho:** Engine ek baar banao aur reuse karo — har call par re-seed mat karo.
- **Aam galti:** Har roll par `time(nullptr)` se seed karna → correlated results.

Practice: `examples/10_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

---

## Day 26 ke baad aapko ye aana chahiye

- `Random numbers` ko bina notes dekhe kisi dost ko samjha sakna.
- Saare 10 examples `-std=c++17 -Wall -Wextra` ke saath compile aur run karna (naye flags sirf tab jab din ko C++20+ chahiye).
- `answers.md` dekhne se pehle `questions.md` ke 5 sawaal answer karna.
- Ek chhota extra program likhna jo aaj ke kam se kam 3 concepts jodta ho.

Ya is din ko **Badsha hub** me kholo (`python3 hub/server.py`) aur Learn / Practice / Quiz tabs use karo.
