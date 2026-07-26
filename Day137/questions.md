# Day 137 -- 5 Tricky Questions

> Theme: **Copy elision & ABI**
> Try **without** peeking at `answers.md`. Write your guess, then compile/check.

---

### Q1. Predict / explain

Related to: `Mandatory elision`

```cpp
#include <iostream>
int main() {
    // Sketch: what can go wrong if you ignore the rules for "Mandatory elision"?
    std::cout << "think about lifetimes, ownership, or complexity\n";
    return 0;
}
```

What is the most common bug around `Mandatory elision`, and how do you prevent it?

---

### Q2. Design choice

Related to: `When copies remain`

When would you choose `When copies remain` over a simpler alternative from earlier days? Give one concrete scenario and one counter-scenario.

---

### Q3. Compile or runtime?

Related to: `Passing large objects`

Is a mistake with `Passing large objects` more likely to be a **compile error**, **linker error**, **runtime bug**, or **undefined behaviour**? Justify with one example.

---

### Q4. Complexity / cost

Related to: `[[no_unique_address]]`

What is the typical time/space cost of using `[[no_unique_address]]` naively, and what is one optimisation or better API choice?

---

### Q5. Integrate three concepts

Combine `Mandatory elision`, `Passing large objects`, and `Measuring` in a 15-30 line program that could appear in a real tool (CLI, parser, container wrapper, or concurrency sketch). What invariants must hold?

---

When you've answered all 5 in your own words, open `answers.md`.
