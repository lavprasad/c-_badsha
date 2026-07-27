# Day 11 — Answers (try karne ke BAAD padho)

---

### A1. Moved-from string valid par unspecified hoti hai

Typical output: `a.size()=0 b=hello world` (`a.size()` ki exact value **unspecified** hai — libstdc++/libc++ me aksar 0).

**Kya move ke baad `a` use karna safe hai?** Haan, wo **valid par unspecified state** me hai. Aap:
- Use assign kar sakte ho: `a = "new value";`
- Use destroy kar sakte ho (destructor theek chalta hai)
- Aise member functions call kar sakte ho jinhe koi khaas value nahi chahiye (jaise `clear()`, `size()`)

Aap ye **nahi** maan sakte ki usme purana data ab bhi hai.

Sabak: `std::move` "khaali" nahi karta — agar type move support karta hai to wo **ownership transfer** karta hai. Ache types ke liye source valid-par-khaali sa reh jaata hai.

---

### A2. unique_ptr sirf move hota hai

**Compile nahi hota.** `unique_ptr` apna copy constructor aur copy assignment delete kar deta hai.

**Sahi transfer:**

```cpp
auto p2 = std::move(p1);   // ab p1 nullptr hai
```

Ya:

```cpp
std::unique_ptr<int> p2;
p2 = std::move(p1);
```

Move ke baad `p1` khaali hai — bina check kiye use dereference mat karo.

---

### A3. Reference cycle destruction rok deta hai

**Destructors NAHI chalte** (aam implementations me — memory leak).

- `a` ke paas `b` ka `shared_ptr` hai → `a` ki wajah se b ka ref count ≥ 1.
- `b` ke paas `a` ka `shared_ptr` hai → `b` ki wajah se a ka ref count ≥ 1.
- Jab locals scope se bahar jaate hain, har node ka ref count 1 par ruk jaata hai (doosra node ab bhi use point karta hai). Koi bhi 0 tak nahi pahunchta → koi bhi destroy nahi hota.

**Fix (jab zaroorat ho):** back-references ke liye `std::weak_ptr` use karo:

```cpp
std::weak_ptr<Node> next;   // Node ko zinda nahi rakhta
```

Sabak: `shared_ptr` cycles classic leak hain. Cycles ko `weak_ptr` se todo.

---

### A4. const reference se catch karo

Ye **chalta hai** par **buri practice** hai.

Value se catch karna (`std::runtime_error e`) exception object ko **slice** karta hai aur uski **copy** banata hai — extra allocation/copy, aur agar throw kiya type subclass ho to derived-class ki jaankari kho jaati hai.

**Idiomatic:**

```cpp
catch (const std::exception& e) {
    std::cout << e.what() << '\n';
}
```

Ya `catch (const std::runtime_error& e)` agar sirf usi type se matlab ho.

Niyam: **value se throw karo, const reference se catch karo.**

---

### A5. noexcept move vector ko reallocation par move use karne deta hai

`vector` badhne par realloc karta hai: use maujooda elements nayi memory me le jaane padte hain.

- Agar move **`noexcept`** hai to vector elements ko **move** karta hai (tez, koi copy nahi).
- Agar move **throw kar sakta hai** to vector wapas **copy** par chala jaata hai (taaki beech me move throw kare to purana array salamat rahe — strong exception guarantee).

Move-only types ke liye (copy deleted), throw karne wala move `vector<MoveOnly>` ko **badhne layak nahi** chhodta ya compile/copy me fasa deta hai.

Jab move sach me throw nahi kar sakta tab use `noexcept` marking:
1. Vector ke reallocation ko sabse behtar banata hai.
2. Contract document karta hai.

---

## Khud ki scoring

- 5/5: move semantics, smart pointers aur exceptions solid hain — aapne Day 07–11 ka block poora kar liya!
- 3–4: `notes.md` me move/noexcept aur smart pointer ownership dobara padho.
- 0–2: `examples/` ka har program dobara chalao, khaas kar `03_move_constructor.cpp` aur `04_unique_ptr.cpp`.

Apna score batao aur wo concept batao jise aage gehraai se dekhna hai.
