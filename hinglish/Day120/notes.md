# Day 120 -- Coroutines intro

Aaj ka goal: **Coroutines intro** ko aasan Hinglish me samajhna, har idea ka chhota code sample dekhna, phir `examples/` me practice karna.

Is din ko padhne ka tarika:
1. Har concept ka **Aasan Bhasha** section padho.
2. Code sample par nazar daalo -- pehle predict karo ki output kya aayega.
3. `examples/` me us concept ki file chalao.
4. Uske baad hi `questions.md` kholo.

| # | Concept |
|--:|---------|
| 1 | co_await / co_yield / co_return |
| 2 | Coroutine frame |
| 3 | Generators idea |
| 4 | Tasks idea |
| 5 | promise_type sketch |
| 6 | Suspend points |
| 7 | Symmetric transfer idea |
| 8 | Allocation costs |
| 9 | When coroutines help |
| 10 | A tiny generator |

---

## 1. co_await / co_yield / co_return

### Aasan Bhasha

Modern C++ (20+) safer views (`span`, ranges), saaf comparisons (`<=>`) aur behtar formatting deta hai. Jab toolchain support kare tabhi use karo; warna pehle sikhe C++17 patterns par tike raho.

### Chhota code

```cpp
// C++20 sketch
// std::span<int> s = arr;
// auto evens = v | std::views::filter([](int x){ return x % 2 == 0; });
```

- **Yaad rakho:** In par bharosa karne se pehle apne compiler ka C++20/23 support check karo.
- **Aam galti:** Ye maan lena ki class/CI ki har machine par poora C++20 library support hai.

Practice: `examples/01_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 2. Coroutine frame

### Aasan Bhasha

Modern C++ (20+) safer views (`span`, ranges), saaf comparisons (`<=>`) aur behtar formatting deta hai. Jab toolchain support kare tabhi use karo; warna pehle sikhe C++17 patterns par tike raho.

### Chhota code

```cpp
// C++20 sketch
// std::span<int> s = arr;
// auto evens = v | std::views::filter([](int x){ return x % 2 == 0; });
```

- **Yaad rakho:** In par bharosa karne se pehle apne compiler ka C++20/23 support check karo.
- **Aam galti:** Ye maan lena ki class/CI ki har machine par poora C++20 library support hai.

Practice: `examples/02_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 3. Generators idea

### Aasan Bhasha

Modern C++ (20+) safer views (`span`, ranges), saaf comparisons (`<=>`) aur behtar formatting deta hai. Jab toolchain support kare tabhi use karo; warna pehle sikhe C++17 patterns par tike raho.

### Chhota code

```cpp
// C++20 sketch
// std::span<int> s = arr;
// auto evens = v | std::views::filter([](int x){ return x % 2 == 0; });
```

- **Yaad rakho:** In par bharosa karne se pehle apne compiler ka C++20/23 support check karo.
- **Aam galti:** Ye maan lena ki class/CI ki har machine par poora C++20 library support hai.

Practice: `examples/03_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 4. Tasks idea

### Aasan Bhasha

Modern C++ (20+) safer views (`span`, ranges), saaf comparisons (`<=>`) aur behtar formatting deta hai. Jab toolchain support kare tabhi use karo; warna pehle sikhe C++17 patterns par tike raho.

### Chhota code

```cpp
// C++20 sketch
// std::span<int> s = arr;
// auto evens = v | std::views::filter([](int x){ return x % 2 == 0; });
```

- **Yaad rakho:** In par bharosa karne se pehle apne compiler ka C++20/23 support check karo.
- **Aam galti:** Ye maan lena ki class/CI ki har machine par poora C++20 library support hai.

Practice: `examples/04_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 5. promise_type sketch

### Aasan Bhasha

Modern C++ (20+) safer views (`span`, ranges), saaf comparisons (`<=>`) aur behtar formatting deta hai. Jab toolchain support kare tabhi use karo; warna pehle sikhe C++17 patterns par tike raho.

