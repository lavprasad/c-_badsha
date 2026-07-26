# Day 106 -- 5 Tricky Questions

> Theme: **Alignment & packing**
> Try **without** peeking at `answers.md`. Write your guess, then compile/check.

---

### Q1. Predict / explain

Related to: `alignof / alignas`

```cpp
#include <iostream>
int main() {
    // Sketch: what can go wrong if you ignore the rules for "alignof / alignas"?
    std::cout << "think about lifetimes, ownership, or complexity\n";
    return 0;
}
```

What is the most common bug around `alignof / alignas`, and how do you prevent it?

---

### Q2. Design choice

Related to: `Struct packing`

When would you choose `Struct packing` over a simpler alternative from earlier days? Give one concrete scenario and one counter-scenario.

---

### Q3. Compile or runtime?

Related to: `aligned_alloc idea`

Is a mistake with `aligned_alloc idea` more likely to be a **compile error**, **linker error**, **runtime bug**, or **undefined behaviour**? Justify with one example.

---

### Q4. Complexity / cost

Related to: `ABI implications`

What is the typical time/space cost of using `ABI implications` naively, and what is one optimisation or better API choice?

---

### Q5. Integrate three concepts

Combine `alignof / alignas`, `aligned_alloc idea`, and `Portable packing` in a 15-30 line program that could appear in a real tool (CLI, parser, container wrapper, or concurrency sketch). What invariants must hold?

---

When you've answered all 5 in your own words, open `answers.md`.
