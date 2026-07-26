# Day 12 -- File I/O with fstream

Today's goal: understand **File I/O with fstream** in plain English, see a tiny code sample for each idea, then practice in `examples/`.

How to study this day:
1. Read each concept's **Plain English** section.
2. Skim the code sample -- predict what it does.
3. Run the matching file under `examples/`.
4. Only then try `questions.md`.

| # | Concept |
|--:|---------|
| 1 | Opening files with ifstream/ofstream |
| 2 | Reading line-by-line with getline |
| 3 | Writing formatted output |
| 4 | File modes: ios::in/out/app/binary |
| 5 | Checking fail/eof/bad bits |
| 6 | Binary read/write with read/write |
| 7 | Seeking with seekg/seekp/tellg |
| 8 | RAII and closing files |
| 9 | Working with paths as strings |
| 10 | Common I/O pitfalls |

---

## 1. Opening files with ifstream/ofstream

### Plain English

Files let your program keep data after it exits. In C++ you open a stream (`ifstream` to read, `ofstream` to write), use it like `cin`/`cout`, then let RAII close it when the object dies.

### Tiny code

```cpp
#include <fstream>
#include <string>
std::ifstream in("data.txt");
std::string line;
while (std::getline(in, line)) {
  // use line
}
if (!in.eof() && in.fail()) { /* real error */ }
```

- **Remember:** Always check that the file opened (`if (!in)`) before reading.
- **Common mistake:** Ignoring open failure and reading garbage / looping forever on a bad stream.

Practice: open `examples/01_*.cpp`, predict the output, change one line, re-predict.

## 2. Reading line-by-line with getline

### Plain English

Files let your program keep data after it exits. In C++ you open a stream (`ifstream` to read, `ofstream` to write), use it like `cin`/`cout`, then let RAII close it when the object dies.

### Tiny code

```cpp
#include <fstream>
#include <string>
std::ifstream in("data.txt");
std::string line;
while (std::getline(in, line)) {
  // use line
}
if (!in.eof() && in.fail()) { /* real error */ }
```

- **Remember:** Always check that the file opened (`if (!in)`) before reading.
- **Common mistake:** Ignoring open failure and reading garbage / looping forever on a bad stream.

Practice: open `examples/02_*.cpp`, predict the output, change one line, re-predict.

## 3. Writing formatted output

### Plain English

Files let your program keep data after it exits. In C++ you open a stream (`ifstream` to read, `ofstream` to write), use it like `cin`/`cout`, then let RAII close it when the object dies.

### Tiny code

```cpp
#include <fstream>
#include <string>
std::ifstream in("data.txt");
std::string line;
while (std::getline(in, line)) {
  // use line
}
if (!in.eof() && in.fail()) { /* real error */ }
```

- **Remember:** Always check that the file opened (`if (!in)`) before reading.
- **Common mistake:** Ignoring open failure and reading garbage / looping forever on a bad stream.

Practice: open `examples/03_*.cpp`, predict the output, change one line, re-predict.

## 4. File modes: ios::in/out/app/binary

### Plain English

Files let your program keep data after it exits. In C++ you open a stream (`ifstream` to read, `ofstream` to write), use it like `cin`/`cout`, then let RAII close it when the object dies.

### Tiny code

```cpp
#include <fstream>
#include <string>
std::ifstream in("data.txt");
std::string line;
while (std::getline(in, line)) {
  // use line
}
if (!in.eof() && in.fail()) { /* real error */ }
```

- **Remember:** Always check that the file opened (`if (!in)`) before reading.
- **Common mistake:** Ignoring open failure and reading garbage / looping forever on a bad stream.

Practice: open `examples/04_*.cpp`, predict the output, change one line, re-predict.

## 5. Checking fail/eof/bad bits

### Plain English

Files let your program keep data after it exits. In C++ you open a stream (`ifstream` to read, `ofstream` to write), use it like `cin`/`cout`, then let RAII close it when the object dies.

### Tiny code

```cpp
#include <fstream>
#include <string>
std::ifstream in("data.txt");
std::string line;
while (std::getline(in, line)) {
  // use line
}
if (!in.eof() && in.fail()) { /* real error */ }
```

