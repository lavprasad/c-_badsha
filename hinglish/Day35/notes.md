# Day 35 -- Lambda mastery

Aaj ka goal: **Lambda mastery** ko aasan Hinglish me samajhna, har idea ka chhota code sample dekhna, phir `examples/` me practice karna.

Is din ko padhne ka tarika:
1. Har concept ka **Aasan Bhasha** section padho.
2. Code sample par nazar daalo -- pehle predict karo ki output kya aayega.
3. `examples/` me us concept ki file chalao.
4. Uske baad hi `questions.md` kholo.

| # | Concept |
|--:|---------|
| 1 | Syntax recap |
| 2 | Capture by value/reference |
| 3 | mutable lambdas |
| 4 | Generic lambdas (auto params) |
| 5 | Returning lambdas |
| 6 | Storing in std::function |
| 7 | Immediately-invoked lambdas |
| 8 | Lambdas as comparators |
| 9 | Capture init (C++14) |
| 10 | Common capture bugs |

---

## 1. Syntax recap

### Aasan Bhasha

Lambda ek chhota bina-naam ka function object hai. `[=]` value se ya `[&]` reference se capture — dhyan se, kyunki reference wale locals lambda se zyada jeene chahiye.

### Chhota code

```cpp
int factor = 2;
auto twice = [factor](int x) { return x * factor; };
std::vector<int> v{1,2,3};
std::sort(v.begin(), v.end(), [](int a, int b){ return a > b; });
```

- **Yaad rakho:** Locals ko reference se capture karke lambda ko upar return mat karo.
- **Aam galti:** Stack frame khatam hone ke baad dangling captures.

Practice: `examples/01_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 2. Capture by value/reference

### Aasan Bhasha

Lambda ek chhota bina-naam ka function object hai. `[=]` value se ya `[&]` reference se capture — dhyan se, kyunki reference wale locals lambda se zyada jeene chahiye.

### Chhota code

```cpp
int factor = 2;
auto twice = [factor](int x) { return x * factor; };
std::vector<int> v{1,2,3};
std::sort(v.begin(), v.end(), [](int a, int b){ return a > b; });
```

- **Yaad rakho:** Locals ko reference se capture karke lambda ko upar return mat karo.
- **Aam galti:** Stack frame khatam hone ke baad dangling captures.

Practice: `examples/02_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 3. mutable lambdas

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

## 4. Generic lambdas (auto params)

### Aasan Bhasha

Lambda ek chhota bina-naam ka function object hai. `[=]` value se ya `[&]` reference se capture — dhyan se, kyunki reference wale locals lambda se zyada jeene chahiye.

### Chhota code

```cpp
int factor = 2;
auto twice = [factor](int x) { return x * factor; };
std::vector<int> v{1,2,3};
std::sort(v.begin(), v.end(), [](int a, int b){ return a > b; });
```

- **Yaad rakho:** Locals ko reference se capture karke lambda ko upar return mat karo.
- **Aam galti:** Stack frame khatam hone ke baad dangling captures.

Practice: `examples/04_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 5. Returning lambdas

### Aasan Bhasha

Lambda ek chhota bina-naam ka function object hai. `[=]` value se ya `[&]` reference se capture — dhyan se, kyunki reference wale locals lambda se zyada jeene chahiye.

### Chhota code

```cpp
int factor = 2;
auto twice = [factor](int x) { return x * factor; };
std::vector<int> v{1,2,3};
std::sort(v.begin(), v.end(), [](int a, int b){ return a > b; });
```

- **Yaad rakho:** Locals ko reference se capture karke lambda ko upar return mat karo.
- **Aam galti:** Stack frame khatam hone ke baad dangling captures.

Practice: `examples/05_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 6. Storing in std::function

### Aasan Bhasha

Lambda ek chhota bina-naam ka function object hai. `[=]` value se ya `[&]` reference se capture — dhyan se, kyunki reference wale locals lambda se zyada jeene chahiye.

### Chhota code

```cpp
int factor = 2;
auto twice = [factor](int x) { return x * factor; };
std::vector<int> v{1,2,3};
std::sort(v.begin(), v.end(), [](int a, int b){ return a > b; });
```

- **Yaad rakho:** Locals ko reference se capture karke lambda ko upar return mat karo.
- **Aam galti:** Stack frame khatam hone ke baad dangling captures.

Practice: `examples/06_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 7. Immediately-invoked lambdas

### Aasan Bhasha

Lambda ek chhota bina-naam ka function object hai. `[=]` value se ya `[&]` reference se capture — dhyan se, kyunki reference wale locals lambda se zyada jeene chahiye.

### Chhota code

```cpp
int factor = 2;
auto twice = [factor](int x) { return x * factor; };
std::vector<int> v{1,2,3};
std::sort(v.begin(), v.end(), [](int a, int b){ return a > b; });
```

- **Yaad rakho:** Locals ko reference se capture karke lambda ko upar return mat karo.
- **Aam galti:** Stack frame khatam hone ke baad dangling captures.

Practice: `examples/07_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 8. Lambdas as comparators

### Aasan Bhasha

Lambda ek chhota bina-naam ka function object hai. `[=]` value se ya `[&]` reference se capture — dhyan se, kyunki reference wale locals lambda se zyada jeene chahiye.

### Chhota code

```cpp
int factor = 2;
auto twice = [factor](int x) { return x * factor; };
std::vector<int> v{1,2,3};
std::sort(v.begin(), v.end(), [](int a, int b){ return a > b; });
```

- **Yaad rakho:** Locals ko reference se capture karke lambda ko upar return mat karo.
- **Aam galti:** Stack frame khatam hone ke baad dangling captures.

Practice: `examples/08_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 9. Capture init (C++14)

### Aasan Bhasha

Lambda ek chhota bina-naam ka function object hai. `[=]` value se ya `[&]` reference se capture — dhyan se, kyunki reference wale locals lambda se zyada jeene chahiye.

### Chhota code

```cpp
int factor = 2;
auto twice = [factor](int x) { return x * factor; };
std::vector<int> v{1,2,3};
std::sort(v.begin(), v.end(), [](int a, int b){ return a > b; });
```

- **Yaad rakho:** Locals ko reference se capture karke lambda ko upar return mat karo.
- **Aam galti:** Stack frame khatam hone ke baad dangling captures.

Practice: `examples/09_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 10. Common capture bugs

### Aasan Bhasha

Lambda ek chhota bina-naam ka function object hai. `[=]` value se ya `[&]` reference se capture — dhyan se, kyunki reference wale locals lambda se zyada jeene chahiye.

### Chhota code

```cpp
int factor = 2;
auto twice = [factor](int x) { return x * factor; };
std::vector<int> v{1,2,3};
std::sort(v.begin(), v.end(), [](int a, int b){ return a > b; });
```

- **Yaad rakho:** Locals ko reference se capture karke lambda ko upar return mat karo.
- **Aam galti:** Stack frame khatam hone ke baad dangling captures.

Practice: `examples/10_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

---

## Day 35 ke baad aapko ye aana chahiye

- `Lambda mastery` ko bina notes dekhe kisi dost ko samjha sakna.
- Saare 10 examples `-std=c++17 -Wall -Wextra` ke saath compile aur run karna (naye flags sirf tab jab din ko C++20+ chahiye).
- `answers.md` dekhne se pehle `questions.md` ke 5 sawaal answer karna.
- Ek chhota extra program likhna jo aaj ke kam se kam 3 concepts jodta ho.

Ya is din ko **Badsha hub** me kholo (`python3 hub/server.py`) aur Learn / Practice / Quiz tabs use karo.
