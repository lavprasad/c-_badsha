# Day 208 -- 5 Tricky Questions

> Theme: **Compilers backend lite**
> Try **without** peeking at `answers.md`. Write your guess, then compile/check.

---

### Q1. Predict / explain

Related to: `IR choices`

```cpp
#include <iostream>
int main() {
    // Sketch: what can go wrong if you ignore the rules for "IR choices"?
    std::cout << "think about lifetimes, ownership, or complexity\n";
    return 0;
}
```

What is the most common bug around `IR choices`, and how do you prevent it?

---

### Q2. Design choice

Related to: `Register allocation idea`

When would you choose `Register allocation idea` over a simpler alternative from earlier days? Give one concrete scenario and one counter-scenario.

---

### Q3. Compile or runtime?

Related to: `Optimization passes idea`

Is a mistake with `Optimization passes idea` more likely to be a **compile error**, **linker error**, **runtime bug**, or **undefined behaviour**? Justify with one example.

---

### Q4. Complexity / cost

Related to: `Object files`

What is the typical time/space cost of using `Object files` naively, and what is one optimisation or better API choice?

---

### Q5. Integrate three concepts

Combine `IR choices`, `Optimization passes idea`, and `Debugging info idea` in a 15-30 line program that could appear in a real tool (CLI, parser, container wrapper, or concurrency sketch). What invariants must hold?

---

When you've answered all 5 in your own words, open `answers.md`.
