# Day 06 — Answers (try karne ke BAAD padho)

---

### A1. Default access

- **`f.x = 5;`** — **Nahi**, compile error. `class` me `x` **default private** hai.
- **`b.y = 10;`** — **Haan**. `struct` me `y` **default public** hai.

`f.get()` isliye call kar sakte ho kyunki `get()` public hai aur caller ki taraf se private `x` tak pahunch sakta hai.

---

### A2. Constructor ka order

Members **declaration order me initialise hote hain** (`a_` phir `b_`), initialiser list ke order me **nahi**.

To `b_(2), a_(1)` likhne par bhi pehle `a_` (`1`) initialise hota hai, phir `b_` (`2`). List ka order bhatkata hai — hairani se bachne ke liye declaration aur list ka order ek jaisa rakho.

Constructor body saare members initialise hone ke baad chalti hai.

---

### A3. const correctness

**Output: `0 1`**

- `w` non-const hai → `int value()` call hota hai → `n_` = `0` deta hai.
- `cw` `const Widget` hai → sirf `const` member functions call ho sakte hain → `int value() const` → `n_ + 1` = `1` deta hai.

Non-const overload `const` objects par call nahi ho sakta.

---

### A4. this aur chaining

**Output: `6`**

`add` `Builder&` return karta hai (`*this` ka reference) isliye aap calls chain kar sakte ho: `1 + 2 + 3 = 6`.

Is pattern ko **fluent interface** / method chaining kehte hain. Reference se return karne se copies nahi banti aur wahi object badalta hai.

---

### A5. Destructor ki timing

**Output: `ABBCCA`** (ek hi lagatar string)

Order:
1. `a` bana → `A`
2. Block me ghuse, `b` bana → `B`
3. Block chhoda, `b` khatam → `B`
4. `c` bana → `C`
5. `main` ka ant, `c` khatam → `C`, `a` khatam → `A`

Ek hi storage duration wale objects ke destructors **banne ke ulte order** me chalte hain.

---

## Khud ki scoring

- 5/5: classes samajh aa rahi hain — bata do, hum **Day 07 (inheritance & polymorphism)** par badhte hain.
- 3–4: `notes.md` me constructors, destructors aur `const` members dobara padho.
- 0–2: `examples/` dobara chalao, khaas kar `04_destructors.cpp` aur `10_small_class.cpp`.

Apna score batao aur wo concept batao jise Day 07 se pehle gehraai se dekhna hai.
