# Day 155 -- Stacks & queues practice

Aaj ka goal: **Stacks & queues practice** ko aasan Hinglish me samajhna, har idea ka chhota code sample dekhna, phir `examples/` me practice karna.

Is din ko padhne ka tarika:
1. Har concept ka **Aasan Bhasha** section padho.
2. Code sample par nazar daalo -- pehle predict karo ki output kya aayega.
3. `examples/` me us concept ki file chalao.
4. Uske baad hi `questions.md` kholo.

| # | Concept |
|--:|---------|
| 1 | Matching parentheses |
| 2 | Monotonic stack |
| 3 | Min stack |
| 4 | Queue via stacks |
| 5 | Sliding window max idea |
| 6 | Expression eval |
| 7 | BFS layers |
| 8 | Undo buffers |
| 9 | Complexity notes |
| 10 | Practice set B |

---

## 1. Matching parentheses

### Aasan Bhasha

Aaj ka idea — **Matching parentheses** — Stacks & queues practice ke bade theme ke andar aata hai. Ise ek tool ki tarah padho: ye kaam kya karta hai, kaunse rules enforce karta hai, aur un rules ko ignore karne par kya tootta hai?

### Chhota code

```cpp
// Explore: Matching parentheses
#include <iostream>
int main() {
  std::cout << "practice: Matching parentheses\n";
  return 0;
}
```

- **Yaad rakho:** `Matching parentheses` use karne wala code likhne se pehle ek invariant bolo.
- **Aam galti:** `Matching parentheses` ko copy-paste se use karna bina jaane ki wo kya own karta hai ya kab valid hai.

Practice: `examples/01_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 2. Monotonic stack

### Aasan Bhasha

Aaj ka idea — **Monotonic stack** — Stacks & queues practice ke bade theme ke andar aata hai. Ise ek tool ki tarah padho: ye kaam kya karta hai, kaunse rules enforce karta hai, aur un rules ko ignore karne par kya tootta hai?

### Chhota code

```cpp
// Explore: Monotonic stack
#include <iostream>
int main() {
  std::cout << "practice: Monotonic stack\n";
  return 0;
}
```

- **Yaad rakho:** `Monotonic stack` use karne wala code likhne se pehle ek invariant bolo.
- **Aam galti:** `Monotonic stack` ko copy-paste se use karna bina jaane ki wo kya own karta hai ya kab valid hai.

Practice: `examples/02_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 3. Min stack

### Aasan Bhasha

Aaj ka idea — **Min stack** — Stacks & queues practice ke bade theme ke andar aata hai. Ise ek tool ki tarah padho: ye kaam kya karta hai, kaunse rules enforce karta hai, aur un rules ko ignore karne par kya tootta hai?

### Chhota code

```cpp
// Explore: Min stack
#include <iostream>
int main() {
  std::cout << "practice: Min stack\n";
  return 0;
}
```

- **Yaad rakho:** `Min stack` use karne wala code likhne se pehle ek invariant bolo.
- **Aam galti:** `Min stack` ko copy-paste se use karna bina jaane ki wo kya own karta hai ya kab valid hai.

Practice: `examples/03_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 4. Queue via stacks

### Aasan Bhasha

Aaj ka idea — **Queue via stacks** — Stacks & queues practice ke bade theme ke andar aata hai. Ise ek tool ki tarah padho: ye kaam kya karta hai, kaunse rules enforce karta hai, aur un rules ko ignore karne par kya tootta hai?

### Chhota code

```cpp
// Explore: Queue via stacks
#include <iostream>
int main() {
  std::cout << "practice: Queue via stacks\n";
  return 0;
}
```

- **Yaad rakho:** `Queue via stacks` use karne wala code likhne se pehle ek invariant bolo.
- **Aam galti:** `Queue via stacks` ko copy-paste se use karna bina jaane ki wo kya own karta hai ya kab valid hai.

Practice: `examples/04_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 5. Sliding window max idea

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

## 6. Expression eval

### Aasan Bhasha

Aaj ka idea — **Expression eval** — Stacks & queues practice ke bade theme ke andar aata hai. Ise ek tool ki tarah padho: ye kaam kya karta hai, kaunse rules enforce karta hai, aur un rules ko ignore karne par kya tootta hai?

### Chhota code

```cpp
// Explore: Expression eval
#include <iostream>
int main() {
  std::cout << "practice: Expression eval\n";
  return 0;
}
```

- **Yaad rakho:** `Expression eval` use karne wala code likhne se pehle ek invariant bolo.
- **Aam galti:** `Expression eval` ko copy-paste se use karna bina jaane ki wo kya own karta hai ya kab valid hai.

Practice: `examples/06_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 7. BFS layers

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

Practice: `examples/07_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 8. Undo buffers

### Aasan Bhasha

Aaj ka idea — **Undo buffers** — Stacks & queues practice ke bade theme ke andar aata hai. Ise ek tool ki tarah padho: ye kaam kya karta hai, kaunse rules enforce karta hai, aur un rules ko ignore karne par kya tootta hai?

### Chhota code

```cpp
// Explore: Undo buffers
#include <iostream>
int main() {
  std::cout << "practice: Undo buffers\n";
  return 0;
}
```

- **Yaad rakho:** `Undo buffers` use karne wala code likhne se pehle ek invariant bolo.
- **Aam galti:** `Undo buffers` ko copy-paste se use karna bina jaane ki wo kya own karta hai ya kab valid hai.

Practice: `examples/08_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 9. Complexity notes

### Aasan Bhasha

Big-O batata hai ki input size ke saath cost kaise badhti hai. n bada hone par chalaak O(n²) ke bajaye saaf O(n log n) algorithm chuno. Jab constants matter karein tab naapo.

### Chhota code

```cpp
// Sorting n items: typically O(n log n)
std::sort(v.begin(), v.end());
```

- **Yaad rakho:** Pehle asymptotics; micro-optimisations baad me profiler ke saath.
- **Aam galti:** Cold path optimise karna aur O(n²) hot loop ko waise hi chhod dena.

Practice: `examples/09_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 10. Practice set B

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

## Day 155 ke baad aapko ye aana chahiye

- `Stacks & queues practice` ko bina notes dekhe kisi dost ko samjha sakna.
- Saare 10 examples `-std=c++17 -Wall -Wextra` ke saath compile aur run karna (naye flags sirf tab jab din ko C++20+ chahiye).
- `answers.md` dekhne se pehle `questions.md` ke 5 sawaal answer karna.
- Ek chhota extra program likhna jo aaj ke kam se kam 3 concepts jodta ho.

Ya is din ko **Badsha hub** me kholo (`python3 hub/server.py`) aur Learn / Practice / Quiz tabs use karo.
