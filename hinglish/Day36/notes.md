# Day 36 -- std::function & callables

Aaj ka goal: **std::function & callables** ko aasan Hinglish me samajhna, har idea ka chhota code sample dekhna, phir `examples/` me practice karna.

Is din ko padhne ka tarika:
1. Har concept ka **Aasan Bhasha** section padho.
2. Code sample par nazar daalo -- pehle predict karo ki output kya aayega.
3. `examples/` me us concept ki file chalao.
4. Uske baad hi `questions.md` kholo.

| # | Concept |
|--:|---------|
| 1 | Callable concept |
| 2 | Function pointers vs std::function |
| 3 | Storing lambdas |
| 4 | Member function pointers idea |
| 5 | std::bind basics (and when to avoid) |
| 6 | Type erasure cost |
| 7 | Callbacks in APIs |
| 8 | Nullable callables |
| 9 | Performance considerations |
| 10 | A small event bus |

---

## 1. Callable concept

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

## 2. Function pointers vs std::function

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

## 3. Storing lambdas

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

Practice: `examples/03_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 4. Member function pointers idea

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

## 5. std::bind basics (and when to avoid)

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

## 6. Type erasure cost

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

## 7. Callbacks in APIs

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

## 8. Nullable callables

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

## 9. Performance considerations

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

## 10. A small event bus

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

## Day 36 ke baad aapko ye aana chahiye

- `std::function & callables` ko bina notes dekhe kisi dost ko samjha sakna.
- Saare 10 examples `-std=c++17 -Wall -Wextra` ke saath compile aur run karna (naye flags sirf tab jab din ko C++20+ chahiye).
- `answers.md` dekhne se pehle `questions.md` ke 5 sawaal answer karna.
- Ek chhota extra program likhna jo aaj ke kam se kam 3 concepts jodta ho.

Ya is din ko **Badsha hub** me kholo (`python3 hub/server.py`) aur Learn / Practice / Quiz tabs use karo.
