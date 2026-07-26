# Day 201 -- 5 Tricky Questions

> Theme: **Cross-platform C++**
> Try **without** peeking at `answers.md`. Write your guess, then compile/check.

---

### Q1. Predict / explain

Related to: `ifdef strategy`

```cpp
#include <iostream>
int main() {
    // Sketch: what can go wrong if you ignore the rules for "ifdef strategy"?
    std::cout << "think about lifetimes, ownership, or complexity\n";
    return 0;
}
```

What is the most common bug around `ifdef strategy`, and how do you prevent it?

---

### Q2. Design choice

Related to: `Line endings`

When would you choose `Line endings` over a simpler alternative from earlier days? Give one concrete scenario and one counter-scenario.

---

### Q3. Compile or runtime?

Related to: `Type sizes`

Is a mistake with `Type sizes` more likely to be a **compile error**, **linker error**, **runtime bug**, or **undefined behaviour**? Justify with one example.

---

### Q4. Complexity / cost

Related to: `GUI caution`

What is the typical time/space cost of using `GUI caution` naively, and what is one optimisation or better API choice?

---

### Q5. Integrate three concepts

Combine `ifdef strategy`, `Type sizes`, and `Abstraction layers` in a 15-30 line program that could appear in a real tool (CLI, parser, container wrapper, or concurrency sketch). What invariants must hold?

---

When you've answered all 5 in your own words, open `answers.md`.
