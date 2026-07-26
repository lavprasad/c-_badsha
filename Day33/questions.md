# Day 33 -- 5 Tricky Questions

> Theme: **string_view (C++17)**
> Try **without** peeking at `answers.md`. Write your guess, then compile/check.

---

### Q1. Predict / explain

Related to: `What string_view is`

```cpp
#include <iostream>
int main() {
    // Sketch: what can go wrong if you ignore the rules for "What string_view is"?
    std::cout << "think about lifetimes, ownership, or complexity\n";
    return 0;
}
```

What is the most common bug around `What string_view is`, and how do you prevent it?

---

### Q2. Design choice

Related to: `Lifetime with string and C-strings`

When would you choose `Lifetime with string and C-strings` over a simpler alternative from earlier days? Give one concrete scenario and one counter-scenario.

---

### Q3. Compile or runtime?

Related to: `remove_prefix / remove_suffix`

Is a mistake with `remove_prefix / remove_suffix` more likely to be a **compile error**, **linker error**, **runtime bug**, or **undefined behaviour**? Justify with one example.

---

### Q4. Complexity / cost

Related to: `API design with string_view`

What is the typical time/space cost of using `API design with string_view` naively, and what is one optimisation or better API choice?

---

### Q5. Integrate three concepts

Combine `What string_view is`, `remove_prefix / remove_suffix`, and `Lifetimeing to string when needed` in a 15-30 line program that could appear in a real tool (CLI, parser, container wrapper, or concurrency sketch). What invariants must hold?

---

When you've answered all 5 in your own words, open `answers.md`.
