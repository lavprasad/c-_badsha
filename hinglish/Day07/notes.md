# Day 07 — Inheritance & Polymorphism

Aaj ka goal: "is-a" rishton ko inheritance se model karna, virtual functions se runtime par sahi behaviour chunna, aur iske cost aur jaal (slicing, missing virtual destructors) samajhna.

| # | Concept |
|--:|---------|
| 1 | Base aur derived classes — "is-a" rishta |
| 2 | Inheritance me access specifiers (`public`, `protected`, `private`) |
| 3 | Virtual functions aur dynamic dispatch |
| 4 | `override` — saaf niyat, typos pakde |
| 5 | `final` — aage override ya inherit rokna |
| 6 | Abstract classes aur pure virtual functions (`= 0`) |
| 7 | Base pointer / reference se polymorphism |
| 8 | Object slicing — jab derived object base me copy hota hai |
| 9 | Virtual destructors — polymorphic delete ke liye zaroori |
| 10 | Vtable ka concept — dynamic dispatch andar kaise chalta hai |

---

## 1. Base aur derived classes — "is-a" rishta

Inheritance se ek **derived** class kisi **base** class ko reuse aur extend karti hai:

```cpp
class Animal {
public:
    void breathe() { /* ... */ }
};

class Dog : public Animal {   // Dog IS-A Animal
public:
    void bark() { /* ... */ }
};
```

- `Dog` `breathe()` inherit karta hai aur `bark()` jodta hai.
- Inheritance tab use karo jab rishta sach me "is-a" ho (`Dog` ek `Animal` hai), "has-a" nahi (uske liye composition: `Car` ke paas `Engine` hai).

## 2. Inheritance me access specifiers

Class me access ke teen level: `public`, `protected`, `private`.

| Base member | `public` inheritance | `protected` inheritance | `private` inheritance |
|-------------|---------------------|------------------------|----------------------|
| `public`    | `public` hi rehta   | `protected` ban jaata  | `private` ban jaata  |
| `protected` | `protected` hi rehta| `protected` hi rehta   | `private` ban jaata  |
| `private`   | accessible nahi     | accessible nahi        | accessible nahi      |

Default: `class Derived : Base` **private** inheritance hai. `struct Derived : Base` **public** hai (`class` aur `struct` ka bas yahi farak).

Practice me lagbhag saari inheritance `public` hi hoti hai.

## 3. Virtual functions aur dynamic dispatch

`virtual` ke bina compiler function **compile time** par static type dekh kar chunta hai:

```cpp
class Base {
public:
    void greet() { std::cout << "Base\n"; }
};

class Derived : public Base {
public:
    void greet() { std::cout << "Derived\n"; }
};

Derived d;
Base* p = &d;
p->greet();   // "Base" print karta hai — virtual nahi hai
```

**Runtime** (dynamic) dispatch chalu karne ke liye `virtual` lagao:

```cpp
virtual void greet() { std::cout << "Base\n"; }
// ...
p->greet();   // "Derived" print karta hai — Derived::greet() call hota hai
```

Faisla runtime par **asli object type** ke hisaab se hota hai, pointer ke type se nahi.

## 4. `override` — saaf niyat, typos pakde

C++11 ka `override` keyword batata hai ki function base ke virtual ko override kar raha hai. Signature match na ho to **compile error** milta hai:

```cpp
class Base {
public:
    virtual void foo(int x);
};

class Derived : public Base {
public:
    void foo(int x) override;   // OK
    // void foo(double x) override;  // ERROR — base me koi matching virtual nahi
};
```

Override karte waqt hamesha `override` likho. Ye baareek typos (galat `const`, galat parameter type) pakad leta hai jo warna chupchap ek naya function bana dete.

## 5. `final` — aage override ya inherit rokna

Do istemaal:

```cpp
class Base {
public:
    virtual void foo() final;   // koi derived class foo() override nahi kar sakti
};

class Sealed final {            // Sealed se koi class inherit nahi kar sakti
    // ...
};
```

`final` tab use karo jab design ka faisla jaan-boojh kar liya ho — jaise koi security-sensitive method override nahi hona chahiye.

## 6. Abstract classes aur pure virtual functions

