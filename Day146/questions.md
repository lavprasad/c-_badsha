# Day 146 -- 5 Tricky Questions

> Theme: **Scientific computing C++**
> Try **without** peeking at `answers.md`. Write your guess, then compile/check.

---

### Q1. Predict / explain

Related to: `Numerics stability`

```cpp
#include <iostream>
int main() {
    // Sketch: what can go wrong if you ignore the rules for "Numerics stability"?
    std::cout << "think about lifetimes, ownership, or complexity\n";
    return 0;
}
```

What is the most common bug around `Numerics stability`, and how do you prevent it?

---

### Q2. Design choice

Related to: `Contiguous storage`

When would you choose `Contiguous storage` over a simpler alternative from earlier days? Give one concrete scenario and one counter-scenario.

---

### Q3. Compile or runtime?

Related to: `Parallel reductions`

Is a mistake with `Parallel reductions` more likely to be a **compile error**, **linker error**, **runtime bug**, or **undefined behaviour**? Justify with one example.

---

### Q4. Complexity / cost

Related to: `Reproducibility`

What is the typical time/space cost of using `Reproducibility` naively, and what is one optimisation or better API choice?

---

### Q5. Integrate three concepts

Combine `Numerics stability`, `Parallel reductions`, and `Units types` in a 15-30 line program that could appear in a real tool (CLI, parser, container wrapper, or concurrency sketch). What invariants must hold?

---

When you've answered all 5 in your own words, open `answers.md`.
