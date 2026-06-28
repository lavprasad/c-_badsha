// Concept 9: rule of zero — compiler-generated special members
// Compile: g++ -std=c++17 -Wall -Wextra 09_rule_of_zero.cpp -o 09_rule_of_zero

#include <iostream>
#include <memory>
#include <string>
#include <vector>

class Document {
    std::string title_;
    std::vector<std::string> lines_;
    std::unique_ptr<int> revision_;
public:
    Document(std::string title, std::vector<std::string> lines)
        : title_(std::move(title))
        , lines_(std::move(lines))
        , revision_(std::make_unique<int>(1)) {}

    void add_line(std::string line) {
        lines_.push_back(std::move(line));
        ++(*revision_);
    }

    void print() const {
        std::cout << title_ << " (rev " << *revision_ << ")\n";
        for (const auto& line : lines_) {
            std::cout << "  " << line << '\n';
        }
    }
};

int main() {
    Document d("Report", {"Introduction", "Body"});
    Document copy = d;
    copy.add_line("Conclusion");
    d.print();
    copy.print();
    return 0;
}
