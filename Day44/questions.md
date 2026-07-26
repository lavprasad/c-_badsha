# Day 44 -- 5 Tricky Questions

> Theme: **unique_ptr mastery**
> Try **without** peeking at `answers.md`. Write your guess, then compile/check.

---

### Q1. Predict / explain

Related to: `make_unique`

```cpp
#include <iostream>
int main() {
    // Sketch: what can go wrong if you ignore the rules for "make_unique"?
    std::cout << "think about lifetimes, ownership, or complexity\n";
    return 0;
}
```

What is the most common bug around `make_unique`, and how do you prevent it?

---

### Q2. Design choice

Related to: `unique_ptr arrays`

When would you choose `unique_ptr arrays` over a simpler alternative from earlier days? Give one concrete scenario and one counter-scenario.

---

### Q3. Compile or runtime?

Related to: `Returning unique_ptr`

Is a mistake with `Returning unique_ptr` more likely to be a **compile error**, **linker error**, **runtime bug**, or **undefined behaviour**? Justify with one example.

---

### Q4. Complexity / cost

Related to: `Observing with get / *`

What is the typical time/space cost of using `Observing with get / *` naively, and what is one optimisation or better API choice?

---

### Q5. Integrate three concepts

Combine `make_unique`, `Returning unique_ptr`, and `Factory functions` in a 15-30 line program that could appear in a real tool (CLI, parser, container wrapper, or concurrency sketch). What invariants must hold?

---

When you've answered all 5 in your own words, open `answers.md`.
