# Day 28 -- Command-line args

Aaj ka goal: **Command-line args** ko aasan Hinglish me samajhna, har idea ka chhota code sample dekhna, phir `examples/` me practice karna.

Is din ko padhne ka tarika:
1. Har concept ka **Aasan Bhasha** section padho.
2. Code sample par nazar daalo -- pehle predict karo ki output kya aayega.
3. `examples/` me us concept ki file chalao.
4. Uske baad hi `questions.md` kholo.

| # | Concept |
|--:|---------|
| 1 | argc and argv |
| 2 | Parsing flags manually |
| 3 | Converting argv to types |
| 4 | Usage messages |
| 5 | Exit codes |
| 6 | Environment variables getenv |
| 7 | Path arguments |
| 8 | Validating input |
| 9 | Subcommands idea |
| 10 | A tiny CLI tool |

---

## 1. argc and argv

### Aasan Bhasha

Aaj ka idea — **argc and argv** — Command-line args ke bade theme ke andar aata hai. Ise ek tool ki tarah padho: ye kaam kya karta hai, kaunse rules enforce karta hai, aur un rules ko ignore karne par kya tootta hai?

### Chhota code

```cpp
// Explore: argc and argv
#include <iostream>
int main() {
  std::cout << "practice: argc and argv\n";
  return 0;
}
```

- **Yaad rakho:** `argc and argv` use karne wala code likhne se pehle ek invariant bolo.
- **Aam galti:** `argc and argv` ko copy-paste se use karna bina jaane ki wo kya own karta hai ya kab valid hai.

Practice: `examples/01_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 2. Parsing flags manually

### Aasan Bhasha

Aaj ka idea — **Parsing flags manually** — Command-line args ke bade theme ke andar aata hai. Ise ek tool ki tarah padho: ye kaam kya karta hai, kaunse rules enforce karta hai, aur un rules ko ignore karne par kya tootta hai?

### Chhota code

```cpp
// Explore: Parsing flags manually
#include <iostream>
int main() {
  std::cout << "practice: Parsing flags manually\n";
  return 0;
}
```

- **Yaad rakho:** `Parsing flags manually` use karne wala code likhne se pehle ek invariant bolo.
- **Aam galti:** `Parsing flags manually` ko copy-paste se use karna bina jaane ki wo kya own karta hai ya kab valid hai.

Practice: `examples/02_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 3. Converting argv to types

### Aasan Bhasha

Aaj ka idea — **Converting argv to types** — Command-line args ke bade theme ke andar aata hai. Ise ek tool ki tarah padho: ye kaam kya karta hai, kaunse rules enforce karta hai, aur un rules ko ignore karne par kya tootta hai?

### Chhota code

```cpp
// Explore: Converting argv to types
#include <iostream>
int main() {
  std::cout << "practice: Converting argv to types\n";
  return 0;
}
```

- **Yaad rakho:** `Converting argv to types` use karne wala code likhne se pehle ek invariant bolo.
- **Aam galti:** `Converting argv to types` ko copy-paste se use karna bina jaane ki wo kya own karta hai ya kab valid hai.

Practice: `examples/03_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 4. Usage messages

### Aasan Bhasha

Aaj ka idea — **Usage messages** — Command-line args ke bade theme ke andar aata hai. Ise ek tool ki tarah padho: ye kaam kya karta hai, kaunse rules enforce karta hai, aur un rules ko ignore karne par kya tootta hai?

### Chhota code

```cpp
// Explore: Usage messages
#include <iostream>
int main() {
  std::cout << "practice: Usage messages\n";
  return 0;
}
```

- **Yaad rakho:** `Usage messages` use karne wala code likhne se pehle ek invariant bolo.
- **Aam galti:** `Usage messages` ko copy-paste se use karna bina jaane ki wo kya own karta hai ya kab valid hai.

Practice: `examples/04_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 5. Exit codes

### Aasan Bhasha

Aaj ka idea — **Exit codes** — Command-line args ke bade theme ke andar aata hai. Ise ek tool ki tarah padho: ye kaam kya karta hai, kaunse rules enforce karta hai, aur un rules ko ignore karne par kya tootta hai?

### Chhota code

```cpp
// Explore: Exit codes
#include <iostream>
int main() {
  std::cout << "practice: Exit codes\n";
  return 0;
}
```