### Chhota code

```cpp
// C++20 sketch
// std::span<int> s = arr;
// auto evens = v | std::views::filter([](int x){ return x % 2 == 0; });
```

- **Yaad rakho:** In par bharosa karne se pehle apne compiler ka C++20/23 support check karo.
- **Aam galti:** Ye maan lena ki class/CI ki har machine par poora C++20 library support hai.

Practice: `examples/05_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 6. Suspend points

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

Practice: `examples/06_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 7. Symmetric transfer idea

### Aasan Bhasha

Modern C++ (20+) safer views (`span`, ranges), saaf comparisons (`<=>`) aur behtar formatting deta hai. Jab toolchain support kare tabhi use karo; warna pehle sikhe C++17 patterns par tike raho.

### Chhota code

```cpp
// C++20 sketch
// std::span<int> s = arr;
// auto evens = v | std::views::filter([](int x){ return x % 2 == 0; });
```

- **Yaad rakho:** In par bharosa karne se pehle apne compiler ka C++20/23 support check karo.
- **Aam galti:** Ye maan lena ki class/CI ki har machine par poora C++20 library support hai.

Practice: `examples/07_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 8. Allocation costs

### Aasan Bhasha

Modern C++ (20+) safer views (`span`, ranges), saaf comparisons (`<=>`) aur behtar formatting deta hai. Jab toolchain support kare tabhi use karo; warna pehle sikhe C++17 patterns par tike raho.

### Chhota code

```cpp
// C++20 sketch
// std::span<int> s = arr;
// auto evens = v | std::views::filter([](int x){ return x % 2 == 0; });
```

- **Yaad rakho:** In par bharosa karne se pehle apne compiler ka C++20/23 support check karo.
- **Aam galti:** Ye maan lena ki class/CI ki har machine par poora C++20 library support hai.

Practice: `examples/08_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 9. When coroutines help

### Aasan Bhasha

Modern C++ (20+) safer views (`span`, ranges), saaf comparisons (`<=>`) aur behtar formatting deta hai. Jab toolchain support kare tabhi use karo; warna pehle sikhe C++17 patterns par tike raho.

### Chhota code

```cpp
// C++20 sketch
// std::span<int> s = arr;
// auto evens = v | std::views::filter([](int x){ return x % 2 == 0; });
```

- **Yaad rakho:** In par bharosa karne se pehle apne compiler ka C++20/23 support check karo.
- **Aam galti:** Ye maan lena ki class/CI ki har machine par poora C++20 library support hai.

Practice: `examples/09_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 10. A tiny generator

### Aasan Bhasha

Modern C++ (20+) safer views (`span`, ranges), saaf comparisons (`<=>`) aur behtar formatting deta hai. Jab toolchain support kare tabhi use karo; warna pehle sikhe C++17 patterns par tike raho.

### Chhota code

```cpp
// C++20 sketch
// std::span<int> s = arr;
// auto evens = v | std::views::filter([](int x){ return x % 2 == 0; });
```

- **Yaad rakho:** In par bharosa karne se pehle apne compiler ka C++20/23 support check karo.
- **Aam galti:** Ye maan lena ki class/CI ki har machine par poora C++20 library support hai.

Practice: `examples/10_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

---

## Day 120 ke baad aapko ye aana chahiye

- `Coroutines intro` ko bina notes dekhe kisi dost ko samjha sakna.
- Saare 10 examples `-std=c++17 -Wall -Wextra` ke saath compile aur run karna (naye flags sirf tab jab din ko C++20+ chahiye).
- `answers.md` dekhne se pehle `questions.md` ke 5 sawaal answer karna.
- Ek chhota extra program likhna jo aaj ke kam se kam 3 concepts jodta ho.

Ya is din ko **Badsha hub** me kholo (`python3 hub/server.py`) aur Learn / Practice / Quiz tabs use karo.
