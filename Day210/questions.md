# Day 210 -- 5 Tricky Questions

> Theme: **Capstone: design your 30-day plan**
> Try **without** peeking at `answers.md`. Write your guess, then compile/check.

---

### Q1. Predict / explain

Related to: `Assess strengths`

```cpp
#include <iostream>
int main() {
    // Sketch: what can go wrong if you ignore the rules for "Assess strengths"?
    std::cout << "think about lifetimes, ownership, or complexity\n";
    return 0;
}
```

What is the most common bug around `Assess strengths`, and how do you prevent it?

---

### Q2. Design choice

Related to: `Daily cadence`

When would you choose `Daily cadence` over a simpler alternative from earlier days? Give one concrete scenario and one counter-scenario.

---

### Q3. Compile or runtime?

Related to: `Review loop`

Is a mistake with `Review loop` more likely to be a **compile error**, **linker error**, **runtime bug**, or **undefined behaviour**? Justify with one example.

---

### Q4. Complexity / cost

Related to: `Community`

What is the typical time/space cost of using `Community` naively, and what is one optimisation or better API choice?

---

### Q5. Integrate three concepts

Combine `Assess strengths`, `Review loop`, and `Rest & retention` in a 15-30 line program that could appear in a real tool (CLI, parser, container wrapper, or concurrency sketch). What invariants must hold?

---

When you've answered all 5 in your own words, open `answers.md`.
