# Day 68 -- Policy-based design

Aaj ka goal: **Policy-based design** ko aasan Hinglish me samajhna, har idea ka chhota code sample dekhna, phir `examples/` me practice karna.

Is din ko padhne ka tarika:
1. Har concept ka **Aasan Bhasha** section padho.
2. Code sample par nazar daalo -- pehle predict karo ki output kya aayega.
3. `examples/` me us concept ki file chalao.
4. Uske baad hi `questions.md` kholo.

| # | Concept |
|--:|---------|
| 1 | Policies as template params |
| 2 | Hosting policies |
| 3 | Orthogonal policies |
| 4 | Default policies |
| 5 | Named template args idea |
| 6 | vs inheritance |
| 7 | Compile-time wiring |
| 8 | Error messages |
| 9 | Library examples mindset |
| 10 | A smart buffer policies |

---

## 1. Policies as template params

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

Practice: `examples/01_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 2. Hosting policies

### Aasan Bhasha

Aaj ka idea — **Hosting policies** — Policy-based design ke bade theme ke andar aata hai. Ise ek tool ki tarah padho: ye kaam kya karta hai, kaunse rules enforce karta hai, aur un rules ko ignore karne par kya tootta hai?

### Chhota code

```cpp
// Explore: Hosting policies
#include <iostream>
int main() {
  std::cout << "practice: Hosting policies\n";
  return 0;
}
```

- **Yaad rakho:** `Hosting policies` use karne wala code likhne se pehle ek invariant bolo.
- **Aam galti:** `Hosting policies` ko copy-paste se use karna bina jaane ki wo kya own karta hai ya kab valid hai.

Practice: `examples/02_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 3. Orthogonal policies

### Aasan Bhasha

Aaj ka idea — **Orthogonal policies** — Policy-based design ke bade theme ke andar aata hai. Ise ek tool ki tarah padho: ye kaam kya karta hai, kaunse rules enforce karta hai, aur un rules ko ignore karne par kya tootta hai?

### Chhota code

```cpp
// Explore: Orthogonal policies
#include <iostream>
int main() {
  std::cout << "practice: Orthogonal policies\n";
  return 0;
}
```

- **Yaad rakho:** `Orthogonal policies` use karne wala code likhne se pehle ek invariant bolo.
- **Aam galti:** `Orthogonal policies` ko copy-paste se use karna bina jaane ki wo kya own karta hai ya kab valid hai.

Practice: `examples/03_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 4. Default policies

### Aasan Bhasha

Aaj ka idea — **Default policies** — Policy-based design ke bade theme ke andar aata hai. Ise ek tool ki tarah padho: ye kaam kya karta hai, kaunse rules enforce karta hai, aur un rules ko ignore karne par kya tootta hai?

### Chhota code

```cpp
// Explore: Default policies
#include <iostream>
int main() {
  std::cout << "practice: Default policies\n";
  return 0;
}
```

- **Yaad rakho:** `Default policies` use karne wala code likhne se pehle ek invariant bolo.
- **Aam galti:** `Default policies` ko copy-paste se use karna bina jaane ki wo kya own karta hai ya kab valid hai.

Practice: `examples/04_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 5. Named template args idea

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

## 6. vs inheritance

### Aasan Bhasha

Inheritance 'is-a' model karta hai jab derived type base ki jagah le sake. Sirf implementation reuse karna ho to composition ('has-a') behtar hai.

### Chhota code

```cpp
struct Engine { void start(); };
struct Car {  // has-an Engine
  Engine engine;
  void start() { engine.start(); }
};
```

- **Yaad rakho:** Gehre inheritance trees fragile ho jaate hain — shallow design rakho.
- **Aam galti:** Sirf code reuse ke liye inherit karna jabki member object kaafi tha.

Practice: `examples/06_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 7. Compile-time wiring

### Aasan Bhasha

Aaj ka idea — **Compile-time wiring** — Policy-based design ke bade theme ke andar aata hai. Ise ek tool ki tarah padho: ye kaam kya karta hai, kaunse rules enforce karta hai, aur un rules ko ignore karne par kya tootta hai?

### Chhota code

```cpp
// Explore: Compile-time wiring
#include <iostream>
int main() {
  std::cout << "practice: Compile-time wiring\n";
  return 0;
}
```

- **Yaad rakho:** `Compile-time wiring` use karne wala code likhne se pehle ek invariant bolo.
- **Aam galti:** `Compile-time wiring` ko copy-paste se use karna bina jaane ki wo kya own karta hai ya kab valid hai.

Practice: `examples/07_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 8. Error messages

### Aasan Bhasha

Aaj ka idea — **Error messages** — Policy-based design ke bade theme ke andar aata hai. Ise ek tool ki tarah padho: ye kaam kya karta hai, kaunse rules enforce karta hai, aur un rules ko ignore karne par kya tootta hai?

### Chhota code

```cpp
// Explore: Error messages
#include <iostream>
int main() {
  std::cout << "practice: Error messages\n";
  return 0;
}
```

- **Yaad rakho:** `Error messages` use karne wala code likhne se pehle ek invariant bolo.
- **Aam galti:** `Error messages` ko copy-paste se use karna bina jaane ki wo kya own karta hai ya kab valid hai.

Practice: `examples/08_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 9. Library examples mindset

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

Practice: `examples/09_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 10. A smart buffer policies

### Aasan Bhasha

Aaj ka idea — **A smart buffer policies** — Policy-based design ke bade theme ke andar aata hai. Ise ek tool ki tarah padho: ye kaam kya karta hai, kaunse rules enforce karta hai, aur un rules ko ignore karne par kya tootta hai?

### Chhota code

```cpp
// Explore: A smart buffer policies
#include <iostream>
int main() {
  std::cout << "practice: A smart buffer policies\n";
  return 0;
}
```

- **Yaad rakho:** `A smart buffer policies` use karne wala code likhne se pehle ek invariant bolo.
- **Aam galti:** `A smart buffer policies` ko copy-paste se use karna bina jaane ki wo kya own karta hai ya kab valid hai.

Practice: `examples/10_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

---

## Day 68 ke baad aapko ye aana chahiye

- `Policy-based design` ko bina notes dekhe kisi dost ko samjha sakna.
- Saare 10 examples `-std=c++17 -Wall -Wextra` ke saath compile aur run karna (naye flags sirf tab jab din ko C++20+ chahiye).
- `answers.md` dekhne se pehle `questions.md` ke 5 sawaal answer karna.
- Ek chhota extra program likhna jo aaj ke kam se kam 3 concepts jodta ho.

Ya is din ko **Badsha hub** me kholo (`python3 hub/server.py`) aur Learn / Practice / Quiz tabs use karo.
