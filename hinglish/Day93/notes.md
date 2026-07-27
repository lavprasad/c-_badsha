# Day 93 -- I/O multiplexing idea

Aaj ka goal: **I/O multiplexing idea** ko aasan Hinglish me samajhna, har idea ka chhota code sample dekhna, phir `examples/` me practice karna.

Is din ko padhne ka tarika:
1. Har concept ka **Aasan Bhasha** section padho.
2. Code sample par nazar daalo -- pehle predict karo ki output kya aayega.
3. `examples/` me us concept ki file chalao.
4. Uske baad hi `questions.md` kholo.

| # | Concept |
|--:|---------|
| 1 | Why select/poll |
| 2 | Non-blocking sockets |
| 3 | Event loops |
| 4 | Edge vs level trigger idea |
| 5 | epoll mental model |
| 6 | Timeouts |
| 7 | Scalability |
| 8 | Callback style |
| 9 | Backpressure |
| 10 | Tiny poll loop sketch |

---

## 1. Why select/poll

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

Practice: `examples/01_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 2. Non-blocking sockets

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

Practice: `examples/02_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 3. Event loops

### Aasan Bhasha

Aaj ka idea — **Event loops** — I/O multiplexing idea ke bade theme ke andar aata hai. Ise ek tool ki tarah padho: ye kaam kya karta hai, kaunse rules enforce karta hai, aur un rules ko ignore karne par kya tootta hai?

### Chhota code

```cpp
// Explore: Event loops
#include <iostream>
int main() {
  std::cout << "practice: Event loops\n";
  return 0;
}
```

- **Yaad rakho:** `Event loops` use karne wala code likhne se pehle ek invariant bolo.
- **Aam galti:** `Event loops` ko copy-paste se use karna bina jaane ki wo kya own karta hai ya kab valid hai.

Practice: `examples/03_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 4. Edge vs level trigger idea

### Aasan Bhasha

Aaj ka idea — **Edge vs level trigger idea** — I/O multiplexing idea ke bade theme ke andar aata hai. Ise ek tool ki tarah padho: ye kaam kya karta hai, kaunse rules enforce karta hai, aur un rules ko ignore karne par kya tootta hai?

### Chhota code

```cpp
// Explore: Edge vs level trigger idea
#include <iostream>
int main() {
  std::cout << "practice: Edge vs level trigger idea\n";
  return 0;
}
```

- **Yaad rakho:** `Edge vs level trigger idea` use karne wala code likhne se pehle ek invariant bolo.
- **Aam galti:** `Edge vs level trigger idea` ko copy-paste se use karna bina jaane ki wo kya own karta hai ya kab valid hai.

Practice: `examples/04_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 5. epoll mental model

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

Practice: `examples/05_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 6. Timeouts

### Aasan Bhasha

Aaj ka idea — **Timeouts** — I/O multiplexing idea ke bade theme ke andar aata hai. Ise ek tool ki tarah padho: ye kaam kya karta hai, kaunse rules enforce karta hai, aur un rules ko ignore karne par kya tootta hai?

### Chhota code

```cpp
// Explore: Timeouts
#include <iostream>
int main() {
  std::cout << "practice: Timeouts\n";
  return 0;
}
```

- **Yaad rakho:** `Timeouts` use karne wala code likhne se pehle ek invariant bolo.
- **Aam galti:** `Timeouts` ko copy-paste se use karna bina jaane ki wo kya own karta hai ya kab valid hai.

Practice: `examples/06_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 7. Scalability

### Aasan Bhasha

Aaj ka idea — **Scalability** — I/O multiplexing idea ke bade theme ke andar aata hai. Ise ek tool ki tarah padho: ye kaam kya karta hai, kaunse rules enforce karta hai, aur un rules ko ignore karne par kya tootta hai?

### Chhota code

```cpp
// Explore: Scalability
#include <iostream>
int main() {
  std::cout << "practice: Scalability\n";
  return 0;
}
```

- **Yaad rakho:** `Scalability` use karne wala code likhne se pehle ek invariant bolo.
- **Aam galti:** `Scalability` ko copy-paste se use karna bina jaane ki wo kya own karta hai ya kab valid hai.

Practice: `examples/07_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 8. Callback style

### Aasan Bhasha

Aaj ka idea — **Callback style** — I/O multiplexing idea ke bade theme ke andar aata hai. Ise ek tool ki tarah padho: ye kaam kya karta hai, kaunse rules enforce karta hai, aur un rules ko ignore karne par kya tootta hai?

### Chhota code

```cpp
// Explore: Callback style
#include <iostream>
int main() {
  std::cout << "practice: Callback style\n";
  return 0;
}
```

- **Yaad rakho:** `Callback style` use karne wala code likhne se pehle ek invariant bolo.
- **Aam galti:** `Callback style` ko copy-paste se use karna bina jaane ki wo kya own karta hai ya kab valid hai.

Practice: `examples/08_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 9. Backpressure

### Aasan Bhasha

Aaj ka idea — **Backpressure** — I/O multiplexing idea ke bade theme ke andar aata hai. Ise ek tool ki tarah padho: ye kaam kya karta hai, kaunse rules enforce karta hai, aur un rules ko ignore karne par kya tootta hai?

### Chhota code

```cpp
// Explore: Backpressure
#include <iostream>
int main() {
  std::cout << "practice: Backpressure\n";
  return 0;
}
```

- **Yaad rakho:** `Backpressure` use karne wala code likhne se pehle ek invariant bolo.
- **Aam galti:** `Backpressure` ko copy-paste se use karna bina jaane ki wo kya own karta hai ya kab valid hai.

Practice: `examples/09_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 10. Tiny poll loop sketch

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

Practice: `examples/10_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

---

## Day 93 ke baad aapko ye aana chahiye

- `I/O multiplexing idea` ko bina notes dekhe kisi dost ko samjha sakna.
- Saare 10 examples `-std=c++17 -Wall -Wextra` ke saath compile aur run karna (naye flags sirf tab jab din ko C++20+ chahiye).
- `answers.md` dekhne se pehle `questions.md` ke 5 sawaal answer karna.
- Ek chhota extra program likhna jo aaj ke kam se kam 3 concepts jodta ho.

Ya is din ko **Badsha hub** me kholo (`python3 hub/server.py`) aur Learn / Practice / Quiz tabs use karo.
