# Day 48 -- References collapsing & forwarding

Aaj ka goal: **References collapsing & forwarding** ko aasan Hinglish me samajhna, har idea ka chhota code sample dekhna, phir `examples/` me practice karna.

Is din ko padhne ka tarika:
1. Har concept ka **Aasan Bhasha** section padho.
2. Code sample par nazar daalo -- pehle predict karo ki output kya aayega.
3. `examples/` me us concept ki file chalao.
4. Uske baad hi `questions.md` kholo.

| # | Concept |
|--:|---------|
| 1 | lvalue/rvalue ref collapse |
| 2 | Universal references (T&&) |
| 3 | std::forward |
| 4 | make_pair style factories |
| 5 | Forwarding in wrappers |
| 6 | reference_wrapper |
| 7 | Common deduction mistakes |
| 8 | auto&& in range-for |
| 9 | Emplace forwarding |
| 10 | A thin wrapper demo |

---

## 1. lvalue/rvalue ref collapse

### Aasan Bhasha

Move deep-copy ki jagah us object se resources chura leta hai jiska kaam khatam ho chuka hai. `std::move` sirf ek cast hai jo churana allow karta hai; khud se move nahi karta.

### Chhota code

```cpp
std::string a = "hello";
std::string b = std::move(a);  // b owns the buffer
// a is valid but unspecified (often empty)
```

- **Yaad rakho:** `std::move(x)` ke baad `x` me sirf assign karo ya use destroy karo — value mat padho.
- **Aam galti:** Moved-from object ko aise use karna jaise usme purana data ab bhi ho.

Practice: `examples/01_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 2. Universal references (T&&)

### Aasan Bhasha

Move deep-copy ki jagah us object se resources chura leta hai jiska kaam khatam ho chuka hai. `std::move` sirf ek cast hai jo churana allow karta hai; khud se move nahi karta.

### Chhota code

```cpp
std::string a = "hello";
std::string b = std::move(a);  // b owns the buffer
// a is valid but unspecified (often empty)
```

- **Yaad rakho:** `std::move(x)` ke baad `x` me sirf assign karo ya use destroy karo — value mat padho.
- **Aam galti:** Moved-from object ko aise use karna jaise usme purana data ab bhi ho.

Practice: `examples/02_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 3. std::forward

### Aasan Bhasha

Move deep-copy ki jagah us object se resources chura leta hai jiska kaam khatam ho chuka hai. `std::move` sirf ek cast hai jo churana allow karta hai; khud se move nahi karta.

### Chhota code

```cpp
std::string a = "hello";
std::string b = std::move(a);  // b owns the buffer
// a is valid but unspecified (often empty)
```

- **Yaad rakho:** `std::move(x)` ke baad `x` me sirf assign karo ya use destroy karo — value mat padho.
- **Aam galti:** Moved-from object ko aise use karna jaise usme purana data ab bhi ho.

Practice: `examples/03_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 4. make_pair style factories

### Aasan Bhasha

Move deep-copy ki jagah us object se resources chura leta hai jiska kaam khatam ho chuka hai. `std::move` sirf ek cast hai jo churana allow karta hai; khud se move nahi karta.

### Chhota code

```cpp
std::string a = "hello";
std::string b = std::move(a);  // b owns the buffer
// a is valid but unspecified (often empty)
```

- **Yaad rakho:** `std::move(x)` ke baad `x` me sirf assign karo ya use destroy karo — value mat padho.
- **Aam galti:** Moved-from object ko aise use karna jaise usme purana data ab bhi ho.

Practice: `examples/04_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 5. Forwarding in wrappers

### Aasan Bhasha

Move deep-copy ki jagah us object se resources chura leta hai jiska kaam khatam ho chuka hai. `std::move` sirf ek cast hai jo churana allow karta hai; khud se move nahi karta.

### Chhota code

```cpp
std::string a = "hello";
std::string b = std::move(a);  // b owns the buffer
// a is valid but unspecified (often empty)
```

