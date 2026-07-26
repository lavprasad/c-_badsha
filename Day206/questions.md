# Day 206 -- 5 Tricky Questions

> Theme: **Graphics pipeline awareness**
> Try **without** peeking at `answers.md`. Write your guess, then compile/check.

---

### Q1. Predict / explain

Related to: `Vertices to pixels idea`

```cpp
#include <iostream>
int main() {
    // Sketch: what can go wrong if you ignore the rules for "Vertices to pixels idea"?
    std::cout << "think about lifetimes, ownership, or complexity\n";
    return 0;
}
```

What is the most common bug around `Vertices to pixels idea`, and how do you prevent it?

---

### Q2. Design choice

Related to: `Buffers`

When would you choose `Buffers` over a simpler alternative from earlier days? Give one concrete scenario and one counter-scenario.

---

### Q3. Compile or runtime?

Related to: `Frame pacing`

Is a mistake with `Frame pacing` more likely to be a **compile error**, **linker error**, **runtime bug**, or **undefined behaviour**? Justify with one example.

---

### Q4. Complexity / cost

Related to: `Validation layers idea`

What is the typical time/space cost of using `Validation layers idea` naively, and what is one optimisation or better API choice?

---

### Q5. Integrate three concepts

Combine `Vertices to pixels idea`, `Frame pacing`, and `Asset pipelines` in a 15-30 line program that could appear in a real tool (CLI, parser, container wrapper, or concurrency sketch). What invariants must hold?

---

When you've answered all 5 in your own words, open `answers.md`.
