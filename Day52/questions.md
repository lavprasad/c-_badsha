# Day 52 -- 5 Tricky Questions

> Theme: **Inheritance design**
> Try **without** peeking at `answers.md`. Write your guess, then compile/check.

---

### Q1. Predict / explain

Related to: `is-a vs has-a`

```cpp
#include <iostream>
int main() {
    // Sketch: what can go wrong if you ignore the rules for "is-a vs has-a"?
    std::cout << "think about lifetimes, ownership, or complexity\n";
    return 0;
}
```

What is the most common bug around `is-a vs has-a`, and how do you prevent it?

---

### Q2. Design choice

Related to: `Protected members wisely`

When would you choose `Protected members wisely` over a simpler alternative from earlier days? Give one concrete scenario and one counter-scenario.

---

### Q3. Compile or runtime?

Related to: `Composition over inheritance`

Is a mistake with `Composition over inheritance` more likely to be a **compile error**, **linker error**, **runtime bug**, or **undefined behaviour**? Justify with one example.

---

### Q4. Complexity / cost

Related to: `Interface segregation idea`

What is the typical time/space cost of using `Interface segregation idea` naively, and what is one optimisation or better API choice?

---

### Q5. Integrate three concepts

Combine `is-a vs has-a`, `Composition over inheritance`, and `Deep hierarchies smell` in a 15-30 line program that could appear in a real tool (CLI, parser, container wrapper, or concurrency sketch). What invariants must hold?

---

When you've answered all 5 in your own words, open `answers.md`.
