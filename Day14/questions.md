# Day 14 -- 5 Tricky Questions

> Theme: **Operator overloading basics**
> Try **without** peeking at `answers.md`. Write your guess, then compile/check.

---

### Q1. Predict / explain

Related to: `Why overload operators`

```cpp
#include <iostream>
int main() {
    // Sketch: what can go wrong if you ignore the rules for "Why overload operators"?
    std::cout << "think about lifetimes, ownership, or complexity\n";
    return 0;
}
```

What is the most common bug around `Why overload operators`, and how do you prevent it?

---

### Q2. Design choice

Related to: `operator<< for ostream`

When would you choose `operator<< for ostream` over a simpler alternative from earlier days? Give one concrete scenario and one counter-scenario.

---

### Q3. Compile or runtime?

Related to: `operator[] for containers`

Is a mistake with `operator[] for containers` more likely to be a **compile error**, **linker error**, **runtime bug**, or **undefined behaviour**? Justify with one example.

---

### Q4. Complexity / cost

Related to: `Conversion operators`

What is the typical time/space cost of using `Conversion operators` naively, and what is one optimisation or better API choice?

---

### Q5. Integrate three concepts

Combine `Why overload operators`, `operator[] for containers`, and `Avoiding surprising overloads` in a 15-30 line program that could appear in a real tool (CLI, parser, container wrapper, or concurrency sketch). What invariants must hold?

---

When you've answered all 5 in your own words, open `answers.md`.
