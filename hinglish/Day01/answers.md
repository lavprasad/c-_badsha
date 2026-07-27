# Day 01 — Answers (try karne ke BAAD padho)

---

### A1. Integer division pehle vaar karta hai

**Output: `2`** (`2` hi chhapta hai kyunki `cout` default me trailing `.0` nahi dikhata).

`a / b` pehle compute hota hai. Dono operands `int` hain, to ye **integer division** hai → `5 / 2 = 2`. *Uske baad* `2 + 0.0` result ko `double` (`2.0`) bana deta hai. `0.0` jodne se division floating-point nahi ban jaata — wo sirf type badalta hai *jab* division apna fractional part pehle hi kho chuka hota hai.

**Fix:** division se *pehle* kam se kam ek operand ko `double` banao:

```cpp
double c = static_cast<double>(a) / b;   // 2.5
```

Sabak: conversion operator chalne se *pehle* hona chahiye.

---

### A2. Macro precedence ka jaal

**Output: `11`**.

Preprocessor sach me sirf text badalta hai:

```cpp
SQR(2 + 3)   →   2 + 3 * 2 + 3   →   2 + 6 + 3   →   11
```

Likhne wala shayad `25` (`5 * 5`) chahta tha.

**Macro theek karo** — har argument *aur* poore expression ko bracket me daal kar:

```cpp
#define SQR(x) ((x) * (x))
```

Ab `SQR(2+3)` banta hai `((2+3) * (2+3)) = 25`. Phir bhi ek bug bacha hai: `SQR(i++)` `i` ko do baar increment kar dega. **Asli fix** ye hai ki iske liye macro use hi mat karo. `constexpr` function use karo:

```cpp
constexpr int sqr(int x) { return x * x; }
```

Ye type-checked hai, `x` ko ek hi baar evaluate karta hai, aur constant dene par compile-time par chal jaata hai.

---

### A3. Unsigned underflow ka jaal

`break` hatane par loop **infinite** ho jaata hai.

`i` `unsigned int` hai, isliye `i >= 0` *hamesha* `true` hai — unsigned value kabhi negative ho hi nahi sakti. Jab `i` `0` ho aur aap `--i` karo, wo wrap hokar `UINT_MAX` (≈ 4.29 × 10⁹) ban jaata hai aur loop chalta rehta hai. Yahi classic "unsigned underflow" bug hai.

**Ek-keyword fix:** `unsigned int` ko `int` kar do:

```cpp
for (int i = 5; i >= 0; --i) { ... }   // i == -1 par ruk jaata hai
```

Sabak: `unsigned` tabhi use karo jab aap sach me non-negative quantity model kar rahe ho (sizes, aise arrays ke indices jo aap jaante ho positive hain). Aise loop counters ke liye jo negative ja sakte hain ya `>= 0` se compare hote hain, **`int` use karo**.

---

### A4. Sequenced hai ya nahi?

(a) **Nahi, `+` ke liye ab bhi unspecified / implementation-defined hai.** C++17 ne *kuch* operators ka evaluation order fix kiya (jaise `<<`, `>>`, `.`, `->`, `[]`, assignment, aur function-call arguments call se pehle sequenced hote hain) par `+`, `-`, `*`, `/` waghairah ke operands ke liye **nahi**.

To `i++ + ++i` `i` ko do baar padhta aur badalta hai bina dono sub-expressions ke beech kisi defined order ke → **undefined behaviour**. x86-64 par g++ me aapko shayad `x = 4, i = 3` dikhega, par standard koi vaada nahi karta — alag compiler / version / optimisation level alag value de sakta hai.

(b) Likhne wala shayad *sochta* hai: "`i++` 1 deta hai (phir i=2), `++i` i=3 karke 3 return karta hai, to x = 1+3 = 4". Ye soch left-to-right order maan leti hai jo standard `+` ke liye guarantee **nahi** karta.

(c) **Safe rewrite — alag-alag statements me todo:**

```cpp
int x = i;       // purani value pakad li
++i;             // ab i 2 hai
++i;             // ab i 3 hai
x += i;          // x = 1 + 3 = 4
```

Har statement apne aap me poora expression hai, isliye saare side-effects sequenced hain.

Rule of thumb: **ek hi expression me ek hi variable ko ek se zyada baar mat badlo.** Modern C++ me bhi ye lagbhag hamesha UB hi hota hai.

---

### A5. Compiler vs linker

`subtract(10, 3)` call karne par:

- `main.cpp` ne `int subtract(int, int);` *declare* kiya tha, isliye **compiler** khush hai — use matching signature wala naam dikh gaya.
- `subtract` ko kabhi kisi ne **define** nahi kiya. To jab **linker** object files jodne jaata hai, use function ki body milti hi nahi.
- Result: **linker error** — `undefined reference to 'subtract(int, int)'`.

`add(10, 3)` call karna par command line par `math.cpp` bhool jaana:

- Compiler ko phir bhi `main.cpp` me `add` ka *declaration* chahiye. Agar hai to compilation ho jaayegi; nahi hai to **compiler error** milega (`'add' was not declared in this scope`).
- Maan lo declaration hai — tab **linker** fail hoga kyunki `add` ki definition wali koi object file di hi nahi gayi. Wahi error message: `undefined reference to 'add(int, int)'`.

Jaldi wala mental model:

| Lakshan | Stage | Wajah |
|---------|-------|-------|
| `'foo' was not declared in this scope` | Compiler | `#include` ya forward declaration missing |
| `undefined reference to 'foo'` | Linker   | Definition / `.cpp` file / library missing |
| `multiple definition of 'foo'`         | Linker   | Wahi non-`inline` function 2 TUs me define hua |

---

## Khud ki scoring

- 5/5: neev solid hai — bata do, hum **Day 02 (control flow)** par badhte hain.
- 3–4: `notes.md` ka wahi section dobara padho, phir jo dhundhla lage puchho.
- 0–2: pehle din ke liye bilkul theek hai — `examples/` ka har program dobara chalao, values badlo, aur chalane se *pehle* output predict karo. Hum phir se jaayenge.

Apna score batao aur wo concept batao jise Day 02 se pehle gehraai se dekhna hai.
