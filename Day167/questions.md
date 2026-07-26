# Day 167 -- 5 Tricky Questions

> Theme: **Backtracking**
> Try **without** peeking at `answers.md`. Write your guess, then compile/check.

---

### Q1. Predict / explain

Related to: `Search tree`

```cpp
#include <iostream>
int main() {
    // Sketch: what can go wrong if you ignore the rules for "Search tree"?
    std::cout << "think about lifetimes, ownership, or complexity\n";
    return 0;
}
```

What is the most common bug around `Search tree`, and how do you prevent it?

---

### Q2. Design choice

Related to: `Permutations`

When would you choose `Permutations` over a simpler alternative from earlier days? Give one concrete scenario and one counter-scenario.

---

### Q3. Compile or runtime?

Related to: `N-queens idea`

Is a mistake with `N-queens idea` more likely to be a **compile error**, **linker error**, **runtime bug**, or **undefined behaviour**? Justify with one example.

---

### Q4. Complexity / cost

Related to: `State representation`

What is the typical time/space cost of using `State representation` naively, and what is one optimisation or better API choice?

---

### Q5. Integrate three concepts

Combine `Search tree`, `N-queens idea`, and `Complexity explosion` in a 15-30 line program that could appear in a real tool (CLI, parser, container wrapper, or concurrency sketch). What invariants must hold?

---

When you've answered all 5 in your own words, open `answers.md`.
