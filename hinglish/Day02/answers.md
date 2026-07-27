# Day 02 — Answers (try karne ke BAAD padho)

---

### A1. Dangling else

**Output: `B`** (aur kuch nahi).

`else` apne se **sabse nazdeek** wale pehle `if` se judta hai — andar wala `if (x < 3)`, bahar wala `if (x > 0)` nahi.

Trace:
- `x > 0` true hai → bahar wale block me ghuse.
- `x < 3` false hai (5, 3 se chhota nahi) → andar wali body skip.
- Andar wale `if` ka `else` chalta hai → `B` print.

Bhatkane wali indentation lagti hai jaise `else` bahar wale `if` ka ho, par C++ binding ke liye indentation ko nahi dekhta. **Fix:** hamesha braces:

```cpp
if (x > 0) {
    if (x < 3) {
        std::cout << "A\n";
    } else {
        std::cout << "B\n";
    }
}
```

---

### A2. Switch fall-through

**Output: `23D`** (characters `2`, `3`, aur `D`).

`n == 2` par execution `case 2:` par kood jaata hai aur har agle case me **fall through** karta hai kyunki koi `break` nahi hai. To pehle `2`, phir `3`, phir `default` par `D`.

**Fix:** har case ke aakhir me `break;` daalo (shayad `default` se just pehle wale ko chhod kar):

```cpp
case 2: std::cout << '2'; break;
```

Jaan-boojh kar kiya gaya fall-through (jaise cases group karna) C++17 me `[[fallthrough]];` se document hona chahiye.

---

### A3. Unsigned countdown

Loop **kabhi khatam nahi hota** — jab tak aap process na maar do (ya sabra na khatam ho jaaye).

`unsigned int` ke liye `i >= 0` **hamesha true** hai. Jab `i` `0` ho aur `--i` chale, wo `UINT_MAX` (aam taur par 4294967295) par wrap ho jaata hai, wo bada number print karta hai aur chalta rehta hai.

Wrap se pehle aakhri print hui value `0` hai, phir `4294967295`, phir `4294967294`, … hamesha ke liye. `"done\n"` kabhi print nahi hota.

**Fix:** `int` use karo:

```cpp
for (int i = 3; i >= 0; --i) { ... }
```

---

### A4. while loop me continue

**Output: `1 2 4 5`** (space se alag, phir newline).

Trace:
- `i` 0→1, `1` print
- `i` 1→2, `2` print
- `i` 2→3, `continue` print skip karta hai — **par `++i` is iteration ke shuru me chal chuka tha**
- `i` 3→4, `4` print
- `i` 4→5, `5` print
- `i` 5→6, condition `i < 5` fail, loop khatam

`continue` **agli** condition check par jaata hai; usi iteration me body ke pehle wale statements dobara nahi chalata. Upar wala `++i` har chakkar me hamesha chalta hai.

---

### A5. Condition ke andar assignment

**Output:**

```
yes
x = 5
```

`x = 5` ek **assignment** hai, comparison nahi. Wo `x` me `5` store karta hai aur expression ki value `5` hai, jo `true` me convert hoti hai. Isliye `if` branch chalti hai.

`g++ -std=c++17 -Wall -Wextra` ke saath aisa warning milta hai:

```
warning: suggest parentheses around assignment used as truth value [-Wparentheses]
```

**Fix:** comparison ke liye `==` use karo:

```cpp
if (x == 5) { ... }
```

Kuch teams `-Werror=parentheses` on kar dete hain taaki ye hard error ban jaaye.

---

## Khud ki scoring

- 5/5: control flow solid hai — bata do, hum **Day 03 (functions)** par badhte hain.
- 3–4: `notes.md` ka wahi section dobara padho, phir jo dhundhla lage puchho.
- 0–2: `examples/` ka har program dobara chalao, khaas kar `10_pitfalls.cpp`. Loop types badlo aur chalane se pehle output predict karo.

Apna score batao aur wo concept batao jise Day 03 se pehle gehraai se dekhna hai.
