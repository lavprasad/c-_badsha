# Day 105 -- 5 Tricky Questions

> Theme: **Placement new & lifetime**
> Try **without** peeking at `answers.md`. Write your guess, then compile/check.

---

### Q1. Predict / explain

Related to: `placement new`

```cpp
#include <iostream>
int main() {
    // Sketch: what can go wrong if you ignore the rules for "placement new"?
    std::cout << "think about lifetimes, ownership, or complexity\n";
    return 0;
}
```

What is the most common bug around `placement new`, and how do you prevent it?

---

### Q2. Design choice

Related to: `Storage vs object`

When would you choose `Storage vs object` over a simpler alternative from earlier days? Give one concrete scenario and one counter-scenario.

---

### Q3. Compile or runtime?

Related to: `Uninitialized memory algorithms`

Is a mistake with `Uninitialized memory algorithms` more likely to be a **compile error**, **linker error**, **runtime bug**, or **undefined behaviour**? Justify with one example.

---

### Q4. Complexity / cost

Related to: `Union lifetime`

What is the typical time/space cost of using `Union lifetime` naively, and what is one optimisation or better API choice?

---

### Q5. Integrate three concepts

Combine `placement new`, `Uninitialized memory algorithms`, and `Use cases` in a 15-30 line program that could appear in a real tool (CLI, parser, container wrapper, or concurrency sketch). What invariants must hold?

---

When you've answered all 5 in your own words, open `answers.md`.
