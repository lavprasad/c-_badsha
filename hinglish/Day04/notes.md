# Day 04 — Arrays, C-Strings & std::string

Aaj ka goal: data ke collections store karna, text ke saath safely kaam karna, aur samajhna ki references kab aur pointers kab.

| # | Concept |
|--:|---------|
| 1 | C-style arrays |
| 2 | Array size, bounds, aur `sizeof` wala jugaad |
| 3 | C-strings (`char` arrays) |
| 4 | `std::string` basics |
| 5 | Aam `std::string` operations |
| 6 | References — syntax aur niyam |
| 7 | Pointers — syntax dohraayi |
| 8 | References vs pointers |
| 9 | Arrays pointers me decay hote hain |
| 10 | String aur array ke jaal |

---

## 1. C-style arrays

Stack (ya static storage) par fixed-size contiguous sequence:

```cpp
int scores[5] = {90, 85, 72, 88, 95};
int zeros[3]{};          // saare elements value-initialised to 0
```

- Indexing **0** se shuru hoti hai. Valid indices: `0` se `size - 1`.
- Stack arrays ke liye size compile time par pata hona chahiye (jab tak `new[]` na use karo — Day 05).
- Koi built-in bounds checking nahi — range se bahar access **undefined behaviour** hai.

## 2. Array size, bounds, aur `sizeof` wala jugaad

```cpp
int arr[] = {10, 20, 30, 40};
std::size_t n = sizeof(arr) / sizeof(arr[0]);   // 4
```

- `sizeof(arr)` array object ke kul bytes hain — **sirf tab jab `arr` sach me array ho**, pointer nahi.
- Range-based `for` prefer karo ya size ko `constexpr` variable me rakho.
- `<array>` (std::array) — aage kisi din ki jhalak — C array ko lapet kar size type me hi rakh deta hai.

## 3. C-strings (`char` arrays)

C-string ek `char` array hai jo **`'\0'`** (null terminator) par khatam hoti hai:

```cpp
char name[] = "Ada";     // {'A','d','a','\0'} — compiler '\0' jodta hai
char buf[10] = "Hi";     // bache hue bytes '\0' hain
```

- Source code me `"Ada"` ek string **literal** hai — read-only memory me rehta hai; uska `char*` deprecated hai; `const char*` use karo.
- `<cstring>` `std::strlen`, `std::strcpy`, `std::strcmp` deta hai — inhe galat use karna aasan hai (buffer overflows). `std::string` prefer karo.

## 4. `std::string` basics

```cpp
#include <string>
std::string s = "Hello";
s = "World";
```

- Dynamic size — apne aap badhta aur ghatta hai.
- Apna character data khud own karta hai (literal ke raw pointer se alag).
- `std::cout`, `std::cin`, `+`, `==` waghairah ke saath natural tarike se chalta hai.
- `<string>` include karo — `<iostream>` ise **nahi** laata (kai implementations transitively laate hain; us par bharosa mat karo).

## 5. Aam `std::string` operations

```cpp
std::string s = "Hello";
s.size();              // 5
s += ", C++";          // append
s[0] = 'h';            // mutable indexing
s.substr(0, 4);        // "Hell"
s.find("ll");          // 2 (ya na mile to string::npos)
```

- Galat index par `.at(i)` `std::out_of_range` throw karta hai; `operator[]` check nahi karta (UB).
- Functions ko strings read-only ke liye **`const std::string&`**, badalne ke liye **`std::string&`** se pass karo.

## 6. References — syntax aur niyam

```cpp
int x = 10;
int& ref = x;      // ref, x ka alias hai
ref = 20;          // ab x 20 hai
```

- Declaration par hi **initialise** hona chahiye — null references nahi hote.
- Kisi doosre object par dobara nahi lag sakta (pointers se alag).
- Reference ka reference nahi hota; `int& &` nahi.
- Overload resolution me zyadatar mamlon me `T&` aur `T` ek hi type hain.

## 7. Pointers — syntax dohraayi

```cpp
int x = 10;
int* p = &x;       // p me x ka address hai
*p = 20;           // dereference — ab x 20 hai
```

- Null ho sakta hai (`nullptr`), uninitialised (khatarnak), ya valid memory par.
- Pointer arithmetic: `p + 1` memory me agle `int` par jaata hai (agar array ke andar point kar raha ho).
- Poori gehraai kal (Day 05); aaj hum references se tulna karte hain.

## 8. References vs pointers

| | Reference | Pointer |
|---|-----------|---------|
| Syntax | `T& r = x;` | `T* p = &x;` |
| Null | Nahi | Haan (`nullptr`) |
| Dobara lagana | Nahi | Haan |
| Indirection | Apne aap | Khud `*p` likhna padta hai |
| Kab use karo | Function params, aliases | Optional values, arrays, dynamic memory |

Rule of thumb: jab object ka hona **zaroori** ho to reference; jab null ya reseating ka matlab ho to pointer.

## 9. Arrays pointers me decay hote hain

Jab aap array function ko pass karte ho, wo apne pehle element ke pointer me **decay** ho jaata hai:

```cpp
void print(int arr[]) { ... }   // asal me void print(int* arr)
```

- Function ke andar `sizeof(arr)` **pointer** ka size hai, array ka nahi.
- Size alag se pass karo: `void print(const int* arr, std::size_t n)`.
- Ya size bachane ke liye reference se pass karo: `void print(int (&arr)[5])` — size type me hi pak jaata hai.

## 10. String aur array ke jaal

| Jaal | Problem | Fix |
|---------|---------|-----|
| Buffer overflow | `char buf[4]; strcpy(buf, "Hello");` | `std::string` ya bounded copy use karo |
| Off-by-one | `i < n` ki jagah `i <= n` wala loop | `< size` use karo |
| Array decay | Function me size ki jaankari gayab | `size` pass karo ya reference-to-array use karo |
| String literal badalna | `char* s = "hi"; s[0]='H';` | `const char*` ya `std::string` use karo |
| Temporary ka dangling reference | `const string& r = string("a") + "b";` | Theek hai — temporary poore expression ke ant tak zinda rehti hai |

---

## Day 04 ke baad aapko ye aana chahiye

- C-style arrays declare, initialise aur iterate karna.
- C-strings ke saath kaam karna aur batana ki null termination kyun zaroori hai.
- Rozmarra ke text processing ke liye `std::string` use karna.
- References vs pointers samjhana aur kaunsa kab use karna hai batana.
- Arrays ko functions me size ki jaankari khoye bina pass karna.

Ab `examples/` me jao aur har program chalao. Uske baad `questions.md` try karo.
