# Day 121 -- 5 Tricky Questions

> Theme: **std::format intro**
> Try **without** peeking at `answers.md`. Write your guess, then compile/check.

---

### Q1. Predict / explain

Related to: `format basics`

```cpp
#include <iostream>
int main() {
    // Sketch: what can go wrong if you ignore the rules for "format basics"?
    std::cout << "think about lifetimes, ownership, or complexity\n";
    return 0;
}
```

What is the most common bug around `format basics`, and how do you prevent it?

---

### Q2. Design choice

Related to: `Arguments`

When would you choose `Arguments` over a simpler alternative from earlier days? Give one concrete scenario and one counter-scenario.

---

### Q3. Compile or runtime?

Related to: `Custom formatters idea`

Is a mistake with `Custom formatters idea` more likely to be a **compile error**, **linker error**, **runtime bug**, or **undefined behaviour**? Justify with one example.

---

### Q4. Complexity / cost

Related to: `Safety`

What is the typical time/space cost of using `Safety` naively, and what is one optimisation or better API choice?

---

### Q5. Integrate three concepts

Combine `format basics`, `Custom formatters idea`, and `Localization notes` in a 15-30 line program that could appear in a real tool (CLI, parser, container wrapper, or concurrency sketch). What invariants must hold?

---

When you've answered all 5 in your own words, open `answers.md`.
