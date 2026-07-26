# Day 111 -- POSIX essentials for C++

Today's goal: understand **POSIX essentials for C++** in plain English, see a tiny code sample for each idea, then practice in `examples/`.

How to study this day:
1. Read each concept's **Plain English** section.
2. Skim the code sample -- predict what it does.
3. Run the matching file under `examples/`.
4. Only then try `questions.md`.

| # | Concept |
|--:|---------|
| 1 | errno |
| 2 | perror / strerror |
| 3 | fork/exec idea |
| 4 | waitpid idea |
| 5 | signals cautious use |
| 6 | pipe |
| 7 | dup2 idea |
| 8 | File descriptors vs FILE* |
| 9 | Non-blocking flags |
| 10 | A spawn helper sketch |

---

## 1. errno

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

## 2. perror / strerror

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

## 3. fork/exec idea

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

Practice: open `examples/03_*.cpp`, predict the output, change one line, re-predict.

## 4. waitpid idea

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

## 5. signals cautious use

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

Practice: open `examples/05_*.cpp`, predict the output, change one line, re-predict.

## 6. pipe

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

## 7. dup2 idea

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

## 8. File descriptors vs FILE*

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

## 9. Non-blocking flags

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

## 10. A spawn helper sketch

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

## What you should be able to do after Day 111

- Explain `POSIX essentials for C++` to a peer without looking at notes.
- Compile and run all 10 examples with `-std=c++17 -Wall -Wextra` (use newer flags only when the day needs C++20+).
- Answer the 5 questions in `questions.md` before peeking at `answers.md`.
- Write one tiny extra program that combines at least 3 of today's concepts.

Or open this day in the **Badsha hub** (`python3 hub/server.py`) and use Learn / Practice / Quiz tabs.
