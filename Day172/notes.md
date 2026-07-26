# Day 172 -- Interview warmups A

Today's goal: understand **Interview warmups A** in plain English, see a tiny code sample for each idea, then practice in `examples/`.

How to study this day:
1. Read each concept's **Plain English** section.
2. Skim the code sample -- predict what it does.
3. Run the matching file under `examples/`.
4. Only then try `questions.md`.

| # | Concept |
|--:|---------|
| 1 | Clarify requirements |
| 2 | Examples first |
| 3 | Complexity targets |
| 4 | Edge cases list |
| 5 | Brute then improve |
| 6 | Communicate invariants |
| 7 | Test as you go |
| 8 | Clean code under pressure |
| 9 | Time boxing |
| 10 | Warmup problems |

---

## 1. Clarify requirements

### Plain English

Today's idea — **Clarify requirements** — fits inside the wider theme of Interview warmups A. Read it as a tool: what job does it do, what rules does it enforce, and what breaks if you ignore those rules?

### Tiny code

```cpp
// Explore: Clarify requirements
#include <iostream>
int main() {
  std::cout << "practice: Clarify requirements\n";
  return 0;
}
```

- **Remember:** State one invariant for `Clarify requirements` before you write code that uses it.
- **Common mistake:** Using `Clarify requirements` by copy-paste without knowing what it owns or when it is valid.

Practice: open `examples/01_*.cpp`, predict the output, change one line, re-predict.

## 2. Examples first

### Plain English

Today's idea — **Examples first** — fits inside the wider theme of Interview warmups A. Read it as a tool: what job does it do, what rules does it enforce, and what breaks if you ignore those rules?

### Tiny code

```cpp
// Explore: Examples first
#include <iostream>
int main() {
  std::cout << "practice: Examples first\n";
  return 0;
}
```

- **Remember:** State one invariant for `Examples first` before you write code that uses it.
- **Common mistake:** Using `Examples first` by copy-paste without knowing what it owns or when it is valid.

Practice: open `examples/02_*.cpp`, predict the output, change one line, re-predict.

## 3. Complexity targets

### Plain English

Big-O describes how cost grows with input size. Prefer a clearer O(n log n) algorithm over a clever O(n²) one once n gets large. Measure when constants matter.

### Tiny code

```cpp
// Sorting n items: typically O(n log n)
std::sort(v.begin(), v.end());
```

- **Remember:** Asymptotics first; micro-optimisations later with a profiler.
- **Common mistake:** Optimising a cold path while leaving an O(n²) hot loop alone.

Practice: open `examples/03_*.cpp`, predict the output, change one line, re-predict.

## 4. Edge cases list

### Plain English

Today's idea — **Edge cases list** — fits inside the wider theme of Interview warmups A. Read it as a tool: what job does it do, what rules does it enforce, and what breaks if you ignore those rules?

### Tiny code

```cpp
// Explore: Edge cases list
#include <iostream>
int main() {
  std::cout << "practice: Edge cases list\n";
  return 0;
}
```

- **Remember:** State one invariant for `Edge cases list` before you write code that uses it.
- **Common mistake:** Using `Edge cases list` by copy-paste without knowing what it owns or when it is valid.

Practice: open `examples/04_*.cpp`, predict the output, change one line, re-predict.

## 5. Brute then improve

### Plain English

Today's idea — **Brute then improve** — fits inside the wider theme of Interview warmups A. Read it as a tool: what job does it do, what rules does it enforce, and what breaks if you ignore those rules?

### Tiny code

```cpp
// Explore: Brute then improve
#include <iostream>
int main() {
  std::cout << "practice: Brute then improve\n";
  return 0;
}
```

- **Remember:** State one invariant for `Brute then improve` before you write code that uses it.
- **Common mistake:** Using `Brute then improve` by copy-paste without knowing what it owns or when it is valid.

Practice: open `examples/05_*.cpp`, predict the output, change one line, re-predict.

## 6. Communicate invariants

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

Practice: open `examples/06_*.cpp`, predict the output, change one line, re-predict.

## 7. Test as you go

### Plain English

Today's idea — **Test as you go** — fits inside the wider theme of Interview warmups A. Read it as a tool: what job does it do, what rules does it enforce, and what breaks if you ignore those rules?

### Tiny code

```cpp
// Explore: Test as you go
#include <iostream>
int main() {
  std::cout << "practice: Test as you go\n";
  return 0;
}
```

- **Remember:** State one invariant for `Test as you go` before you write code that uses it.
- **Common mistake:** Using `Test as you go` by copy-paste without knowing what it owns or when it is valid.

Practice: open `examples/07_*.cpp`, predict the output, change one line, re-predict.

## 8. Clean code under pressure

### Plain English

Today's idea — **Clean code under pressure** — fits inside the wider theme of Interview warmups A. Read it as a tool: what job does it do, what rules does it enforce, and what breaks if you ignore those rules?

### Tiny code

```cpp
// Explore: Clean code under pressure
#include <iostream>
int main() {
  std::cout << "practice: Clean code under pressure\n";
  return 0;
}
```

- **Remember:** State one invariant for `Clean code under pressure` before you write code that uses it.
- **Common mistake:** Using `Clean code under pressure` by copy-paste without knowing what it owns or when it is valid.

Practice: open `examples/08_*.cpp`, predict the output, change one line, re-predict.

## 9. Time boxing

### Plain English

Today's idea — **Time boxing** — fits inside the wider theme of Interview warmups A. Read it as a tool: what job does it do, what rules does it enforce, and what breaks if you ignore those rules?

### Tiny code

```cpp
// Explore: Time boxing
#include <iostream>
int main() {
  std::cout << "practice: Time boxing\n";
  return 0;
}
```

- **Remember:** State one invariant for `Time boxing` before you write code that uses it.
- **Common mistake:** Using `Time boxing` by copy-paste without knowing what it owns or when it is valid.

Practice: open `examples/09_*.cpp`, predict the output, change one line, re-predict.

## 10. Warmup problems

### Plain English

Today's idea — **Warmup problems** — fits inside the wider theme of Interview warmups A. Read it as a tool: what job does it do, what rules does it enforce, and what breaks if you ignore those rules?

### Tiny code

```cpp
// Explore: Warmup problems
#include <iostream>
int main() {
  std::cout << "practice: Warmup problems\n";
  return 0;
}
```

- **Remember:** State one invariant for `Warmup problems` before you write code that uses it.
- **Common mistake:** Using `Warmup problems` by copy-paste without knowing what it owns or when it is valid.

Practice: open `examples/10_*.cpp`, predict the output, change one line, re-predict.

---

## What you should be able to do after Day 172

- Explain `Interview warmups A` to a peer without looking at notes.
- Compile and run all 10 examples with `-std=c++17 -Wall -Wextra` (use newer flags only when the day needs C++20+).
- Answer the 5 questions in `questions.md` before peeking at `answers.md`.
- Write one tiny extra program that combines at least 3 of today's concepts.

Or open this day in the **Badsha hub** (`python3 hub/server.py`) and use Learn / Practice / Quiz tabs.
