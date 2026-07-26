// Concept 4: Tree BFS/DFS
// Day 173 -- Interview warmups B
// Compile: g++ -std=c++17 -Wall -Wextra 04_tree_bfs_dfs.cpp -o 04_tree_bfs_dfs

#include <iostream>
#include <string>
#include <vector>
#include <utility>

// Tiny demo harness for: Tree BFS/DFS
static void demo() {
    std::cout << "Day 173 / Concept 4: Tree BFS/DFS\n";

    // 1) Show a minimal, correct use of the idea.
    std::vector<int> xs{1, 2, 3};
    int sum = 0;
    for (int x : xs) sum += x;
    std::cout << "sample_sum=" << sum << '\n';

    // 2) Show a related check / invariant you should remember.
    const std::string tag = "tree_bfs_dfs";
    std::cout << "tag=" << tag << " size=" << tag.size() << '\n';

    // 3) Leave a clear extension point for your own experiments.
    auto describe = [](const std::string& s) {
        return s + " -- extend this demo";
    };
    std::cout << describe("ok") << '\n';
}

int main() {
    demo();
    return 0;
}
