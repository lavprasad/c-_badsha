# Day 194 -- 5 Tricky Questions

> Theme: **Reading the standard (practical)**
> Try **without** peeking at `answers.md`. Write your guess, then compile/check.

---

### Q1. Predict / explain

Related to: `How to navigate`

```cpp
#include <iostream>
int main() {
    // Sketch: what can go wrong if you ignore the rules for "How to navigate"?
    std::cout << "think about lifetimes, ownership, or complexity\n";
    return 0;
}
```

What is the most common bug around `How to navigate`, and how do you prevent it?

---

### Q2. Design choice

Related to: `Ill-formed vs UB`

When would you choose `Ill-formed vs UB` over a simpler alternative from earlier days? Give one concrete scenario and one counter-scenario.

---

### Q3. Compile or runtime?

Related to: `Implementation freedom`

Is a mistake with `Implementation freedom` more likely to be a **compile error**, **linker error**, **runtime bug**, or **undefined behaviour**? Justify with one example.

---

### Q4. Complexity / cost

Related to: `cppreference vs standard`

What is the typical time/space cost of using `cppreference vs standard` naively, and what is one optimisation or better API choice?

---

### Q5. Integrate three concepts

Combine `How to navigate`, `Implementation freedom`, and `Experiment + read` in a 15-30 line program that could appear in a real tool (CLI, parser, container wrapper, or concurrency sketch). What invariants must hold?

---

When you've answered all 5 in your own words, open `answers.md`.
