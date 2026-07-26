# Day 120 -- 5 Tricky Questions

> Theme: **Coroutines intro**
> Try **without** peeking at `answers.md`. Write your guess, then compile/check.

---

### Q1. Predict / explain

Related to: `co_await / co_yield / co_return`

```cpp
#include <iostream>
int main() {
    // Sketch: what can go wrong if you ignore the rules for "co_await / co_yield / co_return"?
    std::cout << "think about lifetimes, ownership, or complexity\n";
    return 0;
}
```

What is the most common bug around `co_await / co_yield / co_return`, and how do you prevent it?

---

### Q2. Design choice

Related to: `Generators idea`

When would you choose `Generators idea` over a simpler alternative from earlier days? Give one concrete scenario and one counter-scenario.

---

### Q3. Compile or runtime?

Related to: `promise_type sketch`

Is a mistake with `promise_type sketch` more likely to be a **compile error**, **linker error**, **runtime bug**, or **undefined behaviour**? Justify with one example.

---

### Q4. Complexity / cost

Related to: `Symmetric transfer idea`

What is the typical time/space cost of using `Symmetric transfer idea` naively, and what is one optimisation or better API choice?

---

### Q5. Integrate three concepts

Combine `co_await / co_yield / co_return`, `promise_type sketch`, and `When coroutines help` in a 15-30 line program that could appear in a real tool (CLI, parser, container wrapper, or concurrency sketch). What invariants must hold?

---

When you've answered all 5 in your own words, open `answers.md`.
