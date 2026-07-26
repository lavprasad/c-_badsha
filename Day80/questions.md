# Day 80 -- 5 Tricky Questions

> Theme: **Linking & libraries**
> Try **without** peeking at `answers.md`. Write your guess, then compile/check.

---

### Q1. Predict / explain

Related to: `Static vs shared libs`

```cpp
#include <iostream>
int main() {
    // Sketch: what can go wrong if you ignore the rules for "Static vs shared libs"?
    std::cout << "think about lifetimes, ownership, or complexity\n";
    return 0;
}
```

What is the most common bug around `Static vs shared libs`, and how do you prevent it?

---

### Q2. Design choice

Related to: `undefined reference triage`

When would you choose `undefined reference triage` over a simpler alternative from earlier days? Give one concrete scenario and one counter-scenario.

---

### Q3. Compile or runtime?

Related to: `Link order`

Is a mistake with `Link order` more likely to be a **compile error**, **linker error**, **runtime bug**, or **undefined behaviour**? Justify with one example.

---

### Q4. Complexity / cost

Related to: `Header-only tradeoffs`

What is the typical time/space cost of using `Header-only tradeoffs` naively, and what is one optimisation or better API choice?

---

### Q5. Integrate three concepts

Combine `Static vs shared libs`, `Link order`, and `Versioning libs` in a 15-30 line program that could appear in a real tool (CLI, parser, container wrapper, or concurrency sketch). What invariants must hold?

---

When you've answered all 5 in your own words, open `answers.md`.
