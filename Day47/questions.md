# Day 47 -- 5 Tricky Questions

> Theme: **Move semantics advanced**
> Try **without** peeking at `answers.md`. Write your guess, then compile/check.

---

### Q1. Predict / explain

Related to: `Value categories recap`

```cpp
#include <iostream>
int main() {
    // Sketch: what can go wrong if you ignore the rules for "Value categories recap"?
    std::cout << "think about lifetimes, ownership, or complexity\n";
    return 0;
}
```

What is the most common bug around `Value categories recap`, and how do you prevent it?

---

### Q2. Design choice

Related to: `Move-only types`

When would you choose `Move-only types` over a simpler alternative from earlier days? Give one concrete scenario and one counter-scenario.

---

### Q3. Compile or runtime?

Related to: `NRVO / RVO`

Is a mistake with `NRVO / RVO` more likely to be a **compile error**, **linker error**, **runtime bug**, or **undefined behaviour**? Justify with one example.

---

### Q4. Complexity / cost

Related to: `Containers and moves`

What is the typical time/space cost of using `Containers and moves` naively, and what is one optimisation or better API choice?

---

### Q5. Integrate three concepts

Combine `Value categories recap`, `NRVO / RVO`, and `Debugging unexpected copies` in a 15-30 line program that could appear in a real tool (CLI, parser, container wrapper, or concurrency sketch). What invariants must hold?

---

When you've answered all 5 in your own words, open `answers.md`.
