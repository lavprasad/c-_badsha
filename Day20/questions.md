# Day 20 -- 5 Tricky Questions

> Theme: **std::string mastery**
> Try **without** peeking at `answers.md`. Write your guess, then compile/check.

---

### Q1. Predict / explain

Related to: `Construction and SSO idea`

```cpp
#include <iostream>
int main() {
    // Sketch: what can go wrong if you ignore the rules for "Construction and SSO idea"?
    std::cout << "think about lifetimes, ownership, or complexity\n";
    return 0;
}
```

What is the most common bug around `Construction and SSO idea`, and how do you prevent it?

---

### Q2. Design choice

Related to: `append / insert / erase`

When would you choose `append / insert / erase` over a simpler alternative from earlier days? Give one concrete scenario and one counter-scenario.

---

### Q3. Compile or runtime?

Related to: `c_str() and data()`

Is a mistake with `c_str() and data()` more likely to be a **compile error**, **linker error**, **runtime bug**, or **undefined behaviour**? Justify with one example.

---

### Q4. Complexity / cost

Related to: `Conversion to/from numbers`

What is the typical time/space cost of using `Conversion to/from numbers` naively, and what is one optimisation or better API choice?

---

### Q5. Integrate three concepts

Combine `Construction and SSO idea`, `c_str() and data()`, and `Performance tips` in a 15-30 line program that could appear in a real tool (CLI, parser, container wrapper, or concurrency sketch). What invariants must hold?

---

When you've answered all 5 in your own words, open `answers.md`.
