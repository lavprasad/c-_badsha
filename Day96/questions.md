# Day 96 -- 5 Tricky Questions

> Theme: **Regular expressions**
> Try **without** peeking at `answers.md`. Write your guess, then compile/check.

---

### Q1. Predict / explain

Related to: `std::regex basics`

```cpp
#include <iostream>
int main() {
    // Sketch: what can go wrong if you ignore the rules for "std::regex basics"?
    std::cout << "think about lifetimes, ownership, or complexity\n";
    return 0;
}
```

What is the most common bug around `std::regex basics`, and how do you prevent it?

---

### Q2. Design choice

Related to: `Capture groups`

When would you choose `Capture groups` over a simpler alternative from earlier days? Give one concrete scenario and one counter-scenario.

---

### Q3. Compile or runtime?

Related to: `Performance warnings`

Is a mistake with `Performance warnings` more likely to be a **compile error**, **linker error**, **runtime bug**, or **undefined behaviour**? Justify with one example.

---

### Q4. Complexity / cost

Related to: `When not to regex`

What is the typical time/space cost of using `When not to regex` naively, and what is one optimisation or better API choice?

---

### Q5. Integrate three concepts

Combine `std::regex basics`, `Performance warnings`, and `Token extract` in a 15-30 line program that could appear in a real tool (CLI, parser, container wrapper, or concurrency sketch). What invariants must hold?

---

When you've answered all 5 in your own words, open `answers.md`.
