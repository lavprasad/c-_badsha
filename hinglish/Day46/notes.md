# Day 46 -- Exceptions advanced

Aaj ka goal: **Exceptions advanced** ko aasan Hinglish me samajhna, har idea ka chhota code sample dekhna, phir `examples/` me practice karna.

Is din ko padhne ka tarika:
1. Har concept ka **Aasan Bhasha** section padho.
2. Code sample par nazar daalo -- pehle predict karo ki output kya aayega.
3. `examples/` me us concept ki file chalao.
4. Uske baad hi `questions.md` kholo.

| # | Concept |
|--:|---------|
| 1 | Exception hierarchies |
| 2 | catch by const reference |
| 3 | rethrow |
| 4 | noexcept and move |
| 5 | Exception safety levels |
| 6 | RAII + exceptions |
| 7 | What not to throw |
| 8 | std::exception_ptr idea |
| 9 | Constructors and exceptions |
| 10 | Designing error types |

---

## 1. Exception hierarchies

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

## 2. catch by const reference

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

## 3. rethrow

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

Practice: `examples/03_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 4. noexcept and move

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

Practice: `examples/04_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 5. Exception safety levels

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

Practice: `examples/05_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 6. RAII + exceptions

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

## 7. What not to throw

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

## 8. std::exception_ptr idea

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

## 9. Constructors and exceptions

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

## 10. Designing error types

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

## Day 46 ke baad aapko ye aana chahiye

- `Exceptions advanced` ko bina notes dekhe kisi dost ko samjha sakna.
- Saare 10 examples `-std=c++17 -Wall -Wextra` ke saath compile aur run karna (naye flags sirf tab jab din ko C++20+ chahiye).
- `answers.md` dekhne se pehle `questions.md` ke 5 sawaal answer karna.
- Ek chhota extra program likhna jo aaj ke kam se kam 3 concepts jodta ho.

Ya is din ko **Badsha hub** me kholo (`python3 hub/server.py`) aur Learn / Practice / Quiz tabs use karo.
