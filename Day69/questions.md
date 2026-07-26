# Day 69 -- 5 Tricky Questions

> Theme: **Mixin & traits**
> Try **without** peeking at `answers.md`. Write your guess, then compile/check.

---

### Q1. Predict / explain

Related to: `Traits classes`

```cpp
#include <iostream>
int main() {
    // Sketch: what can go wrong if you ignore the rules for "Traits classes"?
    std::cout << "think about lifetimes, ownership, or complexity\n";
    return 0;
}
```

What is the most common bug around `Traits classes`, and how do you prevent it?

---

### Q2. Design choice

Related to: `char_traits idea`

When would you choose `char_traits idea` over a simpler alternative from earlier days? Give one concrete scenario and one counter-scenario.

---

### Q3. Compile or runtime?

Related to: `Mixins via templates`

Is a mistake with `Mixins via templates` more likely to be a **compile error**, **linker error**, **runtime bug**, or **undefined behaviour**? Justify with one example.

---

### Q4. Complexity / cost

Related to: `Detecting members`

What is the typical time/space cost of using `Detecting members` naively, and what is one optimisation or better API choice?

---

### Q5. Integrate three concepts

Combine `Traits classes`, `Mixins via templates`, and `Combining traits` in a 15-30 line program that could appear in a real tool (CLI, parser, container wrapper, or concurrency sketch). What invariants must hold?

---

When you've answered all 5 in your own words, open `answers.md`.
