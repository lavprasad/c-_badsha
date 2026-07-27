# Day 24 -- Bit manipulation

Aaj ka goal: **Bit manipulation** ko aasan Hinglish me samajhna, har idea ka chhota code sample dekhna, phir `examples/` me practice karna.

Is din ko padhne ka tarika:
1. Har concept ka **Aasan Bhasha** section padho.
2. Code sample par nazar daalo -- pehle predict karo ki output kya aayega.
3. `examples/` me us concept ki file chalao.
4. Uske baad hi `questions.md` kholo.

| # | Concept |
|--:|---------|
| 1 | Bits, masks, shifts |
| 2 | Setting/clearing/toggling bits |
| 3 | Testing a bit |
| 4 | Bitwise vs logical |
| 5 | Endianness awareness |
| 6 | std::bitset |
| 7 | Counting bits (naive) |
| 8 | Power-of-two tricks |
| 9 | Flags enums |
| 10 | Safety with signed shifts |

---

## 1. Bits, masks, shifts

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

## 2. Setting/clearing/toggling bits

### Aasan Bhasha

`map` keys ko sorted rakhta hai (tree); `unordered_map` hash karta hai aur average O(1) lookup deta hai. Order chahiye to sorted chuno; speed chahiye aur acha hash hai to hash chuno.

### Chhota code

```cpp
std::unordered_map<std::string, int> freq;
++freq["hi"];
for (auto& [k, v] : freq) std::cout << k << ':' << v << '\n';
```

- **Yaad rakho:** `operator[]` key na mile to default value insert kar deta hai.
- **Aam galti:** Sirf lookup ke liye `[]` use karna — missing key error ho to `find` / `at` behtar hai.

Practice: `examples/02_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 3. Testing a bit

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

## 4. Bitwise vs logical

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

## 5. Endianness awareness

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

Practice: `examples/05_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 6. std::bitset

### Aasan Bhasha

`map` keys ko sorted rakhta hai (tree); `unordered_map` hash karta hai aur average O(1) lookup deta hai. Order chahiye to sorted chuno; speed chahiye aur acha hash hai to hash chuno.

### Chhota code

```cpp
std::unordered_map<std::string, int> freq;
++freq["hi"];
for (auto& [k, v] : freq) std::cout << k << ':' << v << '\n';
```

- **Yaad rakho:** `operator[]` key na mile to default value insert kar deta hai.
- **Aam galti:** Sirf lookup ke liye `[]` use karna — missing key error ho to `find` / `at` behtar hai.

Practice: `examples/06_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 7. Counting bits (naive)

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

## 8. Power-of-two tricks

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

## 9. Flags enums

### Aasan Bhasha

Enum chhote se choices ke set ko naam deta hai. `enum class` prefer karo taaki naam scoped rahein (`Color::Red`) aur chupke se int na ban jaayein.

### Chhota code

```cpp
enum class Color { Red, Green, Blue };
Color c = Color::Red;
// int x = c;  // error — good
int x = static_cast<int>(c);
```

- **Yaad rakho:** `enum class` hi use karo, jab tak purane C-style unscoped enum ki asli zaroorat na ho.
- **Aam galti:** Enum par switch karna par saare cases ya `default` cover na karna.

Practice: `examples/09_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 10. Safety with signed shifts

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

## Day 24 ke baad aapko ye aana chahiye

- `Bit manipulation` ko bina notes dekhe kisi dost ko samjha sakna.
- Saare 10 examples `-std=c++17 -Wall -Wextra` ke saath compile aur run karna (naye flags sirf tab jab din ko C++20+ chahiye).
- `answers.md` dekhne se pehle `questions.md` ke 5 sawaal answer karna.
- Ek chhota extra program likhna jo aaj ke kam se kam 3 concepts jodta ho.

Ya is din ko **Badsha hub** me kholo (`python3 hub/server.py`) aur Learn / Practice / Quiz tabs use karo.
