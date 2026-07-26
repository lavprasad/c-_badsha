# Day 164 -- 5 Tricky Questions

> Theme: **Dynamic programming intro**
> Try **without** peeking at `answers.md`. Write your guess, then compile/check.

---

### Q1. Predict / explain

Related to: `Overlapping subproblems`

```cpp
#include <iostream>
int main() {
    // Sketch: what can go wrong if you ignore the rules for "Overlapping subproblems"?
    std::cout << "think about lifetimes, ownership, or complexity\n";
    return 0;
}
```

What is the most common bug around `Overlapping subproblems`, and how do you prevent it?

---

### Q2. Design choice

Related to: `Memoization`

When would you choose `Memoization` over a simpler alternative from earlier days? Give one concrete scenario and one counter-scenario.

---

### Q3. Compile or runtime?

Related to: `1D DP`

Is a mistake with `1D DP` more likely to be a **compile error**, **linker error**, **runtime bug**, or **undefined behaviour**? Justify with one example.

---

### Q4. Complexity / cost

Related to: `Space optimization`

What is the typical time/space cost of using `Space optimization` naively, and what is one optimisation or better API choice?

---

### Q5. Integrate three concepts

Combine `Overlapping subproblems`, `1D DP`, and `Common patterns` in a 15-30 line program that could appear in a real tool (CLI, parser, container wrapper, or concurrency sketch). What invariants must hold?

---

When you've answered all 5 in your own words, open `answers.md`.
