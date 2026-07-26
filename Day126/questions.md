# Day 126 -- 5 Tricky Questions

> Theme: **C++23 overview**
> Try **without** peeking at `answers.md`. Write your guess, then compile/check.

---

### Q1. Predict / explain

Related to: `Themes of C++23`

```cpp
#include <iostream>
int main() {
    // Sketch: what can go wrong if you ignore the rules for "Themes of C++23"?
    std::cout << "think about lifetimes, ownership, or complexity\n";
    return 0;
}
```

What is the most common bug around `Themes of C++23`, and how do you prevent it?

---

### Q2. Design choice

Related to: `mdspan idea`

When would you choose `mdspan idea` over a simpler alternative from earlier days? Give one concrete scenario and one counter-scenario.

---

### Q3. Compile or runtime?

Related to: `print / println idea`

Is a mistake with `print / println idea` more likely to be a **compile error**, **linker error**, **runtime bug**, or **undefined behaviour**? Justify with one example.

---

### Q4. Complexity / cost

Related to: `Modules progress`

What is the typical time/space cost of using `Modules progress` naively, and what is one optimisation or better API choice?

---

### Q5. Integrate three concepts

Combine `Themes of C++23`, `print / println idea`, and `Deduction improvements` in a 15-30 line program that could appear in a real tool (CLI, parser, container wrapper, or concurrency sketch). What invariants must hold?

---

When you've answered all 5 in your own words, open `answers.md`.
