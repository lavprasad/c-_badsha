# Day 08 — Answers (try karne ke BAAD padho)

---

### A1. `auto` const hata deta hai; references use bachaate hain

Types:
- `a` → `int` (`auto` `const` gira deta hai)
- `b` → `const int&`
- `c` → `int&`

`++a` **copy** `a` ko badalta hai, `x` ko nahi. `x` `10` hi rehta hai.

`++b` **compile error** hota — `const` reference se kuch badal nahi sakte.

`++c` seedha `x` ko badalta hai kyunki `c` `x` se bandha reference hai.

**Output: `10 11 11`** (maan kar ki aap sirf `a` aur `c` increment karte ho).

Sabak: `auto` default me copy karta hai. Read-only view ke liye `const auto&`, aur original badalna ho to `auto&` use karo.

---

### A2. Ek hi `T` ke liye takraati deduction

`add(1, 2)` chalta hai: dono arguments `int` hain, isliye `T = int`.

`add(1, 2.0)` fail hota hai: compiler `T` ko `int` (`1` se) aur `double` (`2.0` se) dono deduce karne ki koshish karta hai — **takraate types**.

**Fix 1 — do template parameters:**

```cpp
template<typename T, typename U>
auto add(T a, U b) -> decltype(a + b) { return a + b; }
```

**Fix 2 — explicit argument:**

```cpp
add<double>(1, 2.0);
```

**Fix 3 — call site par cast:**

```cpp
add(1.0, 2.0);
```

---

### A3. Brackets lvalue ko reference type bana dete hain

**Output: `99`**.

- `decltype(x)` — `x` ek **identifier** hai (bracket ke bina), isliye type `int` hai.
- `decltype((x))` — `(x)` ek **bracket wala expression** hai, jo **lvalue** hai, isliye `decltype` `int&` deta hai.

Kyunki `b` `x` se bandha `int&` hai, `b = 99` `x` ko badal deta hai.

Rule of thumb:
- `decltype(expr)` jahan `expr` identifier hai → jaisa declare hua wahi type.
- `decltype((expr))` extra brackets ke saath → agar `expr` lvalue hai to reference ban sakta hai.

---

### A4. `bool` ke liye full specialization

| Call | Kaunsa template |
|------|---------------|
| `show(42)` | primary → `T = int` |
| `show(true)` | **specialization** `show<bool>` |
| `show(3.14)` | primary → `T = double` |

`show<int>(true)` **explicitly** primary template ko `T = int` ke saath call karta hai. Argument `true` `int` (`1`) me convert hota hai, to output `generic: 1` hai — bool wali specialization **nahi**.

Specialization **template argument** se chunti hai, conversions ke baad value ke "logical" type se nahi.

---

### A5. Default template type parameter

`p1.second` ka type **`int`** hai.

`Pair<int>` valid hai kyunki doosra template parameter `U` default me `T` ho jaata hai:

```cpp
Pair<int>   →   Pair<int, int>
```

Default template parameters aapko aakhir ke arguments chhodne dete hain jab defaults kaafi hon — wahi soch jo default function arguments me hai.

---

## Khud ki scoring

- 5/5: templates aur deduction samajh aa rahe hain — **Day 09 (STL containers)** par badho.
- 3–4: `notes.md` me `auto`/`decltype` aur deduction ke niyam dobara padho.
- 0–2: `examples/` ka har program dobara chalao, khaas kar `05_auto.cpp` aur `06_decltype.cpp`.

Apna score batao aur wo concept batao jise Day 09 se pehle gehraai se dekhna hai.
