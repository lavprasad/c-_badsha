# Day 178 -- 5 Tricky Questions

> Theme: **Memory leak hunting**
> Try **without** peeking at `answers.md`. Write your guess, then compile/check.

---

### Q1. Predict / explain

Related to: `Ownership audit`

```cpp
#include <iostream>
int main() {
    // Sketch: what can go wrong if you ignore the rules for "Ownership audit"?
    std::cout << "think about lifetimes, ownership, or complexity\n";
    return 0;
}
```

What is the most common bug around `Ownership audit`, and how do you prevent it?

---

### Q2. Design choice

Related to: `Missing delete[]`

When would you choose `Missing delete[]` over a simpler alternative from earlier days? Give one concrete scenario and one counter-scenario.

---

### Q3. Compile or runtime?

Related to: `Containers of raw ptrs`

Is a mistake with `Containers of raw ptrs` more likely to be a **compile error**, **linker error**, **runtime bug**, or **undefined behaviour**? Justify with one example.

---

### Q4. Complexity / cost

Related to: `Growth over time`

What is the typical time/space cost of using `Growth over time` naively, and what is one optimisation or better API choice?

---

### Q5. Integrate three concepts

Combine `Ownership audit`, `Containers of raw ptrs`, and `Fix patterns` in a 15-30 line program that could appear in a real tool (CLI, parser, container wrapper, or concurrency sketch). What invariants must hold?

---

When you've answered all 5 in your own words, open `answers.md`.
