# Day 132 -- 5 Tricky Questions

> Theme: **Type traits library tour**
> Try **without** peeking at `answers.md`. Write your guess, then compile/check.

---

### Q1. Predict / explain

Related to: `Primary type categories`

```cpp
#include <iostream>
int main() {
    // Sketch: what can go wrong if you ignore the rules for "Primary type categories"?
    std::cout << "think about lifetimes, ownership, or complexity\n";
    return 0;
}
```

What is the most common bug around `Primary type categories`, and how do you prevent it?

---

### Q2. Design choice

Related to: `Type properties`

When would you choose `Type properties` over a simpler alternative from earlier days? Give one concrete scenario and one counter-scenario.

---

### Q3. Compile or runtime?

Related to: `Transformations`

Is a mistake with `Transformations` more likely to be a **compile error**, **linker error**, **runtime bug**, or **undefined behaviour**? Justify with one example.

---

### Q4. Complexity / cost

Related to: `is_invocable`

What is the typical time/space cost of using `is_invocable` naively, and what is one optimisation or better API choice?

---

### Q5. Integrate three concepts

Combine `Primary type categories`, `Transformations`, and `Using in APIs` in a 15-30 line program that could appear in a real tool (CLI, parser, container wrapper, or concurrency sketch). What invariants must hold?

---

When you've answered all 5 in your own words, open `answers.md`.
