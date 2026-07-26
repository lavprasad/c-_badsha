# Day 49 -- 5 Tricky Questions

> Theme: **Templates intermediate**
> Try **without** peeking at `answers.md`. Write your guess, then compile/check.

---

### Q1. Predict / explain

Related to: `Non-type template params`

```cpp
#include <iostream>
int main() {
    // Sketch: what can go wrong if you ignore the rules for "Non-type template params"?
    std::cout << "think about lifetimes, ownership, or complexity\n";
    return 0;
}
```

What is the most common bug around `Non-type template params`, and how do you prevent it?

---

### Q2. Design choice

Related to: `Template template params intro`

When would you choose `Template template params intro` over a simpler alternative from earlier days? Give one concrete scenario and one counter-scenario.

---

### Q3. Compile or runtime?

Related to: `Dependent names and typename`

Is a mistake with `Dependent names and typename` more likely to be a **compile error**, **linker error**, **runtime bug**, or **undefined behaviour**? Justify with one example.

---

### Q4. Complexity / cost

Related to: `Explicit instantiation`

What is the typical time/space cost of using `Explicit instantiation` naively, and what is one optimisation or better API choice?

---

### Q5. Integrate three concepts

Combine `Non-type template params`, `Dependent names and typename`, and `Compile-time costs` in a 15-30 line program that could appear in a real tool (CLI, parser, container wrapper, or concurrency sketch). What invariants must hold?

---

When you've answered all 5 in your own words, open `answers.md`.
