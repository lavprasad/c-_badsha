# Day 29 -- Structuring larger programs

Aaj ka goal: **Structuring larger programs** ko aasan Hinglish me samajhna, har idea ka chhota code sample dekhna, phir `examples/` me practice karna.

Is din ko padhne ka tarika:
1. Har concept ka **Aasan Bhasha** section padho.
2. Code sample par nazar daalo -- pehle predict karo ki output kya aayega.
3. `examples/` me us concept ki file chalao.
4. Uske baad hi `questions.md` kholo.

| # | Concept |
|--:|---------|
| 1 | Multiple translation units |
| 2 | Build commands with g++ |
| 3 | Header-only vs compiled libs |
| 4 | Separating concerns |
| 5 | Public vs private headers |
| 6 | Avoiding god files |
| 7 | Naming conventions |
| 8 | README for a mini project |
| 9 | Local git commits |
| 10 | A multi-file sketch |

---

## 1. Multiple translation units

### Aasan Bhasha

Headers interface declare karte hain; `.cpp` files bodies define karti hain. Include guards ek header ko ek translation unit me do baar paste hone se rokte hain. One Definition Rule kehta hai ki non-inline functions ki poore program me exactly ek definition hoti hai.

### Chhota code

```cpp
#pragma once
struct Widget;           // forward decl — enough for pointers/refs
void use(Widget*);
```

- **Yaad rakho:** Declarations header me, definitions `.cpp` me (templates exception hain).
- **Aam galti:** Non-inline function header me define karna jo do `.cpp` include karti hain → multiple definition linker error.

Practice: `examples/01_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 2. Build commands with g++

### Aasan Bhasha

Class data ko un operations ke saath bundle karti hai jo use valid rakhte hain. Constructors invariants banate hain; destructors resources chhodte hain. `struct` default public hai, `class` default private — bas yahi mukhya farak hai.

### Chhota code

```cpp
class Counter {
  int n_ = 0;
public:
  void inc() { ++n_; }
  int get() const { return n_; }
};
```

- **Yaad rakho:** Invariants matter karte hain to data private rakho; operations expose karo.
- **Aam galti:** Public data fields jo callers ko class invariants todne dete hain.

Practice: `examples/02_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 3. Header-only vs compiled libs

### Aasan Bhasha

Headers interface declare karte hain; `.cpp` files bodies define karti hain. Include guards ek header ko ek translation unit me do baar paste hone se rokte hain. One Definition Rule kehta hai ki non-inline functions ki poore program me exactly ek definition hoti hai.

### Chhota code

```cpp
#pragma once
struct Widget;           // forward decl — enough for pointers/refs
void use(Widget*);
```

- **Yaad rakho:** Declarations header me, definitions `.cpp` me (templates exception hain).
- **Aam galti:** Non-inline function header me define karna jo do `.cpp` include karti hain → multiple definition linker error.

Practice: `examples/03_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 4. Separating concerns

### Aasan Bhasha

Class data ko un operations ke saath bundle karti hai jo use valid rakhte hain. Constructors invariants banate hain; destructors resources chhodte hain. `struct` default public hai, `class` default private — bas yahi mukhya farak hai.

### Chhota code

```cpp
class Counter {
  int n_ = 0;
public:
  void inc() { ++n_; }
  int get() const { return n_; }
};
```

- **Yaad rakho:** Invariants matter karte hain to data private rakho; operations expose karo.
- **Aam galti:** Public data fields jo callers ko class invariants todne dete hain.

Practice: `examples/04_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 5. Public vs private headers

### Aasan Bhasha

Headers interface declare karte hain; `.cpp` files bodies define karti hain. Include guards ek header ko ek translation unit me do baar paste hone se rokte hain. One Definition Rule kehta hai ki non-inline functions ki poore program me exactly ek definition hoti hai.

### Chhota code

```cpp
#pragma once
struct Widget;           // forward decl — enough for pointers/refs
void use(Widget*);
```

