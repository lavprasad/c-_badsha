# Day 104 -- 5 Tricky Questions

> Theme: **Custom allocators intro**
> Try **without** peeking at `answers.md`. Write your guess, then compile/check.

---

### Q1. Predict / explain

Related to: `Allocator requirements idea`

```cpp
#include <iostream>
int main() {
    // Sketch: what can go wrong if you ignore the rules for "Allocator requirements idea"?
    std::cout << "think about lifetimes, ownership, or complexity\n";
    return 0;
}
```

What is the most common bug around `Allocator requirements idea`, and how do you prevent it?

---

### Q2. Design choice

Related to: `Stateful allocators`

When would you choose `Stateful allocators` over a simpler alternative from earlier days? Give one concrete scenario and one counter-scenario.

---

### Q3. Compile or runtime?

Related to: `Pool allocators`

Is a mistake with `Pool allocators` more likely to be a **compile error**, **linker error**, **runtime bug**, or **undefined behaviour**? Justify with one example.

---

### Q4. Complexity / cost

Related to: `monotonic_buffer_resource`

What is the typical time/space cost of using `monotonic_buffer_resource` naively, and what is one optimisation or better API choice?

---

### Q5. Integrate three concepts

Combine `Allocator requirements idea`, `Pool allocators`, and `Debugging allocators` in a 15-30 line program that could appear in a real tool (CLI, parser, container wrapper, or concurrency sketch). What invariants must hold?

---

When you've answered all 5 in your own words, open `answers.md`.
