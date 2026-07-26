# Day 133 -- 5 Tricky Questions

> Theme: **SFINAE → concepts migration**
> Try **without** peeking at `answers.md`. Write your guess, then compile/check.

---

### Q1. Predict / explain

Related to: `Pain of enable_if`

```cpp
#include <iostream>
int main() {
    // Sketch: what can go wrong if you ignore the rules for "Pain of enable_if"?
    std::cout << "think about lifetimes, ownership, or complexity\n";
    return 0;
}
```

What is the most common bug around `Pain of enable_if`, and how do you prevent it?

---

### Q2. Design choice

Related to: `requires vs enable_if`

When would you choose `requires vs enable_if` over a simpler alternative from earlier days? Give one concrete scenario and one counter-scenario.

---

### Q3. Compile or runtime?

Related to: `Diagnostic quality`

Is a mistake with `Diagnostic quality` more likely to be a **compile error**, **linker error**, **runtime bug**, or **undefined behaviour**? Justify with one example.

---

### Q4. Complexity / cost

Related to: `Library compatibility`

What is the typical time/space cost of using `Library compatibility` naively, and what is one optimisation or better API choice?

---

### Q5. Integrate three concepts

Combine `Pain of enable_if`, `Diagnostic quality`, and `Style guide` in a 15-30 line program that could appear in a real tool (CLI, parser, container wrapper, or concurrency sketch). What invariants must hold?

---

When you've answered all 5 in your own words, open `answers.md`.
