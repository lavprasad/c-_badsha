# Day 88 -- 5 Tricky Questions

> Theme: **Thread pools idea**
> Try **without** peeking at `answers.md`. Write your guess, then compile/check.

---

### Q1. Predict / explain

Related to: `Why pools`

```cpp
#include <iostream>
int main() {
    // Sketch: what can go wrong if you ignore the rules for "Why pools"?
    std::cout << "think about lifetimes, ownership, or complexity\n";
    return 0;
}
```

What is the most common bug around `Why pools`, and how do you prevent it?

---

### Q2. Design choice

Related to: `Worker loops`

When would you choose `Worker loops` over a simpler alternative from earlier days? Give one concrete scenario and one counter-scenario.

---

### Q3. Compile or runtime?

Related to: `Task stealer idea`

Is a mistake with `Task stealer idea` more likely to be a **compile error**, **linker error**, **runtime bug**, or **undefined behaviour**? Justify with one example.

---

### Q4. Complexity / cost

Related to: `Backpressure`

What is the typical time/space cost of using `Backpressure` naively, and what is one optimisation or better API choice?

---

### Q5. Integrate three concepts

Combine `Why pools`, `Task stealer idea`, and `Sizing pools` in a 15-30 line program that could appear in a real tool (CLI, parser, container wrapper, or concurrency sketch). What invariants must hold?

---

When you've answered all 5 in your own words, open `answers.md`.
