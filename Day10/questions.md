# Day 10 — 5 Tricky Questions

> Try **without** running the code or peeking at `answers.md`. Write your guess on paper / in a comment, *then* compile and check.

---

### Q1. Sort comparator contract

```cpp
#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> v = {3, 1, 4, 1, 5};
    std::sort(v.begin(), v.end(), [](int a, int b) {
        return a <= b;   // note: <= not <
    });
    for (int x : v) std::cout << x << ' ';
    std::cout << '\n';
    return 0;
}
```

Is this comparator valid for `std::sort`? What can go wrong with `<=` instead of `<`?

---

### Q2. Lambda capture lifetime

```cpp
#include <iostream>
#include <functional>
#include <vector>

std::function<int()> make_adder() {
    int x = 10;
    return [&x]() { return x + 1; };
}

int main() {
    auto fn = make_adder();
    std::cout << fn() << '\n';
    return 0;
}
```

What does this print? Is it safe? What capture fixes it?

---

### Q3. `transform` output size

```cpp
#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> src = {1, 2, 3};
    std::vector<int> dst;
    std::transform(src.begin(), src.end(), dst.begin(),
                   [](int x) { return x * 2; });
    for (int x : dst) std::cout << x << ' ';
    std::cout << '\n';
    return 0;
}
```

What happens? What's the fix?

---

### Q4. `find` vs `find_if`

```cpp
#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

int main() {
    std::vector<std::string> v = {"apple", "banana", "cherry"};
    auto it = std::find(v.begin(), v.end(),
                        [](const std::string& s) { return s.size() > 5; });
    if (it != v.end())
        std::cout << *it << '\n';
    return 0;
}
```

Does this compile? If not, what's wrong and which algorithm should you use?

---

### Q5. Sort then unique

```cpp
#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> v = {3, 1, 4, 1, 5, 9, 2, 6, 5, 3};
    std::sort(v.begin(), v.end());
    auto last = std::unique(v.begin(), v.end());
    v.erase(last, v.end());

    for (int x : v) std::cout << x << ' ';
    std::cout << '\n';
    return 0;
}
```

What is the final vector? Why must you `sort` before `unique`?

---

When you've answered all 5 in your own words, open `answers.md`.
