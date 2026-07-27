# Day 153 -- Arrays & two pointers

Aaj ka goal: **Arrays & two pointers** ko aasan Hinglish me samajhna, har idea ka chhota code sample dekhna, phir `examples/` me practice karna.

Is din ko padhne ka tarika:
1. Har concept ka **Aasan Bhasha** section padho.
2. Code sample par nazar daalo -- pehle predict karo ki output kya aayega.
3. `examples/` me us concept ki file chalao.
4. Uske baad hi `questions.md` kholo.

| # | Concept |
|--:|---------|
| 1 | Two pointers pattern |
| 2 | Sliding window |
| 3 | Prefix sums |
| 4 | In-place transforms |
| 5 | Dutch national flag |
| 6 | Kadane idea |
| 7 | Rotate array |
| 8 | Merge sorted |
| 9 | Remove duplicates |
| 10 | Practice set A |

---

## 1. Two pointers pattern

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

## 2. Sliding window

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

## 3. Prefix sums

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

## 4. In-place transforms

### Aasan Bhasha

STL algorithms iterator ranges ke upar verbs hain. Jab intent match kare (`find`, `sort`, `transform`) to haath se likhe loops se inhe upar rakho. Erase-remove idiom sequence container se value/predicate se elements hatata hai.

### Chhota code

```cpp
v.erase(std::remove(v.begin(), v.end(), 0), v.end());
std::sort(v.begin(), v.end());
```

- **Yaad rakho:** `remove` sirf elements khiskata hai — `erase` phir bhi karna padta hai.
- **Aam galti:** `std::remove` call karna aur container ka `erase` bhool jaana.

Practice: `examples/04_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 5. Dutch national flag

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

## 6. Kadane idea

### Aasan Bhasha

Ye patterns nested loops ko linear ya logarithmic pass me badal dete hain. Binary search ke liye monotonic predicate chahiye. Two pointers / sliding window ke liye saaf invariant chahiye.

### Chhota code

```cpp
auto it = std::lower_bound(v.begin(), v.end(), x);
bool found = it != v.end() && *it == x;
```

- **Yaad rakho:** Loop likhne se pehle invariant likh kar rakho.
- **Aam galti:** Binary search ke bounds (`lo`/`hi`) me off-by-one galti.

Practice: `examples/06_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 7. Rotate array

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

## 8. Merge sorted

### Aasan Bhasha

Ye patterns nested loops ko linear ya logarithmic pass me badal dete hain. Binary search ke liye monotonic predicate chahiye. Two pointers / sliding window ke liye saaf invariant chahiye.

### Chhota code

```cpp
auto it = std::lower_bound(v.begin(), v.end(), x);
bool found = it != v.end() && *it == x;
```

- **Yaad rakho:** Loop likhne se pehle invariant likh kar rakho.
- **Aam galti:** Binary search ke bounds (`lo`/`hi`) me off-by-one galti.

Practice: `examples/08_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 9. Remove duplicates

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

## 10. Practice set A

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

## Day 153 ke baad aapko ye aana chahiye

- `Arrays & two pointers` ko bina notes dekhe kisi dost ko samjha sakna.
- Saare 10 examples `-std=c++17 -Wall -Wextra` ke saath compile aur run karna (naye flags sirf tab jab din ko C++20+ chahiye).
- `answers.md` dekhne se pehle `questions.md` ke 5 sawaal answer karna.
- Ek chhota extra program likhna jo aaj ke kam se kam 3 concepts jodta ho.

Ya is din ko **Badsha hub** me kholo (`python3 hub/server.py`) aur Learn / Practice / Quiz tabs use karo.
