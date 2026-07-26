# Day 109 -- 5 Tricky Questions

> Theme: **Locales & iostream formatting**
> Try **without** peeking at `answers.md`. Write your guess, then compile/check.

---

### Q1. Predict / explain

Related to: `imbue locale`

```cpp
#include <iostream>
int main() {
    // Sketch: what can go wrong if you ignore the rules for "imbue locale"?
    std::cout << "think about lifetimes, ownership, or complexity\n";
    return 0;
}
```

What is the most common bug around `imbue locale`, and how do you prevent it?

---

### Q2. Design choice

Related to: `iomanip setw/setprecision`

When would you choose `iomanip setw/setprecision` over a simpler alternative from earlier days? Give one concrete scenario and one counter-scenario.

---

### Q3. Compile or runtime?

Related to: `Custom facets idea`

Is a mistake with `Custom facets idea` more likely to be a **compile error**, **linker error**, **runtime bug**, or **undefined behaviour**? Justify with one example.

---

### Q4. Complexity / cost

Related to: `Performance`

What is the typical time/space cost of using `Performance` naively, and what is one optimisation or better API choice?

---

### Q5. Integrate three concepts

Combine `imbue locale`, `Custom facets idea`, and `Formatting tables` in a 15-30 line program that could appear in a real tool (CLI, parser, container wrapper, or concurrency sketch). What invariants must hold?

---

When you've answered all 5 in your own words, open `answers.md`.
