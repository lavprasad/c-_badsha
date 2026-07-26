# Day 168 -- 5 Tricky Questions

> Theme: **String algorithms**
> Try **without** peeking at `answers.md`. Write your guess, then compile/check.

---

### Q1. Predict / explain

Related to: `KMP idea`

```cpp
#include <iostream>
int main() {
    // Sketch: what can go wrong if you ignore the rules for "KMP idea"?
    std::cout << "think about lifetimes, ownership, or complexity\n";
    return 0;
}
```

What is the most common bug around `KMP idea`, and how do you prevent it?

---

### Q2. Design choice

Related to: `Trie`

When would you choose `Trie` over a simpler alternative from earlier days? Give one concrete scenario and one counter-scenario.

---

### Q3. Compile or runtime?

Related to: `Rolling hash match`

Is a mistake with `Rolling hash match` more likely to be a **compile error**, **linker error**, **runtime bug**, or **undefined behaviour**? Justify with one example.

---

### Q4. Complexity / cost

Related to: `Aho-Corasick idea`

What is the typical time/space cost of using `Aho-Corasick idea` naively, and what is one optimisation or better API choice?

---

### Q5. Integrate three concepts

Combine `KMP idea`, `Rolling hash match`, and `Unicode caution` in a 15-30 line program that could appear in a real tool (CLI, parser, container wrapper, or concurrency sketch). What invariants must hold?

---

When you've answered all 5 in your own words, open `answers.md`.
