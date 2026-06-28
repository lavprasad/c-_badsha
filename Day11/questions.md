# Day 11 — 5 Tricky Questions

> Try **without** running the code or peeking at `answers.md`. Write your guess on paper / in a comment, *then* compile and check.

---

### Q1. After std::move

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

What prints? Is it safe to use `a` after the move? What can you rely on?

---

### Q2. unique_ptr copy

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

Does this compile? How do you transfer ownership correctly?

---

### Q3. shared_ptr cycle (conceptual)

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

Do the destructors run when `main` ends? Why or why not? (No need to fix — explain the problem.)

---

### Q4. Catch by value vs reference

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

Does this work? What's wrong with catching by value? What's the idiomatic catch?

---

### Q5. noexcept and vector reallocation

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

Why mark the move operations `noexcept`? What would happen during `vector` growth if move were throwing?

---

When you've answered all 5 in your own words, open `answers.md`.
