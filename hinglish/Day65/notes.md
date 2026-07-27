# Day 65 -- Behavioral patterns

Aaj ka goal: **Behavioral patterns** ko aasan Hinglish me samajhna, har idea ka chhota code sample dekhna, phir `examples/` me practice karna.

Is din ko padhne ka tarika:
1. Har concept ka **Aasan Bhasha** section padho.
2. Code sample par nazar daalo -- pehle predict karo ki output kya aayega.
3. `examples/` me us concept ki file chalao.
4. Uske baad hi `questions.md` kholo.

| # | Concept |
|--:|---------|
| 1 | Strategy |
| 2 | Observer |
| 3 | Command |
| 4 | State |
| 5 | Template method |
| 6 | Visitor |
| 7 | Mediator |
| 8 | Chain of responsibility |
| 9 | Iterator pattern vs STL |
| 10 | A game AI strategy |

---

## 1. Strategy

### Aasan Bhasha

Aaj ka idea — **Strategy** — Behavioral patterns ke bade theme ke andar aata hai. Ise ek tool ki tarah padho: ye kaam kya karta hai, kaunse rules enforce karta hai, aur un rules ko ignore karne par kya tootta hai?

### Chhota code

```cpp
// Explore: Strategy
#include <iostream>
int main() {
  std::cout << "practice: Strategy\n";
  return 0;
}
```

- **Yaad rakho:** `Strategy` use karne wala code likhne se pehle ek invariant bolo.
- **Aam galti:** `Strategy` ko copy-paste se use karna bina jaane ki wo kya own karta hai ya kab valid hai.

Practice: `examples/01_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 2. Observer

### Aasan Bhasha

Aaj ka idea — **Observer** — Behavioral patterns ke bade theme ke andar aata hai. Ise ek tool ki tarah padho: ye kaam kya karta hai, kaunse rules enforce karta hai, aur un rules ko ignore karne par kya tootta hai?

### Chhota code

```cpp
// Explore: Observer
#include <iostream>
int main() {
  std::cout << "practice: Observer\n";
  return 0;
}
```

- **Yaad rakho:** `Observer` use karne wala code likhne se pehle ek invariant bolo.
- **Aam galti:** `Observer` ko copy-paste se use karna bina jaane ki wo kya own karta hai ya kab valid hai.

Practice: `examples/02_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 3. Command

### Aasan Bhasha

Aaj ka idea — **Command** — Behavioral patterns ke bade theme ke andar aata hai. Ise ek tool ki tarah padho: ye kaam kya karta hai, kaunse rules enforce karta hai, aur un rules ko ignore karne par kya tootta hai?

### Chhota code

```cpp
// Explore: Command
#include <iostream>
int main() {
  std::cout << "practice: Command\n";
  return 0;
}
```

- **Yaad rakho:** `Command` use karne wala code likhne se pehle ek invariant bolo.
- **Aam galti:** `Command` ko copy-paste se use karna bina jaane ki wo kya own karta hai ya kab valid hai.

Practice: `examples/03_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 4. State

### Aasan Bhasha

Aaj ka idea — **State** — Behavioral patterns ke bade theme ke andar aata hai. Ise ek tool ki tarah padho: ye kaam kya karta hai, kaunse rules enforce karta hai, aur un rules ko ignore karne par kya tootta hai?

### Chhota code

```cpp
// Explore: State
#include <iostream>
int main() {
  std::cout << "practice: State\n";
  return 0;
}
```

- **Yaad rakho:** `State` use karne wala code likhne se pehle ek invariant bolo.
- **Aam galti:** `State` ko copy-paste se use karna bina jaane ki wo kya own karta hai ya kab valid hai.

Practice: `examples/04_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 5. Template method

### Aasan Bhasha

Templates har type ke liye code generate karte hain. Ye errors ko compile time par le aate hain aur runtime virtual dispatch hata dete hain. Inhe padhne layak rakho; jahan ho sake parameters constrain karo.

### Chhota code

```cpp
template <typename T>
T clamp_pos(T x) {
  return x < T{0} ? T{0} : x;
}
```

- **Yaad rakho:** Templates aksar headers me rehte hain taaki har TU instantiate kar sake.
- **Aam galti:** Template ki definition sirf `.cpp` me rakhna aur phir linker error par hairan hona.

Practice: `examples/05_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 6. Visitor

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

Practice: `examples/06_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 7. Mediator

### Aasan Bhasha

Aaj ka idea — **Mediator** — Behavioral patterns ke bade theme ke andar aata hai. Ise ek tool ki tarah padho: ye kaam kya karta hai, kaunse rules enforce karta hai, aur un rules ko ignore karne par kya tootta hai?

### Chhota code

```cpp
// Explore: Mediator
#include <iostream>
int main() {
  std::cout << "practice: Mediator\n";
  return 0;
}
```

- **Yaad rakho:** `Mediator` use karne wala code likhne se pehle ek invariant bolo.
- **Aam galti:** `Mediator` ko copy-paste se use karna bina jaane ki wo kya own karta hai ya kab valid hai.

Practice: `examples/07_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 8. Chain of responsibility

### Aasan Bhasha

Aaj ka idea — **Chain of responsibility** — Behavioral patterns ke bade theme ke andar aata hai. Ise ek tool ki tarah padho: ye kaam kya karta hai, kaunse rules enforce karta hai, aur un rules ko ignore karne par kya tootta hai?

### Chhota code

```cpp
// Explore: Chain of responsibility
#include <iostream>
int main() {
  std::cout << "practice: Chain of responsibility\n";
  return 0;
}
```

- **Yaad rakho:** `Chain of responsibility` use karne wala code likhne se pehle ek invariant bolo.
- **Aam galti:** `Chain of responsibility` ko copy-paste se use karna bina jaane ki wo kya own karta hai ya kab valid hai.

Practice: `examples/08_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 9. Iterator pattern vs STL

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

Practice: `examples/09_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 10. A game AI strategy

### Aasan Bhasha

Aaj ka idea — **A game AI strategy** — Behavioral patterns ke bade theme ke andar aata hai. Ise ek tool ki tarah padho: ye kaam kya karta hai, kaunse rules enforce karta hai, aur un rules ko ignore karne par kya tootta hai?

### Chhota code

```cpp
// Explore: A game AI strategy
#include <iostream>
int main() {
  std::cout << "practice: A game AI strategy\n";
  return 0;
}
```

- **Yaad rakho:** `A game AI strategy` use karne wala code likhne se pehle ek invariant bolo.
- **Aam galti:** `A game AI strategy` ko copy-paste se use karna bina jaane ki wo kya own karta hai ya kab valid hai.

Practice: `examples/10_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

---

## Day 65 ke baad aapko ye aana chahiye

- `Behavioral patterns` ko bina notes dekhe kisi dost ko samjha sakna.
- Saare 10 examples `-std=c++17 -Wall -Wextra` ke saath compile aur run karna (naye flags sirf tab jab din ko C++20+ chahiye).
- `answers.md` dekhne se pehle `questions.md` ke 5 sawaal answer karna.
- Ek chhota extra program likhna jo aaj ke kam se kam 3 concepts jodta ho.

Ya is din ko **Badsha hub** me kholo (`python3 hub/server.py`) aur Learn / Practice / Quiz tabs use karo.
