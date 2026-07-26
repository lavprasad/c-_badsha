# Day 148 -- 5 Tricky Questions

> Theme: **Observability for C++ services**
> Try **without** peeking at `answers.md`. Write your guess, then compile/check.

---

### Q1. Predict / explain

Related to: `Metrics counters/gauges`

```cpp
#include <iostream>
int main() {
    // Sketch: what can go wrong if you ignore the rules for "Metrics counters/gauges"?
    std::cout << "think about lifetimes, ownership, or complexity\n";
    return 0;
}
```

What is the most common bug around `Metrics counters/gauges`, and how do you prevent it?

---

### Q2. Design choice

Related to: `Tracing spans idea`

When would you choose `Tracing spans idea` over a simpler alternative from earlier days? Give one concrete scenario and one counter-scenario.

---

### Q3. Compile or runtime?

Related to: `Error budgets idea`

Is a mistake with `Error budgets idea` more likely to be a **compile error**, **linker error**, **runtime bug**, or **undefined behaviour**? Justify with one example.

---

### Q4. Complexity / cost

Related to: `Cardinality hazards`

What is the typical time/space cost of using `Cardinality hazards` naively, and what is one optimisation or better API choice?

---

### Q5. Integrate three concepts

Combine `Metrics counters/gauges`, `Error budgets idea`, and `Alerting wisely` in a 15-30 line program that could appear in a real tool (CLI, parser, container wrapper, or concurrency sketch). What invariants must hold?

---

When you've answered all 5 in your own words, open `answers.md`.
