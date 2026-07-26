# Day 59 -- 5 Tricky Questions

> Theme: **Pimpl idiom**
> Try **without** peeking at `answers.md`. Write your guess, then compile/check.

---

### Q1. Predict / explain

Related to: `Why Pimpl`

```cpp
#include <iostream>
int main() {
    // Sketch: what can go wrong if you ignore the rules for "Why Pimpl"?
    std::cout << "think about lifetimes, ownership, or complexity\n";
    return 0;
}
```

What is the most common bug around `Why Pimpl`, and how do you prevent it?

---

### Q2. Design choice

Related to: `Incomplete types`

When would you choose `Incomplete types` over a simpler alternative from earlier days? Give one concrete scenario and one counter-scenario.

---

### Q3. Compile or runtime?

Related to: `ABI stability`

Is a mistake with `ABI stability` more likely to be a **compile error**, **linker error**, **runtime bug**, or **undefined behaviour**? Justify with one example.

---

### Q4. Complexity / cost

Related to: `Costs of Pimpl`

What is the typical time/space cost of using `Costs of Pimpl` naively, and what is one optimisation or better API choice?

---

### Q5. Integrate three concepts

Combine `Why Pimpl`, `ABI stability`, and `Moving Pimpl types` in a 15-30 line program that could appear in a real tool (CLI, parser, container wrapper, or concurrency sketch). What invariants must hold?

---

When you've answered all 5 in your own words, open `answers.md`.
