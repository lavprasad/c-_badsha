# Day 175 -- 5 Tricky Questions

> Theme: **Reading real codebases**
> Try **without** peeking at `answers.md`. Write your guess, then compile/check.

---

### Q1. Predict / explain

Related to: `Map the build`

```cpp
#include <iostream>
int main() {
    // Sketch: what can go wrong if you ignore the rules for "Map the build"?
    std::cout << "think about lifetimes, ownership, or complexity\n";
    return 0;
}
```

What is the most common bug around `Map the build`, and how do you prevent it?

---

### Q2. Design choice

Related to: `Trace a request`

When would you choose `Trace a request` over a simpler alternative from earlier days? Give one concrete scenario and one counter-scenario.

---

### Q3. Compile or runtime?

Related to: `Abstraction layers`

Is a mistake with `Abstraction layers` more likely to be a **compile error**, **linker error**, **runtime bug**, or **undefined behaviour**? Justify with one example.

---

### Q4. Complexity / cost

Related to: `History via git`

What is the typical time/space cost of using `History via git` naively, and what is one optimisation or better API choice?

---

### Q5. Integrate three concepts

Combine `Map the build`, `Abstraction layers`, and `Small first changes` in a 15-30 line program that could appear in a real tool (CLI, parser, container wrapper, or concurrency sketch). What invariants must hold?

---

When you've answered all 5 in your own words, open `answers.md`.
