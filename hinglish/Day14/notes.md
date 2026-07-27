# Day 14 -- Operator overloading basics

Aaj ka goal: **Operator overloading basics** ko aasan Hinglish me samajhna, har idea ka chhota code sample dekhna, phir `examples/` me practice karna.

Is din ko padhne ka tarika:
1. Har concept ka **Aasan Bhasha** section padho.
2. Code sample par nazar daalo -- pehle predict karo ki output kya aayega.
3. `examples/` me us concept ki file chalao.
4. Uske baad hi `questions.md` kholo.

| # | Concept |
|--:|---------|
| 1 | Why overload operators |
| 2 | operator+ as member vs free function |
| 3 | operator<< for ostream |
| 4 | operator== and != |
| 5 | operator[] for containers |
| 6 | operator() functors |
| 7 | Conversion operators |
| 8 | Rules of thumb for overloads |
| 9 | Avoiding surprising overloads |
| 10 | A small Vector2 demo |

---

## 1. Why overload operators

### Aasan Bhasha

Operator overloading aapke types ko jaane-pehchane symbols (`+`, `==`, `<<`) use karne deta hai — jab matlab obvious ho. Agar symbol padhne wale ko chaunka de, to named function likho.

### Chhota code

```cpp
struct Point { int x, y; };
bool operator==(Point a, Point b) {
  return a.x == b.x && a.y == b.y;
}
std::ostream& operator<<(std::ostream& os, Point p) {
  return os << '(' << p.x << ',' << p.y << ')';
}
```

- **Yaad rakho:** Overload tabhi karo jab matlab built-in intuition se match kare.
- **Aam galti:** Chalaak operators jo mehnga kaam chhupa dete hain ya chupke se mutate kar dete hain.

Practice: `examples/01_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 2. operator+ as member vs free function

### Aasan Bhasha

Operator overloading aapke types ko jaane-pehchane symbols (`+`, `==`, `<<`) use karne deta hai — jab matlab obvious ho. Agar symbol padhne wale ko chaunka de, to named function likho.

### Chhota code

```cpp
struct Point { int x, y; };
bool operator==(Point a, Point b) {
  return a.x == b.x && a.y == b.y;
}
std::ostream& operator<<(std::ostream& os, Point p) {
  return os << '(' << p.x << ',' << p.y << ')';
}
```

- **Yaad rakho:** Overload tabhi karo jab matlab built-in intuition se match kare.
- **Aam galti:** Chalaak operators jo mehnga kaam chhupa dete hain ya chupke se mutate kar dete hain.

Practice: `examples/02_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 3. operator<< for ostream

### Aasan Bhasha

Operator overloading aapke types ko jaane-pehchane symbols (`+`, `==`, `<<`) use karne deta hai — jab matlab obvious ho. Agar symbol padhne wale ko chaunka de, to named function likho.

### Chhota code

```cpp
struct Point { int x, y; };
bool operator==(Point a, Point b) {
  return a.x == b.x && a.y == b.y;
}
std::ostream& operator<<(std::ostream& os, Point p) {
  return os << '(' << p.x << ',' << p.y << ')';
}
```

- **Yaad rakho:** Overload tabhi karo jab matlab built-in intuition se match kare.
- **Aam galti:** Chalaak operators jo mehnga kaam chhupa dete hain ya chupke se mutate kar dete hain.

Practice: `examples/03_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 4. operator== and !=

### Aasan Bhasha

Operator overloading aapke types ko jaane-pehchane symbols (`+`, `==`, `<<`) use karne deta hai — jab matlab obvious ho. Agar symbol padhne wale ko chaunka de, to named function likho.

### Chhota code

```cpp
struct Point { int x, y; };
bool operator==(Point a, Point b) {
  return a.x == b.x && a.y == b.y;
}
std::ostream& operator<<(std::ostream& os, Point p) {
  return os << '(' << p.x << ',' << p.y << ')';
}
```

- **Yaad rakho:** Overload tabhi karo jab matlab built-in intuition se match kare.
- **Aam galti:** Chalaak operators jo mehnga kaam chhupa dete hain ya chupke se mutate kar dete hain.

Practice: `examples/04_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 5. operator[] for containers

### Aasan Bhasha

Operator overloading aapke types ko jaane-pehchane symbols (`+`, `==`, `<<`) use karne deta hai — jab matlab obvious ho. Agar symbol padhne wale ko chaunka de, to named function likho.

### Chhota code

```cpp
struct Point { int x, y; };
bool operator==(Point a, Point b) {
  return a.x == b.x && a.y == b.y;
}
std::ostream& operator<<(std::ostream& os, Point p) {
  return os << '(' << p.x << ',' << p.y << ')';
}
```

