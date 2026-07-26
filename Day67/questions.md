# Day 67 -- 5 Tricky Questions

> Theme: **CRTP**
> Try **without** peeking at `answers.md`. Write your guess, then compile/check.

---

### Q1. Predict / explain

Related to: `Curiously recurring template`

```cpp
#include <iostream>
int main() {
    // Sketch: what can go wrong if you ignore the rules for "Curiously recurring template"?
    std::cout << "think about lifetimes, ownership, or complexity\n";
    return 0;
}
```

What is the most common bug around `Curiously recurring template`, and how do you prevent it?

---

### Q2. Design choice

Related to: `Mixin via CRTP`

When would you choose `Mixin via CRTP` over a simpler alternative from earlier days? Give one concrete scenario and one counter-scenario.

---

### Q3. Compile or runtime?

Related to: `Avoiding virtuals`

Is a mistake with `Avoiding virtuals` more likely to be a **compile error**, **linker error**, **runtime bug**, or **undefined behaviour**? Justify with one example.

---

### Q4. Complexity / cost

Related to: `Pitfalls`

What is the typical time/space cost of using `Pitfalls` naively, and what is one optimisation or better API choice?

---

### Q5. Integrate three concepts

Combine `Curiously recurring template`, `Avoiding virtuals`, and `When CRTP helps` in a 15-30 line program that could appear in a real tool (CLI, parser, container wrapper, or concurrency sketch). What invariants must hold?

---

When you've answered all 5 in your own words, open `answers.md`.
