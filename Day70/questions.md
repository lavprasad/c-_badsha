# Day 70 -- 5 Tricky Questions

> Theme: **Expression templates intro**
> Try **without** peeking at `answers.md`. Write your guess, then compile/check.

---

### Q1. Predict / explain

Related to: `Lazy expression trees`

```cpp
#include <iostream>
int main() {
    // Sketch: what can go wrong if you ignore the rules for "Lazy expression trees"?
    std::cout << "think about lifetimes, ownership, or complexity\n";
    return 0;
}
```

What is the most common bug around `Lazy expression trees`, and how do you prevent it?

---

### Q2. Design choice

Related to: `Operator returning proxies`

When would you choose `Operator returning proxies` over a simpler alternative from earlier days? Give one concrete scenario and one counter-scenario.

---

### Q3. Compile or runtime?

Related to: `Avoiding temporaries`

Is a mistake with `Avoiding temporaries` more likely to be a **compile error**, **linker error**, **runtime bug**, or **undefined behaviour**? Justify with one example.

---

### Q4. Complexity / cost

Related to: `Debugging difficulty`

What is the typical time/space cost of using `Debugging difficulty` naively, and what is one optimisation or better API choice?

---

### Q5. Integrate three concepts

Combine `Lazy expression trees`, `Avoiding temporaries`, and `Modern alternatives` in a 15-30 line program that could appear in a real tool (CLI, parser, container wrapper, or concurrency sketch). What invariants must hold?

---

When you've answered all 5 in your own words, open `answers.md`.
