# Day 50 -- 5 Tricky Questions

> Theme: **SFINAE & enable_if intro**
> Try **without** peeking at `answers.md`. Write your guess, then compile/check.

---

### Q1. Predict / explain

Related to: `Substitution failure idea`

```cpp
#include <iostream>
int main() {
    // Sketch: what can go wrong if you ignore the rules for "Substitution failure idea"?
    std::cout << "think about lifetimes, ownership, or complexity\n";
    return 0;
}
```

What is the most common bug around `Substitution failure idea`, and how do you prevent it?

---

### Q2. Design choice

Related to: `Overload selection`

When would you choose `Overload selection` over a simpler alternative from earlier days? Give one concrete scenario and one counter-scenario.

---

### Q3. Compile or runtime?

Related to: `is_detected pattern sketch`

Is a mistake with `is_detected pattern sketch` more likely to be a **compile error**, **linker error**, **runtime bug**, or **undefined behaviour**? Justify with one example.

---

### Q4. Complexity / cost

Related to: `Readable enable_if style`

What is the typical time/space cost of using `Readable enable_if style` naively, and what is one optimisation or better API choice?

---

### Q5. Integrate three concepts

Combine `Substitution failure idea`, `is_detected pattern sketch`, and `static_assert alternatives` in a 15-30 line program that could appear in a real tool (CLI, parser, container wrapper, or concurrency sketch). What invariants must hold?

---

When you've answered all 5 in your own words, open `answers.md`.
