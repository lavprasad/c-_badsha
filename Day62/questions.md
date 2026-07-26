# Day 62 -- 5 Tricky Questions

> Theme: **SOLID in C++**
> Try **without** peeking at `answers.md`. Write your guess, then compile/check.

---

### Q1. Predict / explain

Related to: `Single responsibility`

```cpp
#include <iostream>
int main() {
    // Sketch: what can go wrong if you ignore the rules for "Single responsibility"?
    std::cout << "think about lifetimes, ownership, or complexity\n";
    return 0;
}
```

What is the most common bug around `Single responsibility`, and how do you prevent it?

---

### Q2. Design choice

Related to: `Liskov`

When would you choose `Liskov` over a simpler alternative from earlier days? Give one concrete scenario and one counter-scenario.

---

### Q3. Compile or runtime?

Related to: `Dependency inversion`

Is a mistake with `Dependency inversion` more likely to be a **compile error**, **linker error**, **runtime bug**, or **undefined behaviour**? Justify with one example.

---

### Q4. Complexity / cost

Related to: `Over-abstracting smell`

What is the typical time/space cost of using `Over-abstracting smell` naively, and what is one optimisation or better API choice?

---

### Q5. Integrate three concepts

Combine `Single responsibility`, `Dependency inversion`, and `Refactor checklist` in a 15-30 line program that could appear in a real tool (CLI, parser, container wrapper, or concurrency sketch). What invariants must hold?

---

When you've answered all 5 in your own words, open `answers.md`.
