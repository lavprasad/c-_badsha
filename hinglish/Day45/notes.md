# Day 45 -- shared_ptr & weak_ptr

Aaj ka goal: **shared_ptr & weak_ptr** ko aasan Hinglish me samajhna, har idea ka chhota code sample dekhna, phir `examples/` me practice karna.

Is din ko padhne ka tarika:
1. Har concept ka **Aasan Bhasha** section padho.
2. Code sample par nazar daalo -- pehle predict karo ki output kya aayega.
3. `examples/` me us concept ki file chalao.
4. Uske baad hi `questions.md` kholo.

| # | Concept |
|--:|---------|
| 1 | shared_ptr control block |
| 2 | make_shared |
| 3 | weak_ptr lock |
| 4 | Breaking cycles |
| 5 | aliasing constructor idea |
| 6 | enable_shared_from_this |
| 7 | Performance cost |
| 8 | Thread safety notes |
| 9 | When unique_ptr is enough |
| 10 | Cache with weak_ptr |

---

## 1. shared_ptr control block

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

## 2. make_shared

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

## 3. weak_ptr lock

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

## 4. Breaking cycles

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

## 5. aliasing constructor idea

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

## 6. enable_shared_from_this

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

## 7. Performance cost

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

## 8. Thread safety notes

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

Practice: `examples/08_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 9. When unique_ptr is enough

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

## 10. Cache with weak_ptr

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

## Day 45 ke baad aapko ye aana chahiye

- `shared_ptr & weak_ptr` ko bina notes dekhe kisi dost ko samjha sakna.
- Saare 10 examples `-std=c++17 -Wall -Wextra` ke saath compile aur run karna (naye flags sirf tab jab din ko C++20+ chahiye).
- `answers.md` dekhne se pehle `questions.md` ke 5 sawaal answer karna.
- Ek chhota extra program likhna jo aaj ke kam se kam 3 concepts jodta ho.

Ya is din ko **Badsha hub** me kholo (`python3 hub/server.py`) aur Learn / Practice / Quiz tabs use karo.
