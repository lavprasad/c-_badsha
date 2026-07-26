# Day 29 -- 5 Tricky Questions

> Theme: **Structuring larger programs**
> Try **without** peeking at `answers.md`. Write your guess, then compile/check.

---

### Q1. Predict / explain

Related to: `Multiple translation units`

```cpp
#include <iostream>
int main() {
    // Sketch: what can go wrong if you ignore the rules for "Multiple translation units"?
    std::cout << "think about lifetimes, ownership, or complexity\n";
    return 0;
}
```

What is the most common bug around `Multiple translation units`, and how do you prevent it?

---

### Q2. Design choice

Related to: `Header-only vs compiled libs`

When would you choose `Header-only vs compiled libs` over a simpler alternative from earlier days? Give one concrete scenario and one counter-scenario.

---

### Q3. Compile or runtime?

Related to: `Public vs private headers`

Is a mistake with `Public vs private headers` more likely to be a **compile error**, **linker error**, **runtime bug**, or **undefined behaviour**? Justify with one example.

---

### Q4. Complexity / cost

Related to: `Naming conventions`

What is the typical time/space cost of using `Naming conventions` naively, and what is one optimisation or better API choice?

---

### Q5. Integrate three concepts

Combine `Multiple translation units`, `Public vs private headers`, and `Local git commits` in a 15-30 line program that could appear in a real tool (CLI, parser, container wrapper, or concurrency sketch). What invariants must hold?

---

When you've answered all 5 in your own words, open `answers.md`.
