# Day 97 -- 5 Tricky Questions

> Theme: **Compression & hashing mindset**
> Try **without** peeking at `answers.md`. Write your guess, then compile/check.

---

### Q1. Predict / explain

Related to: `Checksums vs crypto hashes`

```cpp
#include <iostream>
int main() {
    // Sketch: what can go wrong if you ignore the rules for "Checksums vs crypto hashes"?
    std::cout << "think about lifetimes, ownership, or complexity\n";
    return 0;
}
```

What is the most common bug around `Checksums vs crypto hashes`, and how do you prevent it?

---

### Q2. Design choice

Related to: `Hash quality`

When would you choose `Hash quality` over a simpler alternative from earlier days? Give one concrete scenario and one counter-scenario.

---

### Q3. Compile or runtime?

Related to: `Bloom filter idea`

Is a mistake with `Bloom filter idea` more likely to be a **compile error**, **linker error**, **runtime bug**, or **undefined behaviour**? Justify with one example.

---

### Q4. Complexity / cost

Related to: `Integrity checks`

What is the typical time/space cost of using `Integrity checks` naively, and what is one optimisation or better API choice?

---

### Q5. Integrate three concepts

Combine `Checksums vs crypto hashes`, `Bloom filter idea`, and `Content addressing` in a 15-30 line program that could appear in a real tool (CLI, parser, container wrapper, or concurrency sketch). What invariants must hold?

---

When you've answered all 5 in your own words, open `answers.md`.
