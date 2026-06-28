// Concept 6: lambda capture — by value and by reference
// Compile: g++ -std=c++17 -Wall -Wextra 06_lambda_capture.cpp -o 06_lambda_capture

#include <algorithm>
#include <iostream>
#include <vector>

int main() {
    int threshold = 5;
    std::vector<int> v = {1, 3, 6, 8, 2, 9};

    auto count_above = [threshold](int x) { return x > threshold; };
    int count = static_cast<int>(std::count_if(v.begin(), v.end(), count_above));
    std::cout << "count above " << threshold << ": " << count << '\n';

    int sum = 0;
    std::for_each(v.begin(), v.end(), [&sum](int x) { sum += x; });
    std::cout << "sum = " << sum << '\n';

    auto make_multiplier = [](int n) {
        return [n](int x) { return x * n; };
    };
    auto triple = make_multiplier(3);
    std::cout << "triple(4) = " << triple(4) << '\n';
    return 0;
}
