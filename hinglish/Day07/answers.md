# Day 07 — Answers (try karne ke BAAD padho)

---

### A1. `virtual` ke bina static dispatch

**Output: `Base`**.

`p` ek `Derived` object ko point karta hai, par `Base::speak()` **virtual nahi** hai. Compiler call ko compile time par `p` ke **static type** (`Base*`) ke hisaab se resolve karta hai, isliye `Base::speak()` chalta hai.

**Fix:** `virtual` lagao:

```cpp
virtual void speak() { std::cout << "Base\n"; }
```

Ab call vtable se jaati hai aur `Derived` print hota hai.

Sabak: non-virtual function ko override karna base version ko **chhupa** deta hai; polymorphism chalu **nahi** karta.

---

### A2. Signature mismatch — hiding, override nahi

**Output: `Base 3`**.

`Derived::process(double x)` `Base::process(int x)` ko override **nahi** karta — parameter types alag hain. Balki `Derived::process(double)` base wale overload ko **chhupa** deta hai. `Base*` ke through sirf `Base::process(int)` dikhta hai.

Agar aap likhte:

```cpp
void process(double x) override { ... }   // compile ERROR
```

Compiler turant mana kar deta: `Base` me koi matching virtual function nahi.

**Fix:**

```cpp
void process(int x) override { std::cout << "Derived " << x << '\n'; }
```

Sabak: `override` aapka safety net hai. Hamesha use karo.

---

### A3. Pass-by-value se object slicing

**Output: `Animal`** — `Cat` nahi.

`print_name(Animal a)` apna argument **value se** leta hai. `Cat c` ko `Animal a` me copy karne se `Cat` wala hissa **kat** jaata hai. Copy ek saada `Animal` hai, isliye `Animal::name()` chalta hai.

**Fix:** `const` reference se pass karo:

```cpp
void print_name(const Animal& a) {
    a.name();   // "Cat" print karta hai
}
```

Copy nahi → slicing nahi → virtual dispatch kaam karta hai.

---

### A4. Non-virtual destructor se leak

**Output: sirf `~Base`** (aapko `~Derived` **nahi** dikhega).

Kyunki `~Base()` virtual nahi hai, `delete p` sirf `~Base()` call karta hai. `Derived` ka destructor kabhi nahi chalta, isliye `delete[] data` kabhi nahi hota → **memory leak** (100 ints).

Aam taur par jab derived class ka destruction non-trivial ho, ye undefined behaviour hai.

**Fix:**

```cpp
virtual ~Base() { std::cout << "~Base\n"; }
```

Ab `delete p` pehle `~Derived()` (jo `data` free karta hai) phir `~Base()` call karta hai.

Niyam: **jo bhi class polymorphic base ki tarah use ho, uska destructor virtual hona chahiye.**

---

### A5. Abstract base, concrete derived

(a) **Haan**, ye compile hota hai. `Button` pure virtual `draw()` implement karta hai, isliye `Button` concrete hai.

(b) **Nahi.** `Widget` me pure virtual function (`draw() = 0`) hai, jo use **abstract** banata hai. `Widget w2;` **compile error** hoga: "cannot declare variable 'w2' to be of abstract type 'Widget'".

(c) `Button` ko apne base(s) ka **har** pure virtual function implement karna hoga. Yahan sirf `draw()`. `resize()` override karna zaroori **nahi** — base default implementation deta hai.

Jaldi wali reference:

| Class me pure virtual ki ginti | Object ban sakta hai? |
|----------------------------|------------------|
| ≥ 1                        | Nahi (abstract)  |
| 0                          | Haan (concrete)  |

---

## Khud ki scoring

- 5/5: inheritance aur polymorphism solid — **Day 08 (templates)** par badho.
- 3–4: `notes.md` me virtual functions, slicing aur destructors wale sections dobara padho.
- 0–2: `examples/` ka har program dobara chalao, khaas kar `08_slicing.cpp` aur `09_virtual_destructor.cpp`. Unhe badlo aur chalane se pehle output predict karo.

Apna score batao aur wo concept batao jise Day 08 se pehle gehraai se dekhna hai.
