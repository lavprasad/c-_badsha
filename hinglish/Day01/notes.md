# Day 01 — The Foundations

Aaj ka goal: ek chhote C++ program ki *har line* samajhna, taaki dobara kabhi kuch "magic" na lage.

| # | Concept |
|--:|---------|
| 1 | C++ program ki anatomy aur `main()` |
| 2 | Preprocessor aur `#include` |
| 3 | Namespaces aur `std::` |
| 4 | Variables aur primitive data types |
| 5 | Type sizes, signed vs unsigned, overflow |
| 6 | Constants: `const`, `constexpr`, `#define` |
| 7 | Standard I/O: `std::cin`, `std::cout`, `std::endl` vs `"\n"` |
| 8 | Operators: arithmetic, relational, logical, bitwise, assignment |
| 9 | Implicit vs explicit type conversion (casts) |
| 10 | Comments, formatting, aur C++ compilation pipeline |

---

## 1. C++ program ki anatomy aur `main()`

Har C++ program execution shuru karta hai theek **ek** function se: `main`. OS use aapke liye call karta hai.

```cpp
#include <iostream>          // line A: preprocessor directive

int main() {                 // line B: program entry-point
    std::cout << "Hi\n";     // line C: statement
    return 0;                // line D: exit status to OS
}
```

- `main` ka return type **int hi** hona chahiye (`void main()` mat likho — wo non-standard hai).
- `0` return karna OS ko "success" batata hai. Koi bhi non-zero error maana jaata hai.
- Agar aap `return 0;` chhod do, to standard kehta hai ki `main` (aur *sirf* `main`) apne aap `0` return karta hai. Phir bhi clarity ke liye likhna chahiye.
- Do valid signatures: `int main()` aur `int main(int argc, char* argv[])`. Doosra command-line arguments leta hai.

## 2. Preprocessor aur `#include`

`#` se shuru hone wali lines **preprocessor** handle karta hai — compiler ke code dekhne se *pehle*. Ye C++ statements nahi hain.

- `#include <iostream>` — standard header `iostream` ka poora content aapki file me copy-paste kar deta hai. Angle brackets = system paths me dhoondo. Quotes (`"foo.h"`) = pehle current directory, phir system paths.
- `#define PI 3.14` — sirf text substitution. Modern C++ me avoid karo; `constexpr` use karo.
- `#ifdef / #ifndef / #endif` — conditional compilation, headers me include guards ke liye use hota hai.

## 3. Namespaces aur `std::`

Namespace ek naam-wala scope hai jo naam ki takkar (collision) rokta hai. C++ standard library `std` namespace me rehti hai.

```cpp
std::cout << "hello";   // poora qualified — yahi behtar hai
```

```cpp
using namespace std;    // std ka SAB KUCH current scope me kheench leta hai
cout << "hello";        // chalta hai, par bade code me naam takrate hain
```

Best practice: `.cpp` files me `std::` khud likho ya chhota `using std::cout;` karo. Header file me **kabhi bhi** `using namespace std;` mat likho — wo har include karne wali file me leak ho jaata hai.

## 4. Variables aur primitive data types

| Category  | Types |
|-----------|-------|
| Integer   | `short`, `int`, `long`, `long long` (har ek `signed` / `unsigned` ho sakta hai) |
| Character | `char`, `wchar_t`, `char16_t`, `char32_t` |
| Floating  | `float`, `double`, `long double` |
| Boolean   | `bool` (values `true` / `false`) |
| Void      | `void` (koi value nahi) |

Declaration vs initialization:

```cpp
int a;          // sirf declaration — local vars ke liye value INDETERMINATE hai
int b = 5;      // copy-init
int c(5);       // direct-init
int d{5};       // brace-init (C++11) — recommended; narrowing par warning deta hai
int e{};        // value-init to 0
```

> Bina initialise kiya local variable padhna **undefined behaviour** hai. Hamesha initialise karo.

## 5. Type sizes, signed vs unsigned, overflow

- Standard minimums guarantee karta hai (`char` ≥ 8 bits, `int` ≥ 16 bits, `long` ≥ 32 bits, `long long` ≥ 64 bits) par exact sizes **nahi**. Jab size matter kare to `<cstdint>` (`int32_t`, `uint64_t`, …) use karo.
- Bytes compile time par jaanne ke liye `sizeof(type)` use karo.
- **Signed overflow undefined behaviour hai.** Compilers isse optimisation ke liye exploit karte hain — sach me.
- **Unsigned overflow well-defined hai**: wo `2^N` par modulo wrap karta hai. Sunne me acha lagta hai, par kaat leta hai — Question 3 dekho.

