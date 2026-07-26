# Day 44 -- unique_ptr mastery

Today's goal: understand **unique_ptr mastery** in plain English, see a tiny code sample for each idea, then practice in `examples/`.

How to study this day:
1. Read each concept's **Plain English** section.
2. Skim the code sample -- predict what it does.
3. Run the matching file under `examples/`.
4. Only then try `questions.md`.

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

### Plain English

`unique_ptr` is exclusive ownership — cheap and clear. `shared_ptr` shares ownership with a reference count. Prefer `unique_ptr` unless you truly need shared lifetime.

### Tiny code

```cpp
auto p = std::make_unique<int>(5);
std::shared_ptr<int> s = std::make_shared<int>(7);
std::weak_ptr<int> w = s;  // does not keep object alive
```

- **Remember:** Break `shared_ptr` cycles with `weak_ptr`.
- **Common mistake:** Creating two `shared_ptr`s from the same raw pointer → double free.

Practice: open `examples/01_*.cpp`, predict the output, change one line, re-predict.

## 2. Custom deleters

### Plain English

`unique_ptr` is exclusive ownership — cheap and clear. `shared_ptr` shares ownership with a reference count. Prefer `unique_ptr` unless you truly need shared lifetime.

### Tiny code

```cpp
auto p = std::make_unique<int>(5);
std::shared_ptr<int> s = std::make_shared<int>(7);
std::weak_ptr<int> w = s;  // does not keep object alive
```

- **Remember:** Break `shared_ptr` cycles with `weak_ptr`.
- **Common mistake:** Creating two `shared_ptr`s from the same raw pointer → double free.

Practice: open `examples/02_*.cpp`, predict the output, change one line, re-predict.

## 3. unique_ptr arrays

### Plain English

`unique_ptr` is exclusive ownership — cheap and clear. `shared_ptr` shares ownership with a reference count. Prefer `unique_ptr` unless you truly need shared lifetime.

### Tiny code

```cpp
auto p = std::make_unique<int>(5);
std::shared_ptr<int> s = std::make_shared<int>(7);
std::weak_ptr<int> w = s;  // does not keep object alive
```

- **Remember:** Break `shared_ptr` cycles with `weak_ptr`.
- **Common mistake:** Creating two `shared_ptr`s from the same raw pointer → double free.

Practice: open `examples/03_*.cpp`, predict the output, change one line, re-predict.

## 4. Moving unique_ptrs

### Plain English

`unique_ptr` is exclusive ownership — cheap and clear. `shared_ptr` shares ownership with a reference count. Prefer `unique_ptr` unless you truly need shared lifetime.

### Tiny code

```cpp
auto p = std::make_unique<int>(5);
std::shared_ptr<int> s = std::make_shared<int>(7);
std::weak_ptr<int> w = s;  // does not keep object alive
```

- **Remember:** Break `shared_ptr` cycles with `weak_ptr`.
- **Common mistake:** Creating two `shared_ptr`s from the same raw pointer → double free.

Practice: open `examples/04_*.cpp`, predict the output, change one line, re-predict.

## 5. Returning unique_ptr

### Plain English

`unique_ptr` is exclusive ownership — cheap and clear. `shared_ptr` shares ownership with a reference count. Prefer `unique_ptr` unless you truly need shared lifetime.

### Tiny code

```cpp
auto p = std::make_unique<int>(5);
std::shared_ptr<int> s = std::make_shared<int>(7);
std::weak_ptr<int> w = s;  // does not keep object alive
```

- **Remember:** Break `shared_ptr` cycles with `weak_ptr`.
- **Common mistake:** Creating two `shared_ptr`s from the same raw pointer → double free.

Practice: open `examples/05_*.cpp`, predict the output, change one line, re-predict.

## 6. unique_ptr in containers

### Plain English

`unique_ptr` is exclusive ownership — cheap and clear. `shared_ptr` shares ownership with a reference count. Prefer `unique_ptr` unless you truly need shared lifetime.

### Tiny code

```cpp
auto p = std::make_unique<int>(5);
std::shared_ptr<int> s = std::make_shared<int>(7);
std::weak_ptr<int> w = s;  // does not keep object alive
```

- **Remember:** Break `shared_ptr` cycles with `weak_ptr`.
- **Common mistake:** Creating two `shared_ptr`s from the same raw pointer → double free.

Practice: open `examples/06_*.cpp`, predict the output, change one line, re-predict.

## 7. Observing with get / *

### Plain English

`unique_ptr` is exclusive ownership — cheap and clear. `shared_ptr` shares ownership with a reference count. Prefer `unique_ptr` unless you truly need shared lifetime.

### Tiny code

```cpp
auto p = std::make_unique<int>(5);
std::shared_ptr<int> s = std::make_shared<int>(7);
std::weak_ptr<int> w = s;  // does not keep object alive
```

- **Remember:** Break `shared_ptr` cycles with `weak_ptr`.
- **Common mistake:** Creating two `shared_ptr`s from the same raw pointer → double free.

Practice: open `examples/07_*.cpp`, predict the output, change one line, re-predict.

## 8. release vs reset

### Plain English

`map` keeps keys sorted (tree); `unordered_map` hashes for average O(1) lookup. Pick sorted when you need order; pick hash when you need speed and have a good hash.

### Tiny code

```cpp
std::unordered_map<std::string, int> freq;
++freq["hi"];
for (auto& [k, v] : freq) std::cout << k << ':' << v << '\n';
```

- **Remember:** `operator[]` default-inserts a value if the key is missing.
- **Common mistake:** Using `[]` when you only meant to look up — prefer `find` / `at` if missing should be an error.

Practice: open `examples/08_*.cpp`, predict the output, change one line, re-predict.

## 9. Factory functions

### Plain English

`unique_ptr` is exclusive ownership — cheap and clear. `shared_ptr` shares ownership with a reference count. Prefer `unique_ptr` unless you truly need shared lifetime.

### Tiny code

```cpp
auto p = std::make_unique<int>(5);
std::shared_ptr<int> s = std::make_shared<int>(7);
std::weak_ptr<int> w = s;  // does not keep object alive
```

- **Remember:** Break `shared_ptr` cycles with `weak_ptr`.
- **Common mistake:** Creating two `shared_ptr`s from the same raw pointer → double free.

Practice: open `examples/09_*.cpp`, predict the output, change one line, re-predict.

## 10. Replacing raw new

### Plain English

`unique_ptr` is exclusive ownership — cheap and clear. `shared_ptr` shares ownership with a reference count. Prefer `unique_ptr` unless you truly need shared lifetime.

### Tiny code

```cpp
auto p = std::make_unique<int>(5);
std::shared_ptr<int> s = std::make_shared<int>(7);
std::weak_ptr<int> w = s;  // does not keep object alive
```

- **Remember:** Break `shared_ptr` cycles with `weak_ptr`.
- **Common mistake:** Creating two `shared_ptr`s from the same raw pointer → double free.

Practice: open `examples/10_*.cpp`, predict the output, change one line, re-predict.

---

## What you should be able to do after Day 44

- Explain `unique_ptr mastery` to a peer without looking at notes.
- Compile and run all 10 examples with `-std=c++17 -Wall -Wextra` (use newer flags only when the day needs C++20+).
- Answer the 5 questions in `questions.md` before peeking at `answers.md`.
- Write one tiny extra program that combines at least 3 of today's concepts.

Or open this day in the **Badsha hub** (`python3 hub/server.py`) and use Learn / Practice / Quiz tabs.
