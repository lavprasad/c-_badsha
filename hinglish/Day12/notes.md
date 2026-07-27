# Day 12 -- File I/O with fstream

Aaj ka goal: **File I/O with fstream** ko aasan Hinglish me samajhna, har idea ka chhota code sample dekhna, phir `examples/` me practice karna.

Is din ko padhne ka tarika:
1. Har concept ka **Aasan Bhasha** section padho.
2. Code sample par nazar daalo -- pehle predict karo ki output kya aayega.
3. `examples/` me us concept ki file chalao.
4. Uske baad hi `questions.md` kholo.

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

### Aasan Bhasha

Files aapke program ke band hone ke baad bhi data rakhte hain. C++ me aap ek stream kholte ho (`ifstream` padhne ke liye, `ofstream` likhne ke liye), use `cin`/`cout` ki tarah use karte ho, aur RAII object ke marte hi use apne aap band kar deta hai.

### Chhota code

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

- **Yaad rakho:** Padhne se pehle hamesha check karo ki file khuli bhi hai (`if (!in)`).
- **Aam galti:** Open fail hona ignore kar dena aur garbage padhte rehna / kharab stream par infinite loop.

Practice: `examples/01_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 2. Reading line-by-line with getline

### Aasan Bhasha

Files aapke program ke band hone ke baad bhi data rakhte hain. C++ me aap ek stream kholte ho (`ifstream` padhne ke liye, `ofstream` likhne ke liye), use `cin`/`cout` ki tarah use karte ho, aur RAII object ke marte hi use apne aap band kar deta hai.

### Chhota code

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

- **Yaad rakho:** Padhne se pehle hamesha check karo ki file khuli bhi hai (`if (!in)`).
- **Aam galti:** Open fail hona ignore kar dena aur garbage padhte rehna / kharab stream par infinite loop.

Practice: `examples/02_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 3. Writing formatted output

### Aasan Bhasha

Files aapke program ke band hone ke baad bhi data rakhte hain. C++ me aap ek stream kholte ho (`ifstream` padhne ke liye, `ofstream` likhne ke liye), use `cin`/`cout` ki tarah use karte ho, aur RAII object ke marte hi use apne aap band kar deta hai.

### Chhota code

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

- **Yaad rakho:** Padhne se pehle hamesha check karo ki file khuli bhi hai (`if (!in)`).
- **Aam galti:** Open fail hona ignore kar dena aur garbage padhte rehna / kharab stream par infinite loop.

Practice: `examples/03_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 4. File modes: ios::in/out/app/binary

### Aasan Bhasha

Files aapke program ke band hone ke baad bhi data rakhte hain. C++ me aap ek stream kholte ho (`ifstream` padhne ke liye, `ofstream` likhne ke liye), use `cin`/`cout` ki tarah use karte ho, aur RAII object ke marte hi use apne aap band kar deta hai.

### Chhota code

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

- **Yaad rakho:** Padhne se pehle hamesha check karo ki file khuli bhi hai (`if (!in)`).
- **Aam galti:** Open fail hona ignore kar dena aur garbage padhte rehna / kharab stream par infinite loop.

Practice: `examples/04_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 5. Checking fail/eof/bad bits

### Aasan Bhasha

Files aapke program ke band hone ke baad bhi data rakhte hain. C++ me aap ek stream kholte ho (`ifstream` padhne ke liye, `ofstream` likhne ke liye), use `cin`/`cout` ki tarah use karte ho, aur RAII object ke marte hi use apne aap band kar deta hai.

### Chhota code

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

- **Yaad rakho:** Padhne se pehle hamesha check karo ki file khuli bhi hai (`if (!in)`).
- **Aam galti:** Open fail hona ignore kar dena aur garbage padhte rehna / kharab stream par infinite loop.

Practice: `examples/05_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 6. Binary read/write with read/write

### Aasan Bhasha

Files aapke program ke band hone ke baad bhi data rakhte hain. C++ me aap ek stream kholte ho (`ifstream` padhne ke liye, `ofstream` likhne ke liye), use `cin`/`cout` ki tarah use karte ho, aur RAII object ke marte hi use apne aap band kar deta hai.

### Chhota code

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

- **Yaad rakho:** Padhne se pehle hamesha check karo ki file khuli bhi hai (`if (!in)`).
- **Aam galti:** Open fail hona ignore kar dena aur garbage padhte rehna / kharab stream par infinite loop.

Practice: `examples/06_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 7. Seeking with seekg/seekp/tellg

### Aasan Bhasha

Files aapke program ke band hone ke baad bhi data rakhte hain. C++ me aap ek stream kholte ho (`ifstream` padhne ke liye, `ofstream` likhne ke liye), use `cin`/`cout` ki tarah use karte ho, aur RAII object ke marte hi use apne aap band kar deta hai.

### Chhota code

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

- **Yaad rakho:** Padhne se pehle hamesha check karo ki file khuli bhi hai (`if (!in)`).
- **Aam galti:** Open fail hona ignore kar dena aur garbage padhte rehna / kharab stream par infinite loop.

Practice: `examples/07_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 8. RAII and closing files

### Aasan Bhasha

Files aapke program ke band hone ke baad bhi data rakhte hain. C++ me aap ek stream kholte ho (`ifstream` padhne ke liye, `ofstream` likhne ke liye), use `cin`/`cout` ki tarah use karte ho, aur RAII object ke marte hi use apne aap band kar deta hai.

### Chhota code

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

- **Yaad rakho:** Padhne se pehle hamesha check karo ki file khuli bhi hai (`if (!in)`).
- **Aam galti:** Open fail hona ignore kar dena aur garbage padhte rehna / kharab stream par infinite loop.

Practice: `examples/08_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 9. Working with paths as strings

### Aasan Bhasha

Files aapke program ke band hone ke baad bhi data rakhte hain. C++ me aap ek stream kholte ho (`ifstream` padhne ke liye, `ofstream` likhne ke liye), use `cin`/`cout` ki tarah use karte ho, aur RAII object ke marte hi use apne aap band kar deta hai.

### Chhota code

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

- **Yaad rakho:** Padhne se pehle hamesha check karo ki file khuli bhi hai (`if (!in)`).
- **Aam galti:** Open fail hona ignore kar dena aur garbage padhte rehna / kharab stream par infinite loop.

Practice: `examples/09_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 10. Common I/O pitfalls

### Aasan Bhasha

Files aapke program ke band hone ke baad bhi data rakhte hain. C++ me aap ek stream kholte ho (`ifstream` padhne ke liye, `ofstream` likhne ke liye), use `cin`/`cout` ki tarah use karte ho, aur RAII object ke marte hi use apne aap band kar deta hai.

### Chhota code

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

- **Yaad rakho:** Padhne se pehle hamesha check karo ki file khuli bhi hai (`if (!in)`).
- **Aam galti:** Open fail hona ignore kar dena aur garbage padhte rehna / kharab stream par infinite loop.

Practice: `examples/10_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

---

## Day 12 ke baad aapko ye aana chahiye

- `File I/O with fstream` ko bina notes dekhe kisi dost ko samjha sakna.
- Saare 10 examples `-std=c++17 -Wall -Wextra` ke saath compile aur run karna (naye flags sirf tab jab din ko C++20+ chahiye).
- `answers.md` dekhne se pehle `questions.md` ke 5 sawaal answer karna.
- Ek chhota extra program likhna jo aaj ke kam se kam 3 concepts jodta ho.

Ya is din ko **Badsha hub** me kholo (`python3 hub/server.py`) aur Learn / Practice / Quiz tabs use karo.
