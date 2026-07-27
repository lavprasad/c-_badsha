# Day 11 — 5 Tricky Sawaal

> Code chalaye **bina** aur `answers.md` me jhaanke bina try karo. Apna guess kaagaz par / comment me likho, *phir* compile karke check karo.

---

### Q1. std::move ke baad

```cpp
#include <iostream>
#include <string>
#include <utility>

int main() {
    std::string a = "hello world";
    std::string b = std::move(a);

    std::cout << "a.size()=" << a.size() << " b=" << b << '\n';
    return 0;
}
```

Kya print hota hai? Kya move ke baad `a` use karna safe hai? Aap kis cheez par bharosa kar sakte ho?

---

### Q2. unique_ptr ki copy

```cpp
#include <iostream>
#include <memory>

int main() {
    auto p1 = std::make_unique<int>(42);
    auto p2 = p1;

    std::cout << *p1 << ' ' << *p2 << '\n';
    return 0;
}
```

Kya ye compile hota hai? Ownership sahi tarike se kaise transfer karoge?

---

### Q3. shared_ptr ka cycle (samajhne ke liye)

```cpp
#include <iostream>
#include <memory>

struct Node {
    std::shared_ptr<Node> next;
    ~Node() { std::cout << "~Node\n"; }
};

int main() {
    auto a = std::make_shared<Node>();
    auto b = std::make_shared<Node>();
    a->next = b;
    b->next = a;
    return 0;
}
```

`main` khatam hone par kya destructors chalte hain? Kyun ya kyun nahi? (Fix karne ki zaroorat nahi — samasya samjhao.)

---

### Q4. Value se catch vs reference se catch

```cpp
#include <iostream>
#include <stdexcept>

int main() {
    try {
        throw std::runtime_error("fail");
    } catch (std::runtime_error e) {
        std::cout << e.what() << '\n';
    }
    return 0;
}
```

Kya ye chalta hai? Value se catch karne me kya galat hai? Idiomatic catch kaunsa hai?

---

### Q5. noexcept aur vector ka reallocation

```cpp
#include <iostream>
#include <vector>

class MoveOnly {
    int* p;
public:
    MoveOnly() : p(new int(0)) {}
    ~MoveOnly() { delete p; }
    MoveOnly(MoveOnly&& o) noexcept : p(o.p) { o.p = nullptr; }
    MoveOnly& operator=(MoveOnly&& o) noexcept {
        if (this != &o) { delete p; p = o.p; o.p = nullptr; }
        return *this;
    }
    MoveOnly(const MoveOnly&) = delete;
    MoveOnly& operator=(const MoveOnly&) = delete;
};

int main() {
    std::vector<MoveOnly> v;
    for (int i = 0; i < 5; ++i) v.emplace_back();
    std::cout << "size=" << v.size() << '\n';
    return 0;
}
```

Move operations par `noexcept` kyun lagaya? Agar move throw kar sakta hota to `vector` ke badhne ke waqt kya hota?

---

Jab paanchon ka jawab apne shabdon me de do, tab `answers.md` kholo.
