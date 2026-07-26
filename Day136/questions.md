# Day 136 -- 5 Tricky Questions

> Theme: **Small Buffer Optimization**
> Try **without** peeking at `answers.md`. Write your guess, then compile/check.

---

### Q1. Predict / explain

Related to: `SBO / SSO idea`

```cpp
#include <iostream>
int main() {
    // Sketch: what can go wrong if you ignore the rules for "SBO / SSO idea"?
    std::cout << "think about lifetimes, ownership, or complexity\n";
    return 0;
}
```

What is the most common bug around `SBO / SSO idea`, and how do you prevent it?

---

### Q2. Design choice

Related to: `Implementation sketch`

When would you choose `Implementation sketch` over a simpler alternative from earlier days? Give one concrete scenario and one counter-scenario.

---

### Q3. Compile or runtime?

Related to: `Move interactions`

Is a mistake with `Move interactions` more likely to be a **compile error**, **linker error**, **runtime bug**, or **undefined behaviour**? Justify with one example.

---

### Q4. Complexity / cost

Related to: `Measuring benefit`

What is the typical time/space cost of using `Measuring benefit` naively, and what is one optimisation or better API choice?

---

### Q5. Integrate three concepts

Combine `SBO / SSO idea`, `Move interactions`, and `Tradeoffs` in a 15-30 line program that could appear in a real tool (CLI, parser, container wrapper, or concurrency sketch). What invariants must hold?

---

When you've answered all 5 in your own words, open `answers.md`.
