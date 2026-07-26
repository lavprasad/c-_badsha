# Day 128 -- 5 Tricky Questions

> Theme: **Template metaprogramming classic**
> Try **without** peeking at `answers.md`. Write your guess, then compile/check.

---

### Q1. Predict / explain

Related to: `type traits recap`

```cpp
#include <iostream>
int main() {
    // Sketch: what can go wrong if you ignore the rules for "type traits recap"?
    std::cout << "think about lifetimes, ownership, or complexity\n";
    return 0;
}
```

What is the most common bug around `type traits recap`, and how do you prevent it?

---

### Q2. Design choice

Related to: `conditional / enable_if`

When would you choose `conditional / enable_if` over a simpler alternative from earlier days? Give one concrete scenario and one counter-scenario.

---

### Q3. Compile or runtime?

Related to: `Type lists idea`

Is a mistake with `Type lists idea` more likely to be a **compile error**, **linker error**, **runtime bug**, or **undefined behaviour**? Justify with one example.

---

### Q4. Complexity / cost

Related to: `Value computation`

What is the typical time/space cost of using `Value computation` naively, and what is one optimisation or better API choice?

---

### Q5. Integrate three concepts

Combine `type traits recap`, `Type lists idea`, and `Debug compile errors` in a 15-30 line program that could appear in a real tool (CLI, parser, container wrapper, or concurrency sketch). What invariants must hold?

---

When you've answered all 5 in your own words, open `answers.md`.
