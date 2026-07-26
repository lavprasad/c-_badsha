# Day 12 -- 5 Tricky Questions

> Theme: **File I/O with fstream**
> Try **without** peeking at `answers.md`. Write your guess, then compile/check.

---

### Q1. Predict / explain

Related to: `Opening files with ifstream/ofstream`

```cpp
#include <iostream>
int main() {
    // Sketch: what can go wrong if you ignore the rules for "Opening files with ifstream/ofstream"?
    std::cout << "think about lifetimes, ownership, or complexity\n";
    return 0;
}
```

What is the most common bug around `Opening files with ifstream/ofstream`, and how do you prevent it?

---

### Q2. Design choice

Related to: `Writing formatted output`

When would you choose `Writing formatted output` over a simpler alternative from earlier days? Give one concrete scenario and one counter-scenario.

---

### Q3. Compile or runtime?

Related to: `Checking fail/eof/bad bits`

Is a mistake with `Checking fail/eof/bad bits` more likely to be a **compile error**, **linker error**, **runtime bug**, or **undefined behaviour**? Justify with one example.

---

### Q4. Complexity / cost

Related to: `Seeking with seekg/seekp/tellg`

What is the typical time/space cost of using `Seeking with seekg/seekp/tellg` naively, and what is one optimisation or better API choice?

---

### Q5. Integrate three concepts

Combine `Opening files with ifstream/ofstream`, `Checking fail/eof/bad bits`, and `Working with paths as strings` in a 15-30 line program that could appear in a real tool (CLI, parser, container wrapper, or concurrency sketch). What invariants must hold?

---

When you've answered all 5 in your own words, open `answers.md`.
