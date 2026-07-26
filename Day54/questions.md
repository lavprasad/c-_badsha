# Day 54 -- 5 Tricky Questions

> Theme: **Multiple inheritance**
> Try **without** peeking at `answers.md`. Write your guess, then compile/check.

---

### Q1. Predict / explain

Related to: `Why MI exists`

```cpp
#include <iostream>
int main() {
    // Sketch: what can go wrong if you ignore the rules for "Why MI exists"?
    std::cout << "think about lifetimes, ownership, or complexity\n";
    return 0;
}
```

What is the most common bug around `Why MI exists`, and how do you prevent it?

---

### Q2. Design choice

Related to: `Virtual base classes`

When would you choose `Virtual base classes` over a simpler alternative from earlier days? Give one concrete scenario and one counter-scenario.

---

### Q3. Compile or runtime?

Related to: `Interface MI`

Is a mistake with `Interface MI` more likely to be a **compile error**, **linker error**, **runtime bug**, or **undefined behaviour**? Justify with one example.

---

### Q4. Complexity / cost

Related to: `When to avoid MI`

What is the typical time/space cost of using `When to avoid MI` naively, and what is one optimisation or better API choice?

---

### Q5. Integrate three concepts

Combine `Why MI exists`, `Interface MI`, and `Casting across bases` in a 15-30 line program that could appear in a real tool (CLI, parser, container wrapper, or concurrency sketch). What invariants must hold?

---

When you've answered all 5 in your own words, open `answers.md`.
