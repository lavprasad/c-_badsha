# Day 124 -- 5 Tricky Questions

> Theme: **bit utilities (C++20)**
> Try **without** peeking at `answers.md`. Write your guess, then compile/check.

---

### Q1. Predict / explain

Related to: `bit_cast`

```cpp
#include <iostream>
int main() {
    // Sketch: what can go wrong if you ignore the rules for "bit_cast"?
    std::cout << "think about lifetimes, ownership, or complexity\n";
    return 0;
}
```

What is the most common bug around `bit_cast`, and how do you prevent it?

---

### Q2. Design choice

Related to: `popcount / countl_zero`

When would you choose `popcount / countl_zero` over a simpler alternative from earlier days? Give one concrete scenario and one counter-scenario.

---

### Q3. Compile or runtime?

Related to: `has_single_bit`

Is a mistake with `has_single_bit` more likely to be a **compile error**, **linker error**, **runtime bug**, or **undefined behaviour**? Justify with one example.

---

### Q4. Complexity / cost

Related to: `Safe reinterpret`

What is the typical time/space cost of using `Safe reinterpret` naively, and what is one optimisation or better API choice?

---

### Q5. Integrate three concepts

Combine `bit_cast`, `has_single_bit`, and `Use in hashing` in a 15-30 line program that could appear in a real tool (CLI, parser, container wrapper, or concurrency sketch). What invariants must hold?

---

When you've answered all 5 in your own words, open `answers.md`.
