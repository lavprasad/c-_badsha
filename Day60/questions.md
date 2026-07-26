# Day 60 -- 5 Tricky Questions

> Theme: **RAII patterns**
> Try **without** peeking at `answers.md`. Write your guess, then compile/check.

---

### Q1. Predict / explain

Related to: `Locks as RAII`

```cpp
#include <iostream>
int main() {
    // Sketch: what can go wrong if you ignore the rules for "Locks as RAII"?
    std::cout << "think about lifetimes, ownership, or complexity\n";
    return 0;
}
```

What is the most common bug around `Locks as RAII`, and how do you prevent it?

---

### Q2. Design choice

Related to: `Scope guards`

When would you choose `Scope guards` over a simpler alternative from earlier days? Give one concrete scenario and one counter-scenario.

---

### Q3. Compile or runtime?

Related to: `Custom deleter RAII`

Is a mistake with `Custom deleter RAII` more likely to be a **compile error**, **linker error**, **runtime bug**, or **undefined behaviour**? Justify with one example.

---

### Q4. Complexity / cost

Related to: `Exception-safe acquire`

What is the typical time/space cost of using `Exception-safe acquire` naively, and what is one optimisation or better API choice?

---

### Q5. Integrate three concepts

Combine `Locks as RAII`, `Custom deleter RAII`, and `Order of destruction` in a 15-30 line program that could appear in a real tool (CLI, parser, container wrapper, or concurrency sketch). What invariants must hold?

---

When you've answered all 5 in your own words, open `answers.md`.