- **Remember:** Always check that the file opened (`if (!in)`) before reading.
- **Common mistake:** Ignoring open failure and reading garbage / looping forever on a bad stream.

Practice: open `examples/05_*.cpp`, predict the output, change one line, re-predict.

## 6. Binary read/write with read/write

### Plain English

Files let your program keep data after it exits. In C++ you open a stream (`ifstream` to read, `ofstream` to write), use it like `cin`/`cout`, then let RAII close it when the object dies.

### Tiny code

```cpp
#include <fstream>
#include <string>
std::ifstream in("data.txt");
std::string line;
while (std::getline(in, line)) {
  // use line
}
if (!in.eof() && in.fail()) { /* real error */ }
```

- **Remember:** Always check that the file opened (`if (!in)`) before reading.
- **Common mistake:** Ignoring open failure and reading garbage / looping forever on a bad stream.

Practice: open `examples/06_*.cpp`, predict the output, change one line, re-predict.

## 7. Seeking with seekg/seekp/tellg

### Plain English

Files let your program keep data after it exits. In C++ you open a stream (`ifstream` to read, `ofstream` to write), use it like `cin`/`cout`, then let RAII close it when the object dies.

### Tiny code

```cpp
#include <fstream>
#include <string>
std::ifstream in("data.txt");
std::string line;
while (std::getline(in, line)) {
  // use line
}
if (!in.eof() && in.fail()) { /* real error */ }
```

- **Remember:** Always check that the file opened (`if (!in)`) before reading.
- **Common mistake:** Ignoring open failure and reading garbage / looping forever on a bad stream.

Practice: open `examples/07_*.cpp`, predict the output, change one line, re-predict.

## 8. RAII and closing files

### Plain English

Files let your program keep data after it exits. In C++ you open a stream (`ifstream` to read, `ofstream` to write), use it like `cin`/`cout`, then let RAII close it when the object dies.

### Tiny code

```cpp
#include <fstream>
#include <string>
std::ifstream in("data.txt");
std::string line;
while (std::getline(in, line)) {
  // use line
}
if (!in.eof() && in.fail()) { /* real error */ }
```

- **Remember:** Always check that the file opened (`if (!in)`) before reading.
- **Common mistake:** Ignoring open failure and reading garbage / looping forever on a bad stream.

Practice: open `examples/08_*.cpp`, predict the output, change one line, re-predict.

## 9. Working with paths as strings

### Plain English

Files let your program keep data after it exits. In C++ you open a stream (`ifstream` to read, `ofstream` to write), use it like `cin`/`cout`, then let RAII close it when the object dies.

### Tiny code

```cpp
#include <fstream>
#include <string>
std::ifstream in("data.txt");
std::string line;
while (std::getline(in, line)) {
  // use line
}
if (!in.eof() && in.fail()) { /* real error */ }
```

- **Remember:** Always check that the file opened (`if (!in)`) before reading.
- **Common mistake:** Ignoring open failure and reading garbage / looping forever on a bad stream.

Practice: open `examples/09_*.cpp`, predict the output, change one line, re-predict.

## 10. Common I/O pitfalls

### Plain English

Files let your program keep data after it exits. In C++ you open a stream (`ifstream` to read, `ofstream` to write), use it like `cin`/`cout`, then let RAII close it when the object dies.

### Tiny code

```cpp
#include <fstream>
#include <string>
std::ifstream in("data.txt");
std::string line;
while (std::getline(in, line)) {
  // use line
}
if (!in.eof() && in.fail()) { /* real error */ }
```

- **Remember:** Always check that the file opened (`if (!in)`) before reading.
- **Common mistake:** Ignoring open failure and reading garbage / looping forever on a bad stream.

Practice: open `examples/10_*.cpp`, predict the output, change one line, re-predict.

---

## What you should be able to do after Day 12

- Explain `File I/O with fstream` to a peer without looking at notes.
- Compile and run all 10 examples with `-std=c++17 -Wall -Wextra` (use newer flags only when the day needs C++20+).
- Answer the 5 questions in `questions.md` before peeking at `answers.md`.
- Write one tiny extra program that combines at least 3 of today's concepts.

Or open this day in the **Badsha hub** (`python3 hub/server.py`) and use Learn / Practice / Quiz tabs.
