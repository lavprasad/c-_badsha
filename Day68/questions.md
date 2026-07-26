# Day 68 -- 5 Tricky Questions

> Theme: **Policy-based design**
> Try **without** peeking at `answers.md`. Write your guess, then compile/check.

---

### Q1. Predict / explain

Related to: `Policies as template params`

```cpp
#include <iostream>
int main() {
    // Sketch: what can go wrong if you ignore the rules for "Policies as template params"?
    std::cout << "think about lifetimes, ownership, or complexity\n";
    return 0;
}
```

What is the most common bug around `Policies as template params`, and how do you prevent it?

---

### Q2. Design choice

Related to: `Orthogonal policies`

When would you choose `Orthogonal policies` over a simpler alternative from earlier days? Give one concrete scenario and one counter-scenario.

---

### Q3. Compile or runtime?

Related to: `Named template args idea`

Is a mistake with `Named template args idea` more likely to be a **compile error**, **linker error**, **runtime bug**, or **undefined behaviour**? Justify with one example.

---

### Q4. Complexity / cost

Related to: `Compile-time wiring`

What is the typical time/space cost of using `Compile-time wiring` naively, and what is one optimisation or better API choice?

---

### Q5. Integrate three concepts

Combine `Policies as template params`, `Named template args idea`, and `Library examples mindset` in a 15-30 line program that could appear in a real tool (CLI, parser, container wrapper, or concurrency sketch). What invariants must hold?

---

When you've answered all 5 in your own words, open `answers.md`.
