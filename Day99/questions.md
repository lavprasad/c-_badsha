# Day 99 -- 5 Tricky Questions

> Theme: **Caching & locality**
> Try **without** peeking at `answers.md`. Write your guess, then compile/check.

---

### Q1. Predict / explain

Related to: `CPU caches`

```cpp
#include <iostream>
int main() {
    // Sketch: what can go wrong if you ignore the rules for "CPU caches"?
    std::cout << "think about lifetimes, ownership, or complexity\n";
    return 0;
}
```

What is the most common bug around `CPU caches`, and how do you prevent it?

---

### Q2. Design choice

Related to: `Temporal locality`

When would you choose `Temporal locality` over a simpler alternative from earlier days? Give one concrete scenario and one counter-scenario.

---

### Q3. Compile or runtime?

Related to: `False sharing again`

Is a mistake with `False sharing again` more likely to be a **compile error**, **linker error**, **runtime bug**, or **undefined behaviour**? Justify with one example.

---

### Q4. Complexity / cost

Related to: `Working set`

What is the typical time/space cost of using `Working set` naively, and what is one optimisation or better API choice?

---

### Q5. Integrate three concepts

Combine `CPU caches`, `False sharing again`, and `Measuring with timing` in a 15-30 line program that could appear in a real tool (CLI, parser, container wrapper, or concurrency sketch). What invariants must hold?

---

When you've answered all 5 in your own words, open `answers.md`.