- **Yaad rakho:** `std::move(x)` ke baad `x` me sirf assign karo ya use destroy karo — value mat padho.
- **Aam galti:** Moved-from object ko aise use karna jaise usme purana data ab bhi ho.

Practice: `examples/05_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 6. reference_wrapper

### Aasan Bhasha

Move deep-copy ki jagah us object se resources chura leta hai jiska kaam khatam ho chuka hai. `std::move` sirf ek cast hai jo churana allow karta hai; khud se move nahi karta.

### Chhota code

```cpp
std::string a = "hello";
std::string b = std::move(a);  // b owns the buffer
// a is valid but unspecified (often empty)
```

- **Yaad rakho:** `std::move(x)` ke baad `x` me sirf assign karo ya use destroy karo — value mat padho.
- **Aam galti:** Moved-from object ko aise use karna jaise usme purana data ab bhi ho.

Practice: `examples/06_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 7. Common deduction mistakes

### Aasan Bhasha

Move deep-copy ki jagah us object se resources chura leta hai jiska kaam khatam ho chuka hai. `std::move` sirf ek cast hai jo churana allow karta hai; khud se move nahi karta.

### Chhota code

```cpp
std::string a = "hello";
std::string b = std::move(a);  // b owns the buffer
// a is valid but unspecified (often empty)
```

- **Yaad rakho:** `std::move(x)` ke baad `x` me sirf assign karo ya use destroy karo — value mat padho.
- **Aam galti:** Moved-from object ko aise use karna jaise usme purana data ab bhi ho.

Practice: `examples/07_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 8. auto&& in range-for

### Aasan Bhasha

Move deep-copy ki jagah us object se resources chura leta hai jiska kaam khatam ho chuka hai. `std::move` sirf ek cast hai jo churana allow karta hai; khud se move nahi karta.

### Chhota code

```cpp
std::string a = "hello";
std::string b = std::move(a);  // b owns the buffer
// a is valid but unspecified (often empty)
```

- **Yaad rakho:** `std::move(x)` ke baad `x` me sirf assign karo ya use destroy karo — value mat padho.
- **Aam galti:** Moved-from object ko aise use karna jaise usme purana data ab bhi ho.

Practice: `examples/08_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 9. Emplace forwarding

### Aasan Bhasha

Move deep-copy ki jagah us object se resources chura leta hai jiska kaam khatam ho chuka hai. `std::move` sirf ek cast hai jo churana allow karta hai; khud se move nahi karta.

### Chhota code

```cpp
std::string a = "hello";
std::string b = std::move(a);  // b owns the buffer
// a is valid but unspecified (often empty)
```

- **Yaad rakho:** `std::move(x)` ke baad `x` me sirf assign karo ya use destroy karo — value mat padho.
- **Aam galti:** Moved-from object ko aise use karna jaise usme purana data ab bhi ho.

Practice: `examples/09_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 10. A thin wrapper demo

### Aasan Bhasha

Move deep-copy ki jagah us object se resources chura leta hai jiska kaam khatam ho chuka hai. `std::move` sirf ek cast hai jo churana allow karta hai; khud se move nahi karta.

### Chhota code

```cpp
std::string a = "hello";
std::string b = std::move(a);  // b owns the buffer
// a is valid but unspecified (often empty)
```

- **Yaad rakho:** `std::move(x)` ke baad `x` me sirf assign karo ya use destroy karo — value mat padho.
- **Aam galti:** Moved-from object ko aise use karna jaise usme purana data ab bhi ho.

Practice: `examples/10_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

---

## Day 48 ke baad aapko ye aana chahiye

- `References collapsing & forwarding` ko bina notes dekhe kisi dost ko samjha sakna.
- Saare 10 examples `-std=c++17 -Wall -Wextra` ke saath compile aur run karna (naye flags sirf tab jab din ko C++20+ chahiye).
- `answers.md` dekhne se pehle `questions.md` ke 5 sawaal answer karna.
- Ek chhota extra program likhna jo aaj ke kam se kam 3 concepts jodta ho.

Ya is din ko **Badsha hub** me kholo (`python3 hub/server.py`) aur Learn / Practice / Quiz tabs use karo.
