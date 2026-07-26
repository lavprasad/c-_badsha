# Day 158 -- 5 Tricky Questions

> Theme: **Heaps & priority queues practice**
> Try **without** peeking at `answers.md`. Write your guess, then compile/check.

---

### Q1. Predict / explain

Related to: `Binary heap property`

```cpp
#include <iostream>
int main() {
    // Sketch: what can go wrong if you ignore the rules for "Binary heap property"?
    std::cout << "think about lifetimes, ownership, or complexity\n";
    return 0;
}
```

What is the most common bug around `Binary heap property`, and how do you prevent it?

---

### Q2. Design choice

Related to: `Top-K`

When would you choose `Top-K` over a simpler alternative from earlier days? Give one concrete scenario and one counter-scenario.

---

### Q3. Compile or runtime?

Related to: `Median maintenance idea`

Is a mistake with `Median maintenance idea` more likely to be a **compile error**, **linker error**, **runtime bug**, or **undefined behaviour**? Justify with one example.

---

### Q4. Complexity / cost

Related to: `Custom comparators`

What is the typical time/space cost of using `Custom comparators` naively, and what is one optimisation or better API choice?

---

### Q5. Integrate three concepts

Combine `Binary heap property`, `Median maintenance idea`, and `Stability` in a 15-30 line program that could appear in a real tool (CLI, parser, container wrapper, or concurrency sketch). What invariants must hold?

---

When you've answered all 5 in your own words, open `answers.md`.
