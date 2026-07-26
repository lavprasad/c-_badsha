# Day 41 -- 5 Tricky Questions

> Theme: **Sequence containers deep dive**
> Try **without** peeking at `answers.md`. Write your guess, then compile/check.

---

### Q1. Predict / explain

Related to: `vector vs deque vs list`

```cpp
#include <iostream>
int main() {
    // Sketch: what can go wrong if you ignore the rules for "vector vs deque vs list"?
    std::cout << "think about lifetimes, ownership, or complexity\n";
    return 0;
}
```

What is the most common bug around `vector vs deque vs list`, and how do you prevent it?

---

### Q2. Design choice

Related to: `array`

When would you choose `array` over a simpler alternative from earlier days? Give one concrete scenario and one counter-scenario.

---

### Q3. Compile or runtime?

Related to: `Cache locality`

Is a mistake with `Cache locality` more likely to be a **compile error**, **linker error**, **runtime bug**, or **undefined behaviour**? Justify with one example.

---

### Q4. Complexity / cost

Related to: `size complexity notes`

What is the typical time/space cost of using `size complexity notes` naively, and what is one optimisation or better API choice?

---

### Q5. Integrate three concepts

Combine `vector vs deque vs list`, `Cache locality`, and `API differences` in a 15-30 line program that could appear in a real tool (CLI, parser, container wrapper, or concurrency sketch). What invariants must hold?

---

When you've answered all 5 in your own words, open `answers.md`.
