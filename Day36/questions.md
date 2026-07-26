# Day 36 -- 5 Tricky Questions

> Theme: **std::function & callables**
> Try **without** peeking at `answers.md`. Write your guess, then compile/check.

---

### Q1. Predict / explain

Related to: `Callable concept`

```cpp
#include <iostream>
int main() {
    // Sketch: what can go wrong if you ignore the rules for "Callable concept"?
    std::cout << "think about lifetimes, ownership, or complexity\n";
    return 0;
}
```

What is the most common bug around `Callable concept`, and how do you prevent it?

---

### Q2. Design choice

Related to: `Storing lambdas`

When would you choose `Storing lambdas` over a simpler alternative from earlier days? Give one concrete scenario and one counter-scenario.

---

### Q3. Compile or runtime?

Related to: `std::bind basics (and when to avoid)`

Is a mistake with `std::bind basics (and when to avoid)` more likely to be a **compile error**, **linker error**, **runtime bug**, or **undefined behaviour**? Justify with one example.

---

### Q4. Complexity / cost

Related to: `Callbacks in APIs`

What is the typical time/space cost of using `Callbacks in APIs` naively, and what is one optimisation or better API choice?

---

### Q5. Integrate three concepts

Combine `Callable concept`, `std::bind basics (and when to avoid)`, and `Performance considerations` in a 15-30 line program that could appear in a real tool (CLI, parser, container wrapper, or concurrency sketch). What invariants must hold?

---

When you've answered all 5 in your own words, open `answers.md`.
