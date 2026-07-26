# Day 61 -- 5 Tricky Questions

> Theme: **Value semantics vs reference semantics**
> Try **without** peeking at `answers.md`. Write your guess, then compile/check.

---

### Q1. Predict / explain

Related to: `Copyable values`

```cpp
#include <iostream>
int main() {
    // Sketch: what can go wrong if you ignore the rules for "Copyable values"?
    std::cout << "think about lifetimes, ownership, or complexity\n";
    return 0;
}
```

What is the most common bug around `Copyable values`, and how do you prevent it?

---

### Q2. Design choice

Related to: `Immutable values`

When would you choose `Immutable values` over a simpler alternative from earlier days? Give one concrete scenario and one counter-scenario.

---

### Q3. Compile or runtime?

Related to: `Copy-on-write idea`

Is a mistake with `Copy-on-write idea` more likely to be a **compile error**, **linker error**, **runtime bug**, or **undefined behaviour**? Justify with one example.

---

### Q4. Complexity / cost

Related to: `Choosing ownership`

What is the typical time/space cost of using `Choosing ownership` naively, and what is one optimisation or better API choice?

---

### Q5. Integrate three concepts

Combine `Copyable values`, `Copy-on-write idea`, and `Return value design` in a 15-30 line program that could appear in a real tool (CLI, parser, container wrapper, or concurrency sketch). What invariants must hold?

---

When you've answered all 5 in your own words, open `answers.md`.