- **Yaad rakho:** Overload tabhi karo jab matlab built-in intuition se match kare.
- **Aam galti:** Chalaak operators jo mehnga kaam chhupa dete hain ya chupke se mutate kar dete hain.

Practice: `examples/05_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 6. operator() functors

### Aasan Bhasha

Operator overloading aapke types ko jaane-pehchane symbols (`+`, `==`, `<<`) use karne deta hai — jab matlab obvious ho. Agar symbol padhne wale ko chaunka de, to named function likho.

### Chhota code

```cpp
struct Point { int x, y; };
bool operator==(Point a, Point b) {
  return a.x == b.x && a.y == b.y;
}
std::ostream& operator<<(std::ostream& os, Point p) {
  return os << '(' << p.x << ',' << p.y << ')';
}
```

- **Yaad rakho:** Overload tabhi karo jab matlab built-in intuition se match kare.
- **Aam galti:** Chalaak operators jo mehnga kaam chhupa dete hain ya chupke se mutate kar dete hain.

Practice: `examples/06_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 7. Conversion operators

### Aasan Bhasha

Operator overloading aapke types ko jaane-pehchane symbols (`+`, `==`, `<<`) use karne deta hai — jab matlab obvious ho. Agar symbol padhne wale ko chaunka de, to named function likho.

### Chhota code

```cpp
struct Point { int x, y; };
bool operator==(Point a, Point b) {
  return a.x == b.x && a.y == b.y;
}
std::ostream& operator<<(std::ostream& os, Point p) {
  return os << '(' << p.x << ',' << p.y << ')';
}
```

- **Yaad rakho:** Overload tabhi karo jab matlab built-in intuition se match kare.
- **Aam galti:** Chalaak operators jo mehnga kaam chhupa dete hain ya chupke se mutate kar dete hain.

Practice: `examples/07_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 8. Rules of thumb for overloads

### Aasan Bhasha

Operator overloading aapke types ko jaane-pehchane symbols (`+`, `==`, `<<`) use karne deta hai — jab matlab obvious ho. Agar symbol padhne wale ko chaunka de, to named function likho.

### Chhota code

```cpp
struct Point { int x, y; };
bool operator==(Point a, Point b) {
  return a.x == b.x && a.y == b.y;
}
std::ostream& operator<<(std::ostream& os, Point p) {
  return os << '(' << p.x << ',' << p.y << ')';
}
```

- **Yaad rakho:** Overload tabhi karo jab matlab built-in intuition se match kare.
- **Aam galti:** Chalaak operators jo mehnga kaam chhupa dete hain ya chupke se mutate kar dete hain.

Practice: `examples/08_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 9. Avoiding surprising overloads

### Aasan Bhasha

Operator overloading aapke types ko jaane-pehchane symbols (`+`, `==`, `<<`) use karne deta hai — jab matlab obvious ho. Agar symbol padhne wale ko chaunka de, to named function likho.

### Chhota code

```cpp
struct Point { int x, y; };
bool operator==(Point a, Point b) {
  return a.x == b.x && a.y == b.y;
}
std::ostream& operator<<(std::ostream& os, Point p) {
  return os << '(' << p.x << ',' << p.y << ')';
}
```

- **Yaad rakho:** Overload tabhi karo jab matlab built-in intuition se match kare.
- **Aam galti:** Chalaak operators jo mehnga kaam chhupa dete hain ya chupke se mutate kar dete hain.

Practice: `examples/09_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 10. A small Vector2 demo

### Aasan Bhasha

Operator overloading aapke types ko jaane-pehchane symbols (`+`, `==`, `<<`) use karne deta hai — jab matlab obvious ho. Agar symbol padhne wale ko chaunka de, to named function likho.

### Chhota code

```cpp
struct Point { int x, y; };
bool operator==(Point a, Point b) {
  return a.x == b.x && a.y == b.y;
}
std::ostream& operator<<(std::ostream& os, Point p) {
  return os << '(' << p.x << ',' << p.y << ')';
}
```

- **Yaad rakho:** Overload tabhi karo jab matlab built-in intuition se match kare.
- **Aam galti:** Chalaak operators jo mehnga kaam chhupa dete hain ya chupke se mutate kar dete hain.

Practice: `examples/10_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

---

## Day 14 ke baad aapko ye aana chahiye

- `Operator overloading basics` ko bina notes dekhe kisi dost ko samjha sakna.
- Saare 10 examples `-std=c++17 -Wall -Wextra` ke saath compile aur run karna (naye flags sirf tab jab din ko C++20+ chahiye).
- `answers.md` dekhne se pehle `questions.md` ke 5 sawaal answer karna.
- Ek chhota extra program likhna jo aaj ke kam se kam 3 concepts jodta ho.

Ya is din ko **Badsha hub** me kholo (`python3 hub/server.py`) aur Learn / Practice / Quiz tabs use karo.
