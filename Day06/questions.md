# Day 06 — 5 Tricky Questions

> Try **without** running the code or peeking at `answers.md`. Write your guess on paper / in a comment, *then* compile and check.

---

### Q1. Default access

```cpp
#include <iostream>
class Foo {
    int x;   // no access specifier yet
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

Can you write `f.x = 5;` in `main`? Can you write `b.y = 10;`?

---

### Q2. Constructor order

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

Members initialised in what order — list order `(b_, a_)` or declaration order `(a_, b_)`?

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

What prints? Which overload is called for each object?

---

### Q4. this and chaining

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

What prints? What type does `add` return and why?

---

### Q5. Destructor timing

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

What single string is printed (no spaces/newlines)?

---

When you've answered all 5 in your own words, open `answers.md`.
