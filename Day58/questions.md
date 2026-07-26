# Day 58 -- 5 Tricky Questions

> Theme: **Nested types & enums in classes**
> Try **without** peeking at `answers.md`. Write your guess, then compile/check.

---

### Q1. Predict / explain

Related to: `Nested classes`

```cpp
#include <iostream>
int main() {
    // Sketch: what can go wrong if you ignore the rules for "Nested classes"?
    std::cout << "think about lifetimes, ownership, or complexity\n";
    return 0;
}
```

What is the most common bug around `Nested classes`, and how do you prevent it?

---

### Q2. Design choice

Related to: `Access to outer members`

When would you choose `Access to outer members` over a simpler alternative from earlier days? Give one concrete scenario and one counter-scenario.

---

### Q3. Compile or runtime?

Related to: `Iterator as nested type`

Is a mistake with `Iterator as nested type` more likely to be a **compile error**, **linker error**, **runtime bug**, or **undefined behaviour**? Justify with one example.

---

### Q4. Complexity / cost

Related to: `Forwarding nested types`

What is the typical time/space cost of using `Forwarding nested types` naively, and what is one optimisation or better API choice?

---

### Q5. Integrate three concepts

Combine `Nested classes`, `Iterator as nested type`, and `Header size impact` in a 15-30 line program that could appear in a real tool (CLI, parser, container wrapper, or concurrency sketch). What invariants must hold?

---

When you've answered all 5 in your own words, open `answers.md`.
