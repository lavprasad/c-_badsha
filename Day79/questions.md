# Day 79 -- 5 Tricky Questions

> Theme: **Build systems lite**
> Try **without** peeking at `answers.md`. Write your guess, then compile/check.

---

### Q1. Predict / explain

Related to: `Why build systems`

```cpp
#include <iostream>
int main() {
    // Sketch: what can go wrong if you ignore the rules for "Why build systems"?
    std::cout << "think about lifetimes, ownership, or complexity\n";
    return 0;
}
```

What is the most common bug around `Why build systems`, and how do you prevent it?

---

### Q2. Design choice

Related to: `CMake mental model`

When would you choose `CMake mental model` over a simpler alternative from earlier days? Give one concrete scenario and one counter-scenario.

---

### Q3. Compile or runtime?

Related to: `Debug vs Release`

Is a mistake with `Debug vs Release` more likely to be a **compile error**, **linker error**, **runtime bug**, or **undefined behaviour**? Justify with one example.

---

### Q4. Complexity / cost

Related to: `Compile flags`

What is the typical time/space cost of using `Compile flags` naively, and what is one optimisation or better API choice?

---

### Q5. Integrate three concepts

Combine `Why build systems`, `Debug vs Release`, and `Reproducible builds idea` in a 15-30 line program that could appear in a real tool (CLI, parser, container wrapper, or concurrency sketch). What invariants must hold?

---

When you've answered all 5 in your own words, open `answers.md`.
