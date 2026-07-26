# Day 51 -- 5 Tricky Questions

> Theme: **constexpr & compile-time checks bridge**
> Try **without** peeking at `answers.md`. Write your guess, then compile/check.

---

### Q1. Predict / explain

Related to: `constexpr functions recap`

```cpp
#include <iostream>
int main() {
    // Sketch: what can go wrong if you ignore the rules for "constexpr functions recap"?
    std::cout << "think about lifetimes, ownership, or complexity\n";
    return 0;
}
```

What is the most common bug around `constexpr functions recap`, and how do you prevent it?

---

### Q2. Design choice

Related to: `if constexpr preview`

When would you choose `if constexpr preview` over a simpler alternative from earlier days? Give one concrete scenario and one counter-scenario.

---

### Q3. Compile or runtime?

Related to: `Lookup tables`

Is a mistake with `Lookup tables` more likely to be a **compile error**, **linker error**, **runtime bug**, or **undefined behaviour**? Justify with one example.

---

### Q4. Complexity / cost

Related to: `Diagnostic quality`

What is the typical time/space cost of using `Diagnostic quality` naively, and what is one optimisation or better API choice?

---

### Q5. Integrate three concepts

Combine `constexpr functions recap`, `Lookup tables`, and `Limits in C++17` in a 15-30 line program that could appear in a real tool (CLI, parser, container wrapper, or concurrency sketch). What invariants must hold?

---

When you've answered all 5 in your own words, open `answers.md`.
