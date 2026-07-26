# Day 113 -- 5 Tricky Questions

> Theme: **Concepts basics**
> Try **without** peeking at `answers.md`. Write your guess, then compile/check.

---

### Q1. Predict / explain

Related to: `What concepts solve`

```cpp
#include <iostream>
int main() {
    // Sketch: what can go wrong if you ignore the rules for "What concepts solve"?
    std::cout << "think about lifetimes, ownership, or complexity\n";
    return 0;
}
```

What is the most common bug around `What concepts solve`, and how do you prevent it?

---

### Q2. Design choice

Related to: `concept definitions`

When would you choose `concept definitions` over a simpler alternative from earlier days? Give one concrete scenario and one counter-scenario.

---

### Q3. Compile or runtime?

Related to: `Constrained templates`

Is a mistake with `Constrained templates` more likely to be a **compile error**, **linker error**, **runtime bug**, or **undefined behaviour**? Justify with one example.

---

### Q4. Complexity / cost

Related to: `Abbreviated function templates`

What is the typical time/space cost of using `Abbreviated function templates` naively, and what is one optimisation or better API choice?

---

### Q5. Integrate three concepts

Combine `What concepts solve`, `Constrained templates`, and `Concept refinement` in a 15-30 line program that could appear in a real tool (CLI, parser, container wrapper, or concurrency sketch). What invariants must hold?

---

When you've answered all 5 in your own words, open `answers.md`.
