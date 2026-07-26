# Day 138 -- 5 Tricky Questions

> Theme: **Inlining & linkage**
> Try **without** peeking at `answers.md`. Write your guess, then compile/check.

---

### Q1. Predict / explain

Related to: `inline functions`

```cpp
#include <iostream>
int main() {
    // Sketch: what can go wrong if you ignore the rules for "inline functions"?
    std::cout << "think about lifetimes, ownership, or complexity\n";
    return 0;
}
```

What is the most common bug around `inline functions`, and how do you prevent it?

---

### Q2. Design choice

Related to: `ODR with inline`

When would you choose `ODR with inline` over a simpler alternative from earlier days? Give one concrete scenario and one counter-scenario.

---

### Q3. Compile or runtime?

Related to: `LTO mindset`

Is a mistake with `LTO mindset` more likely to be a **compile error**, **linker error**, **runtime bug**, or **undefined behaviour**? Justify with one example.

---

### Q4. Complexity / cost

Related to: `Outline cold paths`

What is the typical time/space cost of using `Outline cold paths` naively, and what is one optimisation or better API choice?

---

### Q5. Integrate three concepts

Combine `inline functions`, `LTO mindset`, and `Anonymous namespace linkage` in a 15-30 line program that could appear in a real tool (CLI, parser, container wrapper, or concurrency sketch). What invariants must hold?

---

When you've answered all 5 in your own words, open `answers.md`.
