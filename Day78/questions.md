# Day 78 -- 5 Tricky Questions

> Theme: **Naming & style**
> Try **without** peeking at `answers.md`. Write your guess, then compile/check.

---

### Q1. Predict / explain

Related to: `Types vs values`

```cpp
#include <iostream>
int main() {
    // Sketch: what can go wrong if you ignore the rules for "Types vs values"?
    std::cout << "think about lifetimes, ownership, or complexity\n";
    return 0;
}
```

What is the most common bug around `Types vs values`, and how do you prevent it?

---

### Q2. Design choice

Related to: `Avoid abbreviations`

When would you choose `Avoid abbreviations` over a simpler alternative from earlier days? Give one concrete scenario and one counter-scenario.

---

### Q3. Compile or runtime?

Related to: `File naming`

Is a mistake with `File naming` more likely to be a **compile error**, **linker error**, **runtime bug**, or **undefined behaviour**? Justify with one example.

---

### Q4. Complexity / cost

Related to: `Bool names`

What is the typical time/space cost of using `Bool names` naively, and what is one optimisation or better API choice?

---

### Q5. Integrate three concepts

Combine `Types vs values`, `File naming`, and `Style guides overview` in a 15-30 line program that could appear in a real tool (CLI, parser, container wrapper, or concurrency sketch). What invariants must hold?

---

When you've answered all 5 in your own words, open `answers.md`.
