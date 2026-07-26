# Day 53 -- 5 Tricky Questions

> Theme: **Virtuals & polymorphism patterns**
> Try **without** peeking at `answers.md`. Write your guess, then compile/check.

---

### Q1. Predict / explain

Related to: `Dynamic dispatch costs`

```cpp
#include <iostream>
int main() {
    // Sketch: what can go wrong if you ignore the rules for "Dynamic dispatch costs"?
    std::cout << "think about lifetimes, ownership, or complexity\n";
    return 0;
}
```

What is the most common bug around `Dynamic dispatch costs`, and how do you prevent it?

---

### Q2. Design choice

Related to: `Pure virtual with body`

When would you choose `Pure virtual with body` over a simpler alternative from earlier days? Give one concrete scenario and one counter-scenario.

---

### Q3. Compile or runtime?

Related to: `Virtual assignment pitfalls`

Is a mistake with `Virtual assignment pitfalls` more likely to be a **compile error**, **linker error**, **runtime bug**, or **undefined behaviour**? Justify with one example.

---

### Q4. Complexity / cost

Related to: `Type erasure vs inheritance`

What is the typical time/space cost of using `Type erasure vs inheritance` naively, and what is one optimisation or better API choice?

---

### Q5. Integrate three concepts

Combine `Dynamic dispatch costs`, `Virtual assignment pitfalls`, and `Avoiding dynamic_cast spam` in a 15-30 line program that could appear in a real tool (CLI, parser, container wrapper, or concurrency sketch). What invariants must hold?

---

When you've answered all 5 in your own words, open `answers.md`.
