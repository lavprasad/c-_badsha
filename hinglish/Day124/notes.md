# Day 124 -- bit utilities (C++20)

Aaj ka goal: **bit utilities (C++20)** ko aasan Hinglish me samajhna, har idea ka chhota code sample dekhna, phir `examples/` me practice karna.

Is din ko padhne ka tarika:
1. Har concept ka **Aasan Bhasha** section padho.
2. Code sample par nazar daalo -- pehle predict karo ki output kya aayega.
3. `examples/` me us concept ki file chalao.
4. Uske baad hi `questions.md` kholo.

| # | Concept |
|--:|---------|
| 1 | bit_cast |
| 2 | endian |
| 3 | popcount / countl_zero |
| 4 | rotl / rotr |
| 5 | has_single_bit |
| 6 | bit_floor / bit_ceil |
| 7 | Safe reinterpret |
| 8 | vs unions |
| 9 | Use in hashing |
| 10 | Power-of-two round |

---

## 1. bit_cast

### Aasan Bhasha

Bit tricks ek integer ke andar alag-alag flags set, clear aur test karte hain. Shift-heavy code me unsigned types prefer karo. `std::bitset` fixed-width bit sets ko padhne layak banata hai.

### Chhota code

```cpp
unsigned flags = 0;
flags |= (1u << 3);           // set bit 3
bool on = flags & (1u << 3);  // test
flags &= ~(1u << 3);          // clear
```

- **Yaad rakho:** Signed ints par sign bit tak ya uske aage shift karna UB ho sakta hai.
- **Aam galti:** Bitmasks ke liye signed `int` use karna aur sign bit me shift kar dena.

Practice: `examples/01_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 2. endian

### Aasan Bhasha

Iterators container ke andar advanced pointers jaise hain. Algorithms `[begin, end)` half-open range lete hain. Ye jaano ki insert/erase inhe kab invalid karte hain.

### Chhota code

```cpp
std::vector<int> v{1,2,3};
for (auto it = v.begin(); it != v.end(); ++it)
  std::cout << *it << ' ';
```

- **Yaad rakho:** Erase ke baad wahi iterator use karo jo `erase` return karta hai.
- **Aam galti:** Invalid ho chuke iterator ko increment karna → undefined behaviour.

Practice: `examples/02_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 3. popcount / countl_zero

### Aasan Bhasha

Bit tricks ek integer ke andar alag-alag flags set, clear aur test karte hain. Shift-heavy code me unsigned types prefer karo. `std::bitset` fixed-width bit sets ko padhne layak banata hai.

### Chhota code

```cpp
unsigned flags = 0;
flags |= (1u << 3);           // set bit 3
bool on = flags & (1u << 3);  // test
flags &= ~(1u << 3);          // clear
```

- **Yaad rakho:** Signed ints par sign bit tak ya uske aage shift karna UB ho sakta hai.
- **Aam galti:** Bitmasks ke liye signed `int` use karna aur sign bit me shift kar dena.

Practice: `examples/03_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 4. rotl / rotr

### Aasan Bhasha

Bit tricks ek integer ke andar alag-alag flags set, clear aur test karte hain. Shift-heavy code me unsigned types prefer karo. `std::bitset` fixed-width bit sets ko padhne layak banata hai.

### Chhota code

```cpp
unsigned flags = 0;
flags |= (1u << 3);           // set bit 3
bool on = flags & (1u << 3);  // test
flags &= ~(1u << 3);          // clear
```

- **Yaad rakho:** Signed ints par sign bit tak ya uske aage shift karna UB ho sakta hai.
- **Aam galti:** Bitmasks ke liye signed `int` use karna aur sign bit me shift kar dena.

Practice: `examples/04_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 5. has_single_bit

### Aasan Bhasha

Bit tricks ek integer ke andar alag-alag flags set, clear aur test karte hain. Shift-heavy code me unsigned types prefer karo. `std::bitset` fixed-width bit sets ko padhne layak banata hai.

### Chhota code

```cpp
unsigned flags = 0;
flags |= (1u << 3);           // set bit 3
bool on = flags & (1u << 3);  // test
flags &= ~(1u << 3);          // clear
```

- **Yaad rakho:** Signed ints par sign bit tak ya uske aage shift karna UB ho sakta hai.
- **Aam galti:** Bitmasks ke liye signed `int` use karna aur sign bit me shift kar dena.

