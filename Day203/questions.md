# Day 203 -- 5 Tricky Questions

> Theme: **GPU compute awareness**
> Try **without** peeking at `answers.md`. Write your guess, then compile/check.

---

### Q1. Predict / explain

Related to: `Why GPUs`

```cpp
#include <iostream>
int main() {
    // Sketch: what can go wrong if you ignore the rules for "Why GPUs"?
    std::cout << "think about lifetimes, ownership, or complexity\n";
    return 0;
}
```

What is the most common bug around `Why GPUs`, and how do you prevent it?

---

### Q2. Design choice

Related to: `Kernels idea`

When would you choose `Kernels idea` over a simpler alternative from earlier days? Give one concrete scenario and one counter-scenario.

---

### Q3. Compile or runtime?

Related to: `CUDA/OpenCL mindset`

Is a mistake with `CUDA/OpenCL mindset` more likely to be a **compile error**, **linker error**, **runtime bug**, or **undefined behaviour**? Justify with one example.

---

### Q4. Complexity / cost

Related to: `Data transfer costs`

What is the typical time/space cost of using `Data transfer costs` naively, and what is one optimisation or better API choice?

---

### Q5. Integrate three concepts

Combine `Why GPUs`, `CUDA/OpenCL mindset`, and `Tooling` in a 15-30 line program that could appear in a real tool (CLI, parser, container wrapper, or concurrency sketch). What invariants must hold?

---

When you've answered all 5 in your own words, open `answers.md`.