- **Yaad rakho:** `Exit codes` use karne wala code likhne se pehle ek invariant bolo.
- **Aam galti:** `Exit codes` ko copy-paste se use karna bina jaane ki wo kya own karta hai ya kab valid hai.

Practice: `examples/05_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 6. Environment variables getenv

### Aasan Bhasha

Aaj ka idea — **Environment variables getenv** — Command-line args ke bade theme ke andar aata hai. Ise ek tool ki tarah padho: ye kaam kya karta hai, kaunse rules enforce karta hai, aur un rules ko ignore karne par kya tootta hai?

### Chhota code

```cpp
// Explore: Environment variables getenv
#include <iostream>
int main() {
  std::cout << "practice: Environment variables getenv\n";
  return 0;
}
```

- **Yaad rakho:** `Environment variables getenv` use karne wala code likhne se pehle ek invariant bolo.
- **Aam galti:** `Environment variables getenv` ko copy-paste se use karna bina jaane ki wo kya own karta hai ya kab valid hai.

Practice: `examples/06_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 7. Path arguments

### Aasan Bhasha

`std::filesystem` portable paths aur directory walks deta hai. Folder jodne ke liye haath se string concatenation ki jagah `path` objects use karo.

### Chhota code

```cpp
#include <filesystem>
namespace fs = std::filesystem;
for (auto& e : fs::directory_iterator(".")) {
  std::cout << e.path() << '\n';
}
```

- **Yaad rakho:** `exists` check karo / errors handle karo — disks fail hote hain.
- **Aam galti:** Har OS par `/` separator maan lena, bina `path` use kiye.

Practice: `examples/07_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 8. Validating input

### Aasan Bhasha

Aaj ka idea — **Validating input** — Command-line args ke bade theme ke andar aata hai. Ise ek tool ki tarah padho: ye kaam kya karta hai, kaunse rules enforce karta hai, aur un rules ko ignore karne par kya tootta hai?

### Chhota code

```cpp
// Explore: Validating input
#include <iostream>
int main() {
  std::cout << "practice: Validating input\n";
  return 0;
}
```

- **Yaad rakho:** `Validating input` use karne wala code likhne se pehle ek invariant bolo.
- **Aam galti:** `Validating input` ko copy-paste se use karna bina jaane ki wo kya own karta hai ya kab valid hai.

Practice: `examples/08_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 9. Subcommands idea

### Aasan Bhasha

Aaj ka idea — **Subcommands idea** — Command-line args ke bade theme ke andar aata hai. Ise ek tool ki tarah padho: ye kaam kya karta hai, kaunse rules enforce karta hai, aur un rules ko ignore karne par kya tootta hai?

### Chhota code

```cpp
// Explore: Subcommands idea
#include <iostream>
int main() {
  std::cout << "practice: Subcommands idea\n";
  return 0;
}
```

- **Yaad rakho:** `Subcommands idea` use karne wala code likhne se pehle ek invariant bolo.
- **Aam galti:** `Subcommands idea` ko copy-paste se use karna bina jaane ki wo kya own karta hai ya kab valid hai.

Practice: `examples/09_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 10. A tiny CLI tool

### Aasan Bhasha

Projects skills ko jodte hain: saaf requirements, chhote modules, tests aur imaandaar docs. Ek chhoti vertical slice se shuru karo jo end-to-end chale, phir features mota karo.

### Chhota code

```cpp
int main(int argc, char** argv) {
  if (argc < 2) {
    std::cerr << "usage: tool <file>\n";
    return 1;
  }
  // ...
}
```

- **Yaad rakho:** Edge cases chamkane se pehle ek chalne wala subset ship karo.
- **Aam galti:** Hafton tak scaffolding banana jisme kuch chalta hi na ho.

Practice: `examples/10_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

---

## Day 28 ke baad aapko ye aana chahiye

- `Command-line args` ko bina notes dekhe kisi dost ko samjha sakna.
- Saare 10 examples `-std=c++17 -Wall -Wextra` ke saath compile aur run karna (naye flags sirf tab jab din ko C++20+ chahiye).
- `answers.md` dekhne se pehle `questions.md` ke 5 sawaal answer karna.
- Ek chhota extra program likhna jo aaj ke kam se kam 3 concepts jodta ho.

Ya is din ko **Badsha hub** me kholo (`python3 hub/server.py`) aur Learn / Practice / Quiz tabs use karo.
