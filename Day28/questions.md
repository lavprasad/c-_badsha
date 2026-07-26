# Day 28 -- 5 Tricky Questions

> Theme: **Command-line args**
> Try **without** peeking at `answers.md`. Write your guess, then compile/check.

---

### Q1. Predict / explain

Related to: `argc and argv`

```cpp
#include <iostream>
int main() {
    // Sketch: what can go wrong if you ignore the rules for "argc and argv"?
    std::cout << "think about lifetimes, ownership, or complexity\n";
    return 0;
}
```

What is the most common bug around `argc and argv`, and how do you prevent it?

---

### Q2. Design choice

Related to: `Converting argv to types`

When would you choose `Converting argv to types` over a simpler alternative from earlier days? Give one concrete scenario and one counter-scenario.

---

### Q3. Compile or runtime?

Related to: `Exit codes`

Is a mistake with `Exit codes` more likely to be a **compile error**, **linker error**, **runtime bug**, or **undefined behaviour**? Justify with one example.

---

### Q4. Complexity / cost

Related to: `Path arguments`

What is the typical time/space cost of using `Path arguments` naively, and what is one optimisation or better API choice?

---

### Q5. Integrate three concepts

Combine `argc and argv`, `Exit codes`, and `Subcommands idea` in a 15-30 line program that could appear in a real tool (CLI, parser, container wrapper, or concurrency sketch). What invariants must hold?

---

When you've answered all 5 in your own words, open `answers.md`.
