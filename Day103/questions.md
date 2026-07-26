# Day 103 -- 5 Tricky Questions

> Theme: **Cache-friendly containers**
> Try **without** peeking at `answers.md`. Write your guess, then compile/check.

---

### Q1. Predict / explain

Related to: `vector wins often`

```cpp
#include <iostream>
int main() {
    // Sketch: what can go wrong if you ignore the rules for "vector wins often"?
    std::cout << "think about lifetimes, ownership, or complexity\n";
    return 0;
}
```

What is the most common bug around `vector wins often`, and how do you prevent it?

---

### Q2. Design choice

Related to: `Small vector idea`

When would you choose `Small vector idea` over a simpler alternative from earlier days? Give one concrete scenario and one counter-scenario.

---

### Q3. Compile or runtime?

Related to: `Sparse sets idea`

Is a mistake with `Sparse sets idea` more likely to be a **compile error**, **linker error**, **runtime bug**, or **undefined behaviour**? Justify with one example.

---

### Q4. Complexity / cost

Related to: `Fragmentation`

What is the typical time/space cost of using `Fragmentation` naively, and what is one optimisation or better API choice?

---

### Q5. Integrate three concepts

Combine `vector wins often`, `Sparse sets idea`, and `Choosing by access pattern` in a 15-30 line program that could appear in a real tool (CLI, parser, container wrapper, or concurrency sketch). What invariants must hold?

---

When you've answered all 5 in your own words, open `answers.md`.
