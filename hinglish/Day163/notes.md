# Day 163 -- Binary search mastery

Aaj ka goal: **Binary search mastery** ko aasan Hinglish me samajhna, har idea ka chhota code sample dekhna, phir `examples/` me practice karna.

Is din ko padhne ka tarika:
1. Har concept ka **Aasan Bhasha** section padho.
2. Code sample par nazar daalo -- pehle predict karo ki output kya aayega.
3. `examples/` me us concept ki file chalao.
4. Uske baad hi `questions.md` kholo.

| # | Concept |
|--:|---------|
| 1 | Lower/upper bound |
| 2 | Binary search on answer |
| 3 | Monotonic predicates |
| 4 | Off-by-one traps |
| 5 | Search in rotated |
| 6 | Floating binary search |
| 7 | STL helpers |
| 8 | Invariant thinking |
| 9 | Testing boundaries |
| 10 | Practice set E |

---

## 1. Lower/upper bound

### Aasan Bhasha

Ye patterns nested loops ko linear ya logarithmic pass me badal dete hain. Binary search ke liye monotonic predicate chahiye. Two pointers / sliding window ke liye saaf invariant chahiye.

### Chhota code

```cpp
auto it = std::lower_bound(v.begin(), v.end(), x);
bool found = it != v.end() && *it == x;
```

- **Yaad rakho:** Loop likhne se pehle invariant likh kar rakho.
- **Aam galti:** Binary search ke bounds (`lo`/`hi`) me off-by-one galti.

Practice: `examples/01_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 2. Binary search on answer

### Aasan Bhasha

Ye patterns nested loops ko linear ya logarithmic pass me badal dete hain. Binary search ke liye monotonic predicate chahiye. Two pointers / sliding window ke liye saaf invariant chahiye.

### Chhota code

```cpp
auto it = std::lower_bound(v.begin(), v.end(), x);
bool found = it != v.end() && *it == x;
```

- **Yaad rakho:** Loop likhne se pehle invariant likh kar rakho.
- **Aam galti:** Binary search ke bounds (`lo`/`hi`) me off-by-one galti.

Practice: `examples/02_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 3. Monotonic predicates

### Aasan Bhasha

Ye patterns nested loops ko linear ya logarithmic pass me badal dete hain. Binary search ke liye monotonic predicate chahiye. Two pointers / sliding window ke liye saaf invariant chahiye.

### Chhota code

```cpp
auto it = std::lower_bound(v.begin(), v.end(), x);
bool found = it != v.end() && *it == x;
```

- **Yaad rakho:** Loop likhne se pehle invariant likh kar rakho.
- **Aam galti:** Binary search ke bounds (`lo`/`hi`) me off-by-one galti.

Practice: `examples/03_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 4. Off-by-one traps

### Aasan Bhasha

Ye patterns nested loops ko linear ya logarithmic pass me badal dete hain. Binary search ke liye monotonic predicate chahiye. Two pointers / sliding window ke liye saaf invariant chahiye.

### Chhota code

```cpp
auto it = std::lower_bound(v.begin(), v.end(), x);
bool found = it != v.end() && *it == x;
```

- **Yaad rakho:** Loop likhne se pehle invariant likh kar rakho.
- **Aam galti:** Binary search ke bounds (`lo`/`hi`) me off-by-one galti.

Practice: `examples/04_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 5. Search in rotated

### Aasan Bhasha

Ye patterns nested loops ko linear ya logarithmic pass me badal dete hain. Binary search ke liye monotonic predicate chahiye. Two pointers / sliding window ke liye saaf invariant chahiye.

### Chhota code

```cpp
auto it = std::lower_bound(v.begin(), v.end(), x);
bool found = it != v.end() && *it == x;
```

- **Yaad rakho:** Loop likhne se pehle invariant likh kar rakho.
- **Aam galti:** Binary search ke bounds (`lo`/`hi`) me off-by-one galti.

Practice: `examples/05_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 6. Floating binary search

### Aasan Bhasha

Floating-point numbers reals ka approximation hain. `==` se barabari aksar galat hoti hai; apne scale ke hisaab se tolerance se compare karo. NaN aur accumulation error par nazar rakho.

### Chhota code

```cpp
bool nearly_equal(double a, double b, double eps = 1e-9) {
  return std::fabs(a - b) <= eps;
}
```

- **Yaad rakho:** `double` counters se loop chalakar exact sums ki umeed mat karo.
- **Aam galti:** `if (f == 0.1)` jaise checks jo representation ki wajah se fail hote hain.

Practice: `examples/06_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 7. STL helpers

### Aasan Bhasha

Ye patterns nested loops ko linear ya logarithmic pass me badal dete hain. Binary search ke liye monotonic predicate chahiye. Two pointers / sliding window ke liye saaf invariant chahiye.

### Chhota code

```cpp
auto it = std::lower_bound(v.begin(), v.end(), x);
bool found = it != v.end() && *it == x;
```

- **Yaad rakho:** Loop likhne se pehle invariant likh kar rakho.
- **Aam galti:** Binary search ke bounds (`lo`/`hi`) me off-by-one galti.

Practice: `examples/07_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 8. Invariant thinking

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

Practice: `examples/08_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 9. Testing boundaries

### Aasan Bhasha

Ye patterns nested loops ko linear ya logarithmic pass me badal dete hain. Binary search ke liye monotonic predicate chahiye. Two pointers / sliding window ke liye saaf invariant chahiye.

### Chhota code

```cpp
auto it = std::lower_bound(v.begin(), v.end(), x);
bool found = it != v.end() && *it == x;
```

- **Yaad rakho:** Loop likhne se pehle invariant likh kar rakho.
- **Aam galti:** Binary search ke bounds (`lo`/`hi`) me off-by-one galti.

Practice: `examples/09_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 10. Practice set E

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

Practice: `examples/10_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

---

## Day 163 ke baad aapko ye aana chahiye

- `Binary search mastery` ko bina notes dekhe kisi dost ko samjha sakna.
- Saare 10 examples `-std=c++17 -Wall -Wextra` ke saath compile aur run karna (naye flags sirf tab jab din ko C++20+ chahiye).
- `answers.md` dekhne se pehle `questions.md` ke 5 sawaal answer karna.
- Ek chhota extra program likhna jo aaj ke kam se kam 3 concepts jodta ho.

Ya is din ko **Badsha hub** me kholo (`python3 hub/server.py`) aur Learn / Practice / Quiz tabs use karo.
