# Day 158 -- Heaps & priority queues practice

Aaj ka goal: **Heaps & priority queues practice** ko aasan Hinglish me samajhna, har idea ka chhota code sample dekhna, phir `examples/` me practice karna.

Is din ko padhne ka tarika:
1. Har concept ka **Aasan Bhasha** section padho.
2. Code sample par nazar daalo -- pehle predict karo ki output kya aayega.
3. `examples/` me us concept ki file chalao.
4. Uske baad hi `questions.md` kholo.

| # | Concept |
|--:|---------|
| 1 | Binary heap property |
| 2 | heapify |
| 3 | Top-K |
| 4 | Merge K lists idea |
| 5 | Median maintenance idea |
| 6 | Dijkstra with PQ |
| 7 | Custom comparators |
| 8 | Decrease-key pain |
| 9 | Stability |
| 10 | Practice set D |

---

## 1. Binary heap property

### Aasan Bhasha

Heap tab tak jeeta hai jab tak aap use release na karo. Raw `new`/`delete` ki jagah smart pointers aur containers prefer karo. Agar raw ownership hi chahiye to har `new` ke liye har path par exactly ek matching `delete` ho.

### Chhota code

```cpp
// Prefer:
auto p = std::make_unique<int[]>(10);
// instead of new int[10] / delete[]
```

- **Yaad rakho:** `new` ke saath `delete`, aur `new[]` ke saath `delete[]`.
- **Aam galti:** `new[]` se aayi array memory par `delete` use karna.

Practice: `examples/01_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 2. heapify

### Aasan Bhasha

Heap tab tak jeeta hai jab tak aap use release na karo. Raw `new`/`delete` ki jagah smart pointers aur containers prefer karo. Agar raw ownership hi chahiye to har `new` ke liye har path par exactly ek matching `delete` ho.

### Chhota code

```cpp
// Prefer:
auto p = std::make_unique<int[]>(10);
// instead of new int[10] / delete[]
```

- **Yaad rakho:** `new` ke saath `delete`, aur `new[]` ke saath `delete[]`.
- **Aam galti:** `new[]` se aayi array memory par `delete` use karna.

Practice: `examples/02_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 3. Top-K

### Aasan Bhasha

Heap tab tak jeeta hai jab tak aap use release na karo. Raw `new`/`delete` ki jagah smart pointers aur containers prefer karo. Agar raw ownership hi chahiye to har `new` ke liye har path par exactly ek matching `delete` ho.

### Chhota code

```cpp
// Prefer:
auto p = std::make_unique<int[]>(10);
// instead of new int[10] / delete[]
```

- **Yaad rakho:** `new` ke saath `delete`, aur `new[]` ke saath `delete[]`.
- **Aam galti:** `new[]` se aayi array memory par `delete` use karna.

Practice: `examples/03_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 4. Merge K lists idea

### Aasan Bhasha

Heap tab tak jeeta hai jab tak aap use release na karo. Raw `new`/`delete` ki jagah smart pointers aur containers prefer karo. Agar raw ownership hi chahiye to har `new` ke liye har path par exactly ek matching `delete` ho.

### Chhota code

```cpp
// Prefer:
auto p = std::make_unique<int[]>(10);
// instead of new int[10] / delete[]
```

- **Yaad rakho:** `new` ke saath `delete`, aur `new[]` ke saath `delete[]`.
- **Aam galti:** `new[]` se aayi array memory par `delete` use karna.

Practice: `examples/04_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 5. Median maintenance idea

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

Practice: `examples/05_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 6. Dijkstra with PQ

### Aasan Bhasha

Graphs matlab nodes aur edges. Unweighted graph me BFS shortest path deta hai; Dijkstra non-negative weights sambhalta hai. Union-Find connected components efficiently track karta hai.

### Chhota code

```cpp
// BFS sketch
std::queue<int> q;
q.push(start);
seen[start] = true;
```

- **Yaad rakho:** Graph chhota aur dense na ho to adjacency lists chuno.
- **Aam galti:** Nodes ko visited mark karna bhool jaana → infinite loop.

Practice: `examples/06_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 7. Custom comparators

### Aasan Bhasha

Heap tab tak jeeta hai jab tak aap use release na karo. Raw `new`/`delete` ki jagah smart pointers aur containers prefer karo. Agar raw ownership hi chahiye to har `new` ke liye har path par exactly ek matching `delete` ho.

### Chhota code

```cpp
// Prefer:
auto p = std::make_unique<int[]>(10);
// instead of new int[10] / delete[]
```

- **Yaad rakho:** `new` ke saath `delete`, aur `new[]` ke saath `delete[]`.
- **Aam galti:** `new[]` se aayi array memory par `delete` use karna.

Practice: `examples/07_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 8. Decrease-key pain

### Aasan Bhasha

Heap tab tak jeeta hai jab tak aap use release na karo. Raw `new`/`delete` ki jagah smart pointers aur containers prefer karo. Agar raw ownership hi chahiye to har `new` ke liye har path par exactly ek matching `delete` ho.

### Chhota code

```cpp
// Prefer:
auto p = std::make_unique<int[]>(10);
// instead of new int[10] / delete[]
```

- **Yaad rakho:** `new` ke saath `delete`, aur `new[]` ke saath `delete[]`.
- **Aam galti:** `new[]` se aayi array memory par `delete` use karna.

Practice: `examples/08_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 9. Stability

### Aasan Bhasha

Heap tab tak jeeta hai jab tak aap use release na karo. Raw `new`/`delete` ki jagah smart pointers aur containers prefer karo. Agar raw ownership hi chahiye to har `new` ke liye har path par exactly ek matching `delete` ho.

### Chhota code

```cpp
// Prefer:
auto p = std::make_unique<int[]>(10);
// instead of new int[10] / delete[]
```

- **Yaad rakho:** `new` ke saath `delete`, aur `new[]` ke saath `delete[]`.
- **Aam galti:** `new[]` se aayi array memory par `delete` use karna.

Practice: `examples/09_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 10. Practice set D

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

## Day 158 ke baad aapko ye aana chahiye

- `Heaps & priority queues practice` ko bina notes dekhe kisi dost ko samjha sakna.
- Saare 10 examples `-std=c++17 -Wall -Wextra` ke saath compile aur run karna (naye flags sirf tab jab din ko C++20+ chahiye).
- `answers.md` dekhne se pehle `questions.md` ke 5 sawaal answer karna.
- Ek chhota extra program likhna jo aaj ke kam se kam 3 concepts jodta ho.

Ya is din ko **Badsha hub** me kholo (`python3 hub/server.py`) aur Learn / Practice / Quiz tabs use karo.
