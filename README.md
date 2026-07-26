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

| Days | Phase | Status |
|-----:|-------|--------|
| 01–11 | Foundations → STL → move/smart ptrs/exceptions | ✅ handcrafted |
| 12–51 | Intermediate core (I/O, enums, operators, chrono, C++17 library, templates) | ✅ |
| 52–81 | OOP design, patterns, API craft, build/link, UB | ✅ |
| 82–111 | Concurrency, systems, networking, perf, allocators, POSIX | ✅ |
| 112–151 | C++20/23, concepts/ranges, metaprogramming, domain mindsets | ✅ |
| 152–181 | Algorithms & DS practice, interviews, craft habits | ✅ |
| 182–211 | Capstone projects & specialized tracks | ✅ |

Each day still follows: **10 concepts** + **10 examples** + **5 questions** + **answers**.

Regenerate Days 12–211 (if needed) with:

```bash
python3 tools/gen_days.py
```

The roadmap will adjust based on your pace and the doubts you raise.

## Conventions

- All examples target **C++17** unless stated otherwise.
- Compile with `-Wall -Wextra` so you actually see warnings.
- Each example is self-contained — no external libs.
- Every day's material is committed to local git so you can `git diff` between days.
