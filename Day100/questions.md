# Day 100 -- 5 Tricky Questions

> Theme: **Profiling basics**
> Try **without** peeking at `answers.md`. Write your guess, then compile/check.

---

### Q1. Predict / explain

Related to: `Measure before optimize`

```cpp
#include <iostream>
int main() {
    // Sketch: what can go wrong if you ignore the rules for "Measure before optimize"?
    std::cout << "think about lifetimes, ownership, or complexity\n";
    return 0;
}
```

What is the most common bug around `Measure before optimize`, and how do you prevent it?

---

### Q2. Design choice

Related to: `Sampling idea`

When would you choose `Sampling idea` over a simpler alternative from earlier days? Give one concrete scenario and one counter-scenario.

---

### Q3. Compile or runtime?

Related to: `Microbenchmark pitfalls`

Is a mistake with `Microbenchmark pitfalls` more likely to be a **compile error**, **linker error**, **runtime bug**, or **undefined behaviour**? Justify with one example.

---

### Q4. Complexity / cost

Related to: `DoNotOptimize idea`

What is the typical time/space cost of using `DoNotOptimize idea` naively, and what is one optimisation or better API choice?

---

### Q5. Integrate three concepts

Combine `Measure before optimize`, `Microbenchmark pitfalls`, and `Flamegraph mindset` in a 15-30 line program that could appear in a real tool (CLI, parser, container wrapper, or concurrency sketch). What invariants must hold?

---

When you've answered all 5 in your own words, open `answers.md`.
