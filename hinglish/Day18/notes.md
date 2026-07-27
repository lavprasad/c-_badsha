# Day 18 -- Header / source split

Aaj ka goal: **Header / source split** ko aasan Hinglish me samajhna, har idea ka chhota code sample dekhna, phir `examples/` me practice karna.

Is din ko padhne ka tarika:
1. Har concept ka **Aasan Bhasha** section padho.
2. Code sample par nazar daalo -- pehle predict karo ki output kya aayega.
3. `examples/` me us concept ki file chalao.
4. Uske baad hi `questions.md` kholo.

| # | Concept |
|--:|---------|
| 1 | Declarations in headers |
| 2 | Definitions in .cpp |
| 3 | Include guards |
| 4 | #pragma once |
| 5 | What belongs in a header |
| 6 | Inline functions in headers |
| 7 | Templates in headers |
| 8 | Forward declarations |
| 9 | Circular include traps |
| 10 | One-definition rule (ODR) |

---

## 1. Declarations in headers

### Aasan Bhasha

Headers interface declare karte hain; `.cpp` files bodies define karti hain. Include guards ek header ko ek translation unit me do baar paste hone se rokte hain. One Definition Rule kehta hai ki non-inline functions ki poore program me exactly ek definition hoti hai.

### Chhota code

```cpp
#pragma once
struct Widget;           // forward decl — enough for pointers/refs
void use(Widget*);
```

- **Yaad rakho:** Declarations header me, definitions `.cpp` me (templates exception hain).
- **Aam galti:** Non-inline function header me define karna jo do `.cpp` include karti hain → multiple definition linker error.

Practice: `examples/01_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 2. Definitions in .cpp

### Aasan Bhasha

Headers interface declare karte hain; `.cpp` files bodies define karti hain. Include guards ek header ko ek translation unit me do baar paste hone se rokte hain. One Definition Rule kehta hai ki non-inline functions ki poore program me exactly ek definition hoti hai.

### Chhota code

```cpp
#pragma once
struct Widget;           // forward decl — enough for pointers/refs
void use(Widget*);
```

- **Yaad rakho:** Declarations header me, definitions `.cpp` me (templates exception hain).
- **Aam galti:** Non-inline function header me define karna jo do `.cpp` include karti hain → multiple definition linker error.

Practice: `examples/02_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 3. Include guards

### Aasan Bhasha

Headers interface declare karte hain; `.cpp` files bodies define karti hain. Include guards ek header ko ek translation unit me do baar paste hone se rokte hain. One Definition Rule kehta hai ki non-inline functions ki poore program me exactly ek definition hoti hai.

### Chhota code

```cpp
#pragma once
struct Widget;           // forward decl — enough for pointers/refs
void use(Widget*);
```

- **Yaad rakho:** Declarations header me, definitions `.cpp` me (templates exception hain).
- **Aam galti:** Non-inline function header me define karna jo do `.cpp` include karti hain → multiple definition linker error.

Practice: `examples/03_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 4. #pragma once

### Aasan Bhasha

Headers interface declare karte hain; `.cpp` files bodies define karti hain. Include guards ek header ko ek translation unit me do baar paste hone se rokte hain. One Definition Rule kehta hai ki non-inline functions ki poore program me exactly ek definition hoti hai.

### Chhota code

```cpp
#pragma once
struct Widget;           // forward decl — enough for pointers/refs
void use(Widget*);
```

- **Yaad rakho:** Declarations header me, definitions `.cpp` me (templates exception hain).
- **Aam galti:** Non-inline function header me define karna jo do `.cpp` include karti hain → multiple definition linker error.

Practice: `examples/04_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 5. What belongs in a header

### Aasan Bhasha

Headers interface declare karte hain; `.cpp` files bodies define karti hain. Include guards ek header ko ek translation unit me do baar paste hone se rokte hain. One Definition Rule kehta hai ki non-inline functions ki poore program me exactly ek definition hoti hai.

### Chhota code

```cpp
#pragma once
struct Widget;           // forward decl — enough for pointers/refs
void use(Widget*);
```

