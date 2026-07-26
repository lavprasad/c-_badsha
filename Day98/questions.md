# Day 98 -- 5 Tricky Questions

> Theme: **OS memory & virtual memory**
> Try **without** peeking at `answers.md`. Write your guess, then compile/check.

---

### Q1. Predict / explain

Related to: `Pages`

```cpp
#include <iostream>
int main() {
    // Sketch: what can go wrong if you ignore the rules for "Pages"?
    std::cout << "think about lifetimes, ownership, or complexity\n";
    return 0;
}
```

What is the most common bug around `Pages`, and how do you prevent it?

---

### Q2. Design choice

Related to: `RSS vs VSZ idea`

When would you choose `RSS vs VSZ idea` over a simpler alternative from earlier days? Give one concrete scenario and one counter-scenario.

---

### Q3. Compile or runtime?

Related to: `Stack limits`

Is a mistake with `Stack limits` more likely to be a **compile error**, **linker error**, **runtime bug**, or **undefined behaviour**? Justify with one example.

---

### Q4. Complexity / cost

Related to: `Huge pages idea`

What is the typical time/space cost of using `Huge pages idea` naively, and what is one optimisation or better API choice?

---

### Q5. Integrate three concepts

Combine `Pages`, `Stack limits`, and `Measuring memory` in a 15-30 line program that could appear in a real tool (CLI, parser, container wrapper, or concurrency sketch). What invariants must hold?

---

When you've answered all 5 in your own words, open `answers.md`.
