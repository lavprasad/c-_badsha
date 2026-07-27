# Day 16 -- const correctness

Aaj ka goal: **const correctness** ko aasan Hinglish me samajhna, har idea ka chhota code sample dekhna, phir `examples/` me practice karna.

Is din ko padhne ka tarika:
1. Har concept ka **Aasan Bhasha** section padho.
2. Code sample par nazar daalo -- pehle predict karo ki output kya aayega.
3. `examples/` me us concept ki file chalao.
4. Uske baad hi `questions.md` kholo.

| # | Concept |
|--:|---------|
| 1 | const variables |
| 2 | const pointers vs pointer-to-const |
| 3 | const member functions |
| 4 | mutable members |
| 5 | const_cast dangers |
| 6 | Passing const T& |
| 7 | Returning const references |
| 8 | Logical vs bitwise const |
| 9 | const iterators |
| 10 | Designing const-friendly APIs |

---

## 1. const variables

### Aasan Bhasha

`const` ek vaada hai: 'main is naam ke through ise nahi badlunga.' Ye bugs compile time par pakadta hai aur intent document karta hai. Observers par aur sirf-padhne wale parameters par `const` lagao.

### Chhota code

```cpp
void print(const std::string& s);  // no copy, no mutate
struct Counter {
  int n = 0;
  int get() const { return n; }  // may call on const objects
};
```

- **Yaad rakho:** Machine word se bade read-only parameters ke liye `const T&` prefer karo.
- **Aam galti:** `const` hata kar aisi cheez badalna jise callers fixed maan rahe the.

Practice: `examples/01_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 2. const pointers vs pointer-to-const

### Aasan Bhasha

`const` ek vaada hai: 'main is naam ke through ise nahi badlunga.' Ye bugs compile time par pakadta hai aur intent document karta hai. Observers par aur sirf-padhne wale parameters par `const` lagao.

### Chhota code

```cpp
void print(const std::string& s);  // no copy, no mutate
struct Counter {
  int n = 0;
  int get() const { return n; }  // may call on const objects
};
```

- **Yaad rakho:** Machine word se bade read-only parameters ke liye `const T&` prefer karo.
- **Aam galti:** `const` hata kar aisi cheez badalna jise callers fixed maan rahe the.

Practice: `examples/02_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 3. const member functions

### Aasan Bhasha

`const` ek vaada hai: 'main is naam ke through ise nahi badlunga.' Ye bugs compile time par pakadta hai aur intent document karta hai. Observers par aur sirf-padhne wale parameters par `const` lagao.

### Chhota code

```cpp
void print(const std::string& s);  // no copy, no mutate
struct Counter {
  int n = 0;
  int get() const { return n; }  // may call on const objects
};
```

- **Yaad rakho:** Machine word se bade read-only parameters ke liye `const T&` prefer karo.
- **Aam galti:** `const` hata kar aisi cheez badalna jise callers fixed maan rahe the.

Practice: `examples/03_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 4. mutable members

### Aasan Bhasha

`const` ek vaada hai: 'main is naam ke through ise nahi badlunga.' Ye bugs compile time par pakadta hai aur intent document karta hai. Observers par aur sirf-padhne wale parameters par `const` lagao.

### Chhota code

```cpp
void print(const std::string& s);  // no copy, no mutate
struct Counter {
  int n = 0;
  int get() const { return n; }  // may call on const objects
};
```

- **Yaad rakho:** Machine word se bade read-only parameters ke liye `const T&` prefer karo.
- **Aam galti:** `const` hata kar aisi cheez badalna jise callers fixed maan rahe the.

Practice: `examples/04_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 5. const_cast dangers

### Aasan Bhasha

`const` ek vaada hai: 'main is naam ke through ise nahi badlunga.' Ye bugs compile time par pakadta hai aur intent document karta hai. Observers par aur sirf-padhne wale parameters par `const` lagao.

### Chhota code

```cpp
void print(const std::string& s);  // no copy, no mutate
struct Counter {
  int n = 0;
  int get() const { return n; }  // may call on const objects
};
```

