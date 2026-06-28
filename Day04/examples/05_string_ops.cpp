// Concept 5: common std::string operations
// Compile: g++ -std=c++17 -Wall -Wextra 05_string_ops.cpp -o 05_string_ops

#include <iostream>
#include <string>

int main() {
    std::string text = "The quick brown fox";

    std::cout << "substr(4, 5): " << text.substr(4, 5) << '\n';

    std::size_t pos = text.find("fox");
    if (pos != std::string::npos) {
        std::cout << "'fox' found at index " << pos << '\n';
    }

    text.replace(4, 5, "slow");
    std::cout << "after replace: " << text << '\n';

    return 0;
}
