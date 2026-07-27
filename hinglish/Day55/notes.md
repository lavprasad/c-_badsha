# Day 55 -- Operator overloading advanced

Aaj ka goal: **Operator overloading advanced** ko aasan Hinglish me samajhna, har idea ka chhota code sample dekhna, phir `examples/` me practice karna.

Is din ko padhne ka tarika:
1. Har concept ka **Aasan Bhasha** section padho.
2. Code sample par nazar daalo -- pehle predict karo ki output kya aayega.
3. `examples/` me us concept ki file chalao.
4. Uske baad hi `questions.md` kholo.

| # | Concept |
|--:|---------|
| 1 | Arithmetic operators set |
| 2 | Relational via <=> preview motivation |
| 3 | Increment operators |
| 4 | Arrow operator |
| 5 | Comma operator (don't) |
| 6 | New/delete operators idea |
| 7 | User-defined literals intro |
| 8 | Consistency rules |
| 9 | Expression templates idea |
| 10 | A Money type |

---

## 1. Arithmetic operators set

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

## 2. Relational via <=> preview motivation

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

## 3. Increment operators

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

## 4. Arrow operator

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

## 5. Comma operator (don't)

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

## 6. New/delete operators idea

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

## 7. User-defined literals intro

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

## 8. Consistency rules

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

## 9. Expression templates idea

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

## 10. A Money type

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

## Day 55 ke baad aapko ye aana chahiye

- `Operator overloading advanced` ko bina notes dekhe kisi dost ko samjha sakna.
- Saare 10 examples `-std=c++17 -Wall -Wextra` ke saath compile aur run karna (naye flags sirf tab jab din ko C++20+ chahiye).
- `answers.md` dekhne se pehle `questions.md` ke 5 sawaal answer karna.
- Ek chhota extra program likhna jo aaj ke kam se kam 3 concepts jodta ho.

Ya is din ko **Badsha hub** me kholo (`python3 hub/server.py`) aur Learn / Practice / Quiz tabs use karo.
