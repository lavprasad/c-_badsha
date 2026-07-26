# Day 125 -- 5 Tricky Questions

> Theme: **Numbers & math updates**
> Try **without** peeking at `answers.md`. Write your guess, then compile/check.

---

### Q1. Predict / explain

Related to: `midpoint`

```cpp
#include <iostream>
int main() {
    // Sketch: what can go wrong if you ignore the rules for "midpoint"?
    std::cout << "think about lifetimes, ownership, or complexity\n";
    return 0;
}
```

What is the most common bug around `midpoint`, and how do you prevent it?

---

### Q2. Design choice

Related to: `cmath additions awareness`

When would you choose `cmath additions awareness` over a simpler alternative from earlier days? Give one concrete scenario and one counter-scenario.

---

### Q3. Compile or runtime?

Related to: `Safe comparisons idea`

Is a mistake with `Safe comparisons idea` more likely to be a **compile error**, **linker error**, **runtime bug**, or **undefined behaviour**? Justify with one example.

---

### Q4. Complexity / cost

Related to: `Floating classify`

What is the typical time/space cost of using `Floating classify` naively, and what is one optimisation or better API choice?

---

### Q5. Integrate three concepts

Combine `midpoint`, `Safe comparisons idea`, and `Constants (numbers header idea)` in a 15-30 line program that could appear in a real tool (CLI, parser, container wrapper, or concurrency sketch). What invariants must hold?

---

When you've answered all 5 in your own words, open `answers.md`.
