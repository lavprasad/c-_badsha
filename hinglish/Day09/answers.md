# Day 09 — Answers (try karne ke BAAD padho)

---

### A1. `operator[]` missing keys insert kar deta hai

**Output:**

```
0
2
```

Agar key maujood na ho to `scores["Bob"]` `"Bob"` ko value-initialized `int` (`0`) ke saath **insert** kar deta hai, phir uska reference deta hai. Humne Bob ke liye na `insert` likha na `=`, phir bhi map me ab **2** entries hain.

**Safe vikalp:**

```cpp
auto it = scores.find("Bob");
if (it != scores.end()) std::cout << it->second << '\n';
else std::cout << "not found\n";
```

Sabak: maps par `operator[]` sirf read-only lookup **nahi** hai.

---

### A2. Undefined behaviour — erase se iterator invalid

**Safe nahi hai.** `v.erase(it)` `it` ko invalid kar deta hai. Uske baad for-loop ka `++it` **undefined behaviour** hai. Crash ho sakta hai, elements skip ho sakte hain, ya garbage mil sakta hai.

**Sahi pattern:**

```cpp
for (auto it = v.begin(); it != v.end(); ) {
    if (*it % 2 == 0) {
        it = v.erase(it);   // erase agla valid iterator deta hai
    } else {
        ++it;
    }
}
```

Ya agar **saari** matching values hatani hain to erase-remove idiom use karo.

---

### A3. Sirf `map` sorted hai

**Nahi**, dono lines match **nahi** karengi.

- **`map`**: keys **sorted order** me → `apple mango zebra`.
- **`unordered_map`**: iteration order **unspecified** hai (hash table ke layout par nirbhar). Alag runs ya implementations me alag ho sakta hai.

`unordered_*` containers ke iteration order par kabhi bharosa mat karo.

---

### A4. Set duplicates mana kar deta hai

**Output: `1 0 1`**

- `ok1 = true` — `5` ka pehla insert safal.
- `ok2 = false` — `5` ka doosra insert fail (duplicate).
- `s.size() = 1` — sirf ek element.

`set::insert` `pair<iterator, bool>` deta hai: element ka iterator, aur `bool` jo batata hai ki insertion hui ya nahi.

---

### A5. Erase-remove idiom

**Output: `1 3 4 5`**

`std::remove(v.begin(), v.end(), 2)` container ko chhota **nahi** karta. Wo saare non-`2` elements ko aage **khiskaata** hai aur naye logical end ka iterator deta hai. Jab tak `v.erase(...)` peeche ka kachra na hataye, vector ki purani **size** hi rehti hai.

Steps:
1. `remove` → `[1, 3, 4, 5, ?, ?, ?]` (size abhi bhi 7)
2. `erase(new_end, end)` → size 4 ho jaati hai

Sabak: vector se saare matching elements hatane ka standard tarika **remove + erase** hai.

---

## Khud ki scoring

- 5/5: containers solid hain — **Day 10 (algorithms & lambdas)** par badho.
- 3–4: `notes.md` me insert/erase aur iterator invalidation dobara padho.
- 0–2: `examples/` dobara chalao, khaas kar `08_insert_patterns.cpp` aur `09_erase_patterns.cpp`.

Apna score batao aur wo concept batao jise Day 10 se pehle gehraai se dekhna hai.
