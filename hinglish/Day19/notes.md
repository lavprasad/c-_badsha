# Day 19 -- std::array & std::vector mastery

Aaj ka goal: **std::array & std::vector mastery** ko aasan Hinglish me samajhna, har idea ka chhota code sample dekhna, phir `examples/` me practice karna.

Is din ko padhne ka tarika:
1. Har concept ka **Aasan Bhasha** section padho.
2. Code sample par nazar daalo -- pehle predict karo ki output kya aayega.
3. `examples/` me us concept ki file chalao.
4. Uske baad hi `questions.md` kholo.

| # | Concept |
|--:|---------|
| 1 | std::array vs C array |
| 2 | vector growth strategy |
| 3 | reserve vs resize |
| 4 | emplace_back vs push_back |
| 5 | Iterators and invalidation |
| 6 | erase-remove idiom preview |
| 7 | 2D vectors |
| 8 | Passing containers efficiently |
| 9 | at() vs operator[] |
| 10 | Capacity vs size |

---

## 1. std::array vs C array

### Aasan Bhasha

`std::vector` contiguous memory me badhne wala array hai — aapka default sequence container. `reserve` baar-baar reallocation se bachata hai. Reallocation vector ke andar ke pointers/iterators ko invalid kar deta hai.

### Chhota code

```cpp
std::vector<int> v;
v.reserve(100);
for (int i = 0; i < 100; ++i) v.push_back(i);
```

- **Yaad rakho:** Final size pehle se pata ho to `reserve` call karo.
- **Aam galti:** Aise `push_back` ke aar-paar vector ka pointer/iterator pakde rakhna jo realloc kar de.

Practice: `examples/01_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 2. vector growth strategy

### Aasan Bhasha

`std::vector` contiguous memory me badhne wala array hai — aapka default sequence container. `reserve` baar-baar reallocation se bachata hai. Reallocation vector ke andar ke pointers/iterators ko invalid kar deta hai.

### Chhota code

```cpp
std::vector<int> v;
v.reserve(100);
for (int i = 0; i < 100; ++i) v.push_back(i);
```

- **Yaad rakho:** Final size pehle se pata ho to `reserve` call karo.
- **Aam galti:** Aise `push_back` ke aar-paar vector ka pointer/iterator pakde rakhna jo realloc kar de.

Practice: `examples/02_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 3. reserve vs resize

### Aasan Bhasha

`std::vector` contiguous memory me badhne wala array hai — aapka default sequence container. `reserve` baar-baar reallocation se bachata hai. Reallocation vector ke andar ke pointers/iterators ko invalid kar deta hai.

### Chhota code

```cpp
std::vector<int> v;
v.reserve(100);
for (int i = 0; i < 100; ++i) v.push_back(i);
```

- **Yaad rakho:** Final size pehle se pata ho to `reserve` call karo.
- **Aam galti:** Aise `push_back` ke aar-paar vector ka pointer/iterator pakde rakhna jo realloc kar de.

Practice: `examples/03_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 4. emplace_back vs push_back

### Aasan Bhasha

`std::vector` contiguous memory me badhne wala array hai — aapka default sequence container. `reserve` baar-baar reallocation se bachata hai. Reallocation vector ke andar ke pointers/iterators ko invalid kar deta hai.

### Chhota code

```cpp
std::vector<int> v;
v.reserve(100);
for (int i = 0; i < 100; ++i) v.push_back(i);
```

- **Yaad rakho:** Final size pehle se pata ho to `reserve` call karo.
- **Aam galti:** Aise `push_back` ke aar-paar vector ka pointer/iterator pakde rakhna jo realloc kar de.

Practice: `examples/04_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 5. Iterators and invalidation

### Aasan Bhasha

`std::vector` contiguous memory me badhne wala array hai — aapka default sequence container. `reserve` baar-baar reallocation se bachata hai. Reallocation vector ke andar ke pointers/iterators ko invalid kar deta hai.

### Chhota code

```cpp
std::vector<int> v;
v.reserve(100);
for (int i = 0; i < 100; ++i) v.push_back(i);
```

- **Yaad rakho:** Final size pehle se pata ho to `reserve` call karo.
- **Aam galti:** Aise `push_back` ke aar-paar vector ka pointer/iterator pakde rakhna jo realloc kar de.

Practice: `examples/05_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 6. erase-remove idiom preview

### Aasan Bhasha

`std::vector` contiguous memory me badhne wala array hai — aapka default sequence container. `reserve` baar-baar reallocation se bachata hai. Reallocation vector ke andar ke pointers/iterators ko invalid kar deta hai.

### Chhota code

```cpp
std::vector<int> v;
v.reserve(100);
for (int i = 0; i < 100; ++i) v.push_back(i);
```

- **Yaad rakho:** Final size pehle se pata ho to `reserve` call karo.
- **Aam galti:** Aise `push_back` ke aar-paar vector ka pointer/iterator pakde rakhna jo realloc kar de.

Practice: `examples/06_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 7. 2D vectors

### Aasan Bhasha

`std::vector` contiguous memory me badhne wala array hai — aapka default sequence container. `reserve` baar-baar reallocation se bachata hai. Reallocation vector ke andar ke pointers/iterators ko invalid kar deta hai.

### Chhota code

```cpp
std::vector<int> v;
v.reserve(100);
for (int i = 0; i < 100; ++i) v.push_back(i);
```

- **Yaad rakho:** Final size pehle se pata ho to `reserve` call karo.
- **Aam galti:** Aise `push_back` ke aar-paar vector ka pointer/iterator pakde rakhna jo realloc kar de.

Practice: `examples/07_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 8. Passing containers efficiently

### Aasan Bhasha

`std::vector` contiguous memory me badhne wala array hai — aapka default sequence container. `reserve` baar-baar reallocation se bachata hai. Reallocation vector ke andar ke pointers/iterators ko invalid kar deta hai.

### Chhota code

```cpp
std::vector<int> v;
v.reserve(100);
for (int i = 0; i < 100; ++i) v.push_back(i);
```

- **Yaad rakho:** Final size pehle se pata ho to `reserve` call karo.
- **Aam galti:** Aise `push_back` ke aar-paar vector ka pointer/iterator pakde rakhna jo realloc kar de.

Practice: `examples/08_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 9. at() vs operator[]

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

## 10. Capacity vs size

### Aasan Bhasha

`std::vector` contiguous memory me badhne wala array hai — aapka default sequence container. `reserve` baar-baar reallocation se bachata hai. Reallocation vector ke andar ke pointers/iterators ko invalid kar deta hai.

### Chhota code

```cpp
std::vector<int> v;
v.reserve(100);
for (int i = 0; i < 100; ++i) v.push_back(i);
```

- **Yaad rakho:** Final size pehle se pata ho to `reserve` call karo.
- **Aam galti:** Aise `push_back` ke aar-paar vector ka pointer/iterator pakde rakhna jo realloc kar de.

Practice: `examples/10_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

---

## Day 19 ke baad aapko ye aana chahiye

- `std::array & std::vector mastery` ko bina notes dekhe kisi dost ko samjha sakna.
- Saare 10 examples `-std=c++17 -Wall -Wextra` ke saath compile aur run karna (naye flags sirf tab jab din ko C++20+ chahiye).
- `answers.md` dekhne se pehle `questions.md` ke 5 sawaal answer karna.
- Ek chhota extra program likhna jo aaj ke kam se kam 3 concepts jodta ho.

Ya is din ko **Badsha hub** me kholo (`python3 hub/server.py`) aur Learn / Practice / Quiz tabs use karo.
