# Day 06 — Structs & Classes

Aaj ka goal: data aur behaviour ko ek saath bundle karna — object-oriented C++ ki neev.

| # | Concept |
|--:|---------|
| 1 | `struct` — data ko group karna |
| 2 | `class` vs `struct` |
| 3 | Constructors |
| 4 | Destructors |
| 5 | `this` pointer |
| 6 | Member functions |
| 7 | Access specifiers: `public`, `private`, `protected` |
| 8 | `const` member functions |
| 9 | Member initialiser lists |
| 10 | Sab jod kar — ek chhoti class |

---

## 1. `struct` — data ko group karna

```cpp
struct Point {
    double x;
    double y;
};

Point p{3.0, 4.0};
std::cout << p.x << ", " << p.y << '\n';
```

- **struct** ek user-defined type hai jo related variables (**members**) ko group karta hai.
- Members memory me declaration order me lagte hain (beech me padding ho sakti hai — Day 07+).
- `struct` me default access **public** hai.

## 2. `class` vs `struct`

C++ me `class` aur `struct` lagbhag ek jaise hain:

```cpp
class Point {
public:          // iske bina class default private hoti hai
    double x, y;
};
```

| | `struct` | `class` |
|---|----------|---------|
| Default access | `public` | `private` |
| Aam istemaal | Saada data (POD jaisa) | Invariants wale objects |

Rivaaj: simple aggregates ke liye `struct`; jab aap methods aur private data se niyam lagate ho tab `class`.

## 3. Constructors

Special member function jo object **banne** par call hota hai:

```cpp
class Rectangle {
public:
    Rectangle(double w, double h) : width(w), height(h) {}
private:
    double width, height;
};
```

- Class ke naam jaisa hi naam; koi return type nahi.
- **Default constructor** — `Rectangle()` — tab bnta hai jab aap koi constructor declare na karo (C++11 me niyam badle — agar aap koi bhi constructor declare karo to default nahi banta jab tak `= default` na maango).
- Initialiser lists (`: width(w), height(h)`) use karo — `const` members, references aur base classes ke liye zaroori; body me assignment se aksar zyada efficient bhi.

## 4. Destructors

Object **khatam** hone par apne aap call hota hai (scope khatam, `delete`, container clear):

```cpp
~Rectangle() {
    // is object ke own kiye resources chhod do
}
```

- Class ke naam par `~` lagakar; koi parameters nahi; koi overloading nahi.
- Agar aap raw pointers manage karte ho to yahin `delete` karo (RAII — Day 05).
- Order: destructor chalta hai → phir members ulti declaration order me destroy hote hain.

## 5. `this` pointer

Non-static member function ke andar `this` current object ka pointer hai:

```cpp
void set_x(double x) {
    this->x = x;   // parameter aur member ka farak saaf karo
}
```

- Type `Point*` hai (const member function me `const Point*`).
- Har member call me chupke se pass hota hai: `p.set_x(1)` → `Point::set_x(&p, 1)`.
- `this->` sirf tab likho jab naam takraayein; iska zyada istemaal mat karo.

## 6. Member functions

Class ke andar define (by default inline) ya bahar:

```cpp
class Circle {
public:
    double area() const;
private:
    double radius;
};

double Circle::area() const {
    return 3.14159 * radius * radius;
}
```

- **Non-static** member functions kisi object par chalte hain aur private members tak pahunch sakte hain.
- **Static** member functions class ke hote hain, instance ke nahi — inme `this` nahi hota (aage ki jhalak).

## 7. Access specifiers: `public`, `private`, `protected`

```cpp
class BankAccount {
public:
    void deposit(double amount);
    double balance() const;
private:
    double balance_;
protected:   // derived classes ko dikhta hai — Day 07
    int account_id_;
};
```

- **`public`** — koi bhi access kar sakta hai.
- **`private`** — sirf isi class ke members aur friends.
- **`protected`** — ye class aur iski subclasses.

**Encapsulation:** implementation chhupao (`private`), sabse chhota interface dikhao (`public`).

## 8. `const` member functions

```cpp
double get_radius() const { return radius; }
```

- `)` ke baad `const` vaada karta hai ki non-mutable members nahi badlenge.
- `const` objects sirf `const` member functions call kar sakte hain.
- Overloading: `void print()` aur `void print() const` alag functions hain.

## 9. Member initialiser lists

Constructor body chalne se pehle members initialise karne ka behtar tarika:

```cpp
Rectangle(double w, double h) : width(w), height(h) {}

// vs body me assignment (const/ref members ke liye theek nahi):
Rectangle(double w, double h) {
    width = w;   // assignment hai, initialisation nahi
    height = h;
}
```

- Members **declaration order** me initialise hote hain, list order me nahi — dono ko ek jaisa rakho.
- Zaroori hai: `const` members, reference members, bina default constructor wale members, base class construction ke liye.

## 10. Sab jod kar — ek chhoti class

Achi design wali class:
- Invariants ko `private` data me rakhti hai.
- Constructors aur setters me input validate karti hai.
- Destructor me safai karti hai.
- Read-only methods par `const` lagati hai.

```cpp
class Counter {
public:
    Counter() : count_(0) {}
    void increment() { ++count_; }
    int value() const { return count_; }
private:
    int count_;
};
```

Isi pattern ko aane wale dinon me aap inheritance, templates aur STL ke saath badhaoge.

---

## Day 06 ke baad aapko ye aana chahiye

- Data members aur member functions wali `struct` ya `class` define karna.
- Constructors, destructors aur initialiser lists sahi tarike se likhna.
- Data encapsulate karne ke liye `public` / `private` use karna.
- `this` kya hai ye samjhana aur methods par `const` kab lagana hai batana.
- Ek chhoti class banana jo apne resources safely manage kare.

Ab `examples/` me jao aur har program chalao. Uske baad `questions.md` try karo.
