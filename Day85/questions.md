# Day 85 -- 5 Tricky Questions

> Theme: **atomics basics**
> Try **without** peeking at `answers.md`. Write your guess, then compile/check.

---

### Q1. Predict / explain

Related to: `std::atomic`

```cpp
#include <iostream>
int main() {
    // Sketch: what can go wrong if you ignore the rules for "std::atomic"?
    std::cout << "think about lifetimes, ownership, or complexity\n";
    return 0;
}
```

What is the most common bug around `std::atomic`, and how do you prevent it?

---

### Q2. Design choice

Related to: `fetch_add`

When would you choose `fetch_add` over a simpler alternative from earlier days? Give one concrete scenario and one counter-scenario.

---

### Q3. Compile or runtime?

Related to: `memory_order relaxed intuition`

Is a mistake with `memory_order relaxed intuition` more likely to be a **compile error**, **linker error**, **runtime bug**, or **undefined behaviour**? Justify with one example.

---

### Q4. Complexity / cost

Related to: `atomic flags`

What is the typical time/space cost of using `atomic flags` naively, and what is one optimisation or better API choice?

---

### Q5. Integrate three concepts

Combine `std::atomic`, `memory_order relaxed intuition`, and `ABA problem intro` in a 15-30 line program that could appear in a real tool (CLI, parser, container wrapper, or concurrency sketch). What invariants must hold?

---

When you've answered all 5 in your own words, open `answers.md`.
