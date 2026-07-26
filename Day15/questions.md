# Day 15 -- 5 Tricky Questions

> Theme: **Copy control deep dive**
> Try **without** peeking at `answers.md`. Write your guess, then compile/check.

---

### Q1. Predict / explain

Related to: `Defaulted special members`

```cpp
#include <iostream>
int main() {
    // Sketch: what can go wrong if you ignore the rules for "Defaulted special members"?
    std::cout << "think about lifetimes, ownership, or complexity\n";
    return 0;
}
```

What is the most common bug around `Defaulted special members`, and how do you prevent it?

---

### Q2. Design choice

Related to: `Copy constructor details`

When would you choose `Copy constructor details` over a simpler alternative from earlier days? Give one concrete scenario and one counter-scenario.

---

### Q3. Compile or runtime?

Related to: `Self-assignment safety`

Is a mistake with `Self-assignment safety` more likely to be a **compile error**, **linker error**, **runtime bug**, or **undefined behaviour**? Justify with one example.

---

### Q4. Complexity / cost

Related to: `Rule of five`

What is the typical time/space cost of using `Rule of five` naively, and what is one optimisation or better API choice?

---

### Q5. Integrate three concepts

Combine `Defaulted special members`, `Self-assignment safety`, and `When the compiler deletes your copy` in a 15-30 line program that could appear in a real tool (CLI, parser, container wrapper, or concurrency sketch). What invariants must hold?

---

When you've answered all 5 in your own words, open `answers.md`.
