# Day 02 — Control Flow

Aaj ka goal: apne programs ko *faisla* lena aur *dohraana* sikhana — aur classic loop/branch jaalon me kabhi na phansna.

| # | Concept |
|--:|---------|
| 1 | `if`, `else if`, aur `else` |
| 2 | Ternary operator `? :` |
| 3 | `switch`, `case`, aur `default` |
| 4 | `for` loop |
| 5 | `while` loop |
| 6 | `do-while` loop |
| 7 | `break` aur `continue` |
| 8 | Nested loops |
| 9 | Block scope aur lifetime |
| 10 | Control-flow ke jaal |

---

## 1. `if`, `else if`, aur `else`

Condition par branch karne ka sabse simple tarika:

```cpp
if (score >= 90) {
    std::cout << "A\n";
} else if (score >= 80) {
    std::cout << "B\n";
} else {
    std::cout << "Below B\n";
}
```

- `( )` ke andar ki condition **`bool` me convertible** honi chahiye. Zero, null pointers aur `false` "false" hain; baaki sab "true".
- **Hamesha braces** `{ }` lagao, ek line ke body par bhi. Missing brace ne countless production bugs paida kiye hain jab kisi ne baad me doosri line jodi.
- Conditions upar se neeche check hoti hain; **pehli** true branch chalti hai aur baaki skip ho jaati hain.

## 2. Ternary operator `? :`

Chhota expression jo do values me se ek chunta hai:

```cpp
int abs_val = (x >= 0) ? x : -x;
```

Syntax: `condition ? value_if_true : value_if_false`

- Ye ek **expression** hai (iski value hoti hai), statement nahi. Ise assign karo, return karo, ya (soch-samajh kar) nest karo.
- Agar kisi branch me side effects ya ek se zyada statement hain to seedha `if/else` behtar hai.
- Dono branches ke types compatible hone chahiye (ya implicitly convertible).

## 3. `switch`, `case`, aur `default`

Jab ek integral value ko kai constants se compare karna ho:

```cpp
switch (day) {
    case 1: std::cout << "Mon\n"; break;
    case 2: std::cout << "Tue\n"; break;
    default: std::cout << "Other\n"; break;
}
```

- **switch expression** integral ya enum type hona chahiye (`int`, `char`, `enum`, …). `std::string` ya floating-point par `switch` nahi kar sakte.
- Har `case` ek **label** hai, scope nahi. `break` ke bina execution agle case me **fall through** kar jaata hai.
- `default` un sab ko pakadta hai jo match nahi hue. Padhne ki aasani ke liye ise aakhir me rakho.
- C++17 me jaan-boojh kar kiye gaye fall-through ko `[[fallthrough]];` se document kar sakte ho.

## 4. `for` loop

Gine-chune iterations ka mehnati ghoda:

```cpp
for (int i = 0; i < 10; ++i) {
    std::cout << i << ' ';
}
```

`( )` me teen hisse, `;` se alag:
1. **Init** — loop se pehle ek baar chalta hai.
2. **Condition** — har iteration se pehle check hoti hai; false hote hi loop rukta hai.
3. **Update** — har iteration ke baad chalta hai.

Range-based `for` (jhalak — aage aap ise bahut use karoge):

```cpp
int arr[] = {1, 2, 3};
for (int n : arr) { std::cout << n << ' '; }
```

## 5. `while` loop

Jab tak condition true hai tab tak dohrao; condition body se **pehle** check hoti hai:

```cpp
int n = 100;
while (n > 1) {
    n /= 2;
}
```

`while` tab use karo jab pata na ho kitni iterations chahiye — sentinel tak input padhna, searching, waghairah.

**Khatra:** agar condition shuru me hi false ho to body kabhi nahi chalti. Ye pakka karo ki body ke andar kuch aisa ho jo aakhir me condition false kar de, warna infinite loop.

## 6. `do-while` loop

`while` jaisa, par condition body ke **baad** check hoti hai — matlab body **kam se kam ek baar** chalti hai:

```cpp
int choice;
do {
    std::cout << "Enter 1-3: ";
    std::cin >> choice;
} while (choice < 1 || choice > 3);
```

Syntax note: `while` wali line semicolon par khatam hoti hai: `} while (cond);`

## 7. `break` aur `continue`

- **`break`** — turant sabse andar wale loop ya `switch` se bahar.
- **`continue`** — is iteration ka bacha hua hissa chhodo aur agli condition check par jao.

```cpp
for (int i = 0; i < 10; ++i) {
    if (i % 2 == 0) continue;   // even skip karo
    if (i > 7) break;           // jaldi ruk jao
    std::cout << i << ' ';
}
```

`break` nesting ka sirf **ek** level todta hai. Nested loops se bahar nikalne ke liye flag use karo, `goto` (kam hi), ya function me refactor karke `return` karo.

## 8. Nested loops

Loop ke andar loop — grids, tables aur brute-force search me aam:

```cpp
for (int row = 0; row < 3; ++row) {
    for (int col = 0; col < 3; ++col) {
        std::cout << '(' << row << ',' << col << ") ";
    }
    std::cout << '\n';
}
```

Total iterations = bahar wala × andar wala. Performance par nazar rakho: bade ranges par teen nested loops slow ho sakte hain.

## 9. Block scope aur lifetime

Har `{ }` block ek **scope** banata hai. Andar declare kiye naam sirf usi block me dikhte hain:

```cpp
if (true) {
    int x = 5;       // x sirf is block ke andar hai
}
// x yahan nahi dikhta — use karoge to compiler error
```

- `for` init me declare kiye loop variables (`for (int i = 0; ...)`) C++ me loop body tak hi scoped hote hain (purane C se alag).
- Andar wale block me wahi naam dobara use karna bahar wale naam ko **shadow** karta hai — legal hai par confusing; seekhte waqt isse bacho.

## 10. Control-flow ke jaal

| Jaal | Kya galat hota hai | Fix |
|---------|-----------------|-----|
| Dangling `else` | `else` sabse nazdeek wale `if` se judta hai — indentation jhooth bolta hai | Hamesha braces use karo |
| `switch` me `break` missing | Anchaha fall-through | `break` ya `[[fallthrough]]` daalo |
| `for (unsigned i = n; i >= 0; --i)` | 0 par `i` wrap hote hi infinite loop | `int` use karo, ya `i < n` upar ki taraf chalao |
| `if (x == 5)` ki jagah `if (x = 5)` | Assignment, hamesha "true" | `==` use karo; `-Wall` on karo (g++ warn karta hai) |
| Khaali loop body | `while (cond);` — semicolon hi loop khatam kar deta hai | Body `{ }` me daalo ya jaan-boojh kar comment likho |

Unsigned countdown ka jaal (Day 01 Question 3 se) C++ ka sabse aam loop bug hai. Shak ho to loop counters ke liye `int` use karo.

---

## Day 02 ke baad aapko ye aana chahiye

- Aise programs likhna jo user input par branch karein aur condition poori hone tak dohraayein.
- `if/else`, ternary aur `switch` me sahi chunaav karna.
- Ye predict karna ki loop kab rukega — khaas kar unsigned types ke saath.
- Nested loops me `break` aur `continue` kya karte hain, ye samjhana.
- Code review me missing braces aur fall-through bugs pakadna.

Ab `examples/` me jao aur har program chalao. Uske baad `questions.md` try karo.
