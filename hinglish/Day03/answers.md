# Day 03 — Answers (try karne ke BAAD padho)

---

### A1. Reference vs value

**Output: `1 10`**

- `foo(n)` ek **copy** leta hai. `foo` ke andar `x = 10` karne se `n` nahi badalta.
- `bar(n)` ek **reference** leta hai. `x = 10` caller ke `n` ko badal deta hai.

Yahi buniyadi wajah hai ki in-out parameters chahiye to references use karo.

---

### A2. Default argument ka jaal

**Compile nahi hota.**

`f(5)` dono overloads par fit ho jaata hai:
- `void f(int a, int b = 2)` — `a=5` ke saath match, default `b=2`.
- `void f(int a)` — `a=5` ke saath match.

Call **ambiguous** hai — compiler error kuch aisa kehta hai: "call of overloaded 'f(int)' is ambiguous".

**Niyam:** default arguments doosre overloads ke saath chhupi hui ambiguity bana dete hain. Overload sets soch-samajh kar design karo; kabhi-kabhi alag naam hi behtar hai.

---

### A3. Overload resolution

```
int 5
double 5
int 53
```

- `print(5)` — literal `5` `int` hai.
- `print(5.0)` — literal `5.0` `double` hai.
- `print('5')` — character `'5'` `int` me promote hota hai (ASCII value 53), `double` me nahi. Isliye `int` overload jeet jaata hai.

Chaunkane wali baat: `'5'` `53` print karta hai, `5` nahi. Character ko digit ki tarah print karne ke liye alag overloads ya cast chahiye.

---

### A4. Recursive paheli

**Output: `16`**

Trace:
- `mystery(7)` = 7 + `mystery(5)`
- `mystery(5)` = 5 + `mystery(3)`
- `mystery(3)` = 3 + `mystery(1)`
- `mystery(1)` = 1 + `mystery(-1)`
- `mystery(-1)` → base case (`n <= 0`) → 0

Wapas upar aate hue: 1 + 0 = 1, phir 3 + 1 = 4, phir 5 + 4 = 9, phir 7 + 9 = **16**.

Pattern: n se 2-2 ghatate hue odd numbers jodta hai jab tak n <= 0 na ho: 7 + 5 + 3 + 1 = 16.

---

### A5. Local ka reference return karna

**Compile hota hai** (`-Wall` se warning ke saath: "reference to local variable 'x' returned").

Runtime par: **undefined behaviour**. `bad()` return hote hi `x` khatam ho jaata hai; `r` mari hui stack memory ko point karta hai. Aapko `42` dikh sakta hai, ya garbage, ya crash.

**Fix:** value se return karo:

```cpp
int good() {
    int x = 42;
    return x;   // copy (ya elision) — safe
}
```

Ya aisi cheez ka reference return karo jo function se zyada jeeti ho (static, parameter, member, heap — har ek ke apne niyam hain).

---

## Khud ki scoring

- 5/5: functions aapke ho gaye — bata do, hum **Day 04 (arrays & strings)** par badhte hain.
- 3–4: `notes.md` me pass-by-reference aur overloading dobara padho.
- 0–2: `examples/` dobara chalao, apna `swap` aur `factorial` likho, kaagaz par trace karo.

Apna score batao aur wo concept batao jise Day 04 se pehle gehraai se dekhna hai.
