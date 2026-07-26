# Day 90 -- 5 Tricky Questions

> Theme: **Concurrent data structures lite**
> Try **without** peeking at `answers.md`. Write your guess, then compile/check.

---

### Q1. Predict / explain

Related to: `Thread-safe stack idea`

```cpp
#include <iostream>
int main() {
    // Sketch: what can go wrong if you ignore the rules for "Thread-safe stack idea"?
    std::cout << "think about lifetimes, ownership, or complexity\n";
    return 0;
}
```

What is the most common bug around `Thread-safe stack idea`, and how do you prevent it?

---

### Q2. Design choice

Related to: `Lock striping idea`

When would you choose `Lock striping idea` over a simpler alternative from earlier days? Give one concrete scenario and one counter-scenario.

---

### Q3. Compile or runtime?

Related to: `Copy-on-write maps`

Is a mistake with `Copy-on-write maps` more likely to be a **compile error**, **linker error**, **runtime bug**, or **undefined behaviour**? Justify with one example.

---

### Q4. Complexity / cost

Related to: `Testing concurrent code`

What is the typical time/space cost of using `Testing concurrent code` naively, and what is one optimisation or better API choice?

---

### Q5. Integrate three concepts

Combine `Thread-safe stack idea`, `Copy-on-write maps`, and `When to use libs` in a 15-30 line program that could appear in a real tool (CLI, parser, container wrapper, or concurrency sketch). What invariants must hold?

---

When you've answered all 5 in your own words, open `answers.md`.
