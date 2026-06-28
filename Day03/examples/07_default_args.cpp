// Concept 7: default arguments
// Compile: g++ -std=c++17 -Wall -Wextra 07_default_args.cpp -o 07_default_args

#include <iostream>
#include <string>

void log_message(const std::string& msg, int level = 1, char tag = '*') {
    for (int i = 0; i < level; ++i) {
        std::cout << tag;
    }
    std::cout << ' ' << msg << '\n';
}

int main() {
    log_message("Default level and tag");
    log_message("Custom level", 3);
    log_message("Custom all", 2, '!');
    return 0;
}
