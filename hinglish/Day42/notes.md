# Day 42 -- Stack, queue, priority_queue

Aaj ka goal: **Stack, queue, priority_queue** ko aasan Hinglish me samajhna, har idea ka chhota code sample dekhna, phir `examples/` me practice karna.

Is din ko padhne ka tarika:
1. Har concept ka **Aasan Bhasha** section padho.
2. Code sample par nazar daalo -- pehle predict karo ki output kya aayega.
3. `examples/` me us concept ki file chalao.
4. Uske baad hi `questions.md` kholo.

| # | Concept |
|--:|---------|
| 1 | std::stack |
| 2 | std::queue |
| 3 | std::priority_queue |
| 4 | Underlying containers |
| 5 | Custom priorities |
| 6 | Dijkstra-style use |
| 7 | BFS with queue |
| 8 | DFS with stack |
| 9 | Limitations of adapters |
| 10 | A task scheduler sketch |

---

## 1. std::stack

### Aasan Bhasha

Aaj ka idea — **std::stack** — Stack, queue, priority_queue ke bade theme ke andar aata hai. Ise ek tool ki tarah padho: ye kaam kya karta hai, kaunse rules enforce karta hai, aur un rules ko ignore karne par kya tootta hai?

### Chhota code

```cpp
// Explore: std::stack
#include <iostream>
int main() {
  std::cout << "practice: std::stack\n";
  return 0;
}
```

- **Yaad rakho:** `std::stack` use karne wala code likhne se pehle ek invariant bolo.
- **Aam galti:** `std::stack` ko copy-paste se use karna bina jaane ki wo kya own karta hai ya kab valid hai.

Practice: `examples/01_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 2. std::queue

### Aasan Bhasha

Aaj ka idea — **std::queue** — Stack, queue, priority_queue ke bade theme ke andar aata hai. Ise ek tool ki tarah padho: ye kaam kya karta hai, kaunse rules enforce karta hai, aur un rules ko ignore karne par kya tootta hai?

### Chhota code

```cpp
// Explore: std::queue
#include <iostream>
int main() {
  std::cout << "practice: std::queue\n";
  return 0;
}
```

- **Yaad rakho:** `std::queue` use karne wala code likhne se pehle ek invariant bolo.
- **Aam galti:** `std::queue` ko copy-paste se use karna bina jaane ki wo kya own karta hai ya kab valid hai.

Practice: `examples/02_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 3. std::priority_queue

### Aasan Bhasha

Aaj ka idea — **std::priority_queue** — Stack, queue, priority_queue ke bade theme ke andar aata hai. Ise ek tool ki tarah padho: ye kaam kya karta hai, kaunse rules enforce karta hai, aur un rules ko ignore karne par kya tootta hai?

### Chhota code

```cpp
// Explore: std::priority_queue
#include <iostream>
int main() {
  std::cout << "practice: std::priority_queue\n";
  return 0;
}
```

- **Yaad rakho:** `std::priority_queue` use karne wala code likhne se pehle ek invariant bolo.
- **Aam galti:** `std::priority_queue` ko copy-paste se use karna bina jaane ki wo kya own karta hai ya kab valid hai.

Practice: `examples/03_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 4. Underlying containers

### Aasan Bhasha

Aaj ka idea — **Underlying containers** — Stack, queue, priority_queue ke bade theme ke andar aata hai. Ise ek tool ki tarah padho: ye kaam kya karta hai, kaunse rules enforce karta hai, aur un rules ko ignore karne par kya tootta hai?

### Chhota code

```cpp
// Explore: Underlying containers
#include <iostream>
int main() {
  std::cout << "practice: Underlying containers\n";
  return 0;
}
```

- **Yaad rakho:** `Underlying containers` use karne wala code likhne se pehle ek invariant bolo.
- **Aam galti:** `Underlying containers` ko copy-paste se use karna bina jaane ki wo kya own karta hai ya kab valid hai.

Practice: `examples/04_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 5. Custom priorities

### Aasan Bhasha

Aaj ka idea — **Custom priorities** — Stack, queue, priority_queue ke bade theme ke andar aata hai. Ise ek tool ki tarah padho: ye kaam kya karta hai, kaunse rules enforce karta hai, aur un rules ko ignore karne par kya tootta hai?

### Chhota code

```cpp
// Explore: Custom priorities
#include <iostream>
int main() {
  std::cout << "practice: Custom priorities\n";
  return 0;
}
```

- **Yaad rakho:** `Custom priorities` use karne wala code likhne se pehle ek invariant bolo.
- **Aam galti:** `Custom priorities` ko copy-paste se use karna bina jaane ki wo kya own karta hai ya kab valid hai.

Practice: `examples/05_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 6. Dijkstra-style use

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

## 7. BFS with queue

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

## 8. DFS with stack

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

Practice: `examples/08_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 9. Limitations of adapters

### Aasan Bhasha

Aaj ka idea — **Limitations of adapters** — Stack, queue, priority_queue ke bade theme ke andar aata hai. Ise ek tool ki tarah padho: ye kaam kya karta hai, kaunse rules enforce karta hai, aur un rules ko ignore karne par kya tootta hai?

### Chhota code

```cpp
// Explore: Limitations of adapters
#include <iostream>
int main() {
  std::cout << "practice: Limitations of adapters\n";
  return 0;
}
```

- **Yaad rakho:** `Limitations of adapters` use karne wala code likhne se pehle ek invariant bolo.
- **Aam galti:** `Limitations of adapters` ko copy-paste se use karna bina jaane ki wo kya own karta hai ya kab valid hai.

Practice: `examples/09_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 10. A task scheduler sketch

### Aasan Bhasha

Aaj ka idea — **A task scheduler sketch** — Stack, queue, priority_queue ke bade theme ke andar aata hai. Ise ek tool ki tarah padho: ye kaam kya karta hai, kaunse rules enforce karta hai, aur un rules ko ignore karne par kya tootta hai?

### Chhota code

```cpp
// Explore: A task scheduler sketch
#include <iostream>
int main() {
  std::cout << "practice: A task scheduler sketch\n";
  return 0;
}
```

- **Yaad rakho:** `A task scheduler sketch` use karne wala code likhne se pehle ek invariant bolo.
- **Aam galti:** `A task scheduler sketch` ko copy-paste se use karna bina jaane ki wo kya own karta hai ya kab valid hai.

Practice: `examples/10_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

---

## Day 42 ke baad aapko ye aana chahiye

- `Stack, queue, priority_queue` ko bina notes dekhe kisi dost ko samjha sakna.
- Saare 10 examples `-std=c++17 -Wall -Wextra` ke saath compile aur run karna (naye flags sirf tab jab din ko C++20+ chahiye).
- `answers.md` dekhne se pehle `questions.md` ke 5 sawaal answer karna.
- Ek chhota extra program likhna jo aaj ke kam se kam 3 concepts jodta ho.

Ya is din ko **Badsha hub** me kholo (`python3 hub/server.py`) aur Learn / Practice / Quiz tabs use karo.
