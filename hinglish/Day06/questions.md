# Day 06 — 5 Tricky Sawaal

> Code chalaye **bina** aur `answers.md` me jhaanke bina try karo. Apna guess kaagaz par / comment me likho, *phir* compile karke check karo.

---

### Q1. Default access

```cpp
#include <iostream>
class Foo {
    int x;   // abhi koi access specifier nahi
public:
    int get() const { return x; }
};
struct Bar {
    int y;
};
int main() {
    Bar b;
    b.y = 10;
    Foo f;
    std::cout << f.get() << '\n';
    return 0;
}
```

Kya aap `main` me `f.x = 5;` likh sakte ho? Aur `b.y = 10;`?

---

### Q2. Constructor ka order

```cpp
#include <iostream>
class Demo {
public:
    Demo() : b_(2), a_(1) {
        std::cout << "ctor body\n";
    }
    ~Demo() { std::cout << "dtor\n"; }
private:
    int a_, b_;
};
int main() {
    Demo d;
    return 0;
}
```

Members kis order me initialise honge — list order `(b_, a_)` ya declaration order `(a_, b_)`?

---

### Q3. const correctness

```cpp
#include <iostream>
class Widget {
public:
    int value() { return n_; }
    int value() const { return n_ + 1; }
private:
    int n_ = 0;
};
int main() {
    Widget w;
    const Widget cw;
    std::cout << w.value() << ' ';
    std::cout << cw.value() << '\n';
    return 0;
}
```

Kya print hota hai? Har object ke liye kaunsa overload call hota hai?

---

### Q4. this aur chaining

```cpp
#include <iostream>
class Builder {
public:
    Builder& add(int x) {
        sum_ += x;
        return *this;
    }
    int sum() const { return sum_; }
private:
    int sum_ = 0;
};
int main() {
    Builder b;
    b.add(1).add(2).add(3);
    std::cout << b.sum() << '\n';
    return 0;
}
```

Kya print hota hai? `add` kaunsa type return karta hai aur kyun?

---

### Q5. Destructor ki timing

```cpp
#include <iostream>
class Tag {
public:
    explicit Tag(char c) : c_(c) { std::cout << c_; }
    ~Tag() { std::cout << c_; }
private:
    char c_;
};
int main() {
    Tag a('A');
    { Tag b('B'); }
    Tag c('C');
    return 0;
}
```

Kaunsi ek string print hoti hai (bina space/newline)?

---

Jab paanchon ka jawab apne shabdon me de do, tab `answers.md` kholo.
