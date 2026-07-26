# Day 25 -- 5 Tricky Questions

> Theme: **Floating-point realities**
> Try **without** peeking at `answers.md`. Write your guess, then compile/check.

---

### Q1. Predict / explain

Related to: `IEEE-754 intuition`

```cpp
#include <iostream>
int main() {
    // Sketch: what can go wrong if you ignore the rules for "IEEE-754 intuition"?
    std::cout << "think about lifetimes, ownership, or complexity\n";
    return 0;
}
```

What is the most common bug around `IEEE-754 intuition`, and how do you prevent it?

---

### Q2. Design choice

Related to: `Comparing floats safely`

When would you choose `Comparing floats safely` over a simpler alternative from earlier days? Give one concrete scenario and one counter-scenario.

---

### Q3. Compile or runtime?

Related to: `Rounding modes idea`

Is a mistake with `Rounding modes idea` more likely to be a **compile error**, **linker error**, **runtime bug**, or **undefined behaviour**? Justify with one example.

---

### Q4. Complexity / cost

Related to: `float vs double choice`

What is the typical time/space cost of using `float vs double choice` naively, and what is one optimisation or better API choice?

---

### Q5. Integrate three concepts

Combine `IEEE-754 intuition`, `Rounding modes idea`, and `Integer ↔ float conversions` in a 15-30 line program that could appear in a real tool (CLI, parser, container wrapper, or concurrency sketch). What invariants must hold?

---

When you've answered all 5 in your own words, open `answers.md`.
