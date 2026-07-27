# Day 87 -- async & futures

Aaj ka goal: **async & futures** ko aasan Hinglish me samajhna, har idea ka chhota code sample dekhna, phir `examples/` me practice karna.

Is din ko padhne ka tarika:
1. Har concept ka **Aasan Bhasha** section padho.
2. Code sample par nazar daalo -- pehle predict karo ki output kya aayega.
3. `examples/` me us concept ki file chalao.
4. Uske baad hi `questions.md` kholo.

| # | Concept |
|--:|---------|
| 1 | std::async |
| 2 | std::future |
| 3 | std::promise |
| 4 | shared_future |
| 5 | launch policies |
| 6 | get and exceptions |
| 7 | wait_for |
| 8 | Packaged tasks |
| 9 | When not async |
| 10 | Parallel map sketch |

---

## 1. std::async

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

## 2. std::future

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

## 3. std::promise

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

## 4. shared_future

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

## 5. launch policies

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

## 6. get and exceptions

### Aasan Bhasha

Exceptions happy path ko failure se alag karte hain. Jab function apna kaam na kar sake to throw karo; wahan catch karo jahan recover ya report ho sake. Unwinding ke dauraan bhi RAII cleanup karta hai.

### Chhota code

```cpp
try {
  throw std::runtime_error("boom");
} catch (const std::exception& e) {
  std::cerr << e.what() << '\n';
}
```

- **Yaad rakho:** `const` reference se catch karo, value se nahi.
- **Aam galti:** Raw pointers throw karna ya value se catch karna (slicing).

Practice: `examples/06_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 7. wait_for

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

## 8. Packaged tasks

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

## 9. When not async

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

## 10. Parallel map sketch

### Aasan Bhasha

`map` keys ko sorted rakhta hai (tree); `unordered_map` hash karta hai aur average O(1) lookup deta hai. Order chahiye to sorted chuno; speed chahiye aur acha hash hai to hash chuno.

### Chhota code

```cpp
std::unordered_map<std::string, int> freq;
++freq["hi"];
for (auto& [k, v] : freq) std::cout << k << ':' << v << '\n';
```

- **Yaad rakho:** `operator[]` key na mile to default value insert kar deta hai.
- **Aam galti:** Sirf lookup ke liye `[]` use karna — missing key error ho to `find` / `at` behtar hai.

Practice: `examples/10_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

---

## Day 87 ke baad aapko ye aana chahiye

- `async & futures` ko bina notes dekhe kisi dost ko samjha sakna.
- Saare 10 examples `-std=c++17 -Wall -Wextra` ke saath compile aur run karna (naye flags sirf tab jab din ko C++20+ chahiye).
- `answers.md` dekhne se pehle `questions.md` ke 5 sawaal answer karna.
- Ek chhota extra program likhna jo aaj ke kam se kam 3 concepts jodta ho.

Ya is din ko **Badsha hub** me kholo (`python3 hub/server.py`) aur Learn / Practice / Quiz tabs use karo.
