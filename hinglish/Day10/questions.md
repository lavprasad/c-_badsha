# Day 10 — 5 Tricky Sawaal

> Code chalaye **bina** aur `answers.md` me jhaanke bina try karo. Apna guess kaagaz par / comment me likho, *phir* compile karke check karo.

---

### Q1. Sort comparator ka contract

```cpp
#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> v = {3, 1, 4, 1, 5};
    std::sort(v.begin(), v.end(), [](int a, int b) {
        return a <= b;   // dhyan do: <= hai, < nahi
    });
    for (int x : v) std::cout << x << ' ';
    std::cout << '\n';
    return 0;
}
```

Kya ye comparator `std::sort` ke liye valid hai? `<` ki jagah `<=` se kya galat ho sakta hai?

---

### Q2. Lambda capture ki lifetime

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

Ye kya print karta hai? Kya ye safe hai? Kaunsa capture ise theek karta hai?

---

### Q3. `transform` ka output size

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

Kya hota hai? Fix kya hai?

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

Kya ye compile hota hai? Agar nahi to kya galat hai aur kaunsa algorithm use karna chahiye?

---

### Q5. Sort phir unique

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

Aakhri vector kya hai? `unique` se pehle `sort` kyun zaroori hai?

---

Jab paanchon ka jawab apne shabdon me de do, tab `answers.md` kholo.
