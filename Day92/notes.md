# Day 92 -- Networking sockets intro (POSIX)

Today's goal: understand **Networking sockets intro (POSIX)** in plain English, see a tiny code sample for each idea, then practice in `examples/`.

How to study this day:
1. Read each concept's **Plain English** section.
2. Skim the code sample -- predict what it does.
3. Run the matching file under `examples/`.
4. Only then try `questions.md`.

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

### Plain English

Sockets are OS endpoints for network bytes. TCP gives a reliable stream; you still must frame messages yourself. Always check return codes and handle partial reads/writes.

### Tiny code

```cpp
// Conceptual — details are OS-specific
// sock = socket(...);
// connect(sock, ...);
// send(sock, buf, n, 0);
```

- **Remember:** Network data is bytes; convert integers with endian helpers.
- **Common mistake:** Assuming one `recv` returns one complete application message.

Practice: open `examples/01_*.cpp`, predict the output, change one line, re-predict.

## 2. socket/bind/listen/accept

### Plain English

Sockets are OS endpoints for network bytes. TCP gives a reliable stream; you still must frame messages yourself. Always check return codes and handle partial reads/writes.

### Tiny code

```cpp
// Conceptual — details are OS-specific
// sock = socket(...);
// connect(sock, ...);
// send(sock, buf, n, 0);
```

- **Remember:** Network data is bytes; convert integers with endian helpers.
- **Common mistake:** Assuming one `recv` returns one complete application message.

Practice: open `examples/02_*.cpp`, predict the output, change one line, re-predict.

## 3. connect/send/recv

### Plain English

Iterators are like advanced pointers into a container. Algorithms take `[begin, end)` half-open ranges. Know when inserts/erases invalidate them.

### Tiny code

```cpp
std::vector<int> v{1,2,3};
for (auto it = v.begin(); it != v.end(); ++it)
  std::cout << *it << ' ';
```

- **Remember:** After erase, use the iterator that `erase` returns.
- **Common mistake:** Incrementing an invalidated iterator → undefined behaviour.

Practice: open `examples/03_*.cpp`, predict the output, change one line, re-predict.

## 4. Byte streams

### Plain English

Sockets are OS endpoints for network bytes. TCP gives a reliable stream; you still must frame messages yourself. Always check return codes and handle partial reads/writes.

### Tiny code

```cpp
// Conceptual — details are OS-specific
// sock = socket(...);
// connect(sock, ...);
// send(sock, buf, n, 0);
```

- **Remember:** Network data is bytes; convert integers with endian helpers.
- **Common mistake:** Assuming one `recv` returns one complete application message.

Practice: open `examples/04_*.cpp`, predict the output, change one line, re-predict.

## 5. Endianness htons

### Plain English

Iterators are like advanced pointers into a container. Algorithms take `[begin, end)` half-open ranges. Know when inserts/erases invalidate them.

### Tiny code

```cpp
std::vector<int> v{1,2,3};
for (auto it = v.begin(); it != v.end(); ++it)
  std::cout << *it << ' ';
```

- **Remember:** After erase, use the iterator that `erase` returns.
- **Common mistake:** Incrementing an invalidated iterator → undefined behaviour.

Practice: open `examples/05_*.cpp`, predict the output, change one line, re-predict.

## 6. Blocking I/O

### Plain English

Sockets are OS endpoints for network bytes. TCP gives a reliable stream; you still must frame messages yourself. Always check return codes and handle partial reads/writes.

### Tiny code

```cpp
// Conceptual — details are OS-specific
// sock = socket(...);
// connect(sock, ...);
// send(sock, buf, n, 0);
```

- **Remember:** Network data is bytes; convert integers with endian helpers.
- **Common mistake:** Assuming one `recv` returns one complete application message.

Practice: open `examples/06_*.cpp`, predict the output, change one line, re-predict.

## 7. Errors and errno

### Plain English

Sockets are OS endpoints for network bytes. TCP gives a reliable stream; you still must frame messages yourself. Always check return codes and handle partial reads/writes.

### Tiny code

```cpp
// Conceptual — details are OS-specific
// sock = socket(...);
// connect(sock, ...);
// send(sock, buf, n, 0);
```

- **Remember:** Network data is bytes; convert integers with endian helpers.
- **Common mistake:** Assuming one `recv` returns one complete application message.

Practice: open `examples/07_*.cpp`, predict the output, change one line, re-predict.

## 8. Closing sockets

### Plain English

Sockets are OS endpoints for network bytes. TCP gives a reliable stream; you still must frame messages yourself. Always check return codes and handle partial reads/writes.

### Tiny code

```cpp
// Conceptual — details are OS-specific
// sock = socket(...);
// connect(sock, ...);
// send(sock, buf, n, 0);
```

- **Remember:** Network data is bytes; convert integers with endian helpers.
- **Common mistake:** Assuming one `recv` returns one complete application message.

Practice: open `examples/08_*.cpp`, predict the output, change one line, re-predict.

## 9. Simple echo server sketch

### Plain English

Sockets are OS endpoints for network bytes. TCP gives a reliable stream; you still must frame messages yourself. Always check return codes and handle partial reads/writes.

### Tiny code

```cpp
// Conceptual — details are OS-specific
// sock = socket(...);
// connect(sock, ...);
// send(sock, buf, n, 0);
```

- **Remember:** Network data is bytes; convert integers with endian helpers.
- **Common mistake:** Assuming one `recv` returns one complete application message.

Practice: open `examples/09_*.cpp`, predict the output, change one line, re-predict.

## 10. Client sketch

### Plain English

Sockets are OS endpoints for network bytes. TCP gives a reliable stream; you still must frame messages yourself. Always check return codes and handle partial reads/writes.

### Tiny code

```cpp
// Conceptual — details are OS-specific
// sock = socket(...);
// connect(sock, ...);
// send(sock, buf, n, 0);
```

- **Remember:** Network data is bytes; convert integers with endian helpers.
- **Common mistake:** Assuming one `recv` returns one complete application message.

Practice: open `examples/10_*.cpp`, predict the output, change one line, re-predict.

---

## What you should be able to do after Day 92

- Explain `Networking sockets intro (POSIX)` to a peer without looking at notes.
- Compile and run all 10 examples with `-std=c++17 -Wall -Wextra` (use newer flags only when the day needs C++20+).
- Answer the 5 questions in `questions.md` before peeking at `answers.md`.
- Write one tiny extra program that combines at least 3 of today's concepts.

Or open this day in the **Badsha hub** (`python3 hub/server.py`) and use Learn / Practice / Quiz tabs.
