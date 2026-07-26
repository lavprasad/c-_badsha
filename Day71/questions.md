# Day 71 -- 5 Tricky Questions

> Theme: **API design in C++**
> Try **without** peeking at `answers.md`. Write your guess, then compile/check.

---

### Q1. Predict / explain

Related to: `Make interfaces hard to misuse`

```cpp
#include <iostream>
int main() {
    // Sketch: what can go wrong if you ignore the rules for "Make interfaces hard to misuse"?
    std::cout << "think about lifetimes, ownership, or complexity\n";
    return 0;
}
```

What is the most common bug around `Make interfaces hard to misuse`, and how do you prevent it?

---

### Q2. Design choice

Related to: `Explicit constructors`

When would you choose `Explicit constructors` over a simpler alternative from earlier days? Give one concrete scenario and one counter-scenario.

---

### Q3. Compile or runtime?

Related to: `Out-params vs returns`

Is a mistake with `Out-params vs returns` more likely to be a **compile error**, **linker error**, **runtime bug**, or **undefined behaviour**? Justify with one example.

---

### Q4. Complexity / cost

Related to: `Header surface area`

What is the typical time/space cost of using `Header surface area` naively, and what is one optimisation or better API choice?

---

### Q5. Integrate three concepts

Combine `Make interfaces hard to misuse`, `Out-params vs returns`, and `Documentation in headers` in a 15-30 line program that could appear in a real tool (CLI, parser, container wrapper, or concurrency sketch). What invariants must hold?

---

When you've answered all 5 in your own words, open `answers.md`.
