# Day 65 -- 5 Tricky Questions

> Theme: **Behavioral patterns**
> Try **without** peeking at `answers.md`. Write your guess, then compile/check.

---

### Q1. Predict / explain

Related to: `Strategy`

```cpp
#include <iostream>
int main() {
    // Sketch: what can go wrong if you ignore the rules for "Strategy"?
    std::cout << "think about lifetimes, ownership, or complexity\n";
    return 0;
}
```

What is the most common bug around `Strategy`, and how do you prevent it?

---

### Q2. Design choice

Related to: `Command`

When would you choose `Command` over a simpler alternative from earlier days? Give one concrete scenario and one counter-scenario.

---

### Q3. Compile or runtime?

Related to: `Template method`

Is a mistake with `Template method` more likely to be a **compile error**, **linker error**, **runtime bug**, or **undefined behaviour**? Justify with one example.

---

### Q4. Complexity / cost

Related to: `Mediator`

What is the typical time/space cost of using `Mediator` naively, and what is one optimisation or better API choice?

---

### Q5. Integrate three concepts

Combine `Strategy`, `Template method`, and `Iterator pattern vs STL` in a 15-30 line program that could appear in a real tool (CLI, parser, container wrapper, or concurrency sketch). What invariants must hold?

---

When you've answered all 5 in your own words, open `answers.md`.
