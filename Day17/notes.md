# Day 17 -- Namespaces deep dive

Today's goal: understand **Namespaces deep dive** in plain English, see a tiny code sample for each idea, then practice in `examples/`.

How to study this day:
1. Read each concept's **Plain English** section.
2. Skim the code sample -- predict what it does.
3. Run the matching file under `examples/`.
4. Only then try `questions.md`.

| # | Concept |
|--:|---------|
| 1 | Nested namespaces |
| 2 | Inline namespaces |
| 3 | Anonymous namespaces |
| 4 | using-declarations vs using-directives |
| 5 | ADL (argument-dependent lookup) |
| 6 | Namespace aliases |
| 7 | Header hygiene with namespaces |
| 8 | std:: and user namespaces |
| 9 | Avoiding name clashes |
| 10 | Organizing a small library |

---

## 1. Nested namespaces

### Plain English

Namespaces group names so `draw` in graphics does not clash with `draw` in cards. Prefer `std::` qualification; avoid `using namespace std;` in headers.

### Tiny code

```cpp
namespace app {
  void run();
}
void app::run() { /* ... */ }
```

- **Remember:** Never put `using namespace std;` in a header.
- **Common mistake:** Dumping everything into the global namespace and getting silent overload clashes.

Practice: open `examples/01_*.cpp`, predict the output, change one line, re-predict.

## 2. Inline namespaces

### Plain English

Namespaces group names so `draw` in graphics does not clash with `draw` in cards. Prefer `std::` qualification; avoid `using namespace std;` in headers.

### Tiny code

```cpp
namespace app {
  void run();
}
void app::run() { /* ... */ }
```

- **Remember:** Never put `using namespace std;` in a header.
- **Common mistake:** Dumping everything into the global namespace and getting silent overload clashes.

Practice: open `examples/02_*.cpp`, predict the output, change one line, re-predict.

## 3. Anonymous namespaces

### Plain English

Namespaces group names so `draw` in graphics does not clash with `draw` in cards. Prefer `std::` qualification; avoid `using namespace std;` in headers.

### Tiny code

```cpp
namespace app {
  void run();
}
void app::run() { /* ... */ }
```

- **Remember:** Never put `using namespace std;` in a header.
- **Common mistake:** Dumping everything into the global namespace and getting silent overload clashes.

Practice: open `examples/03_*.cpp`, predict the output, change one line, re-predict.

## 4. using-declarations vs using-directives

### Plain English

Namespaces group names so `draw` in graphics does not clash with `draw` in cards. Prefer `std::` qualification; avoid `using namespace std;` in headers.

### Tiny code

```cpp
namespace app {
  void run();
}
void app::run() { /* ... */ }
```

- **Remember:** Never put `using namespace std;` in a header.
- **Common mistake:** Dumping everything into the global namespace and getting silent overload clashes.

Practice: open `examples/04_*.cpp`, predict the output, change one line, re-predict.

## 5. ADL (argument-dependent lookup)

### Plain English

Namespaces group names so `draw` in graphics does not clash with `draw` in cards. Prefer `std::` qualification; avoid `using namespace std;` in headers.

### Tiny code

```cpp
namespace app {
  void run();
}
void app::run() { /* ... */ }
```

- **Remember:** Never put `using namespace std;` in a header.
- **Common mistake:** Dumping everything into the global namespace and getting silent overload clashes.

Practice: open `examples/05_*.cpp`, predict the output, change one line, re-predict.

## 6. Namespace aliases

### Plain English

Namespaces group names so `draw` in graphics does not clash with `draw` in cards. Prefer `std::` qualification; avoid `using namespace std;` in headers.

### Tiny code

```cpp
namespace app {
  void run();
}
void app::run() { /* ... */ }
```

- **Remember:** Never put `using namespace std;` in a header.
- **Common mistake:** Dumping everything into the global namespace and getting silent overload clashes.

Practice: open `examples/06_*.cpp`, predict the output, change one line, re-predict.

## 7. Header hygiene with namespaces

### Plain English

Namespaces group names so `draw` in graphics does not clash with `draw` in cards. Prefer `std::` qualification; avoid `using namespace std;` in headers.

### Tiny code

```cpp
namespace app {
  void run();
}
void app::run() { /* ... */ }
```

- **Remember:** Never put `using namespace std;` in a header.
- **Common mistake:** Dumping everything into the global namespace and getting silent overload clashes.

Practice: open `examples/07_*.cpp`, predict the output, change one line, re-predict.

## 8. std:: and user namespaces

### Plain English

Namespaces group names so `draw` in graphics does not clash with `draw` in cards. Prefer `std::` qualification; avoid `using namespace std;` in headers.

### Tiny code

```cpp
namespace app {
  void run();
}
void app::run() { /* ... */ }
```

- **Remember:** Never put `using namespace std;` in a header.
- **Common mistake:** Dumping everything into the global namespace and getting silent overload clashes.

Practice: open `examples/08_*.cpp`, predict the output, change one line, re-predict.

## 9. Avoiding name clashes

### Plain English

Namespaces group names so `draw` in graphics does not clash with `draw` in cards. Prefer `std::` qualification; avoid `using namespace std;` in headers.

### Tiny code

```cpp
namespace app {
  void run();
}
void app::run() { /* ... */ }
```

- **Remember:** Never put `using namespace std;` in a header.
- **Common mistake:** Dumping everything into the global namespace and getting silent overload clashes.

Practice: open `examples/09_*.cpp`, predict the output, change one line, re-predict.

## 10. Organizing a small library

### Plain English

Namespaces group names so `draw` in graphics does not clash with `draw` in cards. Prefer `std::` qualification; avoid `using namespace std;` in headers.

### Tiny code

```cpp
namespace app {
  void run();
}
void app::run() { /* ... */ }
```

- **Remember:** Never put `using namespace std;` in a header.
- **Common mistake:** Dumping everything into the global namespace and getting silent overload clashes.

Practice: open `examples/10_*.cpp`, predict the output, change one line, re-predict.

---

## What you should be able to do after Day 17

- Explain `Namespaces deep dive` to a peer without looking at notes.
- Compile and run all 10 examples with `-std=c++17 -Wall -Wextra` (use newer flags only when the day needs C++20+).
- Answer the 5 questions in `questions.md` before peeking at `answers.md`.
- Write one tiny extra program that combines at least 3 of today's concepts.

Or open this day in the **Badsha hub** (`python3 hub/server.py`) and use Learn / Practice / Quiz tabs.
