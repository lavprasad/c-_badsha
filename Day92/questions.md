# Day 92 -- 5 Tricky Questions

> Theme: **Networking sockets intro (POSIX)**
> Try **without** peeking at `answers.md`. Write your guess, then compile/check.

---

### Q1. Predict / explain

Related to: `TCP overview`

```cpp
#include <iostream>
int main() {
    // Sketch: what can go wrong if you ignore the rules for "TCP overview"?
    std::cout << "think about lifetimes, ownership, or complexity\n";
    return 0;
}
```

What is the most common bug around `TCP overview`, and how do you prevent it?

---

### Q2. Design choice

Related to: `connect/send/recv`

When would you choose `connect/send/recv` over a simpler alternative from earlier days? Give one concrete scenario and one counter-scenario.

---

### Q3. Compile or runtime?

Related to: `Endianness htons`

Is a mistake with `Endianness htons` more likely to be a **compile error**, **linker error**, **runtime bug**, or **undefined behaviour**? Justify with one example.

---

### Q4. Complexity / cost

Related to: `Errors and errno`

What is the typical time/space cost of using `Errors and errno` naively, and what is one optimisation or better API choice?

---

### Q5. Integrate three concepts

Combine `TCP overview`, `Endianness htons`, and `Simple echo server sketch` in a 15-30 line program that could appear in a real tool (CLI, parser, container wrapper, or concurrency sketch). What invariants must hold?

---

When you've answered all 5 in your own words, open `answers.md`.
