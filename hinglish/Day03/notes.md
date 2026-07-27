# Day 03 — Functions

Aaj ka goal: programs ko dobara istemaal hone wale tukdon me todna, data sahi tarike se pass karna, aur samajhna ki function call par stack par kya hota hai.

| # | Concept |
|--:|---------|
| 1 | Declarations vs definitions |
| 2 | Pass by value |
| 3 | Pass by reference |
| 4 | Pass by const reference |
| 5 | Return values aur return types |
| 6 | Function overloading |
| 7 | Default arguments |
| 8 | `inline` functions |
| 9 | Recursion (shuruaat) |
| 10 | Function pointers (shuruaat) |

---

## 1. Declarations vs definitions

**Declaration** compiler ko batata hai ki naam maujood hai aur uska signature kya hai:

```cpp
int add(int a, int b);   // declaration — body nahi
```

**Definition** body (implementation) deta hai:

```cpp
int add(int a, int b) { return a + b; }   // definition
```

- Declare kai baar kar sakte ho, par har program me define **ek hi baar** (ODR — One Definition Rule).
- Callers ko sirf declaration chahiye (header ke `#include` se ya forward declaration se).
- Linker ko definition na mile → `undefined reference` error (Day 01, Q5).

Declarations me parameter names optional hain aur ignore hote hain: `int add(int, int);` bilkul theek hai.

## 2. Pass by value

Callee ko argument ki **copy** milti hai:

```cpp
void increment(int x) { ++x; }

int main() {
    int n = 5;
    increment(n);   // n abhi bhi 5 hai
}
```

- Chhote types (`int`, `double`, pointers) ke liye sasta.
- Bade objects ke liye mehnga (aage aap `const&` prefer karoge).
- Function ke andar ke badlav caller ke variable par **asar nahi** karte.

## 3. Pass by reference

Callee ko asli object ka **alias** milta hai:

```cpp
void increment(int& x) { ++x; }

int main() {
    int n = 5;
    increment(n);   // ab n 6 hai
}
```

- Koi copy nahi banti; function seedha caller ke variable par kaam karta hai.
- Tab use karo jab function ko argument badalna ho, ya copy mehngi ho (aur `const&` kaafi na ho kyunki likhna hai).

## 4. Pass by const reference

Bina copy ke read-only access:

```cpp
void print(const std::string& s) {
    std::cout << s << '\n';
    // s.push_back('!');  // error — const
}
```

- Bade read-only parameters ke liye **`const T&`** default choice hai.
- Temporaries se bhi bandh jaata hai: `print("hello");` chalta hai — temporary `string` call ke dauraan zinda rehti hai.
- Local variable ka reference kabhi return mat karo — function return hote hi wo dangle karta hai.

## 5. Return values aur return types

```cpp
int square(int x) { return x * x; }

double divide(int a, int b) {
    if (b == 0) return 0.0;   // early return
    return static_cast<double>(a) / b;
}
```

- `return` function ko turant chhod deta hai aur chaahe to value deta hai.
- Return type match karna chahiye (ya convertible ho). `void` functions kuch return nahi karte.
- Value se return karna result ki copy (ya C++11+ me move) banata hai — compiler aksar ise hata deta hai (RVO/NRVO).
- Function par **`[[nodiscard]]`** (C++17) warning deta hai agar caller return value ignore kare.

## 6. Function overloading

Ek hi naam, alag parameter lists — compiler sabse achi match chunta hai:

```cpp
int add(int a, int b)       { return a + b; }
double add(double a, double b) { return a + b; }
```

- Overloading **compile time** par resolve hoti hai, arguments ke types aur count ke hisaab se.
- Sirf return type se overload **nahi** hota — `int foo()` aur `double foo()` illegal hai.
- Ambiguous calls (do barabar achi matches) compile error hain.

## 7. Default arguments

Aakhir ke parameters ke liye defaults do:

```cpp
void greet(const std::string& name, const std::string& prefix = "Hello") {
    std::cout << prefix << ", " << name << '\n';
}

greet("Ada");              // Hello, Ada
greet("Ada", "Hi");        // Hi, Ada
```

- Defaults **daayein taraf** hone chahiye — beech ka argument skip nahi kar sakte bina baad walon ko naam diye (C++20 ke structs wale designated initializers tak).
- Defaults **declaration** me daalo (aam taur par header me), definition me dobara mat likho.
- Default arguments **call site** par lagte hain, function body ke andar nahi.

## 8. `inline` functions

```cpp
inline int sqr(int x) { return x * x; }
```

- Compiler ko sujhaav deta hai ki wo call ko call site par function body se badal **sakta** hai (call overhead nahi).
- Modern compilers keyword ki parwaah kiye bina aggressively inline karte hain.
- **Header me function par `inline`** ODR tode bina header me definition rakhne deta hai — linker ek jaisi inline definitions ko merge kar deta hai.
- Speed ke liye `inline` zabardasti mat lagao; header me define chhote functions ke liye use karo.

## 9. Recursion (shuruaat)

Function jo khud ko call karta hai:

```cpp
int factorial(int n) {
    if (n <= 1) return 1;          // base case
    return n * factorial(n - 1);   // recursive step
}
```

- Har recursive function ko **base case** chahiye warna wo stack overflow tak chalta hai.
- Har call ko apna stack frame milta hai (local variables, return address).
- Depth stack size se limited hai — gehri recursion crash kar sakti hai; bade `n` ke liye iteration ya explicit stack safe hai.
- Wahi problem aksar iteratively bhi hal hoti hai; recursion tree/graph structures par chamakti hai.

## 10. Function pointers (shuruaat)

Aisa variable jo function ka address rakhta hai:

```cpp
int add(int a, int b) { return a + b; }

int main() {
    int (*fp)(int, int) = &add;   // ya sirf add
    std::cout << fp(3, 4) << '\n';   // 7
}
```

- Syntax bhadda hai: `return_type (*name)(param_types)`.
- C++11 vikalp: `auto fp = add;` ya `std::function` (aage kisi din).
- Callbacks, strategy patterns aur C APIs me use hota hai.
- Function pointer ka type bilkul match karna chahiye — wahi return type aur wahi parameter types.

---

## Day 03 ke baad aapko ye aana chahiye

- Code ko `.h` / `.cpp` me sahi declarations aur definitions ke saath baantna.
- Parameters ke liye value vs reference vs const reference chunna.
- Overloaded functions aur default arguments wale functions likhna aur call karna.
- Ek simple recursive function trace karna aur base case pehchanna.
- Function pointer ke through function declare karna aur call karna.

Ab `examples/` me jao aur har program chalao. Uske baad `questions.md` try karo.
