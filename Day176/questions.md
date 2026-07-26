# Day 176 -- 5 Tricky Questions

> Theme: **Debugging hard bugs**
> Try **without** peeking at `answers.md`. Write your guess, then compile/check.

---

### Q1. Predict / explain

Related to: `Reproduce reliably`

```cpp
#include <iostream>
int main() {
    // Sketch: what can go wrong if you ignore the rules for "Reproduce reliably"?
    std::cout << "think about lifetimes, ownership, or complexity\n";
    return 0;
}
```

What is the most common bug around `Reproduce reliably`, and how do you prevent it?

---

### Q2. Design choice

Related to: `Minimize`

When would you choose `Minimize` over a simpler alternative from earlier days? Give one concrete scenario and one counter-scenario.

---

### Q3. Compile or runtime?

Related to: `Instrument`

Is a mistake with `Instrument` more likely to be a **compile error**, **linker error**, **runtime bug**, or **undefined behaviour**? Justify with one example.

---

### Q4. Complexity / cost

Related to: `Memory corruption`

What is the typical time/space cost of using `Memory corruption` naively, and what is one optimisation or better API choice?

---

### Q5. Integrate three concepts

Combine `Reproduce reliably`, `Instrument`, and `Keep a diary` in a 15-30 line program that could appear in a real tool (CLI, parser, container wrapper, or concurrency sketch). What invariants must hold?

---

When you've answered all 5 in your own words, open `answers.md`.
