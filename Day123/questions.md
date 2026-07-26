# Day 123 -- 5 Tricky Questions

> Theme: **source_location & debugging aids**
> Try **without** peeking at `answers.md`. Write your guess, then compile/check.

---

### Q1. Predict / explain

Related to: `std::source_location`

```cpp
#include <iostream>
int main() {
    // Sketch: what can go wrong if you ignore the rules for "std::source_location"?
    std::cout << "think about lifetimes, ownership, or complexity\n";
    return 0;
}
```

What is the most common bug around `std::source_location`, and how do you prevent it?

---

### Q2. Design choice

Related to: `Logging with location`

When would you choose `Logging with location` over a simpler alternative from earlier days? Give one concrete scenario and one counter-scenario.

---

### Q3. Compile or runtime?

Related to: `[[likely]] / [[unlikely]]`

Is a mistake with `[[likely]] / [[unlikely]]` more likely to be a **compile error**, **linker error**, **runtime bug**, or **undefined behaviour**? Justify with one example.

---

### Q4. Complexity / cost

Related to: `[[maybe_unused]]`

What is the typical time/space cost of using `[[maybe_unused]]` naively, and what is one optimisation or better API choice?

---

### Q5. Integrate three concepts

Combine `std::source_location`, `[[likely]] / [[unlikely]]`, and `Compiler builtins` in a 15-30 line program that could appear in a real tool (CLI, parser, container wrapper, or concurrency sketch). What invariants must hold?

---

When you've answered all 5 in your own words, open `answers.md`.
