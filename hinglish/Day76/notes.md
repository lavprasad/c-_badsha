# Day 76 -- Refactoring C++ safely

Aaj ka goal: **Refactoring C++ safely** ko aasan Hinglish me samajhna, har idea ka chhota code sample dekhna, phir `examples/` me practice karna.

Is din ko padhne ka tarika:
1. Har concept ka **Aasan Bhasha** section padho.
2. Code sample par nazar daalo -- pehle predict karo ki output kya aayega.
3. `examples/` me us concept ki file chalao.
4. Uske baad hi `questions.md` kholo.

| # | Concept |
|--:|---------|
| 1 | Characterize then change |
| 2 | Extract function |
| 3 | Replace raw new |
| 4 | Narrow interfaces |
| 5 | Reduce duplication |
| 6 | Keep behaviour |
| 7 | Incremental commits |
| 8 | Compiler as ally |
| 9 | Dead code removal |
| 10 | A refactor walkthrough |

---

## 1. Characterize then change

### Aasan Bhasha

Aaj ka idea — **Characterize then change** — Refactoring C++ safely ke bade theme ke andar aata hai. Ise ek tool ki tarah padho: ye kaam kya karta hai, kaunse rules enforce karta hai, aur un rules ko ignore karne par kya tootta hai?

### Chhota code

```cpp
// Explore: Characterize then change
#include <iostream>
int main() {
  std::cout << "practice: Characterize then change\n";
  return 0;
}
```

- **Yaad rakho:** `Characterize then change` use karne wala code likhne se pehle ek invariant bolo.
- **Aam galti:** `Characterize then change` ko copy-paste se use karna bina jaane ki wo kya own karta hai ya kab valid hai.

Practice: `examples/01_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 2. Extract function

### Aasan Bhasha

Aaj ka idea — **Extract function** — Refactoring C++ safely ke bade theme ke andar aata hai. Ise ek tool ki tarah padho: ye kaam kya karta hai, kaunse rules enforce karta hai, aur un rules ko ignore karne par kya tootta hai?

### Chhota code

```cpp
// Explore: Extract function
#include <iostream>
int main() {
  std::cout << "practice: Extract function\n";
  return 0;
}
```

- **Yaad rakho:** `Extract function` use karne wala code likhne se pehle ek invariant bolo.
- **Aam galti:** `Extract function` ko copy-paste se use karna bina jaane ki wo kya own karta hai ya kab valid hai.

Practice: `examples/02_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 3. Replace raw new

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

## 4. Narrow interfaces

### Aasan Bhasha

Aaj ka idea — **Narrow interfaces** — Refactoring C++ safely ke bade theme ke andar aata hai. Ise ek tool ki tarah padho: ye kaam kya karta hai, kaunse rules enforce karta hai, aur un rules ko ignore karne par kya tootta hai?

### Chhota code

```cpp
// Explore: Narrow interfaces
#include <iostream>
int main() {
  std::cout << "practice: Narrow interfaces\n";
  return 0;
}
```

- **Yaad rakho:** `Narrow interfaces` use karne wala code likhne se pehle ek invariant bolo.
- **Aam galti:** `Narrow interfaces` ko copy-paste se use karna bina jaane ki wo kya own karta hai ya kab valid hai.

Practice: `examples/04_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 5. Reduce duplication

### Aasan Bhasha

Aaj ka idea — **Reduce duplication** — Refactoring C++ safely ke bade theme ke andar aata hai. Ise ek tool ki tarah padho: ye kaam kya karta hai, kaunse rules enforce karta hai, aur un rules ko ignore karne par kya tootta hai?

### Chhota code

```cpp
// Explore: Reduce duplication
#include <iostream>
int main() {
  std::cout << "practice: Reduce duplication\n";
  return 0;
}
```

- **Yaad rakho:** `Reduce duplication` use karne wala code likhne se pehle ek invariant bolo.
- **Aam galti:** `Reduce duplication` ko copy-paste se use karna bina jaane ki wo kya own karta hai ya kab valid hai.

Practice: `examples/05_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 6. Keep behaviour

### Aasan Bhasha

Aaj ka idea — **Keep behaviour** — Refactoring C++ safely ke bade theme ke andar aata hai. Ise ek tool ki tarah padho: ye kaam kya karta hai, kaunse rules enforce karta hai, aur un rules ko ignore karne par kya tootta hai?

