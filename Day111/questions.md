# Day 111 -- 5 Tricky Questions

> Theme: **POSIX essentials for C++**
> Try **without** peeking at `answers.md`. Write your guess, then compile/check.

---

### Q1. Predict / explain

Related to: `errno`

```cpp
#include <iostream>
int main() {
    // Sketch: what can go wrong if you ignore the rules for "errno"?
    std::cout << "think about lifetimes, ownership, or complexity\n";
    return 0;
}
```

What is the most common bug around `errno`, and how do you prevent it?

---

### Q2. Design choice

Related to: `fork/exec idea`

When would you choose `fork/exec idea` over a simpler alternative from earlier days? Give one concrete scenario and one counter-scenario.

---

### Q3. Compile or runtime?

Related to: `signals cautious use`

Is a mistake with `signals cautious use` more likely to be a **compile error**, **linker error**, **runtime bug**, or **undefined behaviour**? Justify with one example.

---

### Q4. Complexity / cost

Related to: `dup2 idea`

What is the typical time/space cost of using `dup2 idea` naively, and what is one optimisation or better API choice?

---

### Q5. Integrate three concepts

Combine `errno`, `signals cautious use`, and `Non-blocking flags` in a 15-30 line program that could appear in a real tool (CLI, parser, container wrapper, or concurrency sketch). What invariants must hold?

---

When you've answered all 5 in your own words, open `answers.md`.
