# Day 92 -- Networking sockets intro (POSIX)

Aaj ka goal: **Networking sockets intro (POSIX)** ko aasan Hinglish me samajhna, har idea ka chhota code sample dekhna, phir `examples/` me practice karna.

Is din ko padhne ka tarika:
1. Har concept ka **Aasan Bhasha** section padho.
2. Code sample par nazar daalo -- pehle predict karo ki output kya aayega.
3. `examples/` me us concept ki file chalao.
4. Uske baad hi `questions.md` kholo.

| # | Concept |
|--:|---------|
| 1 | TCP overview |
| 2 | socket/bind/listen/accept |
| 3 | connect/send/recv |
| 4 | Byte streams |
| 5 | Endianness htons |
| 6 | Blocking I/O |
| 7 | Errors and errno |
| 8 | Closing sockets |
| 9 | Simple echo server sketch |
| 10 | Client sketch |

---

## 1. TCP overview

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

## 2. socket/bind/listen/accept

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

## 3. connect/send/recv

### Aasan Bhasha

Iterators container ke andar advanced pointers jaise hain. Algorithms `[begin, end)` half-open range lete hain. Ye jaano ki insert/erase inhe kab invalid karte hain.

### Chhota code

```cpp
std::vector<int> v{1,2,3};
for (auto it = v.begin(); it != v.end(); ++it)
  std::cout << *it << ' ';
```

- **Yaad rakho:** Erase ke baad wahi iterator use karo jo `erase` return karta hai.
- **Aam galti:** Invalid ho chuke iterator ko increment karna → undefined behaviour.

Practice: `examples/03_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 4. Byte streams

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

## 5. Endianness htons

### Aasan Bhasha

Iterators container ke andar advanced pointers jaise hain. Algorithms `[begin, end)` half-open range lete hain. Ye jaano ki insert/erase inhe kab invalid karte hain.

### Chhota code

```cpp
std::vector<int> v{1,2,3};
for (auto it = v.begin(); it != v.end(); ++it)
  std::cout << *it << ' ';
```

- **Yaad rakho:** Erase ke baad wahi iterator use karo jo `erase` return karta hai.
- **Aam galti:** Invalid ho chuke iterator ko increment karna → undefined behaviour.

Practice: `examples/05_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 6. Blocking I/O

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

Practice: `examples/06_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 7. Errors and errno

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

Practice: `examples/07_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 8. Closing sockets

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

Practice: `examples/08_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 9. Simple echo server sketch

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

Practice: `examples/09_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 10. Client sketch

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

## Day 92 ke baad aapko ye aana chahiye

- `Networking sockets intro (POSIX)` ko bina notes dekhe kisi dost ko samjha sakna.
- Saare 10 examples `-std=c++17 -Wall -Wextra` ke saath compile aur run karna (naye flags sirf tab jab din ko C++20+ chahiye).
- `answers.md` dekhne se pehle `questions.md` ke 5 sawaal answer karna.
- Ek chhota extra program likhna jo aaj ke kam se kam 3 concepts jodta ho.

Ya is din ko **Badsha hub** me kholo (`python3 hub/server.py`) aur Learn / Practice / Quiz tabs use karo.
