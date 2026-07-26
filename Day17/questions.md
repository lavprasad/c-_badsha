# Day 17 -- 5 Tricky Questions

> Theme: **Namespaces deep dive**
> Try **without** peeking at `answers.md`. Write your guess, then compile/check.

---

### Q1. Predict / explain

Related to: `Nested namespaces`

```cpp
#include <iostream>
int main() {
    // Sketch: what can go wrong if you ignore the rules for "Nested namespaces"?
    std::cout << "think about lifetimes, ownership, or complexity\n";
    return 0;
}
```

What is the most common bug around `Nested namespaces`, and how do you prevent it?

---

### Q2. Design choice

Related to: `Anonymous namespaces`

When would you choose `Anonymous namespaces` over a simpler alternative from earlier days? Give one concrete scenario and one counter-scenario.

---

### Q3. Compile or runtime?

Related to: `ADL (argument-dependent lookup)`

Is a mistake with `ADL (argument-dependent lookup)` more likely to be a **compile error**, **linker error**, **runtime bug**, or **undefined behaviour**? Justify with one example.

---

### Q4. Complexity / cost

Related to: `Header hygiene with namespaces`

What is the typical time/space cost of using `Header hygiene with namespaces` naively, and what is one optimisation or better API choice?

---

### Q5. Integrate three concepts

Combine `Nested namespaces`, `ADL (argument-dependent lookup)`, and `Avoiding name clashes` in a 15-30 line program that could appear in a real tool (CLI, parser, container wrapper, or concurrency sketch). What invariants must hold?

---

When you've answered all 5 in your own words, open `answers.md`.
