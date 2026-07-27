# Day 84 -- Condition variables

Aaj ka goal: **Condition variables** ko aasan Hinglish me samajhna, har idea ka chhota code sample dekhna, phir `examples/` me practice karna.

Is din ko padhne ka tarika:
1. Har concept ka **Aasan Bhasha** section padho.
2. Code sample par nazar daalo -- pehle predict karo ki output kya aayega.
3. `examples/` me us concept ki file chalao.
4. Uske baad hi `questions.md` kholo.

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

### Aasan Bhasha

Aaj ka idea — **wait / notify** — Condition variables ke bade theme ke andar aata hai. Ise ek tool ki tarah padho: ye kaam kya karta hai, kaunse rules enforce karta hai, aur un rules ko ignore karne par kya tootta hai?

### Chhota code

```cpp
// Explore: wait / notify
#include <iostream>
int main() {
  std::cout << "practice: wait / notify\n";
  return 0;
}
```

- **Yaad rakho:** `wait / notify` use karne wala code likhne se pehle ek invariant bolo.
- **Aam galti:** `wait / notify` ko copy-paste se use karna bina jaane ki wo kya own karta hai ya kab valid hai.

Practice: `examples/01_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 2. Spurious wakeups

### Aasan Bhasha

Aaj ka idea — **Spurious wakeups** — Condition variables ke bade theme ke andar aata hai. Ise ek tool ki tarah padho: ye kaam kya karta hai, kaunse rules enforce karta hai, aur un rules ko ignore karne par kya tootta hai?

### Chhota code

```cpp
// Explore: Spurious wakeups
#include <iostream>
int main() {
  std::cout << "practice: Spurious wakeups\n";
  return 0;
}
```

- **Yaad rakho:** `Spurious wakeups` use karne wala code likhne se pehle ek invariant bolo.
- **Aam galti:** `Spurious wakeups` ko copy-paste se use karna bina jaane ki wo kya own karta hai ya kab valid hai.

Practice: `examples/02_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 3. Predicate waits

### Aasan Bhasha

Aaj ka idea — **Predicate waits** — Condition variables ke bade theme ke andar aata hai. Ise ek tool ki tarah padho: ye kaam kya karta hai, kaunse rules enforce karta hai, aur un rules ko ignore karne par kya tootta hai?

### Chhota code

```cpp
// Explore: Predicate waits
#include <iostream>
int main() {
  std::cout << "practice: Predicate waits\n";
  return 0;
}
```

- **Yaad rakho:** `Predicate waits` use karne wala code likhne se pehle ek invariant bolo.
- **Aam galti:** `Predicate waits` ko copy-paste se use karna bina jaane ki wo kya own karta hai ya kab valid hai.

Practice: `examples/03_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 4. Producer-consumer

### Aasan Bhasha

Aaj ka idea — **Producer-consumer** — Condition variables ke bade theme ke andar aata hai. Ise ek tool ki tarah padho: ye kaam kya karta hai, kaunse rules enforce karta hai, aur un rules ko ignore karne par kya tootta hai?

### Chhota code

```cpp
// Explore: Producer-consumer
#include <iostream>
int main() {
  std::cout << "practice: Producer-consumer\n";
  return 0;
}
```

- **Yaad rakho:** `Producer-consumer` use karne wala code likhne se pehle ek invariant bolo.
- **Aam galti:** `Producer-consumer` ko copy-paste se use karna bina jaane ki wo kya own karta hai ya kab valid hai.

Practice: `examples/04_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 5. notify_one vs notify_all

### Aasan Bhasha

Aaj ka idea — **notify_one vs notify_all** — Condition variables ke bade theme ke andar aata hai. Ise ek tool ki tarah padho: ye kaam kya karta hai, kaunse rules enforce karta hai, aur un rules ko ignore karne par kya tootta hai?

### Chhota code

```cpp
// Explore: notify_one vs notify_all
#include <iostream>
int main() {
  std::cout << "practice: notify_one vs notify_all\n";
  return 0;
}
```

- **Yaad rakho:** `notify_one vs notify_all` use karne wala code likhne se pehle ek invariant bolo.
- **Aam galti:** `notify_one vs notify_all` ko copy-paste se use karna bina jaane ki wo kya own karta hai ya kab valid hai.

