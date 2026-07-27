# Day 07 — 5 Tricky Sawaal

> Code chalaye **bina** aur `answers.md` me jhaanke bina try karo. Apna guess kaagaz par / comment me likho, *phir* compile karke check karo.

---

### Q1. Virtual hai ya nahi?

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

Kya print hota hai? `Base::speak` par kaunsa ek keyword output badal dega?

---

### Q2. Chhupa hua override bug

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

Kya print hota hai? Kya `Derived::process` `Base::process` ko override kar raha hai? `override` yahan kaise madad karta?

---

### Q3. Slicing ka jhatka

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

void print_name(Animal a) {   // dhyan do: VALUE se pass
    a.name();
}

int main() {
    Cat c;
    print_name(c);
    return 0;
}
```

Kya print hota hai? Kyun? Parameter me ek character ka fix kya hai?

---

### Q4. Virtual destructor missing

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

Kaunse destructors chalte hain (aur kis order me)? Kya koi resource leak hai? Fix kya hai?

---

### Q5. Abstract ya concrete?

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
    // Widget w2;   // dimaag me uncomment karo — legal hai ya nahi?
    return 0;
}
```

(a) Jaisa likha hai, kya ye compile hota hai?
(b) Kya aap seedha `Widget` object bana sakte ho?
(c) `Button` ko instantiable banne ke liye kya implement karna zaroori hai?

---

Jab paanchon ka jawab apne shabdon me de do, tab `answers.md` kholo.
