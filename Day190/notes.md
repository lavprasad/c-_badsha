# Day 190 -- Project: Image PPM toolkit

Today's goal: understand **Project: Image PPM toolkit** in plain English, see a tiny code sample for each idea, then practice in `examples/`.

How to study this day:
1. Read each concept's **Plain English** section.
2. Skim the code sample -- predict what it does.
3. Run the matching file under `examples/`.
4. Only then try `questions.md`.

| # | Concept |
|--:|---------|
| 1 | PPM format |
| 2 | Read/write |
| 3 | Filters |
| 4 | Convolution |
| 5 | Brighten/contrast |
| 6 | CLI |
| 7 | Tests |
| 8 | Perf |
| 9 | Extending formats |
| 10 | Ship ppmtool |

---

## 1. PPM format

### Plain English

Modern C++ (20+) adds safer views (`span`, ranges), clearer comparisons (`<=>`), and better formatting. Use them when your toolchain supports them; otherwise stick to C++17 patterns taught earlier.

### Tiny code

```cpp
// C++20 sketch
// std::span<int> s = arr;
// auto evens = v | std::views::filter([](int x){ return x % 2 == 0; });
```

- **Remember:** Check your compiler's C++20/23 support before relying on these.
- **Common mistake:** Assuming every machine in class/CI has full C++20 library support.

Practice: open `examples/01_*.cpp`, predict the output, change one line, re-predict.

## 2. Read/write

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

Practice: open `examples/02_*.cpp`, predict the output, change one line, re-predict.

## 3. Filters

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

Practice: open `examples/03_*.cpp`, predict the output, change one line, re-predict.

## 4. Convolution

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

Practice: open `examples/04_*.cpp`, predict the output, change one line, re-predict.

## 5. Brighten/contrast

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

## 6. CLI

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

Practice: open `examples/06_*.cpp`, predict the output, change one line, re-predict.

## 7. Tests

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

Practice: open `examples/07_*.cpp`, predict the output, change one line, re-predict.

## 8. Perf

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

Practice: open `examples/08_*.cpp`, predict the output, change one line, re-predict.

## 9. Extending formats

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

Practice: open `examples/09_*.cpp`, predict the output, change one line, re-predict.

## 10. Ship ppmtool

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

## What you should be able to do after Day 190

- Explain `Project: Image PPM toolkit` to a peer without looking at notes.
- Compile and run all 10 examples with `-std=c++17 -Wall -Wextra` (use newer flags only when the day needs C++20+).
- Answer the 5 questions in `questions.md` before peeking at `answers.md`.
- Write one tiny extra program that combines at least 3 of today's concepts.

Or open this day in the **Badsha hub** (`python3 hub/server.py`) and use Learn / Practice / Quiz tabs.
