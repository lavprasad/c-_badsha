# Day 147 -- 5 Tricky Questions

> Theme: **Database-ish in process**
> Try **without** peeking at `answers.md`. Write your guess, then compile/check.

---

### Q1. Predict / explain

Related to: `B-tree idea`

```cpp
#include <iostream>
int main() {
    // Sketch: what can go wrong if you ignore the rules for "B-tree idea"?
    std::cout << "think about lifetimes, ownership, or complexity\n";
    return 0;
}
```

What is the most common bug around `B-tree idea`, and how do you prevent it?

---

### Q2. Design choice

Related to: `WAL idea`

When would you choose `WAL idea` over a simpler alternative from earlier days? Give one concrete scenario and one counter-scenario.

---

### Q3. Compile or runtime?

Related to: `Transactions lite`

Is a mistake with `Transactions lite` more likely to be a **compile error**, **linker error**, **runtime bug**, or **undefined behaviour**? Justify with one example.

---

### Q4. Complexity / cost

Related to: `Query planning lite`

What is the typical time/space cost of using `Query planning lite` naively, and what is one optimisation or better API choice?

---

### Q5. Integrate three concepts

Combine `B-tree idea`, `Transactions lite`, and `Durability` in a 15-30 line program that could appear in a real tool (CLI, parser, container wrapper, or concurrency sketch). What invariants must hold?

---

When you've answered all 5 in your own words, open `answers.md`.
