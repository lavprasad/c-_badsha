# Day 44 -- unique_ptr mastery

Aaj ka goal: **unique_ptr mastery** ko aasan Hinglish me samajhna, har idea ka chhota code sample dekhna, phir `examples/` me practice karna.

Is din ko padhne ka tarika:
1. Har concept ka **Aasan Bhasha** section padho.
2. Code sample par nazar daalo -- pehle predict karo ki output kya aayega.
3. `examples/` me us concept ki file chalao.
4. Uske baad hi `questions.md` kholo.

| # | Concept |
|--:|---------|
| 1 | make_unique |
| 2 | Custom deleters |
| 3 | unique_ptr arrays |
| 4 | Moving unique_ptrs |
| 5 | Returning unique_ptr |
| 6 | unique_ptr in containers |
| 7 | Observing with get / * |
| 8 | release vs reset |
| 9 | Factory functions |
| 10 | Replacing raw new |

---

## 1. make_unique

### Aasan Bhasha

`unique_ptr` exclusive ownership hai — sasta aur saaf. `shared_ptr` reference count ke saath ownership baantta hai. Jab tak shared lifetime ki sach me zaroorat na ho, `unique_ptr` hi use karo.

### Chhota code

```cpp
auto p = std::make_unique<int>(5);
std::shared_ptr<int> s = std::make_shared<int>(7);
std::weak_ptr<int> w = s;  // does not keep object alive
```

- **Yaad rakho:** `shared_ptr` ke cycles `weak_ptr` se todo.
- **Aam galti:** Ek hi raw pointer se do `shared_ptr` banana → double free.

Practice: `examples/01_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 2. Custom deleters

### Aasan Bhasha

`unique_ptr` exclusive ownership hai — sasta aur saaf. `shared_ptr` reference count ke saath ownership baantta hai. Jab tak shared lifetime ki sach me zaroorat na ho, `unique_ptr` hi use karo.

### Chhota code

```cpp
auto p = std::make_unique<int>(5);
std::shared_ptr<int> s = std::make_shared<int>(7);
std::weak_ptr<int> w = s;  // does not keep object alive
```

- **Yaad rakho:** `shared_ptr` ke cycles `weak_ptr` se todo.
- **Aam galti:** Ek hi raw pointer se do `shared_ptr` banana → double free.

Practice: `examples/02_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 3. unique_ptr arrays

### Aasan Bhasha

`unique_ptr` exclusive ownership hai — sasta aur saaf. `shared_ptr` reference count ke saath ownership baantta hai. Jab tak shared lifetime ki sach me zaroorat na ho, `unique_ptr` hi use karo.

### Chhota code

```cpp
auto p = std::make_unique<int>(5);
std::shared_ptr<int> s = std::make_shared<int>(7);
std::weak_ptr<int> w = s;  // does not keep object alive
```

- **Yaad rakho:** `shared_ptr` ke cycles `weak_ptr` se todo.
- **Aam galti:** Ek hi raw pointer se do `shared_ptr` banana → double free.

Practice: `examples/03_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 4. Moving unique_ptrs

### Aasan Bhasha

`unique_ptr` exclusive ownership hai — sasta aur saaf. `shared_ptr` reference count ke saath ownership baantta hai. Jab tak shared lifetime ki sach me zaroorat na ho, `unique_ptr` hi use karo.

### Chhota code

```cpp
auto p = std::make_unique<int>(5);
std::shared_ptr<int> s = std::make_shared<int>(7);
std::weak_ptr<int> w = s;  // does not keep object alive
```

- **Yaad rakho:** `shared_ptr` ke cycles `weak_ptr` se todo.
- **Aam galti:** Ek hi raw pointer se do `shared_ptr` banana → double free.

Practice: `examples/04_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 5. Returning unique_ptr

### Aasan Bhasha

`unique_ptr` exclusive ownership hai — sasta aur saaf. `shared_ptr` reference count ke saath ownership baantta hai. Jab tak shared lifetime ki sach me zaroorat na ho, `unique_ptr` hi use karo.

### Chhota code

```cpp
auto p = std::make_unique<int>(5);
std::shared_ptr<int> s = std::make_shared<int>(7);
std::weak_ptr<int> w = s;  // does not keep object alive
```