Practice: `examples/05_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 6. bit_floor / bit_ceil

### Aasan Bhasha

Bit tricks ek integer ke andar alag-alag flags set, clear aur test karte hain. Shift-heavy code me unsigned types prefer karo. `std::bitset` fixed-width bit sets ko padhne layak banata hai.

### Chhota code

```cpp
unsigned flags = 0;
flags |= (1u << 3);           // set bit 3
bool on = flags & (1u << 3);  // test
flags &= ~(1u << 3);          // clear
```

- **Yaad rakho:** Signed ints par sign bit tak ya uske aage shift karna UB ho sakta hai.
- **Aam galti:** Bitmasks ke liye signed `int` use karna aur sign bit me shift kar dena.

Practice: `examples/06_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 7. Safe reinterpret

### Aasan Bhasha

Bit tricks ek integer ke andar alag-alag flags set, clear aur test karte hain. Shift-heavy code me unsigned types prefer karo. `std::bitset` fixed-width bit sets ko padhne layak banata hai.

### Chhota code

```cpp
unsigned flags = 0;
flags |= (1u << 3);           // set bit 3
bool on = flags & (1u << 3);  // test
flags &= ~(1u << 3);          // clear
```

- **Yaad rakho:** Signed ints par sign bit tak ya uske aage shift karna UB ho sakta hai.
- **Aam galti:** Bitmasks ke liye signed `int` use karna aur sign bit me shift kar dena.

Practice: `examples/07_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 8. vs unions

### Aasan Bhasha

Bit tricks ek integer ke andar alag-alag flags set, clear aur test karte hain. Shift-heavy code me unsigned types prefer karo. `std::bitset` fixed-width bit sets ko padhne layak banata hai.

### Chhota code

```cpp
unsigned flags = 0;
flags |= (1u << 3);           // set bit 3
bool on = flags & (1u << 3);  // test
flags &= ~(1u << 3);          // clear
```

- **Yaad rakho:** Signed ints par sign bit tak ya uske aage shift karna UB ho sakta hai.
- **Aam galti:** Bitmasks ke liye signed `int` use karna aur sign bit me shift kar dena.

Practice: `examples/08_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 9. Use in hashing

### Aasan Bhasha

Bit tricks ek integer ke andar alag-alag flags set, clear aur test karte hain. Shift-heavy code me unsigned types prefer karo. `std::bitset` fixed-width bit sets ko padhne layak banata hai.

### Chhota code

```cpp
unsigned flags = 0;
flags |= (1u << 3);           // set bit 3
bool on = flags & (1u << 3);  // test
flags &= ~(1u << 3);          // clear
```

- **Yaad rakho:** Signed ints par sign bit tak ya uske aage shift karna UB ho sakta hai.
- **Aam galti:** Bitmasks ke liye signed `int` use karna aur sign bit me shift kar dena.

Practice: `examples/09_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 10. Power-of-two round

### Aasan Bhasha

Bit tricks ek integer ke andar alag-alag flags set, clear aur test karte hain. Shift-heavy code me unsigned types prefer karo. `std::bitset` fixed-width bit sets ko padhne layak banata hai.

### Chhota code

```cpp
unsigned flags = 0;
flags |= (1u << 3);           // set bit 3
bool on = flags & (1u << 3);  // test
flags &= ~(1u << 3);          // clear
```

- **Yaad rakho:** Signed ints par sign bit tak ya uske aage shift karna UB ho sakta hai.
- **Aam galti:** Bitmasks ke liye signed `int` use karna aur sign bit me shift kar dena.

Practice: `examples/10_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

---

## Day 124 ke baad aapko ye aana chahiye

- `bit utilities (C++20)` ko bina notes dekhe kisi dost ko samjha sakna.
- Saare 10 examples `-std=c++17 -Wall -Wextra` ke saath compile aur run karna (naye flags sirf tab jab din ko C++20+ chahiye).
- `answers.md` dekhne se pehle `questions.md` ke 5 sawaal answer karna.
- Ek chhota extra program likhna jo aaj ke kam se kam 3 concepts jodta ho.

Ya is din ko **Badsha hub** me kholo (`python3 hub/server.py`) aur Learn / Practice / Quiz tabs use karo.
