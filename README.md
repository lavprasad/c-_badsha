# C++ Daily Training — `c++_badsha`

A structured, hands-on C++ learning plan. **10 concepts + 5 tricky questions every day.**

**New here?** Open [START_HERE.md](START_HERE.md).

## Badsha private learning hub

### On GitHub Pages (online)

After you push to `main`, the site deploys automatically:

**https://lavprasad.github.io/c-_badsha/**

One-time setup (if the site 404s):

1. GitHub repo → **Settings** → **Pages**
2. **Source**: GitHub Actions
3. Re-run the “GitHub Pages” workflow if needed

On Pages, **Run** uses the free Wandbox online compiler (no local `g++` required).

Rebuild the static catalog after adding days:

```bash
python3 tools/build_catalog.py
```

### Locally (localhost)

```bash
# Linux
chmod +x hub/run.sh && ./hub/run.sh

# Windows
python hub\server.py
```

Then visit **http://127.0.0.1:8765**. Local **Run** uses your `g++` when available.

Requires Python 3. Practice → Run needs `g++` on your `PATH` for the local server.

## How this course is organised

```
c++_badsha/
├── START_HERE.md          <- begin here
├── README.md              <- you are here
├── hub/                   <- private learning website
│   ├── server.py
│   ├── run.sh
│   └── static/
├── tools/
│   ├── gen_days.py        <- regenerate Days 12–211
│   └── teach.py           <- plain-English teaching bank
├── Day01/
│   ├── notes.md           <- the 10 concepts of the day, explained
│   ├── examples/          <- one tiny .cpp program per concept
│   ├── questions.md       <- 5 tricky questions (try these first!)
│   └── answers.md         <- detailed answers (peek only after trying)
├── Day02/ … Day211/
└── ...
```

## How to use it (your daily routine)

1. **Read** `DayXX/notes.md` end-to-end (or use the hub **Learn** tab).
2. **Run** every program in `DayXX/examples/` (or hub **Practice** → Run).
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

For Linux the same flags work; just drop `.exe`.

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
