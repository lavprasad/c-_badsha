# Day 55 -- 5 Tricky Questions

> Theme: **Operator overloading advanced**
> Try **without** peeking at `answers.md`. Write your guess, then compile/check.

---

### Q1. Predict / explain

Related to: `Arithmetic operators set`

```cpp
#include <iostream>
int main() {
    // Sketch: what can go wrong if you ignore the rules for "Arithmetic operators set"?
    std::cout << "think about lifetimes, ownership, or complexity\n";
    return 0;
}
```

What is the most common bug around `Arithmetic operators set`, and how do you prevent it?

---

### Q2. Design choice

Related to: `Increment operators`

When would you choose `Increment operators` over a simpler alternative from earlier days? Give one concrete scenario and one counter-scenario.

---

### Q3. Compile or runtime?

Related to: `Comma operator (don't)`

Is a mistake with `Comma operator (don't)` more likely to be a **compile error**, **linker error**, **runtime bug**, or **undefined behaviour**? Justify with one example.

---

### Q4. Complexity / cost

Related to: `User-defined literals intro`

What is the typical time/space cost of using `User-defined literals intro` naively, and what is one optimisation or better API choice?

---

### Q5. Integrate three concepts

Combine `Arithmetic operators set`, `Comma operator (don't)`, and `Expression templates idea` in a 15-30 line program that could appear in a real tool (CLI, parser, container wrapper, or concurrency sketch). What invariants must hold?

---

When you've answered all 5 in your own words, open `answers.md`.
