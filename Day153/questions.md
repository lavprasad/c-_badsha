# Day 153 -- 5 Tricky Questions

> Theme: **Arrays & two pointers**
> Try **without** peeking at `answers.md`. Write your guess, then compile/check.

---

### Q1. Predict / explain

Related to: `Two pointers pattern`

```cpp
#include <iostream>
int main() {
    // Sketch: what can go wrong if you ignore the rules for "Two pointers pattern"?
    std::cout << "think about lifetimes, ownership, or complexity\n";
    return 0;
}
```

What is the most common bug around `Two pointers pattern`, and how do you prevent it?

---

### Q2. Design choice

Related to: `Prefix sums`

When would you choose `Prefix sums` over a simpler alternative from earlier days? Give one concrete scenario and one counter-scenario.

---

### Q3. Compile or runtime?

Related to: `Dutch national flag`

Is a mistake with `Dutch national flag` more likely to be a **compile error**, **linker error**, **runtime bug**, or **undefined behaviour**? Justify with one example.

---

### Q4. Complexity / cost

Related to: `Rotate array`

What is the typical time/space cost of using `Rotate array` naively, and what is one optimisation or better API choice?

---

### Q5. Integrate three concepts

Combine `Two pointers pattern`, `Dutch national flag`, and `Remove duplicates` in a 15-30 line program that could appear in a real tool (CLI, parser, container wrapper, or concurrency sketch). What invariants must hold?

---

When you've answered all 5 in your own words, open `answers.md`.
