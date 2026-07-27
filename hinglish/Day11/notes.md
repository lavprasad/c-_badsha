# Day 11 — Move Semantics, Smart Pointers & Exceptions

Aaj ka goal: jahan ho sake copy ki jagah move karna, memory ko smart pointers se sambhalna, aur errors ko exceptions se handle karna bina resources leak kiye.

| # | Concept |
|--:|---------|
| 1 | Lvalues vs rvalues — naam vs temporaries |
| 2 | Rvalue references (`T&&`) aur `std::move` |
| 3 | Move constructor aur move assignment |
| 4 | `std::unique_ptr` — exclusive ownership |
| 5 | `std::shared_ptr` — reference counting ke saath shared ownership |
| 6 | `try` / `catch` / `throw` — exception basics |
| 7 | Exception safety guarantees (basics) |
| 8 | `noexcept` — na throw karne ka vaada |
| 9 | Rule of five / zero — special member functions |
| 10 | Sab jod kar — smart pointers ke saath RAII |

---

## 1. Lvalues vs rvalues — naam vs temporaries

- **Lvalue**: iska naam hota hai, expression ke baad bhi rehta hai (`int x = 5;` — `x` lvalue hai).
- **Rvalue**: temporary, bas khatam hone wala (`5`, `x + 1`, kisi function ki return value).

```cpp
int x = 5;        // x lvalue hai
int y = x + 1;    // (x + 1) rvalue hai
```

Lvalues `T&` se bandh sakte hain aur rvalues `T&&` (rvalue reference) se.

## 2. Rvalue references (`T&&`) aur `std::move`

```cpp
std::string s = "hello";
std::string t = std::move(s);   // move: copy ki jagah s ka buffer chura lo
// ab s valid-par-unspecified state me hai (aksar khaali)
```

`std::move(x)` rvalue reference me ek **cast** hai — khud se move nahi karta. Wo compiler ko kehta hai "mera `x` se kaam khatam, iske resources chura sakte ho."

Jo types heap memory own karte hain (string, vector, unique_ptr) unke liye move sasta hai.

## 3. Move constructor aur move assignment

```cpp
class Buffer {
    int* data;
    std::size_t len;
public:
    Buffer(Buffer&& other) noexcept
        : data(other.data), len(other.len) {
        other.data = nullptr;
        other.len = 0;
    }
    Buffer& operator=(Buffer&& other) noexcept {
        if (this != &other) {
            delete[] data;
            data = other.data;
            len = other.len;
            other.data = nullptr;
            other.len = 0;
        }
        return *this;
    }
};
```

Move ke baad source **valid** rehna chahiye (aam taur par khaali/null) taaki uska destructor safe rahe.

## 4. `std::unique_ptr` — exclusive ownership

```cpp
auto p = std::make_unique<int>(42);
// auto q = p;              // ERROR: copy nahi ho sakta
auto q = std::move(p);      // OK: ownership transfer
```

- Ek waqt me theek **ek** owner.
- Khatam hote hi apne aap `delete` karta hai.
- `unique_ptr<T>(new T(args))` se behtar `std::make_unique<T>(args)`.

Jab bhi heap allocation chahiye, default me `unique_ptr` use karo.

## 5. `std::shared_ptr` — shared ownership

```cpp
auto a = std::make_shared<int>(42);
auto b = a;   // dono ownership share karte hain; ref count = 2
```

- Reference-counted — aakhri `shared_ptr` jaate hi object khatam.
- Thoda zyada overhead (control block + atomic ref count).
- Jab sach me **kai** owners ko wahi object chahiye tab use karo.

Jab `unique_ptr` kaafi ho to `shared_ptr` se bacho — wo sasta aur saaf hai.

## 6. `try` / `catch` / `throw` — exception basics

```cpp
try {
    if (bad) throw std::runtime_error("something failed");
    // ...
} catch (const std::exception& e) {
    std::cerr << e.what() << '\n';
} catch (...) {
    std::cerr << "unknown error\n";
}
```

- Value se throw karo, **const reference** se catch karo.
- Stack unwinding local objects ko destroy karti hai (RAII) — bahar nikalte waqt destructors chalte hain.
- Destructors me throw mat karo (agar doosra exception active ho to std::terminate).

## 7. Exception safety guarantees (basics)

| Guarantee | Matlab |
|-----------|---------|
| No-throw | Operation kabhi fail nahi hota |
| Strong | Fail hua to state waisi ki waisi |
| Basic | Fail hua to leak nahi; invariants bache rehte hain |
| None | Leak ya corruption mumkin |

RAII (smart pointers, lock guards) **basic** guarantee aasan bana deta hai. APIs aise design karo ki ya to poora safal hon ya saaf-suthre tarike se roll back karein.

## 8. `noexcept` — na throw karne ka vaada

```cpp
void swap(int& a, int& b) noexcept {
    // agar ye throw kare to std::terminate call hota hai
}
```

- Jahan ho sake move constructors ko `noexcept` marko — containers move tabhi use karte hain jab move `noexcept` ho.
- `noexcept(expr)` ek compile-time check hai.

## 9. Rule of five / zero — special member functions

Agar aap inme se **koi bhi** define karte ho, to paanchon par socho:
1. Destructor
2. Copy constructor
3. Copy assignment
4. Move constructor
5. Move assignment

**Rule of zero:** agar aapki class sirf RAII types (string, vector, unique_ptr) rakhti hai, to **ek bhi** mat likho — compiler ke banaye versions sahi hote hain.

## 10. Sab jod kar — smart pointers ke saath RAII

```cpp
void process() {
    auto file = std::make_unique<FileHandle>("data.txt");
    auto buffer = std::vector<int>(1000);
    // kuch bhi throw kare, file aur buffer apne aap saaf ho jaate hain
}
```

Modern C++ ki soch: application code me **koi raw `new`/`delete` nahi**. Smart pointers aur containers use karo; safai RAII par chhodo.

---

## Day 11 ke baad aapko ye aana chahiye

- Batana ki copy kab aur move kab, aur `std::move` asal me karta kya hai.
- `unique_ptr` aur `shared_ptr` me chunaav karna.
- Aise try/catch blocks likhna jo const reference se catch karein.
- Naye code me rule of zero lagana.

Ab `examples/` me jao aur har program chalao. Uske baad `questions.md` try karo.
