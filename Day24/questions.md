# Day 24 -- 5 Tricky Questions

> Theme: **Bit manipulation**
> Try **without** peeking at `answers.md`. Write your guess, then compile/check.

---

### Q1. Predict / explain

Related to: `Bits, masks, shifts`

```cpp
#include <iostream>
int main() {
    // Sketch: what can go wrong if you ignore the rules for "Bits, masks, shifts"?
    std::cout << "think about lifetimes, ownership, or complexity\n";
    return 0;
}
```

What is the most common bug around `Bits, masks, shifts`, and how do you prevent it?

---

### Q2. Design choice

Related to: `Testing a bit`

When would you choose `Testing a bit` over a simpler alternative from earlier days? Give one concrete scenario and one counter-scenario.

---

### Q3. Compile or runtime?

Related to: `Endianness awareness`

Is a mistake with `Endianness awareness` more likely to be a **compile error**, **linker error**, **runtime bug**, or **undefined behaviour**? Justify with one example.

---

### Q4. Complexity / cost

Related to: `Counting bits (naive)`

What is the typical time/space cost of using `Counting bits (naive)` naively, and what is one optimisation or better API choice?

---

### Q5. Integrate three concepts

Combine `Bits, masks, shifts`, `Endianness awareness`, and `Flags enums` in a 15-30 line program that could appear in a real tool (CLI, parser, container wrapper, or concurrency sketch). What invariants must hold?

---

When you've answered all 5 in your own words, open `answers.md`.
