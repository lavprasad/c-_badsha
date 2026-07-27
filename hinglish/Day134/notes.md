# Day 134 -- Reflection wishlist & current tricks

Aaj ka goal: **Reflection wishlist & current tricks** ko aasan Hinglish me samajhna, har idea ka chhota code sample dekhna, phir `examples/` me practice karna.

Is din ko padhne ka tarika:
1. Har concept ka **Aasan Bhasha** section padho.
2. Code sample par nazar daalo -- pehle predict karo ki output kya aayega.
3. `examples/` me us concept ki file chalao.
4. Uske baad hi `questions.md` kholo.

| # | Concept |
|--:|---------|
| 1 | What reflection means |
| 2 | Macro registration |
| 3 | Structured bindings limits |
| 4 | visit on variants |
| 5 | Magic_get style idea |
| 6 | Future of C++ reflection |
| 7 | Codegen alternatives |
| 8 | JSON mapping pain |
| 9 | Practical advice |
| 10 | Manual visitor |

---

## 1. What reflection means

### Aasan Bhasha

Aaj ka idea — **What reflection means** — Reflection wishlist & current tricks ke bade theme ke andar aata hai. Ise ek tool ki tarah padho: ye kaam kya karta hai, kaunse rules enforce karta hai, aur un rules ko ignore karne par kya tootta hai?

### Chhota code

```cpp
// Explore: What reflection means
#include <iostream>
int main() {
  std::cout << "practice: What reflection means\n";
  return 0;
}
```

- **Yaad rakho:** `What reflection means` use karne wala code likhne se pehle ek invariant bolo.
- **Aam galti:** `What reflection means` ko copy-paste se use karna bina jaane ki wo kya own karta hai ya kab valid hai.

Practice: `examples/01_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 2. Macro registration

### Aasan Bhasha

Aaj ka idea — **Macro registration** — Reflection wishlist & current tricks ke bade theme ke andar aata hai. Ise ek tool ki tarah padho: ye kaam kya karta hai, kaunse rules enforce karta hai, aur un rules ko ignore karne par kya tootta hai?

### Chhota code

```cpp
// Explore: Macro registration
#include <iostream>
int main() {
  std::cout << "practice: Macro registration\n";
  return 0;
}
```

- **Yaad rakho:** `Macro registration` use karne wala code likhne se pehle ek invariant bolo.
- **Aam galti:** `Macro registration` ko copy-paste se use karna bina jaane ki wo kya own karta hai ya kab valid hai.

Practice: `examples/02_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 3. Structured bindings limits

### Aasan Bhasha

Sockets network bytes ke liye OS endpoints hain. TCP reliable stream deta hai; messages ki framing phir bhi aapko khud karni padti hai. Return codes hamesha check karo aur partial read/write handle karo.

### Chhota code

```cpp
// Conceptual — details are OS-specific
// sock = socket(...);
// connect(sock, ...);
// send(sock, buf, n, 0);
```

- **Yaad rakho:** Network data bytes hai; integers ko endian helpers se convert karo.
- **Aam galti:** Ye maan lena ki ek `recv` poora ek application message deta hai.

Practice: `examples/03_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 4. visit on variants

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

Practice: `examples/04_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 5. Magic_get style idea

### Aasan Bhasha

Aaj ka idea — **Magic_get style idea** — Reflection wishlist & current tricks ke bade theme ke andar aata hai. Ise ek tool ki tarah padho: ye kaam kya karta hai, kaunse rules enforce karta hai, aur un rules ko ignore karne par kya tootta hai?

### Chhota code

```cpp
// Explore: Magic_get style idea
#include <iostream>
int main() {
  std::cout << "practice: Magic_get style idea\n";
  return 0;
}
```

- **Yaad rakho:** `Magic_get style idea` use karne wala code likhne se pehle ek invariant bolo.
- **Aam galti:** `Magic_get style idea` ko copy-paste se use karna bina jaane ki wo kya own karta hai ya kab valid hai.

Practice: `examples/05_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 6. Future of C++ reflection

### Aasan Bhasha

Threads code ko saath-saath chalate hain. Shared mutable data ko mutex (ya atomics) chahiye. RAII locks (`lock_guard`) prefer karo taaki exception par bhi unlock ho jaaye.

### Chhota code

```cpp
std::mutex m;
int counter = 0;
{
  std::lock_guard<std::mutex> g(m);
  ++counter;
}
```

- **Yaad rakho:** Non-atomic shared data par data race undefined behaviour hai.
- **Aam galti:** Alag threads me do mutex ulte order me lock karna → deadlock.

Practice: `examples/06_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 7. Codegen alternatives

### Aasan Bhasha

Aaj ka idea — **Codegen alternatives** — Reflection wishlist & current tricks ke bade theme ke andar aata hai. Ise ek tool ki tarah padho: ye kaam kya karta hai, kaunse rules enforce karta hai, aur un rules ko ignore karne par kya tootta hai?

### Chhota code

```cpp
// Explore: Codegen alternatives
#include <iostream>
int main() {
  std::cout << "practice: Codegen alternatives\n";
  return 0;
}
```

- **Yaad rakho:** `Codegen alternatives` use karne wala code likhne se pehle ek invariant bolo.
- **Aam galti:** `Codegen alternatives` ko copy-paste se use karna bina jaane ki wo kya own karta hai ya kab valid hai.

Practice: `examples/07_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 8. JSON mapping pain

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

Practice: `examples/08_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 9. Practical advice

### Aasan Bhasha

Aaj ka idea — **Practical advice** — Reflection wishlist & current tricks ke bade theme ke andar aata hai. Ise ek tool ki tarah padho: ye kaam kya karta hai, kaunse rules enforce karta hai, aur un rules ko ignore karne par kya tootta hai?

### Chhota code

```cpp
// Explore: Practical advice
#include <iostream>
int main() {
  std::cout << "practice: Practical advice\n";
  return 0;
}
```

- **Yaad rakho:** `Practical advice` use karne wala code likhne se pehle ek invariant bolo.
- **Aam galti:** `Practical advice` ko copy-paste se use karna bina jaane ki wo kya own karta hai ya kab valid hai.

Practice: `examples/09_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 10. Manual visitor

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

Practice: `examples/10_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

---

## Day 134 ke baad aapko ye aana chahiye

- `Reflection wishlist & current tricks` ko bina notes dekhe kisi dost ko samjha sakna.
- Saare 10 examples `-std=c++17 -Wall -Wextra` ke saath compile aur run karna (naye flags sirf tab jab din ko C++20+ chahiye).
- `answers.md` dekhne se pehle `questions.md` ke 5 sawaal answer karna.
- Ek chhota extra program likhna jo aaj ke kam se kam 3 concepts jodta ho.

Ya is din ko **Badsha hub** me kholo (`python3 hub/server.py`) aur Learn / Practice / Quiz tabs use karo.
