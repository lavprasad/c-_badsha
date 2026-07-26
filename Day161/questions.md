# Day 161 -- 5 Tricky Questions

> Theme: **Union-Find / DSU**
> Try **without** peeking at `answers.md`. Write your guess, then compile/check.

---

### Q1. Predict / explain

Related to: `Parent array`

```cpp
#include <iostream>
int main() {
    // Sketch: what can go wrong if you ignore the rules for "Parent array"?
    std::cout << "think about lifetimes, ownership, or complexity\n";
    return 0;
}
```

What is the most common bug around `Parent array`, and how do you prevent it?

---

### Q2. Design choice

Related to: `Union by rank`

When would you choose `Union by rank` over a simpler alternative from earlier days? Give one concrete scenario and one counter-scenario.

---

### Q3. Compile or runtime?

Related to: `Kruskal idea`

Is a mistake with `Kruskal idea` more likely to be a **compile error**, **linker error**, **runtime bug**, or **undefined behaviour**? Justify with one example.

---

### Q4. Complexity / cost

Related to: `Complexity`

What is the typical time/space cost of using `Complexity` naively, and what is one optimisation or better API choice?

---

### Q5. Integrate three concepts

Combine `Parent array`, `Kruskal idea`, and `Bugs to avoid` in a 15-30 line program that could appear in a real tool (CLI, parser, container wrapper, or concurrency sketch). What invariants must hold?

---

When you've answered all 5 in your own words, open `answers.md`.
