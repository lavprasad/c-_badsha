# Day 82 -- 5 Tricky Questions

> Theme: **Threads basics**
> Try **without** peeking at `answers.md`. Write your guess, then compile/check.

---

### Q1. Predict / explain

Related to: `std::thread`

```cpp
#include <iostream>
int main() {
    // Sketch: what can go wrong if you ignore the rules for "std::thread"?
    std::cout << "think about lifetimes, ownership, or complexity\n";
    return 0;
}
```

What is the most common bug around `std::thread`, and how do you prevent it?

---

### Q2. Design choice

Related to: `Passing arguments`

When would you choose `Passing arguments` over a simpler alternative from earlier days? Give one concrete scenario and one counter-scenario.

---

### Q3. Compile or runtime?

Related to: `Hardware concurrency`

Is a mistake with `Hardware concurrency` more likely to be a **compile error**, **linker error**, **runtime bug**, or **undefined behaviour**? Justify with one example.

---

### Q4. Complexity / cost

Related to: `Exceptions in threads`

What is the typical time/space cost of using `Exceptions in threads` naively, and what is one optimisation or better API choice?

---

### Q5. Integrate three concepts

Combine `std::thread`, `Hardware concurrency`, and `Common mistakes` in a 15-30 line program that could appear in a real tool (CLI, parser, container wrapper, or concurrency sketch). What invariants must hold?

---

When you've answered all 5 in your own words, open `answers.md`.
