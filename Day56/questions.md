# Day 56 -- 5 Tricky Questions

> Theme: **Friends & encapsulation**
> Try **without** peeking at `answers.md`. Write your guess, then compile/check.

---

### Q1. Predict / explain

Related to: `friend functions`

```cpp
#include <iostream>
int main() {
    // Sketch: what can go wrong if you ignore the rules for "friend functions"?
    std::cout << "think about lifetimes, ownership, or complexity\n";
    return 0;
}
```

What is the most common bug around `friend functions`, and how do you prevent it?

---

### Q2. Design choice

Related to: `When friend is OK`

When would you choose `When friend is OK` over a simpler alternative from earlier days? Give one concrete scenario and one counter-scenario.

---

### Q3. Compile or runtime?

Related to: `operator<< as friend`

Is a mistake with `operator<< as friend` more likely to be a **compile error**, **linker error**, **runtime bug**, or **undefined behaviour**? Justify with one example.

---

### Q4. Complexity / cost

Related to: `Getters/setters discipline`

What is the typical time/space cost of using `Getters/setters discipline` naively, and what is one optimisation or better API choice?

---

### Q5. Integrate three concepts

Combine `friend functions`, `operator<< as friend`, and `Testing and friends` in a 15-30 line program that could appear in a real tool (CLI, parser, container wrapper, or concurrency sketch). What invariants must hold?

---

When you've answered all 5 in your own words, open `answers.md`.
