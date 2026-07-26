# Day 150 -- 5 Tricky Questions

> Theme: **Graceful shutdown & signals**
> Try **without** peeking at `answers.md`. Write your guess, then compile/check.

---

### Q1. Predict / explain

Related to: `SIGINT/SIGTERM awareness`

```cpp
#include <iostream>
int main() {
    // Sketch: what can go wrong if you ignore the rules for "SIGINT/SIGTERM awareness"?
    std::cout << "think about lifetimes, ownership, or complexity\n";
    return 0;
}
```

What is the most common bug around `SIGINT/SIGTERM awareness`, and how do you prevent it?

---

### Q2. Design choice

Related to: `Draining queues`

When would you choose `Draining queues` over a simpler alternative from earlier days? Give one concrete scenario and one counter-scenario.

---

### Q3. Compile or runtime?

Related to: `Timeouts on shutdown`

Is a mistake with `Timeouts on shutdown` more likely to be a **compile error**, **linker error**, **runtime bug**, or **undefined behaviour**? Justify with one example.

---

### Q4. Complexity / cost

Related to: `RAII shutdown hooks`

What is the typical time/space cost of using `RAII shutdown hooks` naively, and what is one optimisation or better API choice?

---

### Q5. Integrate three concepts

Combine `SIGINT/SIGTERM awareness`, `Timeouts on shutdown`, and `Testing shutdown` in a 15-30 line program that could appear in a real tool (CLI, parser, container wrapper, or concurrency sketch). What invariants must hold?

---

When you've answered all 5 in your own words, open `answers.md`.
