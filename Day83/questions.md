# Day 83 -- 5 Tricky Questions

> Theme: **Mutexes & locks**
> Try **without** peeking at `answers.md`. Write your guess, then compile/check.

---

### Q1. Predict / explain

Related to: `std::mutex`

```cpp
#include <iostream>
int main() {
    // Sketch: what can go wrong if you ignore the rules for "std::mutex"?
    std::cout << "think about lifetimes, ownership, or complexity\n";
    return 0;
}
```

What is the most common bug around `std::mutex`, and how do you prevent it?

---

### Q2. Design choice

Related to: `unique_lock`

When would you choose `unique_lock` over a simpler alternative from earlier days? Give one concrete scenario and one counter-scenario.

---

### Q3. Compile or runtime?

Related to: `Deadlocks`

Is a mistake with `Deadlocks` more likely to be a **compile error**, **linker error**, **runtime bug**, or **undefined behaviour**? Justify with one example.

---

### Q4. Complexity / cost

Related to: `Recursive mutex`

What is the typical time/space cost of using `Recursive mutex` naively, and what is one optimisation or better API choice?

---

### Q5. Integrate three concepts

Combine `std::mutex`, `Deadlocks`, and `Critical sections` in a 15-30 line program that could appear in a real tool (CLI, parser, container wrapper, or concurrency sketch). What invariants must hold?

---

When you've answered all 5 in your own words, open `answers.md`.
