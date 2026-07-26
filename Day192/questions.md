# Day 192 -- 5 Tricky Questions

> Theme: **C++ for interviews: coding patterns**
> Try **without** peeking at `answers.md`. Write your guess, then compile/check.

---

### Q1. Predict / explain

Related to: `Sliding window catalog`

```cpp
#include <iostream>
int main() {
    // Sketch: what can go wrong if you ignore the rules for "Sliding window catalog"?
    std::cout << "think about lifetimes, ownership, or complexity\n";
    return 0;
}
```

What is the most common bug around `Sliding window catalog`, and how do you prevent it?

---

### Q2. Design choice

Related to: `DFS/BFS catalog`

When would you choose `DFS/BFS catalog` over a simpler alternative from earlier days? Give one concrete scenario and one counter-scenario.

---

### Q3. Compile or runtime?

Related to: `Heap catalog`

Is a mistake with `Heap catalog` more likely to be a **compile error**, **linker error**, **runtime bug**, or **undefined behaviour**? Justify with one example.

---

### Q4. Complexity / cost

Related to: `DP catalog`

What is the typical time/space cost of using `DP catalog` naively, and what is one optimisation or better API choice?

---

### Q5. Integrate three concepts

Combine `Sliding window catalog`, `Heap catalog`, and `Trick questions` in a 15-30 line program that could appear in a real tool (CLI, parser, container wrapper, or concurrency sketch). What invariants must hold?

---

When you've answered all 5 in your own words, open `answers.md`.
