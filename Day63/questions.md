# Day 63 -- 5 Tricky Questions

> Theme: **Creational patterns**
> Try **without** peeking at `answers.md`. Write your guess, then compile/check.

---

### Q1. Predict / explain

Related to: `Factory method`

```cpp
#include <iostream>
int main() {
    // Sketch: what can go wrong if you ignore the rules for "Factory method"?
    std::cout << "think about lifetimes, ownership, or complexity\n";
    return 0;
}
```

What is the most common bug around `Factory method`, and how do you prevent it?

---

### Q2. Design choice

Related to: `Builder`

When would you choose `Builder` over a simpler alternative from earlier days? Give one concrete scenario and one counter-scenario.

---

### Q3. Compile or runtime?

Related to: `Singleton (and why careful)`

Is a mistake with `Singleton (and why careful)` more likely to be a **compile error**, **linker error**, **runtime bug**, or **undefined behaviour**? Justify with one example.

---

### Q4. Complexity / cost

Related to: `make_* helpers`

What is the typical time/space cost of using `make_* helpers` naively, and what is one optimisation or better API choice?

---

### Q5. Integrate three concepts

Combine `Factory method`, `Singleton (and why careful)`, and `Anti-patterns` in a 15-30 line program that could appear in a real tool (CLI, parser, container wrapper, or concurrency sketch). What invariants must hold?

---

When you've answered all 5 in your own words, open `answers.md`.
