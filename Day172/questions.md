# Day 172 -- 5 Tricky Questions

> Theme: **Interview warmups A**
> Try **without** peeking at `answers.md`. Write your guess, then compile/check.

---

### Q1. Predict / explain

Related to: `Clarify requirements`

```cpp
#include <iostream>
int main() {
    // Sketch: what can go wrong if you ignore the rules for "Clarify requirements"?
    std::cout << "think about lifetimes, ownership, or complexity\n";
    return 0;
}
```

What is the most common bug around `Clarify requirements`, and how do you prevent it?

---

### Q2. Design choice

Related to: `Complexity targets`

When would you choose `Complexity targets` over a simpler alternative from earlier days? Give one concrete scenario and one counter-scenario.

---

### Q3. Compile or runtime?

Related to: `Brute then improve`

Is a mistake with `Brute then improve` more likely to be a **compile error**, **linker error**, **runtime bug**, or **undefined behaviour**? Justify with one example.

---

### Q4. Complexity / cost

Related to: `Test as you go`

What is the typical time/space cost of using `Test as you go` naively, and what is one optimisation or better API choice?

---

### Q5. Integrate three concepts

Combine `Clarify requirements`, `Brute then improve`, and `Time boxing` in a 15-30 line program that could appear in a real tool (CLI, parser, container wrapper, or concurrency sketch). What invariants must hold?

---

When you've answered all 5 in your own words, open `answers.md`.
