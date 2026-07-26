# Day 23 -- 5 Tricky Questions

> Theme: **Preprocessor advanced**
> Try **without** peeking at `answers.md`. Write your guess, then compile/check.

---

### Q1. Predict / explain

Related to: `Include guards revisited`

```cpp
#include <iostream>
int main() {
    // Sketch: what can go wrong if you ignore the rules for "Include guards revisited"?
    std::cout << "think about lifetimes, ownership, or complexity\n";
    return 0;
}
```

What is the most common bug around `Include guards revisited`, and how do you prevent it?

---

### Q2. Design choice

Related to: `Stringifying and concatenation`

When would you choose `Stringifying and concatenation` over a simpler alternative from earlier days? Give one concrete scenario and one counter-scenario.

---

### Q3. Compile or runtime?

Related to: `Feature test macros idea`

Is a mistake with `Feature test macros idea` more likely to be a **compile error**, **linker error**, **runtime bug**, or **undefined behaviour**? Justify with one example.

---

### Q4. Complexity / cost

Related to: `#error and #warning`

What is the typical time/space cost of using `#error and #warning` naively, and what is one optimisation or better API choice?

---

### Q5. Integrate three concepts

Combine `Include guards revisited`, `Feature test macros idea`, and `X-macros pattern` in a 15-30 line program that could appear in a real tool (CLI, parser, container wrapper, or concurrency sketch). What invariants must hold?

---

When you've answered all 5 in your own words, open `answers.md`.
