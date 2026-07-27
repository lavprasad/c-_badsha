# Day 08 — Templates & Type Deduction

Aaj ka goal: ek baar generic code likhna jo kai types ke liye chale, aur samajhna ki compiler `auto` aur `decltype` se types khud kaise nikaal leta hai.

| # | Concept |
|--:|---------|
| 1 | Function templates — generic functions |
| 2 | Template type parameters aur function overloading |
| 3 | Class templates — generic types |
| 4 | Template specialization (shuruaat) |
| 5 | `auto` — type compiler ko nikalne do |
| 6 | `decltype` — expression ka type poochho |
| 7 | `auto` return types aur trailing return type |
| 8 | Template argument deduction ke niyam (basics) |
| 9 | Non-type template parameters |
| 10 | Sab jod kar — ek generic utility |

---

## 1. Function templates — generic functions

**Function template** ek khaka hai jise compiler har type ke liye instantiate karta hai:

```cpp
template<typename T>
T max_val(T a, T b) {
    return (a > b) ? a : b;
}

int m1 = max_val(3, 7);           // T = int
double m2 = max_val(3.14, 2.71);  // T = double
```

Compiler compile time par `max_val<int>` aur `max_val<double>` bana deta hai. Haath se likhe overloads ke muqable koi runtime cost nahi.

## 2. Template type parameters aur function overloading

Ek se zyada template parameters ho sakte hain:

```cpp
template<typename T, typename U>
void print_pair(T a, U b) { /* ... */ }
```

Templates aam functions ke saath reh sakte hain. Agar koi non-template function barabar achi match ho to wo jeetta hai. Warna compiler sabse achi template specialization chunta hai.

Explicit tarike se batana (kam hi chahiye):

```cpp
max_val<double>(3, 7.5);   // T = double zabardasti
```

## 3. Class templates — generic types

Jaise functions generic ho sakte hain, waise hi classes bhi:

```cpp
template<typename T>
class Box {
    T value;
public:
    explicit Box(T v) : value(v) {}
    T get() const { return value; }
};

Box<int> ib(42);
Box<std::string> sb("hello");
```

Har `Box<T>` compile time par **alag type** hai. `Box<int>` aur `Box<double>` koi code share nahi karte, jab tak compiler ek jaisi instantiations merge na kar de.

## 4. Template specialization (shuruaat)

Primary template aam case sambhalta hai. **Specialization** kisi khaas type ke liye behaviour badalta hai:

```cpp
template<typename T>
class Printer {
public:
    void print(T v) { std::cout << v; }
};

template<>
class Printer<bool> {
public:
    void print(bool v) { std::cout << (v ? "true" : "false"); }
};
```

- **Full specialization**: `template<>` ke saath saare parameters diye hue.
- **Partial specialization**: sirf class templates ke liye, function templates ke liye nahi (C++ ki seema).

Specialization kam hi use karo — aksar saada overload ya `if constexpr` (C++17) saaf hota hai.

## 5. `auto` — type compiler ko nikalne do

```cpp
auto x = 42;              // int
auto y = 3.14;            // double
auto s = std::string("hi"); // std::string
```

Niyam:
- `auto` top-level `const` aur references gira deta hai: `const int ci = 0; auto a = ci;` → `a` `int` hai, `const int` nahi.
- Bina copy ke reference chahiye to `const auto&` use karo: `for (const auto& item : vec)`.
- C++17 me `auto` function parameters ke liye use nahi ho sakta bina function ko template banaye (C++20 `auto` parameters laata hai).

## 6. `decltype` — expression ka type poochho

```cpp
int x = 0;
decltype(x) a = 5;         // int
decltype((x)) b = x;       // int&  — (x) ek lvalue expression hai
```

Aam pattern — variable ko kisi expression ke result wale type se declare karna:

```cpp
template<typename T, typename U>
auto add(T a, U b) -> decltype(a + b) {
    return a + b;
}
```

C++14 ne ise aasan kiya: `auto add(T a, U b) { return a + b; }` return type khud nikaal leta hai. Par jab return type parameters par nirbhar ho aur signature line par dikhta na ho, tab `decltype` ab bhi chahiye.

## 7. `auto` return types aur trailing return type

```cpp
template<typename T, typename U>
auto multiply(T a, U b) -> decltype(a * b) {
    return a * b;
}
```

C++14 me trailing return type optional hai jab body ke `return` statements compiler analyse kar sake. Templates ke andar C++17 ka `if constexpr` madad karta hai.

## 8. Template argument deduction ke niyam (basics)

Jab aap `func(args...)` call karte ho:
1. Compiler arguments se `T` nikalne ki koshish karta hai.
2. Signature me `T` ki har jagah **ek hi** deduced type honi chahiye (jab tak alag template parameters na hon).
3. Kuch contexts me `{42}` `std::initializer_list<int>` deduce kar sakta hai — hairaniyon se bacho.

```cpp
template<typename T>
void foo(T a, T b);   // dono args ka T ek hi hona chahiye

foo(1, 2);      // OK: T = int
// foo(1, 2.0); // ERROR: T ko int AUR double dono deduce kiya ja raha hai
```

Reference se pass karna const bachata hai aur copies se bachata hai:

```cpp
template<typename T>
void inspect(const T& x) { /* ... */ }
```

## 9. Non-type template parameters

Templates sirf types nahi, **values** bhi le sakte hain:

```cpp
template<typename T, int N>
class FixedArray {
    T data[N];
public:
    int size() const { return N; }
};

FixedArray<int, 10> arr;
```

Non-type parameters compile-time constants hone chahiye (`constexpr`, enum values, linkage wale function ka pointer, waghairah).

## 10. Sab jod kar — ek generic utility

Modern C++ templates ko `auto` ke saath jodta hai:

```cpp
template<typename Container>
void print_all(const Container& c) {
    for (const auto& elem : c) {
        std::cout << elem << ' ';
    }
    std::cout << '\n';
}
```

Ye `std::vector<int>`, `std::list<std::string>`, ya kisi bhi aise type ke saath chalta hai jiske paas `begin()`/`end()` hai — koi inheritance nahi chahiye.

---

## Day 08 ke baad aapko ye aana chahiye

- Ek function template aur ek class template likhna.
- Samjhana ki `auto`, `const auto&` aur `decltype` kab use karna hai.
- Batana ki template specialization kya karta hai aur uski zaroorat kab padti hai.
- Simple `auto` declarations ke deduced types predict karna.

Ab `examples/` me jao aur har program chalao. Uske baad `questions.md` try karo.
