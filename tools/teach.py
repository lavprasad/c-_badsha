"""Plain-English teaching snippets for Badsha day notes."""
from __future__ import annotations

# Each entry: keywords (matched against concept title), then teaching fields.
# First matching bank entry wins (order matters — more specific first).

BANK: list[dict] = [
    {
        "keys": ["fstream", "ifstream", "ofstream", "file i/o", "opening files", "getline", "seekg", "binary read"],
        "plain": "Files let your program keep data after it exits. In C++ you open a stream (`ifstream` to read, `ofstream` to write), use it like `cin`/`cout`, then let RAII close it when the object dies.",
        "code": '#include <fstream>\n#include <string>\nstd::ifstream in("data.txt");\nstd::string line;\nwhile (std::getline(in, line)) {\n  // use line\n}\nif (!in.eof() && in.fail()) { /* real error */ }',
        "remember": "Always check that the file opened (`if (!in)`) before reading.",
        "mistake": "Ignoring open failure and reading garbage / looping forever on a bad stream.",
    },
    {
        "keys": ["enum class", "scoped enum", "classic c enums", "enums"],
        "plain": "An enum names a small set of choices. Prefer `enum class` so names stay scoped (`Color::Red`) and do not silently become ints.",
        "code": "enum class Color { Red, Green, Blue };\nColor c = Color::Red;\n// int x = c;  // error — good\nint x = static_cast<int>(c);",
        "remember": "Use `enum class` unless you truly need old C-style unscoped enums.",
        "mistake": "Switching on an enum without covering all cases or a `default`.",
    },
    {
        "keys": ["operator<<", "operator+", "operator==", "operator[]", "operator()", "overload operators", "operator overloading"],
        "plain": "Operator overloading lets your types use familiar symbols (`+`, `==`, `<<`) when the meaning is obvious. If the symbol would surprise readers, use a named function instead.",
        "code": "struct Point { int x, y; };\nbool operator==(Point a, Point b) {\n  return a.x == b.x && a.y == b.y;\n}\nstd::ostream& operator<<(std::ostream& os, Point p) {\n  return os << '(' << p.x << ',' << p.y << ')';\n}",
        "remember": "Overload only when the meaning matches built-in intuition.",
        "mistake": "Clever operators that hide expensive work or mutate unexpectedly.",
    },
    {
        "keys": ["copy constructor", "copy assignment", "rule of three", "rule of five", "rule of zero", "special members", "self-assignment"],
        "plain": "If your class owns a resource (heap memory, file handle), you must define how it copies, moves, and destroys — or delete copying. If it owns nothing special, write nothing (rule of zero) and use members that already manage themselves.",
        "code": "struct Buf {\n  int* p;\n  explicit Buf(int n) : p(new int[n]) {}\n  ~Buf() { delete[] p; }\n  Buf(const Buf&) = delete;\n  Buf& operator=(const Buf&) = delete;\n};",
        "remember": "Rule of zero first; if you need a destructor, revisit copy/move.",
        "mistake": "Shallow-copying a raw pointer so two objects `delete` the same memory.",
    },
    {
        "keys": ["const correctness", "const member", "mutable", "pointer-to-const", "const iterators"],
        "plain": "`const` is a promise: 'I will not change this through this name.' It catches bugs at compile time and documents intent. Put `const` on observers and on parameters you only read.",
        "code": "void print(const std::string& s);  // no copy, no mutate\nstruct Counter {\n  int n = 0;\n  int get() const { return n; }  // may call on const objects\n};",
        "remember": "Prefer `const T&` for read-only parameters bigger than a machine word.",
        "mistake": "Casting away `const` to mutate something that callers assumed was fixed.",
    },
    {
        "keys": ["namespace", "adl", "anonymous namespace", "using-declaration"],
        "plain": "Namespaces group names so `draw` in graphics does not clash with `draw` in cards. Prefer `std::` qualification; avoid `using namespace std;` in headers.",
        "code": "namespace app {\n  void run();\n}\nvoid app::run() { /* ... */ }",
        "remember": "Never put `using namespace std;` in a header.",
        "mistake": "Dumping everything into the global namespace and getting silent overload clashes.",
    },
    {
        "keys": ["include guards", "pragma once", "header", "forward declaration", "odr", "translation unit"],
        "plain": "Headers declare the interface; `.cpp` files define the bodies. Include guards stop a header from being pasted twice into one translation unit. The One Definition Rule says non-inline functions have exactly one definition in the whole program.",
        "code": "#pragma once\nstruct Widget;           // forward decl — enough for pointers/refs\nvoid use(Widget*);",
        "remember": "Declarations in headers, definitions in `.cpp` (templates excepted).",
        "mistake": "Defining a non-inline function in a header included by two `.cpp` files → multiple definition linker error.",
    },
    {
        "keys": ["std::array", "vector growth", "reserve", "emplace_back", "push_back", "iterator invalidation", "capacity"],
        "plain": "`std::vector` is a growable array in contiguous memory — your default sequence container. `reserve` avoids repeated reallocations. Reallocation invalidates pointers/iterators into the vector.",
        "code": "std::vector<int> v;\nv.reserve(100);\nfor (int i = 0; i < 100; ++i) v.push_back(i);",
        "remember": "Call `reserve` when you know the final size ahead of time.",
        "mistake": "Keeping a pointer/iterator into a vector across a `push_back` that reallocates.",
    },
    {
        "keys": ["std::string", "substr", "c_str", "string_view", "sso"],
        "plain": "`std::string` owns character data and grows as needed. Prefer it over raw `char*` for safety. `string_view` is a non-owning window — great for read-only parameters, dangerous if it outlives the string.",
        "code": "std::string s = \"hello\";\nstd::string_view v = s;  // ok while s lives\nauto t = s.substr(0, 2); // \"he\"",
        "remember": "Never return a `string_view` that points at a local temporary.",
        "mistake": "Mixing `getline` and `>>` without clearing the leftover newline.",
    },
    {
        "keys": ["optional", "variant", "any", "value_or", "visit"],
        "plain": "`optional<T>` is either a T or empty — better than magic sentinel values. `variant` holds one of several types. Prefer them over raw unions or `void*` for clarity.",
        "code": "#include <optional>\nstd::optional<int> parse(bool ok) {\n  if (!ok) return std::nullopt;\n  return 42;\n}\nint x = parse(true).value_or(-1);",
        "remember": "Check `optional` (or use `value_or`) before calling `value()`.",
        "mistake": "Calling `opt.value()` on an empty optional → exception.",
    },
    {
        "keys": ["filesystem", "directory_iterator", "path"],
        "plain": "`std::filesystem` gives portable paths and directory walks. Prefer `path` objects over hand-rolled string concatenation for joining folders.",
        "code": "#include <filesystem>\nnamespace fs = std::filesystem;\nfor (auto& e : fs::directory_iterator(\".\")) {\n  std::cout << e.path() << '\\n';\n}",
        "remember": "Check `exists` / handle errors — disks fail.",
        "mistake": "Assuming `/` path separators on every OS without using `path`.",
    },
    {
        "keys": ["lambda", "capture", "std::function", "callable"],
        "plain": "A lambda is a small unnamed function object. Capture `[=]` by value or `[&]` by reference carefully — referenced locals must outlive the lambda.",
        "code": "int factor = 2;\nauto twice = [factor](int x) { return x * factor; };\nstd::vector<int> v{1,2,3};\nstd::sort(v.begin(), v.end(), [](int a, int b){ return a > b; });",
        "remember": "Do not capture locals by reference and return the lambda upward.",
        "mistake": "Dangling captures after the stack frame ends.",
    },
    {
        "keys": ["iterator", "begin", "end", "invalidation"],
        "plain": "Iterators are like advanced pointers into a container. Algorithms take `[begin, end)` half-open ranges. Know when inserts/erases invalidate them.",
        "code": "std::vector<int> v{1,2,3};\nfor (auto it = v.begin(); it != v.end(); ++it)\n  std::cout << *it << ' ';",
        "remember": "After erase, use the iterator that `erase` returns.",
        "mistake": "Incrementing an invalidated iterator → undefined behaviour.",
    },
    {
        "keys": ["std::sort", "erase-remove", "remove_if", "std::find", "accumulate", "transform", "algorithm"],
        "plain": "STL algorithms are verbs over iterator ranges. Prefer them over hand-rolled loops when the intent matches (`find`, `sort`, `transform`). The erase-remove idiom deletes elements by value/predicate from a sequence container.",
        "code": "v.erase(std::remove(v.begin(), v.end(), 0), v.end());\nstd::sort(v.begin(), v.end());",
        "remember": "`remove` only slides elements — you still need `erase`.",
        "mistake": "Calling `std::remove` and forgetting the container `erase`.",
    },
    {
        "keys": ["map", "unordered_map", "set", "hasher", "associative"],
        "plain": "`map` keeps keys sorted (tree); `unordered_map` hashes for average O(1) lookup. Pick sorted when you need order; pick hash when you need speed and have a good hash.",
        "code": "std::unordered_map<std::string, int> freq;\n++freq[\"hi\"];\nfor (auto& [k, v] : freq) std::cout << k << ':' << v << '\\n';",
        "remember": "`operator[]` default-inserts a value if the key is missing.",
        "mistake": "Using `[]` when you only meant to look up — prefer `find` / `at` if missing should be an error.",
    },
    {
        "keys": ["unique_ptr", "make_unique", "shared_ptr", "weak_ptr", "make_shared"],
        "plain": "`unique_ptr` is exclusive ownership — cheap and clear. `shared_ptr` shares ownership with a reference count. Prefer `unique_ptr` unless you truly need shared lifetime.",
        "code": "auto p = std::make_unique<int>(5);\nstd::shared_ptr<int> s = std::make_shared<int>(7);\nstd::weak_ptr<int> w = s;  // does not keep object alive",
        "remember": "Break `shared_ptr` cycles with `weak_ptr`.",
        "mistake": "Creating two `shared_ptr`s from the same raw pointer → double free.",
    },
    {
        "keys": ["std::move", "rvalue", "lvalue", "move constructor", "forwarding", "std::forward"],
        "plain": "Move steals resources from an object you are done with instead of deep-copying. `std::move` is a cast that enables stealing; it does not move by itself.",
        "code": "std::string a = \"hello\";\nstd::string b = std::move(a);  // b owns the buffer\n// a is valid but unspecified (often empty)",
        "remember": "After `std::move(x)`, only assign to `x` or destroy it — do not read its value.",
        "mistake": "Using a moved-from object as if it still held the old data.",
    },
    {
        "keys": ["exception", "try", "catch", "throw", "noexcept", "exception safety"],
        "plain": "Exceptions separate the happy path from failure. Throw when a function cannot do its job; catch at a layer that can recover or report. RAII still cleans up during unwind.",
        "code": "try {\n  throw std::runtime_error(\"boom\");\n} catch (const std::exception& e) {\n  std::cerr << e.what() << '\\n';\n}",
        "remember": "Catch by `const` reference, not by value.",
        "mistake": "Throwing raw pointers or catching by value (slicing).",
    },
    {
        "keys": ["virtual", "override", "final", "abstract", "polymorphism", "vtable", "slicing", "virtual destructor"],
        "plain": "Virtual functions let you call the derived implementation through a base pointer/reference. Abstract classes (pure virtuals) define interfaces. Always give polymorphic bases a virtual destructor.",
        "code": "struct Shape {\n  virtual ~Shape() = default;\n  virtual double area() const = 0;\n};\nstruct Circle : Shape {\n  double r;\n  double area() const override { return 3.14 * r * r; }\n};",
        "remember": "Use `override` so signature mistakes fail at compile time.",
        "mistake": "Deleting a derived object via a non-virtual base destructor.",
    },
    {
        "keys": ["inheritance", "composition", "is-a", "has-a", "protected"],
        "plain": "Inheritance models 'is-a' when the derived type can substitute for the base. Prefer composition ('has-a') when you only need to reuse implementation.",
        "code": "struct Engine { void start(); };\nstruct Car {  // has-an Engine\n  Engine engine;\n  void start() { engine.start(); }\n};",
        "remember": "Deep inheritance trees get fragile — favour shallow designs.",
        "mistake": "Inheriting just to reuse code when a member object would do.",
    },
    {
        "keys": ["thread", "mutex", "lock_guard", "condition_variable", "atomic", "async", "future", "deadlock"],
        "plain": "Threads run code concurrently. Shared mutable data needs a mutex (or atomics). Prefer RAII locks (`lock_guard`) so unlock happens even on exceptions.",
        "code": "std::mutex m;\nint counter = 0;\n{\n  std::lock_guard<std::mutex> g(m);\n  ++counter;\n}",
        "remember": "A data race on non-atomic shared data is undefined behaviour.",
        "mistake": "Locking two mutexes in opposite orders in different threads → deadlock.",
    },
    {
        "keys": ["chrono", "steady_clock", "duration", "sleep_for"],
        "plain": "`std::chrono` measures time with clocks and durations. Use `steady_clock` to measure elapsed time; `system_clock` for wall-clock dates.",
        "code": "using clock = std::chrono::steady_clock;\nauto t0 = clock::now();\n// work...\nauto ms = std::chrono::duration_cast<std::chrono::milliseconds>(clock::now() - t0);",
        "remember": "`steady_clock` never goes backwards — good for benchmarks.",
        "mistake": "Using `system_clock` for elapsed timing across daylight-saving adjustments.",
    },
    {
        "keys": ["random", "mt19937", "distribution", "shuffle"],
        "plain": "Do not use `rand()` for serious work. Use `<random>`: an engine (`mt19937`) plus a distribution. Seed carefully if you need reproducibility.",
        "code": "std::mt19937 rng{std::random_device{}()};\nstd::uniform_int_distribution<int> dist(1, 6);\nint roll = dist(rng);",
        "remember": "Create the engine once; reuse it — do not re-seed every call.",
        "mistake": "Seeding with `time(nullptr)` every roll → correlated results.",
    },
    {
        "keys": ["bit", "bitset", "mask", "shift", "popcount"],
        "plain": "Bit tricks set, clear, and test individual flags inside an integer. Prefer unsigned types for shift-heavy code. `std::bitset` makes fixed-width bit sets readable.",
        "code": "unsigned flags = 0;\nflags |= (1u << 3);           // set bit 3\nbool on = flags & (1u << 3);  // test\nflags &= ~(1u << 3);          // clear",
        "remember": "Shifting into or past the sign bit on signed ints can be UB.",
        "mistake": "Using signed `int` for bitmasks and shifting into the sign bit.",
    },
    {
        "keys": ["float", "floating", "nan", "precision", "ieee"],
        "plain": "Floating-point numbers approximate reals. Equality with `==` is often wrong; compare with a tolerance appropriate to your scale. Watch for NaN and accumulation error.",
        "code": "bool nearly_equal(double a, double b, double eps = 1e-9) {\n  return std::fabs(a - b) <= eps;\n}",
        "remember": "Never loop with `double` counters expecting exact sums.",
        "mistake": "`if (f == 0.1)` style checks that fail due to representation.",
    },
    {
        "keys": ["template", "typename", "sfinae", "enable_if", "constexpr", "fold", "variadic", "concept"],
        "plain": "Templates generate code per type. They move errors to compile time and remove runtime virtual dispatch. Keep them readable; constrain parameters when you can.",
        "code": "template <typename T>\nT clamp_pos(T x) {\n  return x < T{0} ? T{0} : x;\n}",
        "remember": "Templates usually live in headers so every TU can instantiate them.",
        "mistake": "Putting a template definition only in a `.cpp` and wondering why the linker fails.",
    },
    {
        "keys": ["span", "ranges", "views::", "designated init", "spaceship", "<=>", "format", "coroutine"],
        "plain": "Modern C++ (20+) adds safer views (`span`, ranges), clearer comparisons (`<=>`), and better formatting. Use them when your toolchain supports them; otherwise stick to C++17 patterns taught earlier.",
        "code": "// C++20 sketch\n// std::span<int> s = arr;\n// auto evens = v | std::views::filter([](int x){ return x % 2 == 0; });",
        "remember": "Check your compiler's C++20/23 support before relying on these.",
        "mistake": "Assuming every machine in class/CI has full C++20 library support.",
    },
    {
        "keys": ["socket", "tcp", "posix", "poll", "epoll", "bind", "listen"],
        "plain": "Sockets are OS endpoints for network bytes. TCP gives a reliable stream; you still must frame messages yourself. Always check return codes and handle partial reads/writes.",
        "code": "// Conceptual — details are OS-specific\n// sock = socket(...);\n// connect(sock, ...);\n// send(sock, buf, n, 0);",
        "remember": "Network data is bytes; convert integers with endian helpers.",
        "mistake": "Assuming one `recv` returns one complete application message.",
    },
    {
        "keys": ["big-o", "complexity", "amortized"],
        "plain": "Big-O describes how cost grows with input size. Prefer a clearer O(n log n) algorithm over a clever O(n²) one once n gets large. Measure when constants matter.",
        "code": "// Sorting n items: typically O(n log n)\nstd::sort(v.begin(), v.end());",
        "remember": "Asymptotics first; micro-optimisations later with a profiler.",
        "mistake": "Optimising a cold path while leaving an O(n²) hot loop alone.",
    },
    {
        "keys": ["binary search", "lower_bound", "two pointers", "sliding window", "prefix"],
        "plain": "These patterns turn nested loops into linear or logarithmic passes. Binary search needs a monotonic predicate. Two pointers / sliding windows need a clear invariant.",
        "code": "auto it = std::lower_bound(v.begin(), v.end(), x);\nbool found = it != v.end() && *it == x;",
        "remember": "Write down the invariant before coding the loop.",
        "mistake": "Off-by-one errors in binary search bounds (`lo`/`hi`).",
    },
    {
        "keys": ["graph", "bfs", "dfs", "dijkstra", "union-find", "dsu"],
        "plain": "Graphs are nodes plus edges. BFS finds shortest paths in unweighted graphs; Dijkstra handles non-negative weights. Union-Find tracks connected components efficiently.",
        "code": "// BFS sketch\nstd::queue<int> q;\nq.push(start);\nseen[start] = true;",
        "remember": "Pick adjacency lists unless the graph is tiny and dense.",
        "mistake": "Forgetting to mark nodes visited → infinite loops.",
    },
    {
        "keys": ["dynamic programming", "dp", "memo", "knapsack", "greedy", "backtracking"],
        "plain": "DP solves overlapping subproblems once and stores answers. Greedy picks locally best choices when a proof allows it. Backtracking explores choices and undoes them.",
        "code": "std::vector<long long> dp(n + 1);\ndp[0] = 0;\nfor (int i = 1; i <= n; ++i)\n  dp[i] = dp[i - 1] + i;  // toy example",
        "remember": "Define the state and transition in words before coding.",
        "mistake": "Memoising without a clear state key → wrong answers.",
    },
    {
        "keys": ["project", "cli", "parser", "api design", "testing", "cmake", "benchmark"],
        "plain": "Projects glue skills: clear requirements, small modules, tests, and honest docs. Start with a tiny vertical slice that runs end-to-end, then thicken features.",
        "code": "int main(int argc, char** argv) {\n  if (argc < 2) {\n    std::cerr << \"usage: tool <file>\\n\";\n    return 1;\n  }\n  // ...\n}",
        "remember": "Ship a working subset before polishing edge cases.",
        "mistake": "Building scaffolding for weeks with nothing runnable.",
    },
    {
        "keys": ["assert", "static_assert", "debug", "sanitizer", "undefined behaviour", "ub "],
        "plain": "Assertions document invariants. `assert` is for runtime checks in debug builds; `static_assert` fails at compile time. Sanitizers catch many memory and UB bugs early.",
        "code": "#include <cassert>\nassert(index < size);\nstatic_assert(sizeof(int) >= 4, \"need 32-bit int\");",
        "remember": "Asserts are not for user-facing error handling.",
        "mistake": "Putting required validation only in `assert` — it disappears in release (`NDEBUG`).",
    },
    {
        "keys": ["new", "delete", "nullptr", "dangling", "memory leak", "heap", "placement new"],
        "plain": "The heap lives until you release it. Prefer smart pointers and containers over raw `new`/`delete`. If you must use raw ownership, every `new` has exactly one matching `delete` on every path.",
        "code": "// Prefer:\nauto p = std::make_unique<int[]>(10);\n// instead of new int[10] / delete[]",
        "remember": "Match `new` with `delete` and `new[]` with `delete[]`.",
        "mistake": "Using `delete` on array memory allocated with `new[]`.",
    },
    {
        "keys": ["struct", "class", "constructor", "destructor", "this", "access"],
        "plain": "A class bundles data with the operations that keep it valid. Constructors establish invariants; destructors release resources. `struct` defaults to public, `class` to private — that is the main difference.",
        "code": "class Counter {\n  int n_ = 0;\npublic:\n  void inc() { ++n_; }\n  int get() const { return n_; }\n};",
        "remember": "Keep data private if invariants matter; expose operations.",
        "mistake": "Public data fields that let callers break class invariants.",
    },
]


def teach(concept: str, theme: str = "") -> dict[str, str]:
    """Return plain/code/remember/mistake for a concept title."""
    blob = f"{concept} {theme}".lower()
    for entry in BANK:
        for key in entry["keys"]:
            if key.lower() in blob:
                return {
                    "plain": entry["plain"],
                    "code": entry["code"],
                    "remember": entry["remember"],
                    "mistake": entry["mistake"],
                }
    # Generic but still useful fallback (not the old stub checklist).
    return {
        "plain": (
            f"Today's idea — **{concept}** — fits inside the wider theme of {theme or 'modern C++'}. "
            f"Read it as a tool: what job does it do, what rules does it enforce, and what breaks if you ignore those rules?"
        ),
        "code": (
            f'// Explore: {concept}\n'
            f'#include <iostream>\n'
            f'int main() {{\n'
            f'  std::cout << "practice: {concept}\\n";\n'
            f'  return 0;\n'
            f'}}'
        ),
        "remember": f"State one invariant for `{concept}` before you write code that uses it.",
        "mistake": f"Using `{concept}` by copy-paste without knowing what it owns or when it is valid.",
    }
