# Day 112 -- 5 Tricky Questions

> Theme: **C++20 overview**
> Try **without** peeking at `answers.md`. Write your guess, then compile/check.

---

### Q1. Predict / explain

Related to: `Big themes of C++20`

```cpp
#include <iostream>
int main() {
    // Sketch: what can go wrong if you ignore the rules for "Big themes of C++20"?
    std::cout << "think about lifetimes, ownership, or complexity\n";
    return 0;
}
```

What is the most common bug around `Big themes of C++20`, and how do you prevent it?

---

### Q2. Design choice

Related to: `Concepts idea`

When would you choose `Concepts idea` over a simpler alternative from earlier days? Give one concrete scenario and one counter-scenario.

---

### Q3. Compile or runtime?

Related to: `Coroutines idea`

Is a mistake with `Coroutines idea` more likely to be a **compile error**, **linker error**, **runtime bug**, or **undefined behaviour**? Justify with one example.

---

### Q4. Complexity / cost

Related to: `span`

What is the typical time/space cost of using `span` naively, and what is one optimisation or better API choice?

---

### Q5. Integrate three concepts

Combine `Big themes of C++20`, `Coroutines idea`, and `Three-way comparison` in a 15-30 line program that could appear in a real tool (CLI, parser, container wrapper, or concurrency sketch). What invariants must hold?

---

When you've answered all 5 in your own words, open `answers.md`.