**Pure virtual** function ki base class me koi definition nahi hoti:

```cpp
class Shape {
public:
    virtual double area() const = 0;   // pure virtual
    virtual ~Shape() = default;
};
```

- `= 0` function ko pure virtual banata hai.
- Jis class me kam se kam ek pure virtual ho wo **abstract** hai — uska object nahi ban sakta.
- Concrete banne ke liye derived classes ko saare pure virtuals implement karna **hi padega**.

Abstract classes ek **interface** define karti hain — ek contract jise derived types poora karte hain.

## 7. Base pointer / reference se polymorphism

Virtual functions ki taakat: alag-alag derived types ko ek jaisa barta jaata hai:

```cpp
std::vector<std::unique_ptr<Shape>> shapes;
shapes.push_back(std::make_unique<Circle>(3.0));
shapes.push_back(std::make_unique<Rectangle>(4.0, 5.0));

for (const auto& s : shapes) {
    std::cout << s->area() << '\n';   // har shape ka sahi area
}
```

Mukhya niyam: polymorphism base types ke **pointers ya references** se chalta hai. Values se kabhi nahi (slicing dekho).

## 8. Object slicing — jab derived object base me copy hota hai

```cpp
Derived d;
Base b = d;   // SLICING — sirf Base sub-object copy hota hai
b.greet();    // Base::greet() chalta hai, Derived hissa gayab
```

Derived object ko base me assign ya copy-construct karne se derived hissa **kat jaata hai**. Result ek saada `Base` hai jisme `Derived` ka behaviour nahi hai.

**Fix:** pointers ya references use karo:

```cpp
Base& ref = d;   // slicing nahi
Base* ptr = &d;  // slicing nahi
```

## 9. Virtual destructors — polymorphic delete ke liye zaroori

Agar aap base pointer se derived object delete karte ho, to destructor virtual hona chahiye:

```cpp
class Base {
public:
    virtual ~Base() = default;   // virtual HONA chahiye
};

Base* p = new Derived();
delete p;   // pehle ~Derived() phir ~Base() — safe
```

`virtual ~Base()` ke bina sirf `~Base()` chalta hai — agar `Derived` resources own karta hai to **undefined behaviour**.

Niyam: agar class me **koi bhi** virtual function hai to destructor virtual banao. Agar class base class banne ke liye hai to abhi koi doosra virtual na hone par bhi destructor virtual rakho.

## 10. Vtable ka concept — dynamic dispatch andar kaise chalta hai

Jab class me virtual functions hote hain, compiler ek **vtable** (virtual function table) banata hai — function pointers ka array, har virtual function ke liye ek. Har object ke andar ek chhupa hua **vptr** (vtable pointer) hota hai jo uski class ki vtable ko point karta hai.

```
Memory me Derived object:
┌─────────────┐
│ vptr ───────┼──► Derived vtable: [ &Derived::greet, &Derived::area, ... ]
├─────────────┤
│ Base data   │
├─────────────┤
│ Derived data│
└─────────────┘
```

Jab aap `p->greet()` call karte ho:
1. `p` ke vptr se vtable tak jao.
2. `greet` ka slot dhoondo.
3. Us function pointer ko call karo.

Cost: har virtual call par ek extra indirection + har object me ek pointer. Fayda: purane code ko chhue bina khuli hui extensibility.

Vtables aap khud nahi likhte — compiler banata hai. Inka hona ye samjhata hai ki:
- Polymorphic objects thode bade hote hain (vptr).
- Virtual calls hamesha utni aggressively inline nahi hoti.
- `dynamic_cast` aur `typeid` vtable ke saath rakhe RTTI data par nirbhar hain.

---

## Day 07 ke baad aapko ye aana chahiye

- Virtual functions aur `override` ke saath ek chhoti class hierarchy design karna.
- Samjhana ki `Base b = derived;` polymorphic behaviour kyun kho deta hai.
- Ek abstract base class aur concrete derived types likhna.
- Polymorphic base classes ko hamesha virtual destructor dena.
- Vtable runtime dispatch kaise chalu karti hai, iska khaka banana.

Ab `examples/` me jao aur har program chalao. Uske baad `questions.md` try karo.
