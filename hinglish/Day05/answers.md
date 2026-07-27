# Day 05 — Answers (try karne ke BAAD padho)

---

### A1. delete vs delete[]

**Runtime par undefined behaviour** — compile theek ho jaata hai, par `new[]` se aayi memory par `delete` UB hai. Lag sakta hai chal gaya, heap corrupt ho sakta hai, baad me crash bhi ho sakta hai.

**Sahi deallocator:** `delete[] arr;`

Niyam: `new` ↔ `delete`, `new[]` ↔ `delete[]`. Kabhi mix mat karo.

---

### A2. Double delete

**Undefined behaviour** — aam taur par crash (heap corruption pakda gaya) ya chupchap corruption. Doosra `delete p` us memory ko free karta hai jo pehle hi free ho chuki hai.

Kuch debug allocators ise turant pakad lete hain; optimised builds baad me be-tarteeb tarike se fail ho sakte hain.

**Fix:** ek baar delete karo, phir `p = nullptr;`.

---

### A3. Pointer arithmetic

**Output:**

```
20
30
```

`p + 1` doosre element (`20`) ko point karta hai. `p[2]` `*(p + 2)` ka subscript roop hai → teesra element (`30`).

Pointer arithmetic jis type ko point karta hai uske size (`sizeof(int)`) se scale hota hai.

---

### A4. Stack vs heap lifetime

**Compile hota hai** (`-Wall` warning ke saath: local variable ka address return ho raha hai).

Aaj `99` print kar sakta hai aur kal garbage — **undefined behaviour**. `make()` return hote hi `x` khatam ho jaata hai; `p` mari hui stack memory ko point karta hai.

**Fix:** value se return karo, `new int(99)` return karo (aur ownership document karo), ya RAII / smart pointers use karo.

---

### A5. nullptr comparison

**Output:**

```
null
allocated
```

Boolean context me `nullptr` `false` ban jaata hai. `new` se aaya valid pointer non-null hai → `true`.

Note: `delete q` ke baad `q` ko bina `nullptr` kiye condition me use karna khatarnak hai — object ja chuka hoga par pointer phir bhi non-null dikhega.

---

## Khud ki scoring

- 5/5: pointers aur memory saaf hain — bata do, hum **Day 06 (structs & classes)** par badhte hain.
- 3–4: `notes.md` me RAII aur new/delete ki jodi dobara padho.
- 0–2: `examples/` dobara chalao, `09_raii.cpp` ke liye stack/heap diagram banao.

Apna score batao aur wo concept batao jise Day 06 se pehle gehraai se dekhna hai.
