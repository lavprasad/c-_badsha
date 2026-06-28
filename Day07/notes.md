# Day 07 — Inheritance & Polymorphism

Today's goal: model "is-a" relationships with inheritance, dispatch the right behaviour at runtime through virtual functions, and understand the costs and pitfalls (slicing, missing virtual destructors).

| # | Concept |
|--:|---------|
| 1 | Base & derived classes — the "is-a" relationship |
| 2 | Access specifiers in inheritance (`public`, `protected`, `private`) |
| 3 | Virtual functions & dynamic dispatch |
| 4 | `override` — explicit intent, catch typos |
| 5 | `final` — stop further overriding or inheriting |
| 6 | Abstract classes & pure virtual functions (`= 0`) |
| 7 | Polymorphism via base pointer / reference |
| 8 | Object slicing — when a derived object is copied into a base |
| 9 | Virtual destructors — essential for polymorphic delete |
| 10 | The vtable concept — how dynamic dispatch works under the hood |

---

## 1. Base & derived classes — the "is-a" relationship

Inheritance lets a **derived** class reuse and extend a **base** class:

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

- `Dog` inherits `breathe()` and adds `bark()`.
- Use inheritance when the relationship is genuinely "is-a" (`Dog` is an `Animal`), not "has-a" (use composition instead: `Car` has an `Engine`).

## 2. Access specifiers in inheritance

Three levels of access in a class: `public`, `protected`, `private`.

| Base member | `public` inheritance | `protected` inheritance | `private` inheritance |
|-------------|---------------------|------------------------|----------------------|
| `public`    | stays `public`      | becomes `protected`    | becomes `private`    |
| `protected` | stays `protected`   | stays `protected`      | becomes `private`    |
| `private`   | not accessible      | not accessible         | not accessible       |

Default: `class Derived : Base` is **private** inheritance. `struct Derived : Base` is **public** (only difference between `class` and `struct`).

In practice, almost all inheritance is `public`.

## 3. Virtual functions & dynamic dispatch

Without `virtual`, the compiler picks the function at **compile time** based on the static type:

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
p->greet();   // prints "Base" — NOT virtual
```

Add `virtual` to enable **runtime** (dynamic) dispatch:

```cpp
virtual void greet() { std::cout << "Base\n"; }
// ...
p->greet();   // prints "Derived" — calls Derived::greet()
```

The decision happens at runtime based on the **actual object type**, not the pointer type.

## 4. `override` — explicit intent, catch typos

C++11's `override` keyword marks a function as overriding a virtual base function. If the signature doesn't match, you get a **compile error**:

```cpp
class Base {
public:
    virtual void foo(int x);
};

class Derived : public Base {
public:
    void foo(int x) override;   // OK
    // void foo(double x) override;  // ERROR — no matching base virtual
};
```

Always use `override` when overriding. It catches subtle typos (wrong `const`, wrong parameter type) that would otherwise silently create a new function.

## 5. `final` — stop further overriding or inheriting

Two uses:

```cpp
class Base {
public:
    virtual void foo() final;   // no derived class may override foo()
};

class Sealed final {            // no class may inherit from Sealed
    // ...
};
```

Use `final` when a design decision is deliberate — e.g. a security-sensitive method must not be overridden.

## 6. Abstract classes & pure virtual functions

A **pure virtual** function has no definition in the base class:

```cpp
class Shape {
public:
    virtual double area() const = 0;   // pure virtual
    virtual ~Shape() = default;
};
```

- `= 0` makes the function pure virtual.
- A class with at least one pure virtual function is **abstract** — you cannot instantiate it.
- Derived classes **must** implement all pure virtuals to be concrete.

Abstract classes define an **interface** — a contract that derived types must fulfil.

## 7. Polymorphism via base pointer / reference

The power of virtual functions: treat different derived types uniformly:

```cpp
std::vector<std::unique_ptr<Shape>> shapes;
shapes.push_back(std::make_unique<Circle>(3.0));
shapes.push_back(std::make_unique<Rectangle>(4.0, 5.0));

for (const auto& s : shapes) {
    std::cout << s->area() << '\n';   // correct area for each shape
}
```

Key rule: polymorphism works through **pointers or references** to base types. Never through values (see slicing).

## 8. Object slicing — when a derived object is copied into a base

```cpp
Derived d;
Base b = d;   // SLICING — only the Base sub-object is copied
b.greet();    // calls Base::greet(), Derived part is gone
```

Assigning or copy-constructing a derived object into a base **slices off** the derived portion. The result is a plain `Base` with no `Derived` behaviour.

**Fix:** use pointers or references:

```cpp
Base& ref = d;   // no slicing
Base* ptr = &d;  // no slicing
```

## 9. Virtual destructors — essential for polymorphic delete

If you delete a derived object through a base pointer, the destructor must be virtual:

```cpp
class Base {
public:
    virtual ~Base() = default;   // MUST be virtual
};

Base* p = new Derived();
delete p;   // calls ~Derived() then ~Base() — safe
```

Without `virtual ~Base()`, only `~Base()` runs — **undefined behaviour** if `Derived` owns resources.

Rule: if a class has **any** virtual function, make the destructor virtual. If the class is meant to be a base class, make the destructor virtual even if there are no other virtuals yet.

## 10. The vtable concept — how dynamic dispatch works under the hood

When a class has virtual functions, the compiler creates a **vtable** (virtual function table) — an array of function pointers, one per virtual function. Each object carries a hidden **vptr** (vtable pointer) to its class's vtable.

```
Derived object in memory:
┌─────────────┐
│ vptr ───────┼──► Derived vtable: [ &Derived::greet, &Derived::area, ... ]
├─────────────┤
│ Base data   │
├─────────────┤
│ Derived data│
└─────────────┘
```

When you call `p->greet()`:
1. Follow `p`'s vptr to the vtable.
2. Look up the slot for `greet`.
3. Call that function pointer.

Cost: one extra indirection per virtual call + one pointer per object. Benefit: open-ended extensibility without modifying existing code.

You don't write vtables yourself — the compiler generates them. Knowing they exist explains why:
- Polymorphic objects are slightly larger (vptr).
- Virtual calls can't always be inlined as aggressively.
- `dynamic_cast` and `typeid` rely on RTTI data alongside the vtable.

---

## What you should be able to do after Day 07

- Design a small class hierarchy with virtual functions and `override`.
- Explain why `Base b = derived;` loses polymorphic behaviour.
- Write an abstract base class and concrete derived types.
- Always give polymorphic base classes a virtual destructor.
- Sketch how a vtable enables runtime dispatch.

Now move to `examples/` and run each program. Then attempt `questions.md`.
