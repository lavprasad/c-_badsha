// Concept 10: comments, formatting & the compilation pipeline
// Compile each stage manually:
//   g++ -E 10_pipeline.cpp -o 10_pipeline.i      (preprocessor only)
//   g++ -S 10_pipeline.cpp -o 10_pipeline.s      (compiler -> assembly)
//   g++ -c 10_pipeline.cpp -o 10_pipeline.o      (assembler -> object file)
//   g++       10_pipeline.o -o 10_pipeline       (linker -> executable)
//
// Or all-in-one:  g++ -std=c++17 -Wall -Wextra 10_pipeline.cpp -o 10_pipeline

#include <iostream>

// single-line comment
/* multi-line
   comment */

int add(int x, int y);   // declaration (linker will look for the definition)

int main() {
    std::cout << "2 + 3 = " << add(2, 3) << '\n';
    return 0;
}

int add(int x, int y) {  // definition -- if you delete this, linker error
    return x + y;
}
