# Day 19 -- 5 Tricky Questions

> Theme: **std::array & std::vector mastery**
> Try **without** peeking at `answers.md`. Write your guess, then compile/check.

---

### Q1. Predict / explain

Related to: `std::array vs C array`

```cpp
#include <iostream>
int main() {
    // Sketch: what can go wrong if you ignore the rules for "std::array vs C array"?
    std::cout << "think about lifetimes, ownership, or complexity\n";
    return 0;
}
```

What is the most common bug around `std::array vs C array`, and how do you prevent it?

---

### Q2. Design choice

Related to: `reserve vs resize`

When would you choose `reserve vs resize` over a simpler alternative from earlier days? Give one concrete scenario and one counter-scenario.

---

### Q3. Compile or runtime?

Related to: `Iterators and invalidation`

Is a mistake with `Iterators and invalidation` more likely to be a **compile error**, **linker error**, **runtime bug**, or **undefined behaviour**? Justify with one example.

---

### Q4. Complexity / cost

Related to: `2D vectors`

What is the typical time/space cost of using `2D vectors` naively, and what is one optimisation or better API choice?

---

### Q5. Integrate three concepts

Combine `std::array vs C array`, `Iterators and invalidation`, and `at() vs operator[]` in a 15-30 line program that could appear in a real tool (CLI, parser, container wrapper, or concurrency sketch). What invariants must hold?

---

When you've answered all 5 in your own words, open `answers.md`.
