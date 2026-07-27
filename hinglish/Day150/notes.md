# Day 150 -- Graceful shutdown & signals

Aaj ka goal: **Graceful shutdown & signals** ko aasan Hinglish me samajhna, har idea ka chhota code sample dekhna, phir `examples/` me practice karna.

Is din ko padhne ka tarika:
1. Har concept ka **Aasan Bhasha** section padho.
2. Code sample par nazar daalo -- pehle predict karo ki output kya aayega.
3. `examples/` me us concept ki file chalao.
4. Uske baad hi `questions.md` kholo.

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

### Aasan Bhasha

Aaj ka idea — **SIGINT/SIGTERM awareness** — Graceful shutdown & signals ke bade theme ke andar aata hai. Ise ek tool ki tarah padho: ye kaam kya karta hai, kaunse rules enforce karta hai, aur un rules ko ignore karne par kya tootta hai?

### Chhota code

```cpp
// Explore: SIGINT/SIGTERM awareness
#include <iostream>
int main() {
  std::cout << "practice: SIGINT/SIGTERM awareness\n";
  return 0;
}
```

- **Yaad rakho:** `SIGINT/SIGTERM awareness` use karne wala code likhne se pehle ek invariant bolo.
- **Aam galti:** `SIGINT/SIGTERM awareness` ko copy-paste se use karna bina jaane ki wo kya own karta hai ya kab valid hai.

Practice: `examples/01_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 2. Atomic stop flags

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

## 3. Draining queues

### Aasan Bhasha

Aaj ka idea — **Draining queues** — Graceful shutdown & signals ke bade theme ke andar aata hai. Ise ek tool ki tarah padho: ye kaam kya karta hai, kaunse rules enforce karta hai, aur un rules ko ignore karne par kya tootta hai?

### Chhota code

```cpp
// Explore: Draining queues
#include <iostream>
int main() {
  std::cout << "practice: Draining queues\n";
  return 0;
}
```

- **Yaad rakho:** `Draining queues` use karne wala code likhne se pehle ek invariant bolo.
- **Aam galti:** `Draining queues` ko copy-paste se use karna bina jaane ki wo kya own karta hai ya kab valid hai.

Practice: `examples/03_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 4. Closing listeners

### Aasan Bhasha

Sockets network bytes ke liye OS endpoints hain. TCP reliable stream deta hai; messages ki framing phir bhi aapko khud karni padti hai. Return codes hamesha check karo aur partial read/write handle karo.

### Chhota code

```cpp
// Conceptual — details are OS-specific
// sock = socket(...);
// connect(sock, ...);
// send(sock, buf, n, 0);
```

- **Yaad rakho:** Network data bytes hai; integers ko endian helpers se convert karo.
- **Aam galti:** Ye maan lena ki ek `recv` poora ek application message deta hai.

Practice: `examples/04_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 5. Timeouts on shutdown

### Aasan Bhasha

Aaj ka idea — **Timeouts on shutdown** — Graceful shutdown & signals ke bade theme ke andar aata hai. Ise ek tool ki tarah padho: ye kaam kya karta hai, kaunse rules enforce karta hai, aur un rules ko ignore karne par kya tootta hai?

### Chhota code

```cpp
// Explore: Timeouts on shutdown
#include <iostream>
int main() {
  std::cout << "practice: Timeouts on shutdown\n";
  return 0;
}
```

- **Yaad rakho:** `Timeouts on shutdown` use karne wala code likhne se pehle ek invariant bolo.
- **Aam galti:** `Timeouts on shutdown` ko copy-paste se use karna bina jaane ki wo kya own karta hai ya kab valid hai.

Practice: `examples/05_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 6. Flushing logs

### Aasan Bhasha

Aaj ka idea — **Flushing logs** — Graceful shutdown & signals ke bade theme ke andar aata hai. Ise ek tool ki tarah padho: ye kaam kya karta hai, kaunse rules enforce karta hai, aur un rules ko ignore karne par kya tootta hai?

### Chhota code

```cpp
// Explore: Flushing logs
#include <iostream>
int main() {
  std::cout << "practice: Flushing logs\n";
  return 0;
}
```

