// Concept 9: virtual destructors — essential for polymorphic delete
// Compile: g++ -std=c++17 -Wall -Wextra 09_virtual_destructor.cpp -o 09_virtual_destructor

#include <iostream>

class Resource {
public:
    virtual ~Resource() {
        std::cout << "~Resource\n";
    }
};

class FileHandle : public Resource {
    char* buffer;
public:
    FileHandle() : buffer(new char[256]) {
        std::cout << "FileHandle opened\n";
    }
    ~FileHandle() override {
        delete[] buffer;
        std::cout << "~FileHandle (buffer freed)\n";
    }
};

int main() {
    std::cout << "--- with virtual destructor ---\n";
    Resource* r = new FileHandle();
    delete r;   // calls ~FileHandle() then ~Resource()

    std::cout << "\nCompare: stack object destroys correctly too\n";
    FileHandle fh;
    return 0;
}
