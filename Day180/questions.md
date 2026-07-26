# Day 180 -- 5 Tricky Questions

> Theme: **Packaging & distributing C++**
> Try **without** peeking at `answers.md`. Write your guess, then compile/check.

---

### Q1. Predict / explain

Related to: `Headers + libs`

```cpp
#include <iostream>
int main() {
    // Sketch: what can go wrong if you ignore the rules for "Headers + libs"?
    std::cout << "think about lifetimes, ownership, or complexity\n";
    return 0;
}
```

What is the most common bug around `Headers + libs`, and how do you prevent it?

---

### Q2. Design choice

Related to: `vcpkg/conan mindset`

When would you choose `vcpkg/conan mindset` over a simpler alternative from earlier days? Give one concrete scenario and one counter-scenario.

---

### Q3. Compile or runtime?

Related to: `Platform matrices`

Is a mistake with `Platform matrices` more likely to be a **compile error**, **linker error**, **runtime bug**, or **undefined behaviour**? Justify with one example.

---

### Q4. Complexity / cost

Related to: `License headers`

What is the typical time/space cost of using `License headers` naively, and what is one optimisation or better API choice?

---

### Q5. Integrate three concepts

Combine `Headers + libs`, `Platform matrices`, and `Minimal install` in a 15-30 line program that could appear in a real tool (CLI, parser, container wrapper, or concurrency sketch). What invariants must hold?

---

When you've answered all 5 in your own words, open `answers.md`.
