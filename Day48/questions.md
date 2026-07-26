# Day 48 -- 5 Tricky Questions

> Theme: **References collapsing & forwarding**
> Try **without** peeking at `answers.md`. Write your guess, then compile/check.

---

### Q1. Predict / explain

Related to: `lvalue/rvalue ref collapse`

```cpp
#include <iostream>
int main() {
    // Sketch: what can go wrong if you ignore the rules for "lvalue/rvalue ref collapse"?
    std::cout << "think about lifetimes, ownership, or complexity\n";
    return 0;
}
```

What is the most common bug around `lvalue/rvalue ref collapse`, and how do you prevent it?

---

### Q2. Design choice

Related to: `std::forward`

When would you choose `std::forward` over a simpler alternative from earlier days? Give one concrete scenario and one counter-scenario.

---

### Q3. Compile or runtime?

Related to: `Forwarding in wrappers`

Is a mistake with `Forwarding in wrappers` more likely to be a **compile error**, **linker error**, **runtime bug**, or **undefined behaviour**? Justify with one example.

---

### Q4. Complexity / cost

Related to: `Common deduction mistakes`

What is the typical time/space cost of using `Common deduction mistakes` naively, and what is one optimisation or better API choice?

---

### Q5. Integrate three concepts

Combine `lvalue/rvalue ref collapse`, `Forwarding in wrappers`, and `Emplace forwarding` in a 15-30 line program that could appear in a real tool (CLI, parser, container wrapper, or concurrency sketch). What invariants must hold?

---

When you've answered all 5 in your own words, open `answers.md`.
