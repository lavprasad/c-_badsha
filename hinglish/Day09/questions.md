# Day 09 — 5 Tricky Sawaal

> Code chalaye **bina** aur `answers.md` me jhaanke bina try karo. Apna guess kaagaz par / comment me likho, *phir* compile karke check karo.

---

### Q1. `operator[]` ka side effect

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

Kya print hota hai? Kya humne kabhi `"Bob"` ko khud insert kiya tha?

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

Kya ye safe hai? Kya hota hai? Iterate karte hue erase karne ka sahi pattern kya hai?

---

### Q3. Map vs unordered_map ka order

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

Kya dono lines keys ek hi order me print karengi? Kaunsa sorted hai?

---

### Q4. Set me duplicate insert

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

`ok1`, `ok2` aur `s.size()` kya hain? (C++17 structured binding, `insert` ke return se.)

---

### Q5. Erase-remove vs index se erase

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

Iske baad vector me kya hai? Kya `std::remove` vector ko chhota karta hai?

---

Jab paanchon ka jawab apne shabdon me de do, tab `answers.md` kholo.