Practice: `examples/05_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 6. with unique_lock

### Aasan Bhasha

Aaj ka idea — **with unique_lock** — Condition variables ke bade theme ke andar aata hai. Ise ek tool ki tarah padho: ye kaam kya karta hai, kaunse rules enforce karta hai, aur un rules ko ignore karne par kya tootta hai?

### Chhota code

```cpp
// Explore: with unique_lock
#include <iostream>
int main() {
  std::cout << "practice: with unique_lock\n";
  return 0;
}
```

- **Yaad rakho:** `with unique_lock` use karne wala code likhne se pehle ek invariant bolo.
- **Aam galti:** `with unique_lock` ko copy-paste se use karna bina jaane ki wo kya own karta hai ya kab valid hai.

Practice: `examples/06_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 7. Lost wakeup pitfalls

### Aasan Bhasha

Aaj ka idea — **Lost wakeup pitfalls** — Condition variables ke bade theme ke andar aata hai. Ise ek tool ki tarah padho: ye kaam kya karta hai, kaunse rules enforce karta hai, aur un rules ko ignore karne par kya tootta hai?

### Chhota code

```cpp
// Explore: Lost wakeup pitfalls
#include <iostream>
int main() {
  std::cout << "practice: Lost wakeup pitfalls\n";
  return 0;
}
```

- **Yaad rakho:** `Lost wakeup pitfalls` use karne wala code likhne se pehle ek invariant bolo.
- **Aam galti:** `Lost wakeup pitfalls` ko copy-paste se use karna bina jaane ki wo kya own karta hai ya kab valid hai.

Practice: `examples/07_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 8. Timeout waits

### Aasan Bhasha

Aaj ka idea — **Timeout waits** — Condition variables ke bade theme ke andar aata hai. Ise ek tool ki tarah padho: ye kaam kya karta hai, kaunse rules enforce karta hai, aur un rules ko ignore karne par kya tootta hai?

### Chhota code

```cpp
// Explore: Timeout waits
#include <iostream>
int main() {
  std::cout << "practice: Timeout waits\n";
  return 0;
}
```

- **Yaad rakho:** `Timeout waits` use karne wala code likhne se pehle ek invariant bolo.
- **Aam galti:** `Timeout waits` ko copy-paste se use karna bina jaane ki wo kya own karta hai ya kab valid hai.

Practice: `examples/08_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 9. Shutdown signals

### Aasan Bhasha

Aaj ka idea — **Shutdown signals** — Condition variables ke bade theme ke andar aata hai. Ise ek tool ki tarah padho: ye kaam kya karta hai, kaunse rules enforce karta hai, aur un rules ko ignore karne par kya tootta hai?

### Chhota code

```cpp
// Explore: Shutdown signals
#include <iostream>
int main() {
  std::cout << "practice: Shutdown signals\n";
  return 0;
}
```

- **Yaad rakho:** `Shutdown signals` use karne wala code likhne se pehle ek invariant bolo.
- **Aam galti:** `Shutdown signals` ko copy-paste se use karna bina jaane ki wo kya own karta hai ya kab valid hai.

Practice: `examples/09_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 10. A blocking queue

### Aasan Bhasha

Aaj ka idea — **A blocking queue** — Condition variables ke bade theme ke andar aata hai. Ise ek tool ki tarah padho: ye kaam kya karta hai, kaunse rules enforce karta hai, aur un rules ko ignore karne par kya tootta hai?

### Chhota code

```cpp
// Explore: A blocking queue
#include <iostream>
int main() {
  std::cout << "practice: A blocking queue\n";
  return 0;
}
```

- **Yaad rakho:** `A blocking queue` use karne wala code likhne se pehle ek invariant bolo.
- **Aam galti:** `A blocking queue` ko copy-paste se use karna bina jaane ki wo kya own karta hai ya kab valid hai.

Practice: `examples/10_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

---

## Day 84 ke baad aapko ye aana chahiye

- `Condition variables` ko bina notes dekhe kisi dost ko samjha sakna.
- Saare 10 examples `-std=c++17 -Wall -Wextra` ke saath compile aur run karna (naye flags sirf tab jab din ko C++20+ chahiye).
- `answers.md` dekhne se pehle `questions.md` ke 5 sawaal answer karna.
- Ek chhota extra program likhna jo aaj ke kam se kam 3 concepts jodta ho.

Ya is din ko **Badsha hub** me kholo (`python3 hub/server.py`) aur Learn / Practice / Quiz tabs use karo.
