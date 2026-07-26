# Day 169 -- 5 Tricky Questions

> Theme: **Geometry basics**
> Try **without** peeking at `answers.md`. Write your guess, then compile/check.

---

### Q1. Predict / explain

Related to: `Points and vectors`

```cpp
#include <iostream>
int main() {
    // Sketch: what can go wrong if you ignore the rules for "Points and vectors"?
    std::cout << "think about lifetimes, ownership, or complexity\n";
    return 0;
}
```

What is the most common bug around `Points and vectors`, and how do you prevent it?

---

### Q2. Design choice

Related to: `Orientation`

When would you choose `Orientation` over a simpler alternative from earlier days? Give one concrete scenario and one counter-scenario.

---

### Q3. Compile or runtime?

Related to: `Convex hull idea`

Is a mistake with `Convex hull idea` more likely to be a **compile error**, **linker error**, **runtime bug**, or **undefined behaviour**? Justify with one example.

---

### Q4. Complexity / cost

Related to: `Integer geometry`

What is the typical time/space cost of using `Integer geometry` naively, and what is one optimisation or better API choice?

---

### Q5. Integrate three concepts

Combine `Points and vectors`, `Convex hull idea`, and `AABB` in a 15-30 line program that could appear in a real tool (CLI, parser, container wrapper, or concurrency sketch). What invariants must hold?

---

When you've answered all 5 in your own words, open `answers.md`.
