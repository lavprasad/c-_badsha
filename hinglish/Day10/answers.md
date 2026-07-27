# Day 10 — Answers (try karne ke BAAD padho)

---

### A1. Strict weak ordering ko `<` chahiye, `<=` nahi

`a <= b` `std::sort` ki **strict weak ordering** ki shart todta hai. Jab `a == b` ho, to `comp(a,b)` aur `comp(b,a)` dono `true` dete hain, jo aapas me ulta hai.

**Nateeja:** theory me undefined behaviour; practice me elements be-tarteeb "reorder" ho sakte hain ya duplicate handling me bugs aa sakte hain.

**Fix:** strict `<` use karo:

```cpp
[](int a, int b) { return a < b; }
```

Niyam: sort ke comparators **strict** ordering define karein: agar `comp(a,b)` hai to `!comp(b,a)` hona chahiye.

---

### A2. Dangling reference capture

**Undefined behaviour** — shayad garbage print karega ya crash.

`make_adder` aisa lambda return karta hai jo `x` ko **reference se** capture karta hai, par `x` ek **local variable** hai jo `make_adder` ke return hote hi khatam ho jaata hai. `fn()` ek dangling reference dereference karta hai.

**Fix — value se capture karo:**

```cpp
return [x]() { return x + 1; };   // safely 11 print karta hai
```

Ya C++14 init capture:

```cpp
return [val = x]() { return val + 1; };
```

Locals ko `[&]` se tabhi capture karo jab pakka ho ki lambda ki umar locals se chhoti hai.

---

### A3. Khaali destination — end ke aage likhna

**Undefined behaviour.** `dst` **khaali** hai (`size() == 0`), par `transform` `dst.begin()` ke through likhta hai bina `dst` ko badhaye.

**Fix 1 — pehle destination ka size do:**

```cpp
std::vector<int> dst(src.size());
std::transform(src.begin(), src.end(), dst.begin(), ...);
```

**Fix 2 — back_inserter use karo:**

```cpp
#include <iterator>
std::transform(src.begin(), src.end(), std::back_inserter(dst), ...);
```

---

### A4. Galat algorithm — `find` ko value chahiye, predicate nahi

**Compile nahi hota.** `std::find` ek **value** chahta hai jise `==` se compare kare, callable nahi.

**Fix — `std::find_if` use karo:**

```cpp
auto it = std::find_if(v.begin(), v.end(),
                       [](const std::string& s) { return s.size() > 5; });
```

`banana` print karta hai (pehli string jiski length > 5 hai).

---

### A5. Sort phir unique duplicates hata deta hai

**Output: `1 2 3 4 5 6 9`**

Steps:
1. Sort → `{1, 1, 2, 3, 3, 4, 5, 5, 6, 9}`
2. `unique` duplicates ko aakhir me khiskata hai aur naye logical end ka iterator deta hai → `{1, 2, 3, 4, 5, 6, 9, ?, ?, ?}`
3. `erase` size 7 kar deta hai.

**Pehle sort kyun?** `std::unique` sirf **aas-paas** ke duplicates hataata hai. Bina sort kiye `{3, 1, 4, 1, 5}` me dono `1` bache rehte kyunki wo aas-paas nahi hain.

Classic idiom: deduplication ke liye **sort → unique → erase**.

---

## Khud ki scoring

- 5/5: algorithms aur lambdas solid hain — **Day 11 (move semantics & smart pointers)** par badho.
- 3–4: `notes.md` me lambda capture aur iterator ranges dobara padho.
- 0–2: `examples/` ka har program dobara chalao, khaas kar `05_lambdas.cpp` aur `10_algorithm_pipeline.cpp`.

Apna score batao aur wo concept batao jise Day 11 se pehle gehraai se dekhna hai.
