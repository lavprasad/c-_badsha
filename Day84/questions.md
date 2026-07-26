# Day 84 -- 5 Tricky Questions

> Theme: **Condition variables**
> Try **without** peeking at `answers.md`. Write your guess, then compile/check.

---

### Q1. Predict / explain

Related to: `wait / notify`

```cpp
#include <iostream>
int main() {
    // Sketch: what can go wrong if you ignore the rules for "wait / notify"?
    std::cout << "think about lifetimes, ownership, or complexity\n";
    return 0;
}
```

What is the most common bug around `wait / notify`, and how do you prevent it?

---

### Q2. Design choice

Related to: `Predicate waits`

When would you choose `Predicate waits` over a simpler alternative from earlier days? Give one concrete scenario and one counter-scenario.

---

### Q3. Compile or runtime?

Related to: `notify_one vs notify_all`

Is a mistake with `notify_one vs notify_all` more likely to be a **compile error**, **linker error**, **runtime bug**, or **undefined behaviour**? Justify with one example.

---

### Q4. Complexity / cost

Related to: `Lost wakeup pitfalls`

What is the typical time/space cost of using `Lost wakeup pitfalls` naively, and what is one optimisation or better API choice?

---

### Q5. Integrate three concepts

Combine `wait / notify`, `notify_one vs notify_all`, and `Shutdown signals` in a 15-30 line program that could appear in a real tool (CLI, parser, container wrapper, or concurrency sketch). What invariants must hold?

---

When you've answered all 5 in your own words, open `answers.md`.
