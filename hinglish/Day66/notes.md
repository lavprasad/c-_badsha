# Day 66 -- Type erasure patterns

Aaj ka goal: **Type erasure patterns** ko aasan Hinglish me samajhna, har idea ka chhota code sample dekhna, phir `examples/` me practice karna.

Is din ko padhne ka tarika:
1. Har concept ka **Aasan Bhasha** section padho.
2. Code sample par nazar daalo -- pehle predict karo ki output kya aayega.
3. `examples/` me us concept ki file chalao.
4. Uske baad hi `questions.md` kholo.

| # | Concept |
|--:|---------|
| 1 | std::function as erasure |
| 2 | std::any |
| 3 | Manual type erasure |
| 4 | Concept-based polymorphism |
| 5 | Small buffer optimization idea |
| 6 | vtable in erasure |
| 7 | Comparing approaches |
| 8 | API stability |
| 9 | Costs |
| 10 | A drawable erasure |

---

## 1. std::function as erasure

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

## 2. std::any

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

Practice: `examples/02_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 3. Manual type erasure

### Aasan Bhasha

Aaj ka idea — **Manual type erasure** — Type erasure patterns ke bade theme ke andar aata hai. Ise ek tool ki tarah padho: ye kaam kya karta hai, kaunse rules enforce karta hai, aur un rules ko ignore karne par kya tootta hai?

### Chhota code

```cpp
// Explore: Manual type erasure
#include <iostream>
int main() {
  std::cout << "practice: Manual type erasure\n";
  return 0;
}
```

- **Yaad rakho:** `Manual type erasure` use karne wala code likhne se pehle ek invariant bolo.
- **Aam galti:** `Manual type erasure` ko copy-paste se use karna bina jaane ki wo kya own karta hai ya kab valid hai.

Practice: `examples/03_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 4. Concept-based polymorphism

### Aasan Bhasha

Virtual functions base pointer/reference ke through derived implementation call karne dete hain. Abstract classes (pure virtuals) interfaces banate hain. Polymorphic base ko hamesha virtual destructor do.

### Chhota code

```cpp
struct Shape {
  virtual ~Shape() = default;
  virtual double area() const = 0;
};
struct Circle : Shape {
  double r;
  double area() const override { return 3.14 * r * r; }
};
```

- **Yaad rakho:** `override` likho taaki signature ki galti compile time par pakdi jaaye.
- **Aam galti:** Derived object ko non-virtual base destructor ke through delete karna.

Practice: `examples/04_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 5. Small buffer optimization idea

### Aasan Bhasha

Aaj ka idea — **Small buffer optimization idea** — Type erasure patterns ke bade theme ke andar aata hai. Ise ek tool ki tarah padho: ye kaam kya karta hai, kaunse rules enforce karta hai, aur un rules ko ignore karne par kya tootta hai?

### Chhota code

```cpp
// Explore: Small buffer optimization idea
#include <iostream>
int main() {
  std::cout << "practice: Small buffer optimization idea\n";
  return 0;
}
```

- **Yaad rakho:** `Small buffer optimization idea` use karne wala code likhne se pehle ek invariant bolo.
- **Aam galti:** `Small buffer optimization idea` ko copy-paste se use karna bina jaane ki wo kya own karta hai ya kab valid hai.

Practice: `examples/05_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 6. vtable in erasure

### Aasan Bhasha

Virtual functions base pointer/reference ke through derived implementation call karne dete hain. Abstract classes (pure virtuals) interfaces banate hain. Polymorphic base ko hamesha virtual destructor do.

### Chhota code

```cpp
struct Shape {
  virtual ~Shape() = default;
  virtual double area() const = 0;
};
struct Circle : Shape {
  double r;
  double area() const override { return 3.14 * r * r; }
};
```

- **Yaad rakho:** `override` likho taaki signature ki galti compile time par pakdi jaaye.
- **Aam galti:** Derived object ko non-virtual base destructor ke through delete karna.

Practice: `examples/06_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 7. Comparing approaches

### Aasan Bhasha

Aaj ka idea — **Comparing approaches** — Type erasure patterns ke bade theme ke andar aata hai. Ise ek tool ki tarah padho: ye kaam kya karta hai, kaunse rules enforce karta hai, aur un rules ko ignore karne par kya tootta hai?

### Chhota code

```cpp
// Explore: Comparing approaches
#include <iostream>
int main() {
  std::cout << "practice: Comparing approaches\n";
  return 0;
}
```

- **Yaad rakho:** `Comparing approaches` use karne wala code likhne se pehle ek invariant bolo.
- **Aam galti:** `Comparing approaches` ko copy-paste se use karna bina jaane ki wo kya own karta hai ya kab valid hai.

Practice: `examples/07_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 8. API stability

### Aasan Bhasha

Aaj ka idea — **API stability** — Type erasure patterns ke bade theme ke andar aata hai. Ise ek tool ki tarah padho: ye kaam kya karta hai, kaunse rules enforce karta hai, aur un rules ko ignore karne par kya tootta hai?

### Chhota code

```cpp
// Explore: API stability
#include <iostream>
int main() {
  std::cout << "practice: API stability\n";
  return 0;
}
```

- **Yaad rakho:** `API stability` use karne wala code likhne se pehle ek invariant bolo.
- **Aam galti:** `API stability` ko copy-paste se use karna bina jaane ki wo kya own karta hai ya kab valid hai.

Practice: `examples/08_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 9. Costs

### Aasan Bhasha

Aaj ka idea — **Costs** — Type erasure patterns ke bade theme ke andar aata hai. Ise ek tool ki tarah padho: ye kaam kya karta hai, kaunse rules enforce karta hai, aur un rules ko ignore karne par kya tootta hai?

### Chhota code

```cpp
// Explore: Costs
#include <iostream>
int main() {
  std::cout << "practice: Costs\n";
  return 0;
}
```

- **Yaad rakho:** `Costs` use karne wala code likhne se pehle ek invariant bolo.
- **Aam galti:** `Costs` ko copy-paste se use karna bina jaane ki wo kya own karta hai ya kab valid hai.

Practice: `examples/09_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 10. A drawable erasure

### Aasan Bhasha

Aaj ka idea — **A drawable erasure** — Type erasure patterns ke bade theme ke andar aata hai. Ise ek tool ki tarah padho: ye kaam kya karta hai, kaunse rules enforce karta hai, aur un rules ko ignore karne par kya tootta hai?

### Chhota code

```cpp
// Explore: A drawable erasure
#include <iostream>
int main() {
  std::cout << "practice: A drawable erasure\n";
  return 0;
}
```

- **Yaad rakho:** `A drawable erasure` use karne wala code likhne se pehle ek invariant bolo.
- **Aam galti:** `A drawable erasure` ko copy-paste se use karna bina jaane ki wo kya own karta hai ya kab valid hai.

Practice: `examples/10_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

---

## Day 66 ke baad aapko ye aana chahiye

- `Type erasure patterns` ko bina notes dekhe kisi dost ko samjha sakna.
- Saare 10 examples `-std=c++17 -Wall -Wextra` ke saath compile aur run karna (naye flags sirf tab jab din ko C++20+ chahiye).
- `answers.md` dekhne se pehle `questions.md` ke 5 sawaal answer karna.
- Ek chhota extra program likhna jo aaj ke kam se kam 3 concepts jodta ho.

Ya is din ko **Badsha hub** me kholo (`python3 hub/server.py`) aur Learn / Practice / Quiz tabs use karo.
