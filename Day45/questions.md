# Day 45 -- 5 Tricky Questions

> Theme: **shared_ptr & weak_ptr**
> Try **without** peeking at `answers.md`. Write your guess, then compile/check.

---

### Q1. Predict / explain

Related to: `shared_ptr control block`

```cpp
#include <iostream>
int main() {
    // Sketch: what can go wrong if you ignore the rules for "shared_ptr control block"?
    std::cout << "think about lifetimes, ownership, or complexity\n";
    return 0;
}
```

What is the most common bug around `shared_ptr control block`, and how do you prevent it?

---

### Q2. Design choice

Related to: `weak_ptr lock`

When would you choose `weak_ptr lock` over a simpler alternative from earlier days? Give one concrete scenario and one counter-scenario.

---

### Q3. Compile or runtime?

Related to: `aliasing constructor idea`

Is a mistake with `aliasing constructor idea` more likely to be a **compile error**, **linker error**, **runtime bug**, or **undefined behaviour**? Justify with one example.

---

### Q4. Complexity / cost

Related to: `Performance cost`

What is the typical time/space cost of using `Performance cost` naively, and what is one optimisation or better API choice?

---

### Q5. Integrate three concepts

Combine `shared_ptr control block`, `aliasing constructor idea`, and `When unique_ptr is enough` in a 15-30 line program that could appear in a real tool (CLI, parser, container wrapper, or concurrency sketch). What invariants must hold?

---

When you've answered all 5 in your own words, open `answers.md`.