- **Yaad rakho:** Declarations header me, definitions `.cpp` me (templates exception hain).
- **Aam galti:** Non-inline function header me define karna jo do `.cpp` include karti hain → multiple definition linker error.

Practice: `examples/05_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 6. Avoiding god files

### Aasan Bhasha

Class data ko un operations ke saath bundle karti hai jo use valid rakhte hain. Constructors invariants banate hain; destructors resources chhodte hain. `struct` default public hai, `class` default private — bas yahi mukhya farak hai.

### Chhota code

```cpp
class Counter {
  int n_ = 0;
public:
  void inc() { ++n_; }
  int get() const { return n_; }
};
```

- **Yaad rakho:** Invariants matter karte hain to data private rakho; operations expose karo.
- **Aam galti:** Public data fields jo callers ko class invariants todne dete hain.

Practice: `examples/06_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 7. Naming conventions

### Aasan Bhasha

Class data ko un operations ke saath bundle karti hai jo use valid rakhte hain. Constructors invariants banate hain; destructors resources chhodte hain. `struct` default public hai, `class` default private — bas yahi mukhya farak hai.

### Chhota code

```cpp
class Counter {
  int n_ = 0;
public:
  void inc() { ++n_; }
  int get() const { return n_; }
};
```

- **Yaad rakho:** Invariants matter karte hain to data private rakho; operations expose karo.
- **Aam galti:** Public data fields jo callers ko class invariants todne dete hain.

Practice: `examples/07_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 8. README for a mini project

### Aasan Bhasha

Projects skills ko jodte hain: saaf requirements, chhote modules, tests aur imaandaar docs. Ek chhoti vertical slice se shuru karo jo end-to-end chale, phir features mota karo.

### Chhota code

```cpp
int main(int argc, char** argv) {
  if (argc < 2) {
    std::cerr << "usage: tool <file>\n";
    return 1;
  }
  // ...
}
```

- **Yaad rakho:** Edge cases chamkane se pehle ek chalne wala subset ship karo.
- **Aam galti:** Hafton tak scaffolding banana jisme kuch chalta hi na ho.

Practice: `examples/08_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 9. Local git commits

### Aasan Bhasha

Class data ko un operations ke saath bundle karti hai jo use valid rakhte hain. Constructors invariants banate hain; destructors resources chhodte hain. `struct` default public hai, `class` default private — bas yahi mukhya farak hai.

### Chhota code

```cpp
class Counter {
  int n_ = 0;
public:
  void inc() { ++n_; }
  int get() const { return n_; }
};
```

- **Yaad rakho:** Invariants matter karte hain to data private rakho; operations expose karo.
- **Aam galti:** Public data fields jo callers ko class invariants todne dete hain.

Practice: `examples/09_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 10. A multi-file sketch

### Aasan Bhasha

Class data ko un operations ke saath bundle karti hai jo use valid rakhte hain. Constructors invariants banate hain; destructors resources chhodte hain. `struct` default public hai, `class` default private — bas yahi mukhya farak hai.

### Chhota code

```cpp
class Counter {
  int n_ = 0;
public:
  void inc() { ++n_; }
  int get() const { return n_; }
};
```

- **Yaad rakho:** Invariants matter karte hain to data private rakho; operations expose karo.
- **Aam galti:** Public data fields jo callers ko class invariants todne dete hain.

Practice: `examples/10_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

---

## Day 29 ke baad aapko ye aana chahiye

- `Structuring larger programs` ko bina notes dekhe kisi dost ko samjha sakna.
- Saare 10 examples `-std=c++17 -Wall -Wextra` ke saath compile aur run karna (naye flags sirf tab jab din ko C++20+ chahiye).
- `answers.md` dekhne se pehle `questions.md` ke 5 sawaal answer karna.
- Ek chhota extra program likhna jo aaj ke kam se kam 3 concepts jodta ho.

Ya is din ko **Badsha hub** me kholo (`python3 hub/server.py`) aur Learn / Practice / Quiz tabs use karo.