- **Yaad rakho:** Declarations header me, definitions `.cpp` me (templates exception hain).
- **Aam galti:** Non-inline function header me define karna jo do `.cpp` include karti hain → multiple definition linker error.

Practice: `examples/05_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 6. Inline functions in headers

### Aasan Bhasha

Headers interface declare karte hain; `.cpp` files bodies define karti hain. Include guards ek header ko ek translation unit me do baar paste hone se rokte hain. One Definition Rule kehta hai ki non-inline functions ki poore program me exactly ek definition hoti hai.

### Chhota code

```cpp
#pragma once
struct Widget;           // forward decl — enough for pointers/refs
void use(Widget*);
```

- **Yaad rakho:** Declarations header me, definitions `.cpp` me (templates exception hain).
- **Aam galti:** Non-inline function header me define karna jo do `.cpp` include karti hain → multiple definition linker error.

Practice: `examples/06_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 7. Templates in headers

### Aasan Bhasha

Headers interface declare karte hain; `.cpp` files bodies define karti hain. Include guards ek header ko ek translation unit me do baar paste hone se rokte hain. One Definition Rule kehta hai ki non-inline functions ki poore program me exactly ek definition hoti hai.

### Chhota code

```cpp
#pragma once
struct Widget;           // forward decl — enough for pointers/refs
void use(Widget*);
```

- **Yaad rakho:** Declarations header me, definitions `.cpp` me (templates exception hain).
- **Aam galti:** Non-inline function header me define karna jo do `.cpp` include karti hain → multiple definition linker error.

Practice: `examples/07_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 8. Forward declarations

### Aasan Bhasha

Headers interface declare karte hain; `.cpp` files bodies define karti hain. Include guards ek header ko ek translation unit me do baar paste hone se rokte hain. One Definition Rule kehta hai ki non-inline functions ki poore program me exactly ek definition hoti hai.

### Chhota code

```cpp
#pragma once
struct Widget;           // forward decl — enough for pointers/refs
void use(Widget*);
```

- **Yaad rakho:** Declarations header me, definitions `.cpp` me (templates exception hain).
- **Aam galti:** Non-inline function header me define karna jo do `.cpp` include karti hain → multiple definition linker error.

Practice: `examples/08_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 9. Circular include traps

### Aasan Bhasha

Headers interface declare karte hain; `.cpp` files bodies define karti hain. Include guards ek header ko ek translation unit me do baar paste hone se rokte hain. One Definition Rule kehta hai ki non-inline functions ki poore program me exactly ek definition hoti hai.

### Chhota code

```cpp
#pragma once
struct Widget;           // forward decl — enough for pointers/refs
void use(Widget*);
```

- **Yaad rakho:** Declarations header me, definitions `.cpp` me (templates exception hain).
- **Aam galti:** Non-inline function header me define karna jo do `.cpp` include karti hain → multiple definition linker error.

Practice: `examples/09_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 10. One-definition rule (ODR)

### Aasan Bhasha

Headers interface declare karte hain; `.cpp` files bodies define karti hain. Include guards ek header ko ek translation unit me do baar paste hone se rokte hain. One Definition Rule kehta hai ki non-inline functions ki poore program me exactly ek definition hoti hai.

### Chhota code

```cpp
#pragma once
struct Widget;           // forward decl — enough for pointers/refs
void use(Widget*);
```

- **Yaad rakho:** Declarations header me, definitions `.cpp` me (templates exception hain).
- **Aam galti:** Non-inline function header me define karna jo do `.cpp` include karti hain → multiple definition linker error.

Practice: `examples/10_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

---

## Day 18 ke baad aapko ye aana chahiye

- `Header / source split` ko bina notes dekhe kisi dost ko samjha sakna.
- Saare 10 examples `-std=c++17 -Wall -Wextra` ke saath compile aur run karna (naye flags sirf tab jab din ko C++20+ chahiye).
- `answers.md` dekhne se pehle `questions.md` ke 5 sawaal answer karna.
- Ek chhota extra program likhna jo aaj ke kam se kam 3 concepts jodta ho.

Ya is din ko **Badsha hub** me kholo (`python3 hub/server.py`) aur Learn / Practice / Quiz tabs use karo.
