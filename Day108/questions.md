# Day 108 -- 5 Tricky Questions

> Theme: **String encoding & Unicode lite**
> Try **without** peeking at `answers.md`. Write your guess, then compile/check.

---

### Q1. Predict / explain

Related to: `Bytes vs characters`

```cpp
#include <iostream>
int main() {
    // Sketch: what can go wrong if you ignore the rules for "Bytes vs characters"?
    std::cout << "think about lifetimes, ownership, or complexity\n";
    return 0;
}
```

What is the most common bug around `Bytes vs characters`, and how do you prevent it?

---

### Q2. Design choice

Related to: `Code points vs graphemes`

When would you choose `Code points vs graphemes` over a simpler alternative from earlier days? Give one concrete scenario and one counter-scenario.

---

### Q3. Compile or runtime?

Related to: `Validation`

Is a mistake with `Validation` more likely to be a **compile error**, **linker error**, **runtime bug**, or **undefined behaviour**? Justify with one example.

---

### Q4. Complexity / cost

Related to: `Locale dangers`

What is the typical time/space cost of using `Locale dangers` naively, and what is one optimisation or better API choice?

---

### Q5. Integrate three concepts

Combine `Bytes vs characters`, `Validation`, and `API recommendations` in a 15-30 line program that could appear in a real tool (CLI, parser, container wrapper, or concurrency sketch). What invariants must hold?

---

When you've answered all 5 in your own words, open `answers.md`.
