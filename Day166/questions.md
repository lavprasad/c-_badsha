# Day 166 -- 5 Tricky Questions

> Theme: **Greedy algorithms**
> Try **without** peeking at `answers.md`. Write your guess, then compile/check.

---

### Q1. Predict / explain

Related to: `Exchange argument idea`

```cpp
#include <iostream>
int main() {
    // Sketch: what can go wrong if you ignore the rules for "Exchange argument idea"?
    std::cout << "think about lifetimes, ownership, or complexity\n";
    return 0;
}
```

What is the most common bug around `Exchange argument idea`, and how do you prevent it?

---

### Q2. Design choice

Related to: `Huffman idea`

When would you choose `Huffman idea` over a simpler alternative from earlier days? Give one concrete scenario and one counter-scenario.

---

### Q3. Compile or runtime?

Related to: `When greedy fails`

Is a mistake with `When greedy fails` more likely to be a **compile error**, **linker error**, **runtime bug**, or **undefined behaviour**? Justify with one example.

---

### Q4. Complexity / cost

Related to: `Sorting as preprocess`

What is the typical time/space cost of using `Sorting as preprocess` naively, and what is one optimisation or better API choice?

---

### Q5. Integrate three concepts

Combine `Exchange argument idea`, `When greedy fails`, and `Counterexamples` in a 15-30 line program that could appear in a real tool (CLI, parser, container wrapper, or concurrency sketch). What invariants must hold?

---

When you've answered all 5 in your own words, open `answers.md`.
