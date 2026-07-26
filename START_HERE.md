# Start here — Badsha C++ course

This repo is a **private, local** C++ training path: **211 days**, each with notes, examples, questions, and answers.

## Open your learning hub (recommended)

### Online (GitHub Pages)

**https://lavprasad.github.io/c-_badsha/**

Learn, search, quiz, and run examples in the browser. Enable **Settings → Pages → Source: GitHub Actions** once if the link 404s.

### Locally

From the repo root:

```bash
# Linux / macOS
chmod +x hub/run.sh
./hub/run.sh
```

```powershell
# Windows
python hub\server.py
```

Then open **http://127.0.0.1:8765** in your browser.

In the hub you can:

- **Browse** every day
- **Search** notes and questions
- **Learn** rendered notes
- **Practice** — edit example code and **Run with g++**
- **Quiz** — try questions, then reveal answers
- **Help** — glossary for sticky topics (pointer, move, RAII, UB, …)
- **Mark done** — progress stays in your browser (`localStorage` only)

Nothing is uploaded. It is your machine only.

## Study loop (every day)

1. **Learn** — read `DayXX/notes.md` (or the Learn tab).
2. **Practice** — compile/run each file in `examples/` (or the Practice tab).
3. **Quiz** — attempt `questions.md` before peeking at `answers.md`.
4. **Mark done** and move to the next day.

Days **01–11** are handcrafted foundations. Days **12–211** continue the roadmap with plain-English notes + code samples.

## Compile without the hub

```bash
g++ -std=c++17 -Wall -Wextra Day02/examples/01_if_else.cpp -o /tmp/d02
/tmp/d02
```

## If g++ is missing

- **Linux:** `sudo apt install g++` (or your distro’s equivalent)
- **Windows:** install MSYS2/MinGW and put `g++` on `PATH`, then restart the hub

The hub still works for reading/search/quiz without a compiler; Practice → Run will show an install hint.
