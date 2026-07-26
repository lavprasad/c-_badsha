# Day 211 -- Capstone: portfolio polish

Today's goal: understand **Capstone: portfolio polish** in plain English, see a tiny code sample for each idea, then practice in `examples/`.

How to study this day:
1. Read each concept's **Plain English** section.
2. Skim the code sample -- predict what it does.
3. Run the matching file under `examples/`.
4. Only then try `questions.md`.

| # | Concept |
|--:|---------|
| 1 | README quality |
| 2 | Build instructions |
| 3 | Tests visible |
| 4 | Design docs |
| 5 | Benchmarks |
| 6 | License |
| 7 | Screenshots/logs |
| 8 | Scope honesty |
| 9 | Next steps |
| 10 | Publish checklist |

---

## 1. README quality

### Plain English

Today's idea — **README quality** — fits inside the wider theme of Capstone: portfolio polish. Read it as a tool: what job does it do, what rules does it enforce, and what breaks if you ignore those rules?

### Tiny code

```cpp
// Explore: README quality
#include <iostream>
int main() {
  std::cout << "practice: README quality\n";
  return 0;
}
```

- **Remember:** State one invariant for `README quality` before you write code that uses it.
- **Common mistake:** Using `README quality` by copy-paste without knowing what it owns or when it is valid.

Practice: open `examples/01_*.cpp`, predict the output, change one line, re-predict.

## 2. Build instructions

### Plain English

A class bundles data with the operations that keep it valid. Constructors establish invariants; destructors release resources. `struct` defaults to public, `class` to private — that is the main difference.

### Tiny code

```cpp
class Counter {
  int n_ = 0;
public:
  void inc() { ++n_; }
  int get() const { return n_; }
};
```

- **Remember:** Keep data private if invariants matter; expose operations.
- **Common mistake:** Public data fields that let callers break class invariants.

Practice: open `examples/02_*.cpp`, predict the output, change one line, re-predict.

## 3. Tests visible

### Plain English

Today's idea — **Tests visible** — fits inside the wider theme of Capstone: portfolio polish. Read it as a tool: what job does it do, what rules does it enforce, and what breaks if you ignore those rules?

### Tiny code

```cpp
// Explore: Tests visible
#include <iostream>
int main() {
  std::cout << "practice: Tests visible\n";
  return 0;
}
```

- **Remember:** State one invariant for `Tests visible` before you write code that uses it.
- **Common mistake:** Using `Tests visible` by copy-paste without knowing what it owns or when it is valid.

Practice: open `examples/03_*.cpp`, predict the output, change one line, re-predict.

## 4. Design docs

### Plain English

Today's idea — **Design docs** — fits inside the wider theme of Capstone: portfolio polish. Read it as a tool: what job does it do, what rules does it enforce, and what breaks if you ignore those rules?

### Tiny code

```cpp
// Explore: Design docs
#include <iostream>
int main() {
  std::cout << "practice: Design docs\n";
  return 0;
}
```

- **Remember:** State one invariant for `Design docs` before you write code that uses it.
- **Common mistake:** Using `Design docs` by copy-paste without knowing what it owns or when it is valid.

Practice: open `examples/04_*.cpp`, predict the output, change one line, re-predict.

## 5. Benchmarks

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

Practice: open `examples/05_*.cpp`, predict the output, change one line, re-predict.

## 6. License

### Plain English

Today's idea — **License** — fits inside the wider theme of Capstone: portfolio polish. Read it as a tool: what job does it do, what rules does it enforce, and what breaks if you ignore those rules?

### Tiny code

```cpp
// Explore: License
#include <iostream>
int main() {
  std::cout << "practice: License\n";
  return 0;
}
```

- **Remember:** State one invariant for `License` before you write code that uses it.
- **Common mistake:** Using `License` by copy-paste without knowing what it owns or when it is valid.

Practice: open `examples/06_*.cpp`, predict the output, change one line, re-predict.

## 7. Screenshots/logs

### Plain English

Today's idea — **Screenshots/logs** — fits inside the wider theme of Capstone: portfolio polish. Read it as a tool: what job does it do, what rules does it enforce, and what breaks if you ignore those rules?

### Tiny code

```cpp
// Explore: Screenshots/logs
#include <iostream>
int main() {
  std::cout << "practice: Screenshots/logs\n";
  return 0;
}
```

- **Remember:** State one invariant for `Screenshots/logs` before you write code that uses it.
- **Common mistake:** Using `Screenshots/logs` by copy-paste without knowing what it owns or when it is valid.

Practice: open `examples/07_*.cpp`, predict the output, change one line, re-predict.

## 8. Scope honesty

### Plain English

Today's idea — **Scope honesty** — fits inside the wider theme of Capstone: portfolio polish. Read it as a tool: what job does it do, what rules does it enforce, and what breaks if you ignore those rules?

### Tiny code

```cpp
// Explore: Scope honesty
#include <iostream>
int main() {
  std::cout << "practice: Scope honesty\n";
  return 0;
}
```

- **Remember:** State one invariant for `Scope honesty` before you write code that uses it.
- **Common mistake:** Using `Scope honesty` by copy-paste without knowing what it owns or when it is valid.

Practice: open `examples/08_*.cpp`, predict the output, change one line, re-predict.

## 9. Next steps

### Plain English

Today's idea — **Next steps** — fits inside the wider theme of Capstone: portfolio polish. Read it as a tool: what job does it do, what rules does it enforce, and what breaks if you ignore those rules?

### Tiny code

```cpp
// Explore: Next steps
#include <iostream>
int main() {
  std::cout << "practice: Next steps\n";
  return 0;
}
```

- **Remember:** State one invariant for `Next steps` before you write code that uses it.
- **Common mistake:** Using `Next steps` by copy-paste without knowing what it owns or when it is valid.

Practice: open `examples/09_*.cpp`, predict the output, change one line, re-predict.

## 10. Publish checklist

### Plain English

Today's idea — **Publish checklist** — fits inside the wider theme of Capstone: portfolio polish. Read it as a tool: what job does it do, what rules does it enforce, and what breaks if you ignore those rules?

### Tiny code

```cpp
// Explore: Publish checklist
#include <iostream>
int main() {
  std::cout << "practice: Publish checklist\n";
  return 0;
}
```

- **Remember:** State one invariant for `Publish checklist` before you write code that uses it.
- **Common mistake:** Using `Publish checklist` by copy-paste without knowing what it owns or when it is valid.

Practice: open `examples/10_*.cpp`, predict the output, change one line, re-predict.

---

## What you should be able to do after Day 211

- Explain `Capstone: portfolio polish` to a peer without looking at notes.
- Compile and run all 10 examples with `-std=c++17 -Wall -Wextra` (use newer flags only when the day needs C++20+).
- Answer the 5 questions in `questions.md` before peeking at `answers.md`.
- Write one tiny extra program that combines at least 3 of today's concepts.

Or open this day in the **Badsha hub** (`python3 hub/server.py`) and use Learn / Practice / Quiz tabs.
