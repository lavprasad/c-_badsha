# Day 32 -- 5 Tricky Questions

> Theme: **optional, variant, any (C++17)**
> Try **without** peeking at `answers.md`. Write your guess, then compile/check.

---

### Q1. Predict / explain

Related to: `std::optional basics`

```cpp
#include <iostream>
int main() {
    // Sketch: what can go wrong if you ignore the rules for "std::optional basics"?
    std::cout << "think about lifetimes, ownership, or complexity\n";
    return 0;
}
```

What is the most common bug around `std::optional basics`, and how do you prevent it?

---

### Q2. Design choice

Related to: `std::variant basics`

When would you choose `std::variant basics` over a simpler alternative from earlier days? Give one concrete scenario and one counter-scenario.

---

### Q3. Compile or runtime?

Related to: `std::any basics`

Is a mistake with `std::any basics` more likely to be a **compile error**, **linker error**, **runtime bug**, or **undefined behaviour**? Justify with one example.

---

### Q4. Complexity / cost

Related to: `When optional beats pointers`

What is the typical time/space cost of using `When optional beats pointers` naively, and what is one optimisation or better API choice?

---

### Q5. Integrate three concepts

Combine `std::optional basics`, `std::any basics`, and `Performance notes` in a 15-30 line program that could appear in a real tool (CLI, parser, container wrapper, or concurrency sketch). What invariants must hold?

---

When you've answered all 5 in your own words, open `answers.md`.