- **Yaad rakho:** `shared_ptr` ke cycles `weak_ptr` se todo.
- **Aam galti:** Ek hi raw pointer se do `shared_ptr` banana → double free.

Practice: `examples/05_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 6. unique_ptr in containers

### Aasan Bhasha

`unique_ptr` exclusive ownership hai — sasta aur saaf. `shared_ptr` reference count ke saath ownership baantta hai. Jab tak shared lifetime ki sach me zaroorat na ho, `unique_ptr` hi use karo.

### Chhota code

```cpp
auto p = std::make_unique<int>(5);
std::shared_ptr<int> s = std::make_shared<int>(7);
std::weak_ptr<int> w = s;  // does not keep object alive
```

- **Yaad rakho:** `shared_ptr` ke cycles `weak_ptr` se todo.
- **Aam galti:** Ek hi raw pointer se do `shared_ptr` banana → double free.

Practice: `examples/06_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 7. Observing with get / *

### Aasan Bhasha

`unique_ptr` exclusive ownership hai — sasta aur saaf. `shared_ptr` reference count ke saath ownership baantta hai. Jab tak shared lifetime ki sach me zaroorat na ho, `unique_ptr` hi use karo.

### Chhota code

```cpp
auto p = std::make_unique<int>(5);
std::shared_ptr<int> s = std::make_shared<int>(7);
std::weak_ptr<int> w = s;  // does not keep object alive
```

- **Yaad rakho:** `shared_ptr` ke cycles `weak_ptr` se todo.
- **Aam galti:** Ek hi raw pointer se do `shared_ptr` banana → double free.

Practice: `examples/07_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 8. release vs reset

### Aasan Bhasha

`map` keys ko sorted rakhta hai (tree); `unordered_map` hash karta hai aur average O(1) lookup deta hai. Order chahiye to sorted chuno; speed chahiye aur acha hash hai to hash chuno.

### Chhota code

```cpp
std::unordered_map<std::string, int> freq;
++freq["hi"];
for (auto& [k, v] : freq) std::cout << k << ':' << v << '\n';
```

- **Yaad rakho:** `operator[]` key na mile to default value insert kar deta hai.
- **Aam galti:** Sirf lookup ke liye `[]` use karna — missing key error ho to `find` / `at` behtar hai.

Practice: `examples/08_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 9. Factory functions

### Aasan Bhasha

`unique_ptr` exclusive ownership hai — sasta aur saaf. `shared_ptr` reference count ke saath ownership baantta hai. Jab tak shared lifetime ki sach me zaroorat na ho, `unique_ptr` hi use karo.

### Chhota code

```cpp
auto p = std::make_unique<int>(5);
std::shared_ptr<int> s = std::make_shared<int>(7);
std::weak_ptr<int> w = s;  // does not keep object alive
```

- **Yaad rakho:** `shared_ptr` ke cycles `weak_ptr` se todo.
- **Aam galti:** Ek hi raw pointer se do `shared_ptr` banana → double free.

Practice: `examples/09_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 10. Replacing raw new

### Aasan Bhasha

`unique_ptr` exclusive ownership hai — sasta aur saaf. `shared_ptr` reference count ke saath ownership baantta hai. Jab tak shared lifetime ki sach me zaroorat na ho, `unique_ptr` hi use karo.

### Chhota code

```cpp
auto p = std::make_unique<int>(5);
std::shared_ptr<int> s = std::make_shared<int>(7);
std::weak_ptr<int> w = s;  // does not keep object alive
```

- **Yaad rakho:** `shared_ptr` ke cycles `weak_ptr` se todo.
- **Aam galti:** Ek hi raw pointer se do `shared_ptr` banana → double free.

Practice: `examples/10_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

---

## Day 44 ke baad aapko ye aana chahiye

- `unique_ptr mastery` ko bina notes dekhe kisi dost ko samjha sakna.
- Saare 10 examples `-std=c++17 -Wall -Wextra` ke saath compile aur run karna (naye flags sirf tab jab din ko C++20+ chahiye).
- `answers.md` dekhne se pehle `questions.md` ke 5 sawaal answer karna.
- Ek chhota extra program likhna jo aaj ke kam se kam 3 concepts jodta ho.

Ya is din ko **Badsha hub** me kholo (`python3 hub/server.py`) aur Learn / Practice / Quiz tabs use karo.
