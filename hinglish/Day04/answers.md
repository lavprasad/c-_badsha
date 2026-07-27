# Day 04 — Answers (try karne ke BAAD padho)

---

### A1. sizeof array vs pointer

Typical output:

```
40
8
```

- `main` me `data` sach me 10 `int` ka array hai → `sizeof(data) = 10 × 4 = 40`.
- `f` me parameter `arr` `int*` me **decay** ho jaata hai → `sizeof(arr) = 8` (64-bit par pointer size).

Isi wajah se array ki length nikalne ke liye function parameter par `sizeof` kaam nahi karta.

---

### A2. C-string ki length

**Output: `5`**

`strlen` null terminator se **pehle** ke characters ginta hai — `"Hello"` me 5 chars hain.

`buf` memory me **6 bytes** ghera hai: `'H','e','l','l','o','\0'`. Array size 6 hai; string length 5.

---

### A3. Reference rebinding

**Output: `a=2 b=2 r=2`**

`r` ab bhi **`a`** ko hi point karta hai. References dobara nahi lagte. `r = b` ek **assignment** hai — wo `b` ki value (`2`) `a` me likh deta hai. `a` aur `r` dono `2` ho jaate hain; `b` pehle se `2` tha.

Reference assignment aur pointer reassignment ke beech ki ye classic confusion hai.

---

### A4. String indexing

```
Cx+
3
```

`s[1]` doosra character `'+'` se `'x'` kar deta hai. Size 3 hi rehta hai.

---

### A5. Array initialisation

**Output: `1 2 3 0 0`**

Jab aap elements se kam initialisers do, to bache hue **value-initialised** ho kar zero ban jaate hain (`int` jaise scalar types ke liye).

---

## Khud ki scoring

- 5/5: arrays aur strings solid hain — bata do, hum **Day 05 (pointers & dynamic memory)** par badhte hain.
- 3–4: `notes.md` me array decay aur references dobara padho.
- 0–2: `examples/` dobara chalao, khaas kar `09_array_decay.cpp`.

Apna score batao aur wo concept batao jise Day 05 se pehle gehraai se dekhna hai.
