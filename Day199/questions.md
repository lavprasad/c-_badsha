# Day 199 -- 5 Tricky Questions

> Theme: **Team C++ practices**
> Try **without** peeking at `answers.md`. Write your guess, then compile/check.

---

### Q1. Predict / explain

Related to: `Code ownership`

```cpp
#include <iostream>
int main() {
    // Sketch: what can go wrong if you ignore the rules for "Code ownership"?
    std::cout << "think about lifetimes, ownership, or complexity\n";
    return 0;
}
```

What is the most common bug around `Code ownership`, and how do you prevent it?

---

### Q2. Design choice

Related to: `Style automation`

When would you choose `Style automation` over a simpler alternative from earlier days? Give one concrete scenario and one counter-scenario.

---

### Q3. Compile or runtime?

Related to: `Feature flags idea`

Is a mistake with `Feature flags idea` more likely to be a **compile error**, **linker error**, **runtime bug**, or **undefined behaviour**? Justify with one example.

---

### Q4. Complexity / cost

Related to: `On-call lite`

What is the typical time/space cost of using `On-call lite` naively, and what is one optimisation or better API choice?

---

### Q5. Integrate three concepts

Combine `Code ownership`, `Feature flags idea`, and `Tech radar` in a 15-30 line program that could appear in a real tool (CLI, parser, container wrapper, or concurrency sketch). What invariants must hold?

---

When you've answered all 5 in your own words, open `answers.md`.
