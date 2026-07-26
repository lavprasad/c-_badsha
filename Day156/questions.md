# Day 156 -- 5 Tricky Questions

> Theme: **Hashing practice**
> Try **without** peeking at `answers.md`. Write your guess, then compile/check.

---

### Q1. Predict / explain

Related to: `Frequency maps`

```cpp
#include <iostream>
int main() {
    // Sketch: what can go wrong if you ignore the rules for "Frequency maps"?
    std::cout << "think about lifetimes, ownership, or complexity\n";
    return 0;
}
```

What is the most common bug around `Frequency maps`, and how do you prevent it?

---

### Q2. Design choice

Related to: `Anagrams`

When would you choose `Anagrams` over a simpler alternative from earlier days? Give one concrete scenario and one counter-scenario.

---

### Q3. Compile or runtime?

Related to: `First unique`

Is a mistake with `First unique` more likely to be a **compile error**, **linker error**, **runtime bug**, or **undefined behaviour**? Justify with one example.

---

### Q4. Complexity / cost

Related to: `Collision handling idea`

What is the typical time/space cost of using `Collision handling idea` naively, and what is one optimisation or better API choice?

---

### Q5. Integrate three concepts

Combine `Frequency maps`, `First unique`, and `Rolling hash uses` in a 15-30 line program that could appear in a real tool (CLI, parser, container wrapper, or concurrency sketch). What invariants must hold?

---

When you've answered all 5 in your own words, open `answers.md`.
