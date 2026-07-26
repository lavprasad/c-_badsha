# Day 131 -- 5 Tricky Questions

> Theme: **Variadic templates mastery**
> Try **without** peeking at `answers.md`. Write your guess, then compile/check.

---

### Q1. Predict / explain

Related to: `Parameter packs`

```cpp
#include <iostream>
int main() {
    // Sketch: what can go wrong if you ignore the rules for "Parameter packs"?
    std::cout << "think about lifetimes, ownership, or complexity\n";
    return 0;
}
```

What is the most common bug around `Parameter packs`, and how do you prevent it?

---

### Q2. Design choice

Related to: `Pack expansion`

When would you choose `Pack expansion` over a simpler alternative from earlier days? Give one concrete scenario and one counter-scenario.

---

### Q3. Compile or runtime?

Related to: `Fold alternative`

Is a mistake with `Fold alternative` more likely to be a **compile error**, **linker error**, **runtime bug**, or **undefined behaviour**? Justify with one example.

---

### Q4. Complexity / cost

Related to: `Base pack inheritance`

What is the typical time/space cost of using `Base pack inheritance` naively, and what is one optimisation or better API choice?

---

### Q5. Integrate three concepts

Combine `Parameter packs`, `Fold alternative`, and `Pretty error tips` in a 15-30 line program that could appear in a real tool (CLI, parser, container wrapper, or concurrency sketch). What invariants must hold?

---

When you've answered all 5 in your own words, open `answers.md`.
