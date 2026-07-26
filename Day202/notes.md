# Day 202 -- Windows vs Linux notes for C++

Today's goal: understand **Windows vs Linux notes for C++** in plain English, see a tiny code sample for each idea, then practice in `examples/`.

How to study this day:
1. Read each concept's **Plain English** section.
2. Skim the code sample -- predict what it does.
3. Run the matching file under `examples/`.
4. Only then try `questions.md`.

| # | Concept |
|--:|---------|
| 1 | Toolchains |
| 2 | Path APIs |
| 3 | Process APIs |
| 4 | DLL vs .so |
| 5 | CRT differences |
| 6 | Line buffering |
| 7 | Case sensitivity |
| 8 | Permissions |
| 9 | Debuggers |
| 10 | Portability checklist |

---

## 1. Toolchains

### Plain English

Today's idea — **Toolchains** — fits inside the wider theme of Windows vs Linux notes for C++. Read it as a tool: what job does it do, what rules does it enforce, and what breaks if you ignore those rules?

### Tiny code

```cpp
// Explore: Toolchains
#include <iostream>
int main() {
  std::cout << "practice: Toolchains\n";
  return 0;
}
```

- **Remember:** State one invariant for `Toolchains` before you write code that uses it.
- **Common mistake:** Using `Toolchains` by copy-paste without knowing what it owns or when it is valid.

Practice: open `examples/01_*.cpp`, predict the output, change one line, re-predict.

## 2. Path APIs

### Plain English

`std::filesystem` gives portable paths and directory walks. Prefer `path` objects over hand-rolled string concatenation for joining folders.

### Tiny code

```cpp
#include <filesystem>
namespace fs = std::filesystem;
for (auto& e : fs::directory_iterator(".")) {
  std::cout << e.path() << '\n';
}
```

- **Remember:** Check `exists` / handle errors — disks fail.
- **Common mistake:** Assuming `/` path separators on every OS without using `path`.

Practice: open `examples/02_*.cpp`, predict the output, change one line, re-predict.

## 3. Process APIs

### Plain English

Today's idea — **Process APIs** — fits inside the wider theme of Windows vs Linux notes for C++. Read it as a tool: what job does it do, what rules does it enforce, and what breaks if you ignore those rules?

### Tiny code

```cpp
// Explore: Process APIs
#include <iostream>
int main() {
  std::cout << "practice: Process APIs\n";
  return 0;
}
```

- **Remember:** State one invariant for `Process APIs` before you write code that uses it.
- **Common mistake:** Using `Process APIs` by copy-paste without knowing what it owns or when it is valid.

Practice: open `examples/03_*.cpp`, predict the output, change one line, re-predict.

## 4. DLL vs .so

### Plain English

Today's idea — **DLL vs .so** — fits inside the wider theme of Windows vs Linux notes for C++. Read it as a tool: what job does it do, what rules does it enforce, and what breaks if you ignore those rules?

### Tiny code

```cpp
// Explore: DLL vs .so
#include <iostream>
int main() {
  std::cout << "practice: DLL vs .so\n";
  return 0;
}
```

- **Remember:** State one invariant for `DLL vs .so` before you write code that uses it.
- **Common mistake:** Using `DLL vs .so` by copy-paste without knowing what it owns or when it is valid.

Practice: open `examples/04_*.cpp`, predict the output, change one line, re-predict.

## 5. CRT differences

### Plain English

Today's idea — **CRT differences** — fits inside the wider theme of Windows vs Linux notes for C++. Read it as a tool: what job does it do, what rules does it enforce, and what breaks if you ignore those rules?

### Tiny code

```cpp
// Explore: CRT differences
#include <iostream>
int main() {
  std::cout << "practice: CRT differences\n";
  return 0;
}
```

- **Remember:** State one invariant for `CRT differences` before you write code that uses it.
- **Common mistake:** Using `CRT differences` by copy-paste without knowing what it owns or when it is valid.

Practice: open `examples/05_*.cpp`, predict the output, change one line, re-predict.

## 6. Line buffering

### Plain English

Today's idea — **Line buffering** — fits inside the wider theme of Windows vs Linux notes for C++. Read it as a tool: what job does it do, what rules does it enforce, and what breaks if you ignore those rules?

### Tiny code

```cpp
// Explore: Line buffering
#include <iostream>
int main() {
  std::cout << "practice: Line buffering\n";
  return 0;
}
```

- **Remember:** State one invariant for `Line buffering` before you write code that uses it.
- **Common mistake:** Using `Line buffering` by copy-paste without knowing what it owns or when it is valid.

Practice: open `examples/06_*.cpp`, predict the output, change one line, re-predict.

## 7. Case sensitivity

### Plain English

Today's idea — **Case sensitivity** — fits inside the wider theme of Windows vs Linux notes for C++. Read it as a tool: what job does it do, what rules does it enforce, and what breaks if you ignore those rules?

### Tiny code

```cpp
// Explore: Case sensitivity
#include <iostream>
int main() {
  std::cout << "practice: Case sensitivity\n";
  return 0;
}
```

- **Remember:** State one invariant for `Case sensitivity` before you write code that uses it.
- **Common mistake:** Using `Case sensitivity` by copy-paste without knowing what it owns or when it is valid.

Practice: open `examples/07_*.cpp`, predict the output, change one line, re-predict.

## 8. Permissions

### Plain English

Today's idea — **Permissions** — fits inside the wider theme of Windows vs Linux notes for C++. Read it as a tool: what job does it do, what rules does it enforce, and what breaks if you ignore those rules?

### Tiny code

```cpp
// Explore: Permissions
#include <iostream>
int main() {
  std::cout << "practice: Permissions\n";
  return 0;
}
```

- **Remember:** State one invariant for `Permissions` before you write code that uses it.
- **Common mistake:** Using `Permissions` by copy-paste without knowing what it owns or when it is valid.

Practice: open `examples/08_*.cpp`, predict the output, change one line, re-predict.

## 9. Debuggers

### Plain English

Assertions document invariants. `assert` is for runtime checks in debug builds; `static_assert` fails at compile time. Sanitizers catch many memory and UB bugs early.

### Tiny code

```cpp
#include <cassert>
assert(index < size);
static_assert(sizeof(int) >= 4, "need 32-bit int");
```

- **Remember:** Asserts are not for user-facing error handling.
- **Common mistake:** Putting required validation only in `assert` — it disappears in release (`NDEBUG`).

Practice: open `examples/09_*.cpp`, predict the output, change one line, re-predict.

## 10. Portability checklist

### Plain English

Today's idea — **Portability checklist** — fits inside the wider theme of Windows vs Linux notes for C++. Read it as a tool: what job does it do, what rules does it enforce, and what breaks if you ignore those rules?

### Tiny code

```cpp
// Explore: Portability checklist
#include <iostream>
int main() {
  std::cout << "practice: Portability checklist\n";
  return 0;
}
```

- **Remember:** State one invariant for `Portability checklist` before you write code that uses it.
- **Common mistake:** Using `Portability checklist` by copy-paste without knowing what it owns or when it is valid.

Practice: open `examples/10_*.cpp`, predict the output, change one line, re-predict.

---

## What you should be able to do after Day 202

- Explain `Windows vs Linux notes for C++` to a peer without looking at notes.
- Compile and run all 10 examples with `-std=c++17 -Wall -Wextra` (use newer flags only when the day needs C++20+).
- Answer the 5 questions in `questions.md` before peeking at `answers.md`.
- Write one tiny extra program that combines at least 3 of today's concepts.

Or open this day in the **Badsha hub** (`python3 hub/server.py`) and use Learn / Practice / Quiz tabs.
