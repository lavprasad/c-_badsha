# Day 160 -- Shortest paths

Aaj ka goal: **Shortest paths** ko aasan Hinglish me samajhna, har idea ka chhota code sample dekhna, phir `examples/` me practice karna.

Is din ko padhne ka tarika:
1. Har concept ka **Aasan Bhasha** section padho.
2. Code sample par nazar daalo -- pehle predict karo ki output kya aayega.
3. `examples/` me us concept ki file chalao.
4. Uske baad hi `questions.md` kholo.

| # | Concept |
|--:|---------|
| 1 | BFS unweighted |
| 2 | Dijkstra |
| 3 | Bellman-Ford idea |
| 4 | 0-1 BFS idea |
| 5 | Negative cycles |
| 6 | All-pairs idea |
| 7 | Priority queue costs |
| 8 | Potential pitfalls |
| 9 | Testing graphs |
| 10 | Dijkstra implement |

---

## 1. BFS unweighted

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

Practice: `examples/01_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 2. Dijkstra

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

Practice: `examples/02_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 3. Bellman-Ford idea

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

Practice: `examples/03_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 4. 0-1 BFS idea

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

Practice: `examples/04_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 5. Negative cycles

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

Practice: `examples/05_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 6. All-pairs idea

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

Practice: `examples/06_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 7. Priority queue costs

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

## 8. Potential pitfalls

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

Practice: `examples/08_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 9. Testing graphs

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

Practice: `examples/09_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 10. Dijkstra implement

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

Practice: `examples/10_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

---

## Day 160 ke baad aapko ye aana chahiye

- `Shortest paths` ko bina notes dekhe kisi dost ko samjha sakna.
- Saare 10 examples `-std=c++17 -Wall -Wextra` ke saath compile aur run karna (naye flags sirf tab jab din ko C++20+ chahiye).
- `answers.md` dekhne se pehle `questions.md` ke 5 sawaal answer karna.
- Ek chhota extra program likhna jo aaj ke kam se kam 3 concepts jodta ho.

Ya is din ko **Badsha hub** me kholo (`python3 hub/server.py`) aur Learn / Practice / Quiz tabs use karo.
