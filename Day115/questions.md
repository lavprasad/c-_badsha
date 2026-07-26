# Day 115 -- 5 Tricky Questions

> Theme: **std::span**
> Try **without** peeking at `answers.md`. Write your guess, then compile/check.

---

### Q1. Predict / explain

Related to: `Non-owning contiguous view`

```cpp
#include <iostream>
int main() {
    // Sketch: what can go wrong if you ignore the rules for "Non-owning contiguous view"?
    std::cout << "think about lifetimes, ownership, or complexity\n";
    return 0;
}
```

What is the most common bug around `Non-owning contiguous view`, and how do you prevent it?

---

### Q2. Design choice

Related to: `subspan`

When would you choose `subspan` over a simpler alternative from earlier days? Give one concrete scenario and one counter-scenario.

---

### Q3. Compile or runtime?

Related to: `API boundaries`

Is a mistake with `API boundaries` more likely to be a **compile error**, **linker error**, **runtime bug**, or **undefined behaviour**? Justify with one example.

---

### Q4. Complexity / cost

Related to: `Lifetime safety`

What is the typical time/space cost of using `Lifetime safety` naively, and what is one optimisation or better API choice?

---

### Q5. Integrate three concepts

Combine `Non-owning contiguous view`, `API boundaries`, and `const span` in a 15-30 line program that could appear in a real tool (CLI, parser, container wrapper, or concurrency sketch). What invariants must hold?

---

When you've answered all 5 in your own words, open `answers.md`.
