# Day 06 — Structs & Classes

Today's goal: bundle data and behaviour together — the foundation of object-oriented C++.

| # | Concept |
|--:|---------|
| 1 | `struct` — grouping data |
| 2 | `class` vs `struct` |
| 3 | Constructors |
| 4 | Destructors |
| 5 | The `this` pointer |
| 6 | Member functions |
| 7 | Access specifiers: `public`, `private`, `protected` |
| 8 | `const` member functions |
| 9 | Member initialiser lists |
| 10 | Putting it together — a small class |

---

## 1. `struct` — grouping data

```cpp
struct Point {
    double x;
    double y;
};

Point p{3.0, 4.0};
std::cout << p.x << ", " << p.y << '\n';
```

- A **struct** is a user-defined type that groups related variables (**members**).
- Members are laid out in memory in declaration order (with possible padding — Day 07+).
- Default access in a `struct` is **public**.

## 2. `class` vs `struct`

In C++, `class` and `struct` are almost identical:

```cpp
class Point {
public:          // class defaults to private without this
    double x, y;
};
```

| | `struct` | `class` |
|---|----------|---------|
| Default access | `public` | `private` |
| Typical use | Plain data (POD-like) | Objects with invariants |

Convention: use `struct` for simple aggregates; `class` when you enforce rules via methods and private data.

## 3. Constructors

Special member function called when an object is **created**:

```cpp
class Rectangle {
public:
    Rectangle(double w, double h) : width(w), height(h) {}
private:
    double width, height;
};
```

- Same name as the class; no return type.
- **Default constructor** — `Rectangle()` — generated if you don't declare any constructors (until C++11 rules changed — if you declare any constructor, the default is not generated unless you ask with `= default`).
- Use initialiser lists (`: width(w), height(h)`) — required for `const` members, references, and base classes; often more efficient than assignment in the body.

## 4. Destructors

Called automatically when an object is **destroyed** (scope ends, `delete`, container cleared):

```cpp
~Rectangle() {
    // release resources owned by this object
}
```

- Same name as class with `~` prefix; no parameters; no overloading.
- If you manage raw pointers, `delete` them here (RAII — Day 05).
- Order: destructor runs → members destroyed in reverse declaration order.

## 5. The `this` pointer

Inside a non-static member function, `this` is a pointer to the current object:

```cpp
void set_x(double x) {
    this->x = x;   // disambiguate parameter from member
}
```

- Type is `Point*` (or `const Point*` in a const member function).
- Implicitly passed to every member call: `p.set_x(1)` → `Point::set_x(&p, 1)`.
- Use `this->` only when names collide; don't abuse it.

## 6. Member functions

Functions defined inside the class (inline by default) or outside:

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

- **Non-static** member functions operate on an object and can access private members.
- **Static** member functions belong to the class, not an instance — no `this` (preview for later).

## 7. Access specifiers: `public`, `private`, `protected`

```cpp
class BankAccount {
public:
    void deposit(double amount);
    double balance() const;
private:
    double balance_;
protected:   // visible to derived classes — Day 07
    int account_id_;
};
```

- **`public`** — anyone can access.
- **`private`** — only this class's members and friends.
- **`protected`** — this class and subclasses.

**Encapsulation:** hide implementation (`private`), expose a minimal interface (`public`).

## 8. `const` member functions

```cpp
double get_radius() const { return radius; }
```

- The `const` after `)` promises not to modify non-mutable members.
- `const` objects can only call `const` member functions.
- Overloading: `void print()` vs `void print() const` are different functions.

## 9. Member initialiser lists

Preferred way to initialise members before the constructor body runs:

```cpp
Rectangle(double w, double h) : width(w), height(h) {}

// vs assignment in body (less ideal for const/ref members):
Rectangle(double w, double h) {
    width = w;   // assignment, not initialisation
    height = h;
}
```

- Members initialise in **declaration order**, not list order — keep them consistent.
- Required for: `const` members, reference members, members without default constructors, base class construction.

## 10. Putting it together — a small class

A well-designed class:
- Keeps invariants in `private` data.
- Validates input in constructors and setters.
- Cleans up in the destructor.
- Uses `const` on read-only methods.

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

This is the pattern you'll extend with inheritance, templates, and the STL in coming days.

---

## What you should be able to do after Day 06

- Define a `struct` or `class` with data members and member functions.
- Write constructors, destructors, and initialiser lists correctly.
- Use `public` / `private` to encapsulate data.
- Explain what `this` is and when to mark methods `const`.
- Build a small class that manages its own resources safely.

Now move to `examples/` and run each program. Then attempt `questions.md`.
