# Day 144 -- 5 Tricky Questions

> Theme: **Game-dev C++ patterns**
> Try **without** peeking at `answers.md`. Write your guess, then compile/check.

---

### Q1. Predict / explain

Related to: `Entity component idea`

```cpp
#include <iostream>
int main() {
    // Sketch: what can go wrong if you ignore the rules for "Entity component idea"?
    std::cout << "think about lifetimes, ownership, or complexity\n";
    return 0;
}
```

What is the most common bug around `Entity component idea`, and how do you prevent it?

---

### Q2. Design choice

Related to: `Frame allocators`

When would you choose `Frame allocators` over a simpler alternative from earlier days? Give one concrete scenario and one counter-scenario.

---

### Q3. Compile or runtime?

Related to: `Handle systems`

Is a mistake with `Handle systems` more likely to be a **compile error**, **linker error**, **runtime bug**, or **undefined behaviour**? Justify with one example.

---

### Q4. Complexity / cost

Related to: `Deterministic sim`

What is the typical time/space cost of using `Deterministic sim` naively, and what is one optimisation or better API choice?

---

### Q5. Integrate three concepts

Combine `Entity component idea`, `Handle systems`, and `Update loops` in a 15-30 line program that could appear in a real tool (CLI, parser, container wrapper, or concurrency sketch). What invariants must hold?

---

When you've answered all 5 in your own words, open `answers.md`.