## 6. Constants: `const`, `constexpr`, `#define`

```cpp
const int MAX = 100;          // init ke baad value nahi badal sakti; zaroorat par runtime par compute hoti hai
constexpr int SIZE = 4 * 25;  // compile-time constant; wahan use ho sakta hai jahan constant expression chahiye (array sizes, template args)
#define BAD 100               // text substitution, na type-checking, na scope; avoid karo
```

Rule of thumb: `constexpr` > `const` > `#define`.

## 7. Standard I/O: `std::cin`, `std::cout`, `std::endl` vs `"\n"`

```cpp
int x;
std::cout << "Enter a number: ";
std::cin  >> x;
std::cout << "You typed " << x << '\n';
```

- `<<` **insertion** operator hai (output), `>>` **extraction** operator (input).
- `std::endl` = `'\n'` **plus output buffer ka flush**. Flush mehnga hota hai; tight loops me `'\n'` prefer karo.
- `std::cin >> x` ke baad aapka type kiya newline input buffer me pada reh jaata hai. Agar aap `>>` aur `std::getline` mix karoge to `std::cin.ignore()` chahiye hoga.

## 8. Operators

| Group        | Examples |
|--------------|----------|
| Arithmetic   | `+ - * / %` (modulo sirf integers par) |
| Relational   | `== != < > <= >=` (`bool` return karte hain) |
| Logical      | `&& \|\| !` — short-circuit evaluation |
| Bitwise      | `& \| ^ ~ << >>` — integers ke bits par kaam karte hain |
| Assignment   | `= += -= *= /= %= &= \|= ^= <<= >>=` |
| Increment    | `++a` (pre) vs `a++` (post) |

Baareek baatein:
- Integer division zero ki taraf truncate karta hai: `7 / 2 == 3`, `-7 / 2 == -3`.
- `&` vs `&&`: `&` bitwise hai, `&&` logical. Inhe mix kar dena ek classic bug hai.
- Pre-increment aam taur par post-increment jitna ya usse tez hai (post ko purani value sambhalni padti hai). Built-in `int` par optimiser farak mita deta hai; user-defined types (iterators) me farak padta hai.

## 9. Implicit vs explicit type conversion (casts)

```cpp
int a = 7, b = 2;
double r = a / b;          // r == 3.0 — division PEHLE int me hui, phir convert hui
double r2 = (double)a / b; // C-style cast — r2 == 3.5
double r3 = static_cast<double>(a) / b;   // C++ tarika — yahi behtar hai
```

Chaar C++ casts:
- `static_cast<T>(x)` — safe, compile-time-checked conversions (numeric, RTTI ke bina up/down inheritance).
- `dynamic_cast<T>(x)` — polymorphic class hierarchies me runtime-checked downcast.
- `const_cast<T>(x)` — `const` jodta/hataata hai (kam hi chahiye; design problem ki boo).
- `reinterpret_cast<T>(x)` — bit-level reinterpretation (khatarnak; avoid karo).

C-style casts `(T)x` avoid karo — wo chupchap in chaaron me se sabse dheela wala chun lete hain.

## 10. Comments, formatting, aur compilation pipeline

```cpp
// single-line comment
/* multi-line
   comment — ye nest NAHI hota */
```

Compilation pipeline (build tootne par yahi bachata hai):

1. **Preprocessor** — `#include`, `#define`, `#ifdef` handle karta hai. Output: ek bada translation unit (`.i`).
2. **Compiler (front-end + back-end)** — C++ ko assembly, phir machine code (`.o` / `.obj` object files) me badalta hai.
3. **Linker** — object files + libraries ko jod kar final executable banata hai. *"Undefined reference"* errors isi stage se aate hain.

Jab aap dekho:

- *"`xyz` was not declared in this scope"* → compiler stage (`#include` chhoot gaya ya typo).
- *"undefined reference to `xyz`"* → linker stage (koi `.cpp` compile/link karna bhool gaye, ya function sirf declare kiya, define kabhi nahi).

---

## Day 01 ke baad aapko ye aana chahiye

- Command line se C++ program likhna, compile karna aur chalana.
- `01_hello.cpp` ki har line kisi dost ko samjha dena.
- Integer division, mixed-type arithmetic aur increments ka output predict karna.
- `const` aur `constexpr` me sahi chunaav karna.
- Compiler errors aur linker errors me farak batana.

Ab `examples/` me jao aur har program chalao. Uske baad `questions.md` try karo.
