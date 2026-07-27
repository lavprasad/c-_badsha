# Day 33 -- string_view (C++17)

Aaj ka goal: **string_view (C++17)** ko aasan Hinglish me samajhna, har idea ka chhota code sample dekhna, phir `examples/` me practice karna.

Is din ko padhne ka tarika:
1. Har concept ka **Aasan Bhasha** section padho.
2. Code sample par nazar daalo -- pehle predict karo ki output kya aayega.
3. `examples/` me us concept ki file chalao.
4. Uske baad hi `questions.md` kholo.

| # | Concept |
|--:|---------|
| 1 | What string_view is |
| 2 | Non-owning views |
| 3 | Lifetime with string and C-strings |
| 4 | Lifetime traps (dangling) |
| 5 | remove_prefix / remove_suffix |
| 6 | find on string_view |
| 7 | API design with string_view |
| 8 | Null-termination caution |
| 9 | Lifetimeing to string when needed |
| 10 | A tokenizer sketch |

---

## 1. What string_view is

### Aasan Bhasha

`std::string` character data own karta hai aur zaroorat par badhta hai. Safety ke liye ise raw `char*` se behtar samjho. `string_view` ek non-owning khidki hai — read-only parameters ke liye badhiya, lekin agar string se zyada jeeya to khatarnak.

### Chhota code

```cpp
std::string s = "hello";
std::string_view v = s;  // ok while s lives
auto t = s.substr(0, 2); // "he"
```

- **Yaad rakho:** Local temporary ko point karta `string_view` kabhi return mat karo.
- **Aam galti:** `getline` aur `>>` mix karna bina bache hue newline ko clear kiye.

Practice: `examples/01_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 2. Non-owning views

### Aasan Bhasha

`std::string` character data own karta hai aur zaroorat par badhta hai. Safety ke liye ise raw `char*` se behtar samjho. `string_view` ek non-owning khidki hai — read-only parameters ke liye badhiya, lekin agar string se zyada jeeya to khatarnak.

### Chhota code

```cpp
std::string s = "hello";
std::string_view v = s;  // ok while s lives
auto t = s.substr(0, 2); // "he"
```

- **Yaad rakho:** Local temporary ko point karta `string_view` kabhi return mat karo.
- **Aam galti:** `getline` aur `>>` mix karna bina bache hue newline ko clear kiye.

Practice: `examples/02_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 3. Lifetime with string and C-strings

### Aasan Bhasha

`std::string` character data own karta hai aur zaroorat par badhta hai. Safety ke liye ise raw `char*` se behtar samjho. `string_view` ek non-owning khidki hai — read-only parameters ke liye badhiya, lekin agar string se zyada jeeya to khatarnak.

### Chhota code

```cpp
std::string s = "hello";
std::string_view v = s;  // ok while s lives
auto t = s.substr(0, 2); // "he"
```

- **Yaad rakho:** Local temporary ko point karta `string_view` kabhi return mat karo.
- **Aam galti:** `getline` aur `>>` mix karna bina bache hue newline ko clear kiye.

Practice: `examples/03_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 4. Lifetime traps (dangling)

### Aasan Bhasha

`std::string` character data own karta hai aur zaroorat par badhta hai. Safety ke liye ise raw `char*` se behtar samjho. `string_view` ek non-owning khidki hai — read-only parameters ke liye badhiya, lekin agar string se zyada jeeya to khatarnak.

### Chhota code

```cpp
std::string s = "hello";
std::string_view v = s;  // ok while s lives
auto t = s.substr(0, 2); // "he"
```

- **Yaad rakho:** Local temporary ko point karta `string_view` kabhi return mat karo.
- **Aam galti:** `getline` aur `>>` mix karna bina bache hue newline ko clear kiye.

Practice: `examples/04_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 5. remove_prefix / remove_suffix

### Aasan Bhasha

`std::string` character data own karta hai aur zaroorat par badhta hai. Safety ke liye ise raw `char*` se behtar samjho. `string_view` ek non-owning khidki hai — read-only parameters ke liye badhiya, lekin agar string se zyada jeeya to khatarnak.

### Chhota code

```cpp
std::string s = "hello";
std::string_view v = s;  // ok while s lives
auto t = s.substr(0, 2); // "he"
```

