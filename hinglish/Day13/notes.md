# Day 13 -- Enums & enum class

Aaj ka goal: **Enums & enum class** ko aasan Hinglish me samajhna, har idea ka chhota code sample dekhna, phir `examples/` me practice karna.

Is din ko padhne ka tarika:
1. Har concept ka **Aasan Bhasha** section padho.
2. Code sample par nazar daalo -- pehle predict karo ki output kya aayega.
3. `examples/` me us concept ki file chalao.
4. Uske baad hi `questions.md` kholo.

| # | Concept |
|--:|---------|
| 1 | Classic C enums |
| 2 | enum class (scoped enums) |
| 3 | Underlying types |
| 4 | Switching on enums |
| 5 | Casting between enum and int |
| 6 | Using enums as bit flags carefully |
| 7 | Enums in APIs |
| 8 | Forward-declaring enum class |
| 9 | Comparisons and ordering |
| 10 | When not to use enums |

---

## 1. Classic C enums

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

Practice: `examples/01_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 2. enum class (scoped enums)

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

Practice: `examples/02_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 3. Underlying types

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

Practice: `examples/03_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 4. Switching on enums

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

Practice: `examples/04_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 5. Casting between enum and int

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

Practice: `examples/05_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 6. Using enums as bit flags carefully

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

Practice: `examples/06_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 7. Enums in APIs

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

Practice: `examples/07_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 8. Forward-declaring enum class

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

Practice: `examples/08_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 9. Comparisons and ordering

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

## 10. When not to use enums

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

Practice: `examples/10_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

---

## Day 13 ke baad aapko ye aana chahiye

- `Enums & enum class` ko bina notes dekhe kisi dost ko samjha sakna.
- Saare 10 examples `-std=c++17 -Wall -Wextra` ke saath compile aur run karna (naye flags sirf tab jab din ko C++20+ chahiye).
- `answers.md` dekhne se pehle `questions.md` ke 5 sawaal answer karna.
- Ek chhota extra program likhna jo aaj ke kam se kam 3 concepts jodta ho.

Ya is din ko **Badsha hub** me kholo (`python3 hub/server.py`) aur Learn / Practice / Quiz tabs use karo.
