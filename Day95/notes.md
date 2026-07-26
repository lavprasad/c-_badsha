# Day 95 -- Parsing techniques

Today's goal: understand **Parsing techniques** in plain English, see a tiny code sample for each idea, then practice in `examples/`.

How to study this day:
1. Read each concept's **Plain English** section.
2. Skim the code sample -- predict what it does.
3. Run the matching file under `examples/`.
4. Only then try `questions.md`.

| # | Concept |
|--:|---------|
| 1 | Hand-written parsers |
| 2 | Recursive descent idea |
| 3 | Lexer vs parser |
| 4 | Error recovery |
| 5 | Streaming parse |
| 6 | Grammar ambiguities |
| 7 | Testing parsers |
| 8 | Avoiding regex abuse |
| 9 | AST idea |
| 10 | Parse an expression |

---

## 1. Hand-written parsers

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

Practice: open `examples/01_*.cpp`, predict the output, change one line, re-predict.

## 2. Recursive descent idea

### Plain English

Today's idea — **Recursive descent idea** — fits inside the wider theme of Parsing techniques. Read it as a tool: what job does it do, what rules does it enforce, and what breaks if you ignore those rules?

### Tiny code

```cpp
// Explore: Recursive descent idea
#include <iostream>
int main() {
  std::cout << "practice: Recursive descent idea\n";
  return 0;
}
```

- **Remember:** State one invariant for `Recursive descent idea` before you write code that uses it.
- **Common mistake:** Using `Recursive descent idea` by copy-paste without knowing what it owns or when it is valid.

Practice: open `examples/02_*.cpp`, predict the output, change one line, re-predict.

## 3. Lexer vs parser

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

## 4. Error recovery

### Plain English

Today's idea — **Error recovery** — fits inside the wider theme of Parsing techniques. Read it as a tool: what job does it do, what rules does it enforce, and what breaks if you ignore those rules?

### Tiny code

```cpp
// Explore: Error recovery
#include <iostream>
int main() {
  std::cout << "practice: Error recovery\n";
  return 0;
}
```

- **Remember:** State one invariant for `Error recovery` before you write code that uses it.
- **Common mistake:** Using `Error recovery` by copy-paste without knowing what it owns or when it is valid.

Practice: open `examples/04_*.cpp`, predict the output, change one line, re-predict.

## 5. Streaming parse

### Plain English

Today's idea — **Streaming parse** — fits inside the wider theme of Parsing techniques. Read it as a tool: what job does it do, what rules does it enforce, and what breaks if you ignore those rules?

### Tiny code

```cpp
// Explore: Streaming parse
#include <iostream>
int main() {
  std::cout << "practice: Streaming parse\n";
  return 0;
}
```

- **Remember:** State one invariant for `Streaming parse` before you write code that uses it.
- **Common mistake:** Using `Streaming parse` by copy-paste without knowing what it owns or when it is valid.

Practice: open `examples/05_*.cpp`, predict the output, change one line, re-predict.

## 6. Grammar ambiguities

### Plain English

Today's idea — **Grammar ambiguities** — fits inside the wider theme of Parsing techniques. Read it as a tool: what job does it do, what rules does it enforce, and what breaks if you ignore those rules?

### Tiny code

```cpp
// Explore: Grammar ambiguities
#include <iostream>
int main() {
  std::cout << "practice: Grammar ambiguities\n";
  return 0;
}
```

- **Remember:** State one invariant for `Grammar ambiguities` before you write code that uses it.
- **Common mistake:** Using `Grammar ambiguities` by copy-paste without knowing what it owns or when it is valid.

Practice: open `examples/06_*.cpp`, predict the output, change one line, re-predict.

## 7. Testing parsers

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

## 8. Avoiding regex abuse

### Plain English

Today's idea — **Avoiding regex abuse** — fits inside the wider theme of Parsing techniques. Read it as a tool: what job does it do, what rules does it enforce, and what breaks if you ignore those rules?

### Tiny code

```cpp
// Explore: Avoiding regex abuse
#include <iostream>
int main() {
  std::cout << "practice: Avoiding regex abuse\n";
  return 0;
}
```

- **Remember:** State one invariant for `Avoiding regex abuse` before you write code that uses it.
- **Common mistake:** Using `Avoiding regex abuse` by copy-paste without knowing what it owns or when it is valid.

Practice: open `examples/08_*.cpp`, predict the output, change one line, re-predict.

## 9. AST idea

### Plain English

Today's idea — **AST idea** — fits inside the wider theme of Parsing techniques. Read it as a tool: what job does it do, what rules does it enforce, and what breaks if you ignore those rules?

### Tiny code

```cpp
// Explore: AST idea
#include <iostream>
int main() {
  std::cout << "practice: AST idea\n";
  return 0;
}
```

- **Remember:** State one invariant for `AST idea` before you write code that uses it.
- **Common mistake:** Using `AST idea` by copy-paste without knowing what it owns or when it is valid.

Practice: open `examples/09_*.cpp`, predict the output, change one line, re-predict.

## 10. Parse an expression

### Plain English

Today's idea — **Parse an expression** — fits inside the wider theme of Parsing techniques. Read it as a tool: what job does it do, what rules does it enforce, and what breaks if you ignore those rules?

### Tiny code

```cpp
// Explore: Parse an expression
#include <iostream>
int main() {
  std::cout << "practice: Parse an expression\n";
  return 0;
}
```

- **Remember:** State one invariant for `Parse an expression` before you write code that uses it.
- **Common mistake:** Using `Parse an expression` by copy-paste without knowing what it owns or when it is valid.

Practice: open `examples/10_*.cpp`, predict the output, change one line, re-predict.

---

## What you should be able to do after Day 95

- Explain `Parsing techniques` to a peer without looking at notes.
- Compile and run all 10 examples with `-std=c++17 -Wall -Wextra` (use newer flags only when the day needs C++20+).
- Answer the 5 questions in `questions.md` before peeking at `answers.md`.
- Write one tiny extra program that combines at least 3 of today's concepts.

Or open this day in the **Badsha hub** (`python3 hub/server.py`) and use Learn / Practice / Quiz tabs.
