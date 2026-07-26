# Day 46 -- 5 Tricky Questions

> Theme: **Exceptions advanced**
> Try **without** peeking at `answers.md`. Write your guess, then compile/check.

---

### Q1. Predict / explain

Related to: `Exception hierarchies`

```cpp
#include <iostream>
int main() {
    // Sketch: what can go wrong if you ignore the rules for "Exception hierarchies"?
    std::cout << "think about lifetimes, ownership, or complexity\n";
    return 0;
}
```

What is the most common bug around `Exception hierarchies`, and how do you prevent it?

---

### Q2. Design choice

Related to: `rethrow`

When would you choose `rethrow` over a simpler alternative from earlier days? Give one concrete scenario and one counter-scenario.

---

### Q3. Compile or runtime?

Related to: `Exception safety levels`

Is a mistake with `Exception safety levels` more likely to be a **compile error**, **linker error**, **runtime bug**, or **undefined behaviour**? Justify with one example.

---

### Q4. Complexity / cost

Related to: `What not to throw`

What is the typical time/space cost of using `What not to throw` naively, and what is one optimisation or better API choice?

---

### Q5. Integrate three concepts

Combine `Exception hierarchies`, `Exception safety levels`, and `Constructors and exceptions` in a 15-30 line program that could appear in a real tool (CLI, parser, container wrapper, or concurrency sketch). What invariants must hold?

---

When you've answered all 5 in your own words, open `answers.md`.
