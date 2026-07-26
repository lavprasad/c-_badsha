# Day 110 -- 5 Tricky Questions

> Theme: **C interop**
> Try **without** peeking at `answers.md`. Write your guess, then compile/check.

---

### Q1. Predict / explain

Related to: `extern "C"`

```cpp
#include <iostream>
int main() {
    // Sketch: what can go wrong if you ignore the rules for "extern "C""?
    std::cout << "think about lifetimes, ownership, or complexity\n";
    return 0;
}
```

What is the most common bug around `extern "C"`, and how do you prevent it?

---

### Q2. Design choice

Related to: `Calling C from C++`

When would you choose `Calling C from C++` over a simpler alternative from earlier days? Give one concrete scenario and one counter-scenario.

---

### Q3. Compile or runtime?

Related to: `Name mangling`

Is a mistake with `Name mangling` more likely to be a **compile error**, **linker error**, **runtime bug**, or **undefined behaviour**? Justify with one example.

---

### Q4. Complexity / cost

Related to: `Ownership across boundary`

What is the typical time/space cost of using `Ownership across boundary` naively, and what is one optimisation or better API choice?

---

### Q5. Integrate three concepts

Combine `extern "C"`, `Name mangling`, and `Header wrappers` in a 15-30 line program that could appear in a real tool (CLI, parser, container wrapper, or concurrency sketch). What invariants must hold?

---

When you've answered all 5 in your own words, open `answers.md`.
