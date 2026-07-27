# Day 21 -- Error handling without exceptions

Aaj ka goal: **Error handling without exceptions** ko aasan Hinglish me samajhna, har idea ka chhota code sample dekhna, phir `examples/` me practice karna.

Is din ko padhne ka tarika:
1. Har concept ka **Aasan Bhasha** section padho.
2. Code sample par nazar daalo -- pehle predict karo ki output kya aayega.
3. `examples/` me us concept ki file chalao.
4. Uske baad hi `questions.md` kholo.

| # | Concept |
|--:|---------|
| 1 | Return codes |
| 2 | Out-parameters |
| 3 | Optional-like patterns (pre-optional) |
| 4 | Error enums |
| 5 | Assert for invariants |
| 6 | Logging errors |
| 7 | Fail-fast vs recover |
| 8 | errno style |
| 9 | Combining status + value |
| 10 | Choosing a strategy |

---

## 1. Return codes

### Aasan Bhasha

Exceptions happy path ko failure se alag karte hain. Jab function apna kaam na kar sake to throw karo; wahan catch karo jahan recover ya report ho sake. Unwinding ke dauraan bhi RAII cleanup karta hai.

### Chhota code

```cpp
try {
  throw std::runtime_error("boom");
} catch (const std::exception& e) {
  std::cerr << e.what() << '\n';
}
```

- **Yaad rakho:** `const` reference se catch karo, value se nahi.
- **Aam galti:** Raw pointers throw karna ya value se catch karna (slicing).

Practice: `examples/01_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 2. Out-parameters

### Aasan Bhasha

Exceptions happy path ko failure se alag karte hain. Jab function apna kaam na kar sake to throw karo; wahan catch karo jahan recover ya report ho sake. Unwinding ke dauraan bhi RAII cleanup karta hai.

### Chhota code

```cpp
try {
  throw std::runtime_error("boom");
} catch (const std::exception& e) {
  std::cerr << e.what() << '\n';
}
```

- **Yaad rakho:** `const` reference se catch karo, value se nahi.
- **Aam galti:** Raw pointers throw karna ya value se catch karna (slicing).

Practice: `examples/02_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 3. Optional-like patterns (pre-optional)

### Aasan Bhasha

`optional<T>` ya to T hai ya khaali — magic sentinel values se behtar. `variant` kai types me se ek rakhta hai. Clarity ke liye inhe raw unions ya `void*` se upar rakho.

### Chhota code

```cpp
#include <optional>
std::optional<int> parse(bool ok) {
  if (!ok) return std::nullopt;
  return 42;
}
int x = parse(true).value_or(-1);
```

- **Yaad rakho:** `value()` call karne se pehle `optional` check karo (ya `value_or` use karo).
- **Aam galti:** Khaali optional par `opt.value()` call karna → exception.

Practice: `examples/03_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 4. Error enums

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

## 5. Assert for invariants

### Aasan Bhasha

`optional<T>` ya to T hai ya khaali — magic sentinel values se behtar. `variant` kai types me se ek rakhta hai. Clarity ke liye inhe raw unions ya `void*` se upar rakho.

### Chhota code

```cpp
#include <optional>
std::optional<int> parse(bool ok) {
  if (!ok) return std::nullopt;
  return 42;
}
int x = parse(true).value_or(-1);
```

- **Yaad rakho:** `value()` call karne se pehle `optional` check karo (ya `value_or` use karo).
- **Aam galti:** Khaali optional par `opt.value()` call karna → exception.

Practice: `examples/05_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 6. Logging errors

### Aasan Bhasha

Exceptions happy path ko failure se alag karte hain. Jab function apna kaam na kar sake to throw karo; wahan catch karo jahan recover ya report ho sake. Unwinding ke dauraan bhi RAII cleanup karta hai.

### Chhota code

```cpp
try {
  throw std::runtime_error("boom");
} catch (const std::exception& e) {
  std::cerr << e.what() << '\n';
}
```

- **Yaad rakho:** `const` reference se catch karo, value se nahi.
- **Aam galti:** Raw pointers throw karna ya value se catch karna (slicing).

Practice: `examples/06_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 7. Fail-fast vs recover

### Aasan Bhasha

Exceptions happy path ko failure se alag karte hain. Jab function apna kaam na kar sake to throw karo; wahan catch karo jahan recover ya report ho sake. Unwinding ke dauraan bhi RAII cleanup karta hai.

### Chhota code

```cpp
try {
  throw std::runtime_error("boom");
} catch (const std::exception& e) {
  std::cerr << e.what() << '\n';
}
```

- **Yaad rakho:** `const` reference se catch karo, value se nahi.
- **Aam galti:** Raw pointers throw karna ya value se catch karna (slicing).

Practice: `examples/07_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 8. errno style

### Aasan Bhasha

Exceptions happy path ko failure se alag karte hain. Jab function apna kaam na kar sake to throw karo; wahan catch karo jahan recover ya report ho sake. Unwinding ke dauraan bhi RAII cleanup karta hai.

### Chhota code

```cpp
try {
  throw std::runtime_error("boom");
} catch (const std::exception& e) {
  std::cerr << e.what() << '\n';
}
```

- **Yaad rakho:** `const` reference se catch karo, value se nahi.
- **Aam galti:** Raw pointers throw karna ya value se catch karna (slicing).

Practice: `examples/08_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 9. Combining status + value

### Aasan Bhasha

Exceptions happy path ko failure se alag karte hain. Jab function apna kaam na kar sake to throw karo; wahan catch karo jahan recover ya report ho sake. Unwinding ke dauraan bhi RAII cleanup karta hai.

### Chhota code

```cpp
try {
  throw std::runtime_error("boom");
} catch (const std::exception& e) {
  std::cerr << e.what() << '\n';
}
```

- **Yaad rakho:** `const` reference se catch karo, value se nahi.
- **Aam galti:** Raw pointers throw karna ya value se catch karna (slicing).

Practice: `examples/09_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 10. Choosing a strategy

### Aasan Bhasha

Exceptions happy path ko failure se alag karte hain. Jab function apna kaam na kar sake to throw karo; wahan catch karo jahan recover ya report ho sake. Unwinding ke dauraan bhi RAII cleanup karta hai.

### Chhota code

```cpp
try {
  throw std::runtime_error("boom");
} catch (const std::exception& e) {
  std::cerr << e.what() << '\n';
}
```

- **Yaad rakho:** `const` reference se catch karo, value se nahi.
- **Aam galti:** Raw pointers throw karna ya value se catch karna (slicing).

Practice: `examples/10_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

---

## Day 21 ke baad aapko ye aana chahiye

- `Error handling without exceptions` ko bina notes dekhe kisi dost ko samjha sakna.
- Saare 10 examples `-std=c++17 -Wall -Wextra` ke saath compile aur run karna (naye flags sirf tab jab din ko C++20+ chahiye).
- `answers.md` dekhne se pehle `questions.md` ke 5 sawaal answer karna.
- Ek chhota extra program likhna jo aaj ke kam se kam 3 concepts jodta ho.

Ya is din ko **Badsha hub** me kholo (`python3 hub/server.py`) aur Learn / Practice / Quiz tabs use karo.
