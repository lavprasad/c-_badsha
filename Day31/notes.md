# Day 31 -- Structured bindings (C++17)

Today's goal: understand **Structured bindings (C++17)** in plain English, see a tiny code sample for each idea, then practice in `examples/`.

How to study this day:
1. Read each concept's **Plain English** section.
2. Skim the code sample -- predict what it does.
3. Run the matching file under `examples/`.
4. Only then try `questions.md`.

| # | Concept |
|--:|---------|
| 1 | Binding pairs |
| 2 | Binding tuples |
| 3 | Binding arrays |
| 4 | Binding struct members |
| 5 | const auto& bindings |
| 6 | Ignoring with [[maybe_unused]] |
| 7 | Map iteration with bindings |
| 8 | Limitations |
| 9 | Readability wins |
| 10 | Refactoring old code |

---

## 1. Binding pairs

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

## 2. Binding tuples

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

## 3. Binding arrays

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

## 4. Binding struct members

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

## 5. const auto& bindings

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

## 6. Ignoring with [[maybe_unused]]

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

## 7. Map iteration with bindings

### Plain English

`map` keeps keys sorted (tree); `unordered_map` hashes for average O(1) lookup. Pick sorted when you need order; pick hash when you need speed and have a good hash.

### Tiny code

```cpp
std::unordered_map<std::string, int> freq;
++freq["hi"];
for (auto& [k, v] : freq) std::cout << k << ':' << v << '\n';
```

- **Remember:** `operator[]` default-inserts a value if the key is missing.
- **Common mistake:** Using `[]` when you only meant to look up — prefer `find` / `at` if missing should be an error.

Practice: open `examples/07_*.cpp`, predict the output, change one line, re-predict.

## 8. Limitations

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

## 9. Readability wins

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

## 10. Refactoring old code

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

## What you should be able to do after Day 31

- Explain `Structured bindings (C++17)` to a peer without looking at notes.
- Compile and run all 10 examples with `-std=c++17 -Wall -Wextra` (use newer flags only when the day needs C++20+).
- Answer the 5 questions in `questions.md` before peeking at `answers.md`.
- Write one tiny extra program that combines at least 3 of today's concepts.

Or open this day in the **Badsha hub** (`python3 hub/server.py`) and use Learn / Practice / Quiz tabs.
