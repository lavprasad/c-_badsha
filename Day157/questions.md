# Day 157 -- 5 Tricky Questions

> Theme: **Trees basics**
> Try **without** peeking at `answers.md`. Write your guess, then compile/check.

---

### Q1. Predict / explain

Related to: `Binary tree nodes`

```cpp
#include <iostream>
int main() {
    // Sketch: what can go wrong if you ignore the rules for "Binary tree nodes"?
    std::cout << "think about lifetimes, ownership, or complexity\n";
    return 0;
}
```

What is the most common bug around `Binary tree nodes`, and how do you prevent it?

---

### Q2. Design choice

Related to: `BST insert/search`

When would you choose `BST insert/search` over a simpler alternative from earlier days? Give one concrete scenario and one counter-scenario.

---

### Q3. Compile or runtime?

Related to: `LCA idea`

Is a mistake with `LCA idea` more likely to be a **compile error**, **linker error**, **runtime bug**, or **undefined behaviour**? Justify with one example.

---

### Q4. Complexity / cost

Related to: `Ownership of nodes`

What is the typical time/space cost of using `Ownership of nodes` naively, and what is one optimisation or better API choice?

---

### Q5. Integrate three concepts

Combine `Binary tree nodes`, `LCA idea`, and `Balancedness idea` in a 15-30 line program that could appear in a real tool (CLI, parser, container wrapper, or concurrency sketch). What invariants must hold?

---

When you've answered all 5 in your own words, open `answers.md`.
