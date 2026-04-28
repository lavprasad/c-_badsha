# C++ Daily Training — `c++_badsha`

A structured, hands-on C++ learning plan. **10 concepts + 5 tricky questions every day.**

## How this course is organised

```
c++_badsha/
├── README.md              <- you are here
├── Day01/
│   ├── notes.md           <- the 10 concepts of the day, explained
│   ├── examples/          <- one tiny .cpp program per concept (compiled & verified)
│   ├── questions.md       <- 5 tricky questions (try these first!)
│   └── answers.md         <- detailed answers (peek only after trying)
├── Day02/
│   └── ...
└── ...
```

## How to use it (your daily routine)

1. **Read** `DayXX/notes.md` end-to-end.
2. **Run** every program in `DayXX/examples/`. Modify them, break them, fix them.
3. **Attempt** all 5 questions in `DayXX/questions.md` *without* looking at the answers.
4. **Compare** with `DayXX/answers.md`. Re-read concepts you got wrong.
5. **Commit** your own attempts (`solutions/` folders, scratch code, etc.).

## Compile cheat sheet (Windows + MSYS2 g++)

```powershell
# compile a single file
g++ -std=c++17 -Wall -Wextra .\examples\01_hello.cpp -o .\examples\01_hello.exe

# run it
.\examples\01_hello.exe
```

For Linux (per the user's note that scripts are Linux-targeted) the same flags work; just drop `.exe`.

## Roadmap (high-level)

| Day | Theme |
|----:|-------|
| 01  | Hello-world anatomy, I/O, variables, types, operators |
| 02  | Control flow: `if`, `switch`, loops, `break`/`continue` |
| 03  | Functions, parameter passing, overloading, default args |
| 04  | Arrays, C-strings, `std::string`, references vs pointers |
| 05  | Pointers deep dive, dynamic memory, RAII intro |
| 06  | Structs, classes, constructors, destructors, `this` |
| 07  | Inheritance, polymorphism, virtual functions, abstract classes |
| 08  | Templates (function & class), type deduction |
| 09  | STL containers: `vector`, `map`, `set`, `unordered_map` |
| 10  | STL algorithms, iterators, lambdas |
| 11+ | Move semantics, smart pointers, exceptions, concurrency, modern C++... |

The roadmap will adjust based on your pace and the doubts you raise.

## Conventions

- All examples target **C++17** unless stated otherwise.
- Compile with `-Wall -Wextra` so you actually see warnings.
- Each example is self-contained — no external libs.
- Every day's material is committed to local git so you can `git diff` between days.
