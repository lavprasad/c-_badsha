# Day 07 — 5 Tricky Questions

> Try **without** running the code or peeking at `answers.md`. Write your guess on paper / in a comment, *then* compile and check.

---

### Q1. Virtual or not?

```cpp
#include <iostream>

class Base {
public:
    void speak() { std::cout << "Base\n"; }
};

class Derived : public Base {
public:
    void speak() { std::cout << "Derived\n"; }
};

int main() {
    Derived d;
    Base* p = &d;
    p->speak();
    return 0;
}
```

What prints? What one keyword on `Base::speak` changes the output?

---

### Q2. The hidden override bug

```cpp
#include <iostream>

class Base {
public:
    virtual void process(int x) { std::cout << "Base " << x << '\n'; }
};

class Derived : public Base {
public:
    void process(double x) { std::cout << "Derived " << x << '\n'; }
};

int main() {
    Derived d;
    Base* p = &d;
    p->process(3);
    return 0;
}
```

What prints? Is `Derived::process` overriding `Base::process`? How would `override` help?

---

### Q3. Slicing surprise

```cpp
#include <iostream>

class Animal {
public:
    virtual void name() const { std::cout << "Animal\n"; }
    virtual ~Animal() = default;
};

class Cat : public Animal {
public:
    void name() const override { std::cout << "Cat\n"; }
};

void print_name(Animal a) {   // note: pass by VALUE
    a.name();
}

int main() {
    Cat c;
    print_name(c);
    return 0;
}
```

What prints? Why? What's the one-character fix to the parameter?

---

### Q4. Missing virtual destructor

```cpp
#include <iostream>

class Base {
public:
    ~Base() { std::cout << "~Base\n"; }
};

class Derived : public Base {
    int* data;
public:
    Derived() : data(new int[100]) {}
    ~Derived() {
        delete[] data;
        std::cout << "~Derived\n";
    }
};

int main() {
    Base* p = new Derived();
    delete p;
    return 0;
}
```

What destructors run (and in what order)? Is there a resource leak? What's the fix?

---

### Q5. Abstract or concrete?

```cpp
#include <iostream>

class Widget {
public:
    virtual void draw() = 0;
    virtual void resize(int w, int h) { /* default resize */ }
};

class Button : public Widget {
public:
    void draw() override { std::cout << "Button\n"; }
};

int main() {
    Button b;
    Widget* w = &b;
    w->draw();
    // Widget w2;   // uncomment mentally — legal or not?
    return 0;
}
```

(a) Does this compile as written?
(b) Can you create a `Widget` object directly?
(c) What must `Button` implement to be instantiable?

---

When you've answered all 5 in your own words, open `answers.md`.
