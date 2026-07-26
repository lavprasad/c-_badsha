# Day 142 -- 5 Tricky Questions

> Theme: **Security hardening C++**
> Try **without** peeking at `answers.md`. Write your guess, then compile/check.

---

### Q1. Predict / explain

Related to: `Untrusted input`

```cpp
#include <iostream>
int main() {
    // Sketch: what can go wrong if you ignore the rules for "Untrusted input"?
    std::cout << "think about lifetimes, ownership, or complexity\n";
    return 0;
}
```

What is the most common bug around `Untrusted input`, and how do you prevent it?

---

### Q2. Design choice

Related to: `Buffer sizes`

When would you choose `Buffer sizes` over a simpler alternative from earlier days? Give one concrete scenario and one counter-scenario.

---

### Q3. Compile or runtime?

Related to: `Privilege separation idea`

Is a mistake with `Privilege separation idea` more likely to be a **compile error**, **linker error**, **runtime bug**, or **undefined behaviour**? Justify with one example.

---

### Q4. Complexity / cost

Related to: `Safe APIs`

What is the typical time/space cost of using `Safe APIs` naively, and what is one optimisation or better API choice?

---

### Q5. Integrate three concepts

Combine `Untrusted input`, `Privilege separation idea`, and `Threat modeling lite` in a 15-30 line program that could appear in a real tool (CLI, parser, container wrapper, or concurrency sketch). What invariants must hold?

---

When you've answered all 5 in your own words, open `answers.md`.
