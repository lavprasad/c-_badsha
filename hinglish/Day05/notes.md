# Day 05 — Pointers & Dynamic Memory

Aaj ka goal: memory ko khud control karna, heap vs stack samajhna, aur wo RAII soch seekhna jo leaks rokti hai.

| # | Concept |
|--:|---------|
| 1 | Pointer syntax gehraai se |
| 2 | Address-of (`&`) aur dereference (`*`) |
| 3 | `nullptr` |
| 4 | `new` se dynamic allocation |
| 5 | `delete` se dynamic deallocation |
| 6 | Dynamic arrays: `new[]` / `delete[]` |
| 7 | Memory leaks |
| 8 | Dangling pointers |
| 9 | RAII (shuruaat) |
| 10 | Pointer best practices |

---

## 1. Pointer syntax gehraai se

```cpp
int x = 42;
int* p = &x;        // p, x ko point karta hai
int* q = p;         // q address ki copy hai
```

- `int* p` aur `int *p` barabar hain — spacing sirf style hai. Ek jaisa rakho.
- Ek line me kai declarations tricky hain: `int* a, b;` — sirf `a` pointer hai; `b` ek `int` hai.
- Pointers ka apna **type** hota hai: `int*` vs `double*` compiler ko batata hai ki pointer arithmetic me kitne bytes aage badhna hai.

## 2. Address-of (`&`) aur dereference (`*`)

```cpp
int x = 10;
int* p = &x;    // &x  = x ka address
*p = 20;        // *p  = us address par padi value
```

- Variable par `&` → address-of operator.
- Pointer par `*` → dereference (address ka peecha karo).
- Declaration me type par `&` → reference (alag matlab — context maayne rakhta hai).

## 3. `nullptr`

```cpp
int* p = nullptr;   // C++11 — typed null pointer
if (p == nullptr) { ... }
```

- Pointers ke liye C ka `NULL` macro aur literal `0` ki jagah leta hai.
- Type-safe: `nullptr` `std::nullptr_t` hai, kisi bhi pointer type me convert hota hai par `int` me nahi.
- Pointers hamesha initialise karo — bina initialise kiya pointer dereference karna UB hai.

## 4. `new` se dynamic allocation

```cpp
int* p = new int(42);   // heap par ek int, 42 se initialised
```

- **Stack** (automatic storage): local variables, scope khatam hote hi free.
- **Heap** (free store): `new` allocate karta hai; memory tab tak zinda rehti hai jab tak aap `delete` na karo.
- `new` allocated object ka pointer deta hai, ya fail hone par (by default) `std::bad_alloc` throw karta hai.
- Stack aur heap semantics kabhi mat mixao — stack variable par `delete` mat karo.

## 5. `delete` se dynamic deallocation

```cpp
delete p;
p = nullptr;   // achi aadat — purane pointer se galti se double-delete nahi hoga
```

- Har `new` ke liye theek ek matching `delete` hona chahiye.
- **Double delete** → undefined behaviour (aksar crash).
- **Delete ke baad use** — `delete` ke baad `*p` use karna UB hai (dangling pointer).

## 6. Dynamic arrays: `new[]` / `delete[]`

```cpp
int* arr = new int[5]{};   // 5 ints, zero-initialised
delete[] arr;              // `delete[]` HI use karna hai, `delete` nahi
```

- `new[]` / `delete[]` jodi me aate hain — array par `delete` UB hai.
- Dynamic arrays ke liye raw `new[]` se behtar `std::vector` (aage) hai.
- Memory phir bhi aapki hai — koi garbage collection nahi hai.

## 7. Memory leaks

**Leak** tab hota hai jab heap memory kabhi free hi na ho:

```cpp
void leak() {
    int* p = new int(100);
    // delete p; bhool gaye
}   // p khatam ho gaya, par heap wala int hamesha ke liye allocated pada hai
```

- Program us block ka ekmatra pointer kho deta hai → memory process ke ant tak unreachable.
- Lambe chalne wale servers aur embedded systems me leaks jama hote rehte hain.
- Tools: Valgrind, AddressSanitizer (`-fsanitize=address`), Visual Studio leak detector.

## 8. Dangling pointers

Aisa pointer jo valid memory ko point nahi karta:

```cpp
int* p = new int(5);
delete p;
// *p = 10;   // UB — p dangling hai

int* q;
{ int x = 99; q = &x; }
// *q         // UB — x ja chuka hai
```

- `delete` ke baad pointers ko `nullptr` kar do agar unhe phir se use kiya ja sakta hai.
- Function se local stack variable ka pointer kabhi return mat karo.

## 9. RAII (shuruaat)

**Resource Acquisition Is Initialization** — resource ki umar ko object ki umar se baandh do:

```cpp
struct IntHolder {
    int* p;
    IntHolder(int val) : p(new int(val)) {}
    ~IntHolder() { delete p; }   // holder ke scope se bahar jaate hi hamesha chalta hai
};
```

- Constructor lete hai; destructor chhodta hai — chaahe exception aaye ya aap jaldi `return` kar do.
- Yahi smart pointers (`unique_ptr`, `shared_ptr` — aage ke din) ki neev hai.
- **Niyam:** jo allocate kare wahi deallocate kare, aur behtar hai ki usi scope me RAII se.

## 10. Pointer best practices

1. Har pointer initialise karo (`nullptr` agar "abhi koi object nahi").
2. Raw `new` se behtar stack objects aur `std::string` / `std::vector` use karo.
3. `new` karna hi pade to usi logical owner me `delete` ke saath jodo — ya RAII me lapet do.
4. Do baar `delete` mat karo; jo aapne `new` nahi kiya use `delete` mat karo.
5. Development ke dauraan `-Wall -Wextra` aur sanitizers use karo.

Modern C++ me raw owning pointers ek code smell hain. Legacy code aur low-level APIs me ye phir bhi dikhenge — inhe jaano, phir abstractions prefer karo.

---

## Day 05 ke baad aapko ye aana chahiye

- Heap par single objects aur arrays sahi tarike se allocate aur free karna.
- Stack vs heap samjhana aur batana ki leaks kyun hote hain.
- Dangling pointer aur double-delete bugs pehchanna.
- Ek simple RAII wrapper ka khaka banana jo leak rokta ho.
- `NULL` ya `0` ki jagah `nullptr` use karna.

Ab `examples/` me jao aur har program chalao. Uske baad `questions.md` try karo.