- **Yaad rakho:** Machine word se bade read-only parameters ke liye `const T&` prefer karo.
- **Aam galti:** `const` hata kar aisi cheez badalna jise callers fixed maan rahe the.

Practice: `examples/05_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 6. Passing const T&

### Aasan Bhasha

`const` ek vaada hai: 'main is naam ke through ise nahi badlunga.' Ye bugs compile time par pakadta hai aur intent document karta hai. Observers par aur sirf-padhne wale parameters par `const` lagao.

### Chhota code

```cpp
void print(const std::string& s);  // no copy, no mutate
struct Counter {
  int n = 0;
  int get() const { return n; }  // may call on const objects
};
```

- **Yaad rakho:** Machine word se bade read-only parameters ke liye `const T&` prefer karo.
- **Aam galti:** `const` hata kar aisi cheez badalna jise callers fixed maan rahe the.

Practice: `examples/06_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 7. Returning const references

### Aasan Bhasha

`const` ek vaada hai: 'main is naam ke through ise nahi badlunga.' Ye bugs compile time par pakadta hai aur intent document karta hai. Observers par aur sirf-padhne wale parameters par `const` lagao.

### Chhota code

```cpp
void print(const std::string& s);  // no copy, no mutate
struct Counter {
  int n = 0;
  int get() const { return n; }  // may call on const objects
};
```

- **Yaad rakho:** Machine word se bade read-only parameters ke liye `const T&` prefer karo.
- **Aam galti:** `const` hata kar aisi cheez badalna jise callers fixed maan rahe the.

Practice: `examples/07_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 8. Logical vs bitwise const

### Aasan Bhasha

`const` ek vaada hai: 'main is naam ke through ise nahi badlunga.' Ye bugs compile time par pakadta hai aur intent document karta hai. Observers par aur sirf-padhne wale parameters par `const` lagao.

### Chhota code

```cpp
void print(const std::string& s);  // no copy, no mutate
struct Counter {
  int n = 0;
  int get() const { return n; }  // may call on const objects
};
```

- **Yaad rakho:** Machine word se bade read-only parameters ke liye `const T&` prefer karo.
- **Aam galti:** `const` hata kar aisi cheez badalna jise callers fixed maan rahe the.

Practice: `examples/08_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 9. const iterators

### Aasan Bhasha

`const` ek vaada hai: 'main is naam ke through ise nahi badlunga.' Ye bugs compile time par pakadta hai aur intent document karta hai. Observers par aur sirf-padhne wale parameters par `const` lagao.

### Chhota code

```cpp
void print(const std::string& s);  // no copy, no mutate
struct Counter {
  int n = 0;
  int get() const { return n; }  // may call on const objects
};
```

- **Yaad rakho:** Machine word se bade read-only parameters ke liye `const T&` prefer karo.
- **Aam galti:** `const` hata kar aisi cheez badalna jise callers fixed maan rahe the.

Practice: `examples/09_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 10. Designing const-friendly APIs

### Aasan Bhasha

`const` ek vaada hai: 'main is naam ke through ise nahi badlunga.' Ye bugs compile time par pakadta hai aur intent document karta hai. Observers par aur sirf-padhne wale parameters par `const` lagao.

### Chhota code

```cpp
void print(const std::string& s);  // no copy, no mutate
struct Counter {
  int n = 0;
  int get() const { return n; }  // may call on const objects
};
```

- **Yaad rakho:** Machine word se bade read-only parameters ke liye `const T&` prefer karo.
- **Aam galti:** `const` hata kar aisi cheez badalna jise callers fixed maan rahe the.

Practice: `examples/10_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

---

## Day 16 ke baad aapko ye aana chahiye

- `const correctness` ko bina notes dekhe kisi dost ko samjha sakna.
- Saare 10 examples `-std=c++17 -Wall -Wextra` ke saath compile aur run karna (naye flags sirf tab jab din ko C++20+ chahiye).
- `answers.md` dekhne se pehle `questions.md` ke 5 sawaal answer karna.
- Ek chhota extra program likhna jo aaj ke kam se kam 3 concepts jodta ho.

Ya is din ko **Badsha hub** me kholo (`python3 hub/server.py`) aur Learn / Practice / Quiz tabs use karo.