- **Yaad rakho:** Local temporary ko point karta `string_view` kabhi return mat karo.
- **Aam galti:** `getline` aur `>>` mix karna bina bache hue newline ko clear kiye.

Practice: `examples/05_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 6. find on string_view

### Aasan Bhasha

`std::string` character data own karta hai aur zaroorat par badhta hai. Safety ke liye ise raw `char*` se behtar samjho. `string_view` ek non-owning khidki hai — read-only parameters ke liye badhiya, lekin agar string se zyada jeeya to khatarnak.

### Chhota code

```cpp
std::string s = "hello";
std::string_view v = s;  // ok while s lives
auto t = s.substr(0, 2); // "he"
```

- **Yaad rakho:** Local temporary ko point karta `string_view` kabhi return mat karo.
- **Aam galti:** `getline` aur `>>` mix karna bina bache hue newline ko clear kiye.

Practice: `examples/06_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 7. API design with string_view

### Aasan Bhasha

`std::string` character data own karta hai aur zaroorat par badhta hai. Safety ke liye ise raw `char*` se behtar samjho. `string_view` ek non-owning khidki hai — read-only parameters ke liye badhiya, lekin agar string se zyada jeeya to khatarnak.

### Chhota code

```cpp
std::string s = "hello";
std::string_view v = s;  // ok while s lives
auto t = s.substr(0, 2); // "he"
```

- **Yaad rakho:** Local temporary ko point karta `string_view` kabhi return mat karo.
- **Aam galti:** `getline` aur `>>` mix karna bina bache hue newline ko clear kiye.

Practice: `examples/07_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 8. Null-termination caution

### Aasan Bhasha

`std::string` character data own karta hai aur zaroorat par badhta hai. Safety ke liye ise raw `char*` se behtar samjho. `string_view` ek non-owning khidki hai — read-only parameters ke liye badhiya, lekin agar string se zyada jeeya to khatarnak.

### Chhota code

```cpp
std::string s = "hello";
std::string_view v = s;  // ok while s lives
auto t = s.substr(0, 2); // "he"
```

- **Yaad rakho:** Local temporary ko point karta `string_view` kabhi return mat karo.
- **Aam galti:** `getline` aur `>>` mix karna bina bache hue newline ko clear kiye.

Practice: `examples/08_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 9. Lifetimeing to string when needed

### Aasan Bhasha

`std::string` character data own karta hai aur zaroorat par badhta hai. Safety ke liye ise raw `char*` se behtar samjho. `string_view` ek non-owning khidki hai — read-only parameters ke liye badhiya, lekin agar string se zyada jeeya to khatarnak.

### Chhota code

```cpp
std::string s = "hello";
std::string_view v = s;  // ok while s lives
auto t = s.substr(0, 2); // "he"
```

- **Yaad rakho:** Local temporary ko point karta `string_view` kabhi return mat karo.
- **Aam galti:** `getline` aur `>>` mix karna bina bache hue newline ko clear kiye.

Practice: `examples/09_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 10. A tokenizer sketch

### Aasan Bhasha

`std::string` character data own karta hai aur zaroorat par badhta hai. Safety ke liye ise raw `char*` se behtar samjho. `string_view` ek non-owning khidki hai — read-only parameters ke liye badhiya, lekin agar string se zyada jeeya to khatarnak.

### Chhota code

```cpp
std::string s = "hello";
std::string_view v = s;  // ok while s lives
auto t = s.substr(0, 2); // "he"
```

- **Yaad rakho:** Local temporary ko point karta `string_view` kabhi return mat karo.
- **Aam galti:** `getline` aur `>>` mix karna bina bache hue newline ko clear kiye.

Practice: `examples/10_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

---

## Day 33 ke baad aapko ye aana chahiye

- `string_view (C++17)` ko bina notes dekhe kisi dost ko samjha sakna.
- Saare 10 examples `-std=c++17 -Wall -Wextra` ke saath compile aur run karna (naye flags sirf tab jab din ko C++20+ chahiye).
- `answers.md` dekhne se pehle `questions.md` ke 5 sawaal answer karna.
- Ek chhota extra program likhna jo aaj ke kam se kam 3 concepts jodta ho.

Ya is din ko **Badsha hub** me kholo (`python3 hub/server.py`) aur Learn / Practice / Quiz tabs use karo.
