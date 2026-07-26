# Day 179 -- 5 Tricky Questions

> Theme: **API breakage & compatibility**
> Try **without** peeking at `answers.md`. Write your guess, then compile/check.

---

### Q1. Predict / explain

Related to: `Source vs ABI break`

```cpp
#include <iostream>
int main() {
    // Sketch: what can go wrong if you ignore the rules for "Source vs ABI break"?
    std::cout << "think about lifetimes, ownership, or complexity\n";
    return 0;
}
```

What is the most common bug around `Source vs ABI break`, and how do you prevent it?

---

### Q2. Design choice

Related to: `Default args hazards`

When would you choose `Default args hazards` over a simpler alternative from earlier days? Give one concrete scenario and one counter-scenario.

---

### Q3. Compile or runtime?

Related to: `Layout changes`

Is a mistake with `Layout changes` more likely to be a **compile error**, **linker error**, **runtime bug**, or **undefined behaviour**? Justify with one example.

---

### Q4. Complexity / cost

Related to: `Version macros`

What is the typical time/space cost of using `Version macros` naively, and what is one optimisation or better API choice?

---

### Q5. Integrate three concepts

Combine `Source vs ABI break`, `Layout changes`, and `Tests for compat` in a 15-30 line program that could appear in a real tool (CLI, parser, container wrapper, or concurrency sketch). What invariants must hold?

---

When you've answered all 5 in your own words, open `answers.md`.
