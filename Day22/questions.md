# Day 22 -- 5 Tricky Questions

> Theme: **Debugging & assertions**
> Try **without** peeking at `answers.md`. Write your guess, then compile/check.

---

### Q1. Predict / explain

Related to: `assert from <cassert>`

```cpp
#include <iostream>
int main() {
    // Sketch: what can go wrong if you ignore the rules for "assert from <cassert>"?
    std::cout << "think about lifetimes, ownership, or complexity\n";
    return 0;
}
```

What is the most common bug around `assert from <cassert>`, and how do you prevent it?

---

### Q2. Design choice

Related to: `static_assert`

When would you choose `static_assert` over a simpler alternative from earlier days? Give one concrete scenario and one counter-scenario.

---

### Q3. Compile or runtime?

Related to: `Using a debugger mentally`

Is a mistake with `Using a debugger mentally` more likely to be a **compile error**, **linker error**, **runtime bug**, or **undefined behaviour**? Justify with one example.

---

### Q4. Complexity / cost

Related to: `Undefined behaviour symptoms`

What is the typical time/space cost of using `Undefined behaviour symptoms` naively, and what is one optimisation or better API choice?

---

### Q5. Integrate three concepts

Combine `assert from <cassert>`, `Using a debugger mentally`, and `Minimal repros` in a 15-30 line program that could appear in a real tool (CLI, parser, container wrapper, or concurrency sketch). What invariants must hold?

---

When you've answered all 5 in your own words, open `answers.md`.
