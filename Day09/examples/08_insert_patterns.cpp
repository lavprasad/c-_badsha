// Concept 8: insert patterns
// Compile: g++ -std=c++17 -Wall -Wextra 08_insert_patterns.cpp -o 08_insert_patterns

#include <iostream>
#include <map>
#include <set>
#include <string>
#include <vector>

int main() {
    std::vector<int> v;
    v.push_back(1);
    v.emplace_back(2);

    std::set<int> s;
    auto [it, inserted] = s.insert(10);
    std::cout << "set insert 10: " << (inserted ? "new" : "duplicate") << '\n';
    std::tie(it, inserted) = s.insert(10);
    std::cout << "set insert 10 again: " << (inserted ? "new" : "duplicate") << '\n';

    std::map<std::string, int> m;
    m.try_emplace("key1", 100);
    m.insert_or_assign("key1", 200);
    m.insert_or_assign("key2", 300);

    for (const auto& [k, val] : m) {
        std::cout << k << " = " << val << '\n';
    }
    return 0;
}
