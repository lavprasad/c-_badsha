# Day 152 -- 5 Tricky Questions

> Theme: **Complexity & Big-O practice**
> Try **without** peeking at `answers.md`. Write your guess, then compile/check.

---

### Q1. Predict / explain

Related to: `O(1)/O(log n)/O(n)`

```cpp
#include <iostream>
int main() {
    // Sketch: what can go wrong if you ignore the rules for "O(1)/O(log n)/O(n)"?
    std::cout << "think about lifetimes, ownership, or complexity\n";
    return 0;
}
```

What is the most common bug around `O(1)/O(log n)/O(n)`, and how do you prevent it?

---

### Q2. Design choice

Related to: `Best/avg/worst`

When would you choose `Best/avg/worst` over a simpler alternative from earlier days? Give one concrete scenario and one counter-scenario.

---

### Q3. Compile or runtime?

Related to: `Hidden factors`

Is a mistake with `Hidden factors` more likely to be a **compile error**, **linker error**, **runtime bug**, or **undefined behaviour**? Justify with one example.

---

### Q4. Complexity / cost

Related to: `Recurrence intuition`

What is the typical time/space cost of using `Recurrence intuition` naively, and what is one optimisation or better API choice?

---

### Q5. Integrate three concepts

Combine `O(1)/O(log n)/O(n)`, `Hidden factors`, and `Tradeoffs` in a 15-30 line program that could appear in a real tool (CLI, parser, container wrapper, or concurrency sketch). What invariants must hold?

---

When you've answered all 5 in your own words, open `answers.md`.
