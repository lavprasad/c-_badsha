# Day 134 -- Reflection wishlist & current tricks

Today's goal: understand **Reflection wishlist & current tricks** in plain English, see a tiny code sample for each idea, then practice in `examples/`.

How to study this day:
1. Read each concept's **Plain English** section.
2. Skim the code sample -- predict what it does.
3. Run the matching file under `examples/`.
4. Only then try `questions.md`.

| # | Concept |
|--:|---------|
| 1 | What reflection means |
| 2 | Macro registration |
| 3 | Structured bindings limits |
| 4 | visit on variants |
| 5 | Magic_get style idea |
| 6 | Future of C++ reflection |
| 7 | Codegen alternatives |
| 8 | JSON mapping pain |
| 9 | Practical advice |
| 10 | Manual visitor |

---

## 1. What reflection means

### Plain English

Today's idea — **What reflection means** — fits inside the wider theme of Reflection wishlist & current tricks. Read it as a tool: what job does it do, what rules does it enforce, and what breaks if you ignore those rules?

### Tiny code

```cpp
// Explore: What reflection means
#include <iostream>
int main() {
  std::cout << "practice: What reflection means\n";
  return 0;
}
```

- **Remember:** State one invariant for `What reflection means` before you write code that uses it.
- **Common mistake:** Using `What reflection means` by copy-paste without knowing what it owns or when it is valid.

Practice: open `examples/01_*.cpp`, predict the output, change one line, re-predict.

## 2. Macro registration

### Plain English

Today's idea — **Macro registration** — fits inside the wider theme of Reflection wishlist & current tricks. Read it as a tool: what job does it do, what rules does it enforce, and what breaks if you ignore those rules?

### Tiny code

```cpp
// Explore: Macro registration
#include <iostream>
int main() {
  std::cout << "practice: Macro registration\n";
  return 0;
}
```

- **Remember:** State one invariant for `Macro registration` before you write code that uses it.
- **Common mistake:** Using `Macro registration` by copy-paste without knowing what it owns or when it is valid.

Practice: open `examples/02_*.cpp`, predict the output, change one line, re-predict.

## 3. Structured bindings limits

### Plain English

Sockets are OS endpoints for network bytes. TCP gives a reliable stream; you still must frame messages yourself. Always check return codes and handle partial reads/writes.

### Tiny code

```cpp
// Conceptual — details are OS-specific
// sock = socket(...);
// connect(sock, ...);
// send(sock, buf, n, 0);
```

- **Remember:** Network data is bytes; convert integers with endian helpers.
- **Common mistake:** Assuming one `recv` returns one complete application message.

Practice: open `examples/03_*.cpp`, predict the output, change one line, re-predict.

## 4. visit on variants

### Plain English

`optional<T>` is either a T or empty — better than magic sentinel values. `variant` holds one of several types. Prefer them over raw unions or `void*` for clarity.

### Tiny code

```cpp
#include <optional>
std::optional<int> parse(bool ok) {
  if (!ok) return std::nullopt;
  return 42;
}
int x = parse(true).value_or(-1);
```

- **Remember:** Check `optional` (or use `value_or`) before calling `value()`.
- **Common mistake:** Calling `opt.value()` on an empty optional → exception.

Practice: open `examples/04_*.cpp`, predict the output, change one line, re-predict.

## 5. Magic_get style idea

### Plain English

Today's idea — **Magic_get style idea** — fits inside the wider theme of Reflection wishlist & current tricks. Read it as a tool: what job does it do, what rules does it enforce, and what breaks if you ignore those rules?

### Tiny code

```cpp
// Explore: Magic_get style idea
#include <iostream>
int main() {
  std::cout << "practice: Magic_get style idea\n";
  return 0;
}
```

- **Remember:** State one invariant for `Magic_get style idea` before you write code that uses it.
- **Common mistake:** Using `Magic_get style idea` by copy-paste without knowing what it owns or when it is valid.

Practice: open `examples/05_*.cpp`, predict the output, change one line, re-predict.

## 6. Future of C++ reflection

### Plain English

Threads run code concurrently. Shared mutable data needs a mutex (or atomics). Prefer RAII locks (`lock_guard`) so unlock happens even on exceptions.

### Tiny code

```cpp
std::mutex m;
int counter = 0;
{
  std::lock_guard<std::mutex> g(m);
  ++counter;
}
```

- **Remember:** A data race on non-atomic shared data is undefined behaviour.
- **Common mistake:** Locking two mutexes in opposite orders in different threads → deadlock.

Practice: open `examples/06_*.cpp`, predict the output, change one line, re-predict.

## 7. Codegen alternatives

### Plain English

Today's idea — **Codegen alternatives** — fits inside the wider theme of Reflection wishlist & current tricks. Read it as a tool: what job does it do, what rules does it enforce, and what breaks if you ignore those rules?

### Tiny code

```cpp
// Explore: Codegen alternatives
#include <iostream>
int main() {
  std::cout << "practice: Codegen alternatives\n";
  return 0;
}
```

- **Remember:** State one invariant for `Codegen alternatives` before you write code that uses it.
- **Common mistake:** Using `Codegen alternatives` by copy-paste without knowing what it owns or when it is valid.

Practice: open `examples/07_*.cpp`, predict the output, change one line, re-predict.

## 8. JSON mapping pain

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

## 9. Practical advice

### Plain English

Today's idea — **Practical advice** — fits inside the wider theme of Reflection wishlist & current tricks. Read it as a tool: what job does it do, what rules does it enforce, and what breaks if you ignore those rules?

### Tiny code

```cpp
// Explore: Practical advice
#include <iostream>
int main() {
  std::cout << "practice: Practical advice\n";
  return 0;
}
```

- **Remember:** State one invariant for `Practical advice` before you write code that uses it.
- **Common mistake:** Using `Practical advice` by copy-paste without knowing what it owns or when it is valid.

Practice: open `examples/09_*.cpp`, predict the output, change one line, re-predict.

## 10. Manual visitor

### Plain English

`optional<T>` is either a T or empty — better than magic sentinel values. `variant` holds one of several types. Prefer them over raw unions or `void*` for clarity.

### Tiny code

```cpp
#include <optional>
std::optional<int> parse(bool ok) {
  if (!ok) return std::nullopt;
  return 42;
}
int x = parse(true).value_or(-1);
```

- **Remember:** Check `optional` (or use `value_or`) before calling `value()`.
- **Common mistake:** Calling `opt.value()` on an empty optional → exception.

Practice: open `examples/10_*.cpp`, predict the output, change one line, re-predict.

---

## What you should be able to do after Day 134

- Explain `Reflection wishlist & current tricks` to a peer without looking at notes.
- Compile and run all 10 examples with `-std=c++17 -Wall -Wextra` (use newer flags only when the day needs C++20+).
- Answer the 5 questions in `questions.md` before peeking at `answers.md`.
- Write one tiny extra program that combines at least 3 of today's concepts.

Or open this day in the **Badsha hub** (`python3 hub/server.py`) and use Learn / Practice / Quiz tabs.
