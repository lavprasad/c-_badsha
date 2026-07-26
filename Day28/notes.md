# Day 28 -- Command-line args

Today's goal: understand **Command-line args** in plain English, see a tiny code sample for each idea, then practice in `examples/`.

How to study this day:
1. Read each concept's **Plain English** section.
2. Skim the code sample -- predict what it does.
3. Run the matching file under `examples/`.
4. Only then try `questions.md`.

| # | Concept |
|--:|---------|
| 1 | argc and argv |
| 2 | Parsing flags manually |
| 3 | Converting argv to types |
| 4 | Usage messages |
| 5 | Exit codes |
| 6 | Environment variables getenv |
| 7 | Path arguments |
| 8 | Validating input |
| 9 | Subcommands idea |
| 10 | A tiny CLI tool |

---

## 1. argc and argv

### Plain English

Today's idea — **argc and argv** — fits inside the wider theme of Command-line args. Read it as a tool: what job does it do, what rules does it enforce, and what breaks if you ignore those rules?

### Tiny code

```cpp
// Explore: argc and argv
#include <iostream>
int main() {
  std::cout << "practice: argc and argv\n";
  return 0;
}
```

- **Remember:** State one invariant for `argc and argv` before you write code that uses it.
- **Common mistake:** Using `argc and argv` by copy-paste without knowing what it owns or when it is valid.

Practice: open `examples/01_*.cpp`, predict the output, change one line, re-predict.

## 2. Parsing flags manually

### Plain English

Today's idea — **Parsing flags manually** — fits inside the wider theme of Command-line args. Read it as a tool: what job does it do, what rules does it enforce, and what breaks if you ignore those rules?

### Tiny code

```cpp
// Explore: Parsing flags manually
#include <iostream>
int main() {
  std::cout << "practice: Parsing flags manually\n";
  return 0;
}
```

- **Remember:** State one invariant for `Parsing flags manually` before you write code that uses it.
- **Common mistake:** Using `Parsing flags manually` by copy-paste without knowing what it owns or when it is valid.

Practice: open `examples/02_*.cpp`, predict the output, change one line, re-predict.

## 3. Converting argv to types

### Plain English

Today's idea — **Converting argv to types** — fits inside the wider theme of Command-line args. Read it as a tool: what job does it do, what rules does it enforce, and what breaks if you ignore those rules?

### Tiny code

```cpp
// Explore: Converting argv to types
#include <iostream>
int main() {
  std::cout << "practice: Converting argv to types\n";
  return 0;
}
```

- **Remember:** State one invariant for `Converting argv to types` before you write code that uses it.
- **Common mistake:** Using `Converting argv to types` by copy-paste without knowing what it owns or when it is valid.

Practice: open `examples/03_*.cpp`, predict the output, change one line, re-predict.

## 4. Usage messages

### Plain English

Today's idea — **Usage messages** — fits inside the wider theme of Command-line args. Read it as a tool: what job does it do, what rules does it enforce, and what breaks if you ignore those rules?

### Tiny code

```cpp
// Explore: Usage messages
#include <iostream>
int main() {
  std::cout << "practice: Usage messages\n";
  return 0;
}
```

- **Remember:** State one invariant for `Usage messages` before you write code that uses it.
- **Common mistake:** Using `Usage messages` by copy-paste without knowing what it owns or when it is valid.

Practice: open `examples/04_*.cpp`, predict the output, change one line, re-predict.

## 5. Exit codes

### Plain English

Today's idea — **Exit codes** — fits inside the wider theme of Command-line args. Read it as a tool: what job does it do, what rules does it enforce, and what breaks if you ignore those rules?

### Tiny code

```cpp
// Explore: Exit codes
#include <iostream>
int main() {
  std::cout << "practice: Exit codes\n";
  return 0;
}
```

- **Remember:** State one invariant for `Exit codes` before you write code that uses it.
- **Common mistake:** Using `Exit codes` by copy-paste without knowing what it owns or when it is valid.

Practice: open `examples/05_*.cpp`, predict the output, change one line, re-predict.

## 6. Environment variables getenv

### Plain English

Today's idea — **Environment variables getenv** — fits inside the wider theme of Command-line args. Read it as a tool: what job does it do, what rules does it enforce, and what breaks if you ignore those rules?

### Tiny code

```cpp
// Explore: Environment variables getenv
#include <iostream>
int main() {
  std::cout << "practice: Environment variables getenv\n";
  return 0;
}
```

- **Remember:** State one invariant for `Environment variables getenv` before you write code that uses it.
- **Common mistake:** Using `Environment variables getenv` by copy-paste without knowing what it owns or when it is valid.

Practice: open `examples/06_*.cpp`, predict the output, change one line, re-predict.

## 7. Path arguments

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

Practice: open `examples/07_*.cpp`, predict the output, change one line, re-predict.

## 8. Validating input

### Plain English

Today's idea — **Validating input** — fits inside the wider theme of Command-line args. Read it as a tool: what job does it do, what rules does it enforce, and what breaks if you ignore those rules?

### Tiny code

```cpp
// Explore: Validating input
#include <iostream>
int main() {
  std::cout << "practice: Validating input\n";
  return 0;
}
```

- **Remember:** State one invariant for `Validating input` before you write code that uses it.
- **Common mistake:** Using `Validating input` by copy-paste without knowing what it owns or when it is valid.

Practice: open `examples/08_*.cpp`, predict the output, change one line, re-predict.

## 9. Subcommands idea

### Plain English

Today's idea — **Subcommands idea** — fits inside the wider theme of Command-line args. Read it as a tool: what job does it do, what rules does it enforce, and what breaks if you ignore those rules?

### Tiny code

```cpp
// Explore: Subcommands idea
#include <iostream>
int main() {
  std::cout << "practice: Subcommands idea\n";
  return 0;
}
```

- **Remember:** State one invariant for `Subcommands idea` before you write code that uses it.
- **Common mistake:** Using `Subcommands idea` by copy-paste without knowing what it owns or when it is valid.

Practice: open `examples/09_*.cpp`, predict the output, change one line, re-predict.

## 10. A tiny CLI tool

### Plain English

Projects glue skills: clear requirements, small modules, tests, and honest docs. Start with a tiny vertical slice that runs end-to-end, then thicken features.

### Tiny code

```cpp
int main(int argc, char** argv) {
  if (argc < 2) {
    std::cerr << "usage: tool <file>\n";
    return 1;
  }
  // ...
}
```

- **Remember:** Ship a working subset before polishing edge cases.
- **Common mistake:** Building scaffolding for weeks with nothing runnable.

Practice: open `examples/10_*.cpp`, predict the output, change one line, re-predict.

---

## What you should be able to do after Day 28

- Explain `Command-line args` to a peer without looking at notes.
- Compile and run all 10 examples with `-std=c++17 -Wall -Wextra` (use newer flags only when the day needs C++20+).
- Answer the 5 questions in `questions.md` before peeking at `answers.md`.
- Write one tiny extra program that combines at least 3 of today's concepts.

Or open this day in the **Badsha hub** (`python3 hub/server.py`) and use Learn / Practice / Quiz tabs.
