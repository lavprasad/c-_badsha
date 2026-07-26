# Day 45 -- shared_ptr & weak_ptr

Today's goal: understand **shared_ptr & weak_ptr** in plain English, see a tiny code sample for each idea, then practice in `examples/`.

How to study this day:
1. Read each concept's **Plain English** section.
2. Skim the code sample -- predict what it does.
3. Run the matching file under `examples/`.
4. Only then try `questions.md`.

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

## 2. make_shared

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

## 3. weak_ptr lock

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

## 4. Breaking cycles

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

## 5. aliasing constructor idea

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

## 6. enable_shared_from_this

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

## 7. Performance cost

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

## 8. Thread safety notes

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

Practice: open `examples/08_*.cpp`, predict the output, change one line, re-predict.

## 9. When unique_ptr is enough

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

## 10. Cache with weak_ptr

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

## What you should be able to do after Day 45

- Explain `shared_ptr & weak_ptr` to a peer without looking at notes.
- Compile and run all 10 examples with `-std=c++17 -Wall -Wextra` (use newer flags only when the day needs C++20+).
- Answer the 5 questions in `questions.md` before peeking at `answers.md`.
- Write one tiny extra program that combines at least 3 of today's concepts.

Or open this day in the **Badsha hub** (`python3 hub/server.py`) and use Learn / Practice / Quiz tabs.
