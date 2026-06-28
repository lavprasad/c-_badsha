// Concept 10: RAII with smart pointers — complete example
// Compile: g++ -std=c++17 -Wall -Wextra 10_raii_pipeline.cpp -o 10_raii_pipeline

#include <iostream>
#include <memory>
#include <stdexcept>
#include <string>
#include <vector>

class Database {
public:
    void connect() { std::cout << "DB connected\n"; }
    void disconnect() { std::cout << "DB disconnected\n"; }
    void query(const std::string& sql) {
        if (sql.empty()) throw std::invalid_argument("empty query");
        std::cout << "executing: " << sql << '\n';
    }
};

class Session {
    std::unique_ptr<Database> db_;
public:
    Session() : db_(std::make_unique<Database>()) {
        db_->connect();
    }
    ~Session() {
        if (db_) db_->disconnect();
    }
    Session(const Session&) = delete;
    Session& operator=(const Session&) = delete;

    void run_queries(const std::vector<std::string>& queries) {
        for (const auto& q : queries) {
            db_->query(q);
        }
    }
};

int main() {
    try {
        Session s;
        s.run_queries({"SELECT * FROM users", "SELECT COUNT(*) FROM orders", ""});
    } catch (const std::exception& e) {
        std::cerr << "error: " << e.what() << '\n';
    }
    std::cout << "session cleaned up\n";
    return 0;
}
