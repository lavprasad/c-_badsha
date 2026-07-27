# Day 95 -- Parsing techniques

Aaj ka goal: **Parsing techniques** ko aasan Hinglish me samajhna, har idea ka chhota code sample dekhna, phir `examples/` me practice karna.

Is din ko padhne ka tarika:
1. Har concept ka **Aasan Bhasha** section padho.
2. Code sample par nazar daalo -- pehle predict karo ki output kya aayega.
3. `examples/` me us concept ki file chalao.
4. Uske baad hi `questions.md` kholo.

| # | Concept |
|--:|---------|
| 1 | Hand-written parsers |
| 2 | Recursive descent idea |
| 3 | Lexer vs parser |
| 4 | Error recovery |
| 5 | Streaming parse |
| 6 | Grammar ambiguities |
| 7 | Testing parsers |
| 8 | Avoiding regex abuse |
| 9 | AST idea |
| 10 | Parse an expression |

---

## 1. Hand-written parsers

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

Practice: `examples/01_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 2. Recursive descent idea

### Aasan Bhasha

Aaj ka idea — **Recursive descent idea** — Parsing techniques ke bade theme ke andar aata hai. Ise ek tool ki tarah padho: ye kaam kya karta hai, kaunse rules enforce karta hai, aur un rules ko ignore karne par kya tootta hai?

### Chhota code

```cpp
// Explore: Recursive descent idea
#include <iostream>
int main() {
  std::cout << "practice: Recursive descent idea\n";
  return 0;
}
```

- **Yaad rakho:** `Recursive descent idea` use karne wala code likhne se pehle ek invariant bolo.
- **Aam galti:** `Recursive descent idea` ko copy-paste se use karna bina jaane ki wo kya own karta hai ya kab valid hai.

Practice: `examples/02_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 3. Lexer vs parser

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

Practice: `examples/03_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 4. Error recovery

### Aasan Bhasha

Aaj ka idea — **Error recovery** — Parsing techniques ke bade theme ke andar aata hai. Ise ek tool ki tarah padho: ye kaam kya karta hai, kaunse rules enforce karta hai, aur un rules ko ignore karne par kya tootta hai?

### Chhota code

```cpp
// Explore: Error recovery
#include <iostream>
int main() {
  std::cout << "practice: Error recovery\n";
  return 0;
}
```

- **Yaad rakho:** `Error recovery` use karne wala code likhne se pehle ek invariant bolo.
- **Aam galti:** `Error recovery` ko copy-paste se use karna bina jaane ki wo kya own karta hai ya kab valid hai.

Practice: `examples/04_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 5. Streaming parse

### Aasan Bhasha

Aaj ka idea — **Streaming parse** — Parsing techniques ke bade theme ke andar aata hai. Ise ek tool ki tarah padho: ye kaam kya karta hai, kaunse rules enforce karta hai, aur un rules ko ignore karne par kya tootta hai?

### Chhota code

```cpp
// Explore: Streaming parse
#include <iostream>
int main() {
  std::cout << "practice: Streaming parse\n";
  return 0;
}
```

- **Yaad rakho:** `Streaming parse` use karne wala code likhne se pehle ek invariant bolo.
- **Aam galti:** `Streaming parse` ko copy-paste se use karna bina jaane ki wo kya own karta hai ya kab valid hai.

Practice: `examples/05_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 6. Grammar ambiguities

### Aasan Bhasha

Aaj ka idea — **Grammar ambiguities** — Parsing techniques ke bade theme ke andar aata hai. Ise ek tool ki tarah padho: ye kaam kya karta hai, kaunse rules enforce karta hai, aur un rules ko ignore karne par kya tootta hai?

### Chhota code

```cpp
// Explore: Grammar ambiguities
#include <iostream>
int main() {
  std::cout << "practice: Grammar ambiguities\n";
  return 0;
}
```

- **Yaad rakho:** `Grammar ambiguities` use karne wala code likhne se pehle ek invariant bolo.
- **Aam galti:** `Grammar ambiguities` ko copy-paste se use karna bina jaane ki wo kya own karta hai ya kab valid hai.

Practice: `examples/06_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 7. Testing parsers

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

Practice: `examples/07_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 8. Avoiding regex abuse

### Aasan Bhasha

Aaj ka idea — **Avoiding regex abuse** — Parsing techniques ke bade theme ke andar aata hai. Ise ek tool ki tarah padho: ye kaam kya karta hai, kaunse rules enforce karta hai, aur un rules ko ignore karne par kya tootta hai?

### Chhota code

```cpp
// Explore: Avoiding regex abuse
#include <iostream>
int main() {
  std::cout << "practice: Avoiding regex abuse\n";
  return 0;
}
```

- **Yaad rakho:** `Avoiding regex abuse` use karne wala code likhne se pehle ek invariant bolo.
- **Aam galti:** `Avoiding regex abuse` ko copy-paste se use karna bina jaane ki wo kya own karta hai ya kab valid hai.

Practice: `examples/08_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 9. AST idea

### Aasan Bhasha

Aaj ka idea — **AST idea** — Parsing techniques ke bade theme ke andar aata hai. Ise ek tool ki tarah padho: ye kaam kya karta hai, kaunse rules enforce karta hai, aur un rules ko ignore karne par kya tootta hai?

### Chhota code

```cpp
// Explore: AST idea
#include <iostream>
int main() {
  std::cout << "practice: AST idea\n";
  return 0;
}
```

- **Yaad rakho:** `AST idea` use karne wala code likhne se pehle ek invariant bolo.
- **Aam galti:** `AST idea` ko copy-paste se use karna bina jaane ki wo kya own karta hai ya kab valid hai.

Practice: `examples/09_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 10. Parse an expression

### Aasan Bhasha

Aaj ka idea — **Parse an expression** — Parsing techniques ke bade theme ke andar aata hai. Ise ek tool ki tarah padho: ye kaam kya karta hai, kaunse rules enforce karta hai, aur un rules ko ignore karne par kya tootta hai?

### Chhota code

```cpp
// Explore: Parse an expression
#include <iostream>
int main() {
  std::cout << "practice: Parse an expression\n";
  return 0;
}
```

- **Yaad rakho:** `Parse an expression` use karne wala code likhne se pehle ek invariant bolo.
- **Aam galti:** `Parse an expression` ko copy-paste se use karna bina jaane ki wo kya own karta hai ya kab valid hai.

Practice: `examples/10_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

---

## Day 95 ke baad aapko ye aana chahiye

- `Parsing techniques` ko bina notes dekhe kisi dost ko samjha sakna.
- Saare 10 examples `-std=c++17 -Wall -Wextra` ke saath compile aur run karna (naye flags sirf tab jab din ko C++20+ chahiye).
- `answers.md` dekhne se pehle `questions.md` ke 5 sawaal answer karna.
- Ek chhota extra program likhna jo aaj ke kam se kam 3 concepts jodta ho.

Ya is din ko **Badsha hub** me kholo (`python3 hub/server.py`) aur Learn / Practice / Quiz tabs use karo.
