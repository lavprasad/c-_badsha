# Day 09 — 5 Tricky Questions

> Try **without** running the code or peeking at `answers.md`. Write your guess on paper / in a comment, *then* compile and check.

---

### Q1. `operator[]` side effect

```cpp
#include <iostream>
#include <map>
#include <string>

int main() {
    std::map<std::string, int> scores;
    scores["Alice"] = 100;

    std::cout << scores["Bob"] << '\n';
    std::cout << scores.size() << '\n';
    return 0;
}
```

What prints? Did we ever explicitly insert `"Bob"`?

---

### Q2. Iterator invalidation

```cpp
#include <iostream>
#include <vector>

int main() {
    std::vector<int> v = {1, 2, 3, 4, 5};
    for (auto it = v.begin(); it != v.end(); ++it) {
        if (*it % 2 == 0) {
            v.erase(it);
        }
    }
    for (int x : v) std::cout << x << ' ';
    std::cout << '\n';
    return 0;
}
```

Is this safe? What happens? What's the correct erase-during-iteration pattern?

---

### Q3. Map vs unordered_map ordering

```cpp
#include <iostream>
#include <map>
#include <unordered_map>
#include <string>

int main() {
    std::map<std::string, int> ordered{{"zebra", 1}, {"apple", 2}, {"mango", 3}};
    std::unordered_map<std::string, int> hashed{{"zebra", 1}, {"apple", 2}, {"mango", 3}};

    std::cout << "map: ";
    for (const auto& [k, v] : ordered) std::cout << k << ' ';
    std::cout << "\nunordered: ";
    for (const auto& [k, v] : hashed) std::cout << k << ' ';
    std::cout << '\n';
    return 0;
}
```

Will both lines print keys in the same order? Which is sorted?

---

### Q4. Set insert duplicate

```cpp
#include <iostream>
#include <set>

int main() {
    std::set<int> s;
    auto [it1, ok1] = s.insert(5);
    auto [it2, ok2] = s.insert(5);

    std::cout << ok1 << ' ' << ok2 << ' ' << s.size() << '\n';
    return 0;
}
```

What are `ok1`, `ok2`, and `s.size()`? (C++17 structured binding from `insert` return.)

---

### Q5. Erase-remove vs erase by index

```cpp
#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> v = {1, 2, 3, 2, 4, 2, 5};
    v.erase(std::remove(v.begin(), v.end(), 2), v.end());

    for (int x : v) std::cout << x << ' ';
    std::cout << '\n';
    return 0;
}
```

What does the vector contain after this? Does `std::remove` shrink the vector?

---

When you've answered all 5 in your own words, open `answers.md`.
