# Day 77 -- 5 Tricky Questions

> Theme: **Documentation & comments**
> Try **without** peeking at `answers.md`. Write your guess, then compile/check.

---

### Q1. Predict / explain

Related to: `When to comment`

```cpp
#include <iostream>
int main() {
    // Sketch: what can go wrong if you ignore the rules for "When to comment"?
    std::cout << "think about lifetimes, ownership, or complexity\n";
    return 0;
}
```

What is the most common bug around `When to comment`, and how do you prevent it?

---

### Q2. Design choice

Related to: `Header contract comments`

When would you choose `Header contract comments` over a simpler alternative from earlier days? Give one concrete scenario and one counter-scenario.

---

### Q3. Compile or runtime?

Related to: `Examples in docs`

Is a mistake with `Examples in docs` more likely to be a **compile error**, **linker error**, **runtime bug**, or **undefined behaviour**? Justify with one example.

---

### Q4. Complexity / cost

Related to: `Complexity notes`

What is the typical time/space cost of using `Complexity notes` naively, and what is one optimisation or better API choice?

---

### Q5. Integrate three concepts

Combine `When to comment`, `Examples in docs`, and `README sections` in a 15-30 line program that could appear in a real tool (CLI, parser, container wrapper, or concurrency sketch). What invariants must hold?

---

When you've answered all 5 in your own words, open `answers.md`.
