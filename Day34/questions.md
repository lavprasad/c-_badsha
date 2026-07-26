# Day 34 -- 5 Tricky Questions

> Theme: **filesystem (C++17)**
> Try **without** peeking at `answers.md`. Write your guess, then compile/check.

---

### Q1. Predict / explain

Related to: `std::filesystem::path`

```cpp
#include <iostream>
int main() {
    // Sketch: what can go wrong if you ignore the rules for "std::filesystem::path"?
    std::cout << "think about lifetimes, ownership, or complexity\n";
    return 0;
}
```

What is the most common bug around `std::filesystem::path`, and how do you prevent it?

---

### Q2. Design choice

Related to: `directory_iterator`

When would you choose `directory_iterator` over a simpler alternative from earlier days? Give one concrete scenario and one counter-scenario.

---

### Q3. Compile or runtime?

Related to: `remove / rename`

Is a mistake with `remove / rename` more likely to be a **compile error**, **linker error**, **runtime bug**, or **undefined behaviour**? Justify with one example.

---

### Q4. Complexity / cost

Related to: `absolute vs relative paths`

What is the typical time/space cost of using `absolute vs relative paths` naively, and what is one optimisation or better API choice?

---

### Q5. Integrate three concepts

Combine `std::filesystem::path`, `remove / rename`, and `Portable path tips` in a 15-30 line program that could appear in a real tool (CLI, parser, container wrapper, or concurrency sketch). What invariants must hold?

---

When you've answered all 5 in your own words, open `answers.md`.