- **Yaad rakho:** `Flushing logs` use karne wala code likhne se pehle ek invariant bolo.
- **Aam galti:** `Flushing logs` ko copy-paste se use karna bina jaane ki wo kya own karta hai ya kab valid hai.

Practice: `examples/06_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 7. RAII shutdown hooks

### Aasan Bhasha

Aaj ka idea — **RAII shutdown hooks** — Graceful shutdown & signals ke bade theme ke andar aata hai. Ise ek tool ki tarah padho: ye kaam kya karta hai, kaunse rules enforce karta hai, aur un rules ko ignore karne par kya tootta hai?

### Chhota code

```cpp
// Explore: RAII shutdown hooks
#include <iostream>
int main() {
  std::cout << "practice: RAII shutdown hooks\n";
  return 0;
}
```

- **Yaad rakho:** `RAII shutdown hooks` use karne wala code likhne se pehle ek invariant bolo.
- **Aam galti:** `RAII shutdown hooks` ko copy-paste se use karna bina jaane ki wo kya own karta hai ya kab valid hai.

Practice: `examples/07_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 8. Windows console ctrl idea

### Aasan Bhasha

Aaj ka idea — **Windows console ctrl idea** — Graceful shutdown & signals ke bade theme ke andar aata hai. Ise ek tool ki tarah padho: ye kaam kya karta hai, kaunse rules enforce karta hai, aur un rules ko ignore karne par kya tootta hai?

### Chhota code

```cpp
// Explore: Windows console ctrl idea
#include <iostream>
int main() {
  std::cout << "practice: Windows console ctrl idea\n";
  return 0;
}
```

- **Yaad rakho:** `Windows console ctrl idea` use karne wala code likhne se pehle ek invariant bolo.
- **Aam galti:** `Windows console ctrl idea` ko copy-paste se use karna bina jaane ki wo kya own karta hai ya kab valid hai.

Practice: `examples/08_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 9. Testing shutdown

### Aasan Bhasha

Projects skills ko jodte hain: saaf requirements, chhote modules, tests aur imaandaar docs. Ek chhoti vertical slice se shuru karo jo end-to-end chale, phir features mota karo.

### Chhota code

```cpp
int main(int argc, char** argv) {
  if (argc < 2) {
    std::cerr << "usage: tool <file>\n";
    return 1;
  }
  // ...
}
```

- **Yaad rakho:** Edge cases chamkane se pehle ek chalne wala subset ship karo.
- **Aam galti:** Hafton tak scaffolding banana jisme kuch chalta hi na ho.

Practice: `examples/09_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 10. A clean exit sketch

### Aasan Bhasha

Aaj ka idea — **A clean exit sketch** — Graceful shutdown & signals ke bade theme ke andar aata hai. Ise ek tool ki tarah padho: ye kaam kya karta hai, kaunse rules enforce karta hai, aur un rules ko ignore karne par kya tootta hai?

### Chhota code

```cpp
// Explore: A clean exit sketch
#include <iostream>
int main() {
  std::cout << "practice: A clean exit sketch\n";
  return 0;
}
```

- **Yaad rakho:** `A clean exit sketch` use karne wala code likhne se pehle ek invariant bolo.
- **Aam galti:** `A clean exit sketch` ko copy-paste se use karna bina jaane ki wo kya own karta hai ya kab valid hai.

Practice: `examples/10_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

---

## Day 150 ke baad aapko ye aana chahiye

- `Graceful shutdown & signals` ko bina notes dekhe kisi dost ko samjha sakna.
- Saare 10 examples `-std=c++17 -Wall -Wextra` ke saath compile aur run karna (naye flags sirf tab jab din ko C++20+ chahiye).
- `answers.md` dekhne se pehle `questions.md` ke 5 sawaal answer karna.
- Ek chhota extra program likhna jo aaj ke kam se kam 3 concepts jodta ho.

Ya is din ko **Badsha hub** me kholo (`python3 hub/server.py`) aur Learn / Practice / Quiz tabs use karo.