### Chhota code

```cpp
// Explore: Keep behaviour
#include <iostream>
int main() {
  std::cout << "practice: Keep behaviour\n";
  return 0;
}
```

- **Yaad rakho:** `Keep behaviour` use karne wala code likhne se pehle ek invariant bolo.
- **Aam galti:** `Keep behaviour` ko copy-paste se use karna bina jaane ki wo kya own karta hai ya kab valid hai.

Practice: `examples/06_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 7. Incremental commits

### Aasan Bhasha

Aaj ka idea — **Incremental commits** — Refactoring C++ safely ke bade theme ke andar aata hai. Ise ek tool ki tarah padho: ye kaam kya karta hai, kaunse rules enforce karta hai, aur un rules ko ignore karne par kya tootta hai?

### Chhota code

```cpp
// Explore: Incremental commits
#include <iostream>
int main() {
  std::cout << "practice: Incremental commits\n";
  return 0;
}
```

- **Yaad rakho:** `Incremental commits` use karne wala code likhne se pehle ek invariant bolo.
- **Aam galti:** `Incremental commits` ko copy-paste se use karna bina jaane ki wo kya own karta hai ya kab valid hai.

Practice: `examples/07_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 8. Compiler as ally

### Aasan Bhasha

Aaj ka idea — **Compiler as ally** — Refactoring C++ safely ke bade theme ke andar aata hai. Ise ek tool ki tarah padho: ye kaam kya karta hai, kaunse rules enforce karta hai, aur un rules ko ignore karne par kya tootta hai?

### Chhota code

```cpp
// Explore: Compiler as ally
#include <iostream>
int main() {
  std::cout << "practice: Compiler as ally\n";
  return 0;
}
```

- **Yaad rakho:** `Compiler as ally` use karne wala code likhne se pehle ek invariant bolo.
- **Aam galti:** `Compiler as ally` ko copy-paste se use karna bina jaane ki wo kya own karta hai ya kab valid hai.

Practice: `examples/08_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 9. Dead code removal

### Aasan Bhasha

Aaj ka idea — **Dead code removal** — Refactoring C++ safely ke bade theme ke andar aata hai. Ise ek tool ki tarah padho: ye kaam kya karta hai, kaunse rules enforce karta hai, aur un rules ko ignore karne par kya tootta hai?

### Chhota code

```cpp
// Explore: Dead code removal
#include <iostream>
int main() {
  std::cout << "practice: Dead code removal\n";
  return 0;
}
```

- **Yaad rakho:** `Dead code removal` use karne wala code likhne se pehle ek invariant bolo.
- **Aam galti:** `Dead code removal` ko copy-paste se use karna bina jaane ki wo kya own karta hai ya kab valid hai.

Practice: `examples/09_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 10. A refactor walkthrough

### Aasan Bhasha

Aaj ka idea — **A refactor walkthrough** — Refactoring C++ safely ke bade theme ke andar aata hai. Ise ek tool ki tarah padho: ye kaam kya karta hai, kaunse rules enforce karta hai, aur un rules ko ignore karne par kya tootta hai?

### Chhota code

```cpp
// Explore: A refactor walkthrough
#include <iostream>
int main() {
  std::cout << "practice: A refactor walkthrough\n";
  return 0;
}
```

- **Yaad rakho:** `A refactor walkthrough` use karne wala code likhne se pehle ek invariant bolo.
- **Aam galti:** `A refactor walkthrough` ko copy-paste se use karna bina jaane ki wo kya own karta hai ya kab valid hai.

Practice: `examples/10_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

---

## Day 76 ke baad aapko ye aana chahiye

- `Refactoring C++ safely` ko bina notes dekhe kisi dost ko samjha sakna.
- Saare 10 examples `-std=c++17 -Wall -Wextra` ke saath compile aur run karna (naye flags sirf tab jab din ko C++20+ chahiye).
- `answers.md` dekhne se pehle `questions.md` ke 5 sawaal answer karna.
- Ek chhota extra program likhna jo aaj ke kam se kam 3 concepts jodta ho.

Ya is din ko **Badsha hub** me kholo (`python3 hub/server.py`) aur Learn / Practice / Quiz tabs use karo.
