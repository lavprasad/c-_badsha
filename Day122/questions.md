# Day 122 -- 5 Tricky Questions

> Theme: **Calendar & timezone (C++20)**
> Try **without** peeking at `answers.md`. Write your guess, then compile/check.

---

### Q1. Predict / explain

Related to: `year_month_day`

```cpp
#include <iostream>
int main() {
    // Sketch: what can go wrong if you ignore the rules for "year_month_day"?
    std::cout << "think about lifetimes, ownership, or complexity\n";
    return 0;
}
```

What is the most common bug around `year_month_day`, and how do you prevent it?

---

### Q2. Design choice

Related to: `sys_days`

When would you choose `sys_days` over a simpler alternative from earlier days? Give one concrete scenario and one counter-scenario.

---

### Q3. Compile or runtime?

Related to: `Durations recap`

Is a mistake with `Durations recap` more likely to be a **compile error**, **linker error**, **runtime bug**, or **undefined behaviour**? Justify with one example.

---

### Q4. Complexity / cost

Related to: `UTC vs local`

What is the typical time/space cost of using `UTC vs local` naively, and what is one optimisation or better API choice?

---

### Q5. Integrate three concepts

Combine `year_month_day`, `Durations recap`, and `Practical tips` in a 15-30 line program that could appear in a real tool (CLI, parser, container wrapper, or concurrency sketch). What invariants must hold?

---

When you've answered all 5 in your own words, open `answers.md`.
