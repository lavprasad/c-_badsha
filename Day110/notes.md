# Day 110 -- C interop

Today's goal: understand **C interop** in plain English, see a tiny code sample for each idea, then practice in `examples/`.

How to study this day:
1. Read each concept's **Plain English** section.
2. Skim the code sample -- predict what it does.
3. Run the matching file under `examples/`.
4. Only then try `questions.md`.

| # | Concept |
|--:|---------|
| 1 | extern "C" |
| 2 | POD types |
| 3 | Calling C from C++ |
| 4 | Calling C++ from C limits |
| 5 | Name mangling |
| 6 | Opaque pointers |
| 7 | Ownership across boundary |
| 8 | Exceptions across boundary |
| 9 | Header wrappers |
| 10 | Wrap a C API |

---

## 1. extern "C"

### Plain English

Today's idea — **extern "C"** — fits inside the wider theme of C interop. Read it as a tool: what job does it do, what rules does it enforce, and what breaks if you ignore those rules?

### Tiny code

```cpp
// Explore: extern "C"
#include <iostream>
int main() {
  std::cout << "practice: extern "C"\n";
  return 0;
}
```

- **Remember:** State one invariant for `extern "C"` before you write code that uses it.
- **Common mistake:** Using `extern "C"` by copy-paste without knowing what it owns or when it is valid.

Practice: open `examples/01_*.cpp`, predict the output, change one line, re-predict.

## 2. POD types

### Plain English

Today's idea — **POD types** — fits inside the wider theme of C interop. Read it as a tool: what job does it do, what rules does it enforce, and what breaks if you ignore those rules?

### Tiny code

```cpp
// Explore: POD types
#include <iostream>
int main() {
  std::cout << "practice: POD types\n";
  return 0;
}
```

- **Remember:** State one invariant for `POD types` before you write code that uses it.
- **Common mistake:** Using `POD types` by copy-paste without knowing what it owns or when it is valid.

Practice: open `examples/02_*.cpp`, predict the output, change one line, re-predict.

## 3. Calling C from C++

### Plain English

Today's idea — **Calling C from C++** — fits inside the wider theme of C interop. Read it as a tool: what job does it do, what rules does it enforce, and what breaks if you ignore those rules?

### Tiny code

```cpp
// Explore: Calling C from C++
#include <iostream>
int main() {
  std::cout << "practice: Calling C from C++\n";
  return 0;
}
```

- **Remember:** State one invariant for `Calling C from C++` before you write code that uses it.
- **Common mistake:** Using `Calling C from C++` by copy-paste without knowing what it owns or when it is valid.

Practice: open `examples/03_*.cpp`, predict the output, change one line, re-predict.

## 4. Calling C++ from C limits

### Plain English

Today's idea — **Calling C++ from C limits** — fits inside the wider theme of C interop. Read it as a tool: what job does it do, what rules does it enforce, and what breaks if you ignore those rules?

### Tiny code

```cpp
// Explore: Calling C++ from C limits
#include <iostream>
int main() {
  std::cout << "practice: Calling C++ from C limits\n";
  return 0;
}
```

- **Remember:** State one invariant for `Calling C++ from C limits` before you write code that uses it.
- **Common mistake:** Using `Calling C++ from C limits` by copy-paste without knowing what it owns or when it is valid.

Practice: open `examples/04_*.cpp`, predict the output, change one line, re-predict.

## 5. Name mangling

### Plain English

Today's idea — **Name mangling** — fits inside the wider theme of C interop. Read it as a tool: what job does it do, what rules does it enforce, and what breaks if you ignore those rules?

### Tiny code

```cpp
// Explore: Name mangling
#include <iostream>
int main() {
  std::cout << "practice: Name mangling\n";
  return 0;
}
```

- **Remember:** State one invariant for `Name mangling` before you write code that uses it.
- **Common mistake:** Using `Name mangling` by copy-paste without knowing what it owns or when it is valid.

Practice: open `examples/05_*.cpp`, predict the output, change one line, re-predict.

## 6. Opaque pointers

### Plain English

Today's idea — **Opaque pointers** — fits inside the wider theme of C interop. Read it as a tool: what job does it do, what rules does it enforce, and what breaks if you ignore those rules?

### Tiny code

```cpp
// Explore: Opaque pointers
#include <iostream>
int main() {
  std::cout << "practice: Opaque pointers\n";
  return 0;
}
```

- **Remember:** State one invariant for `Opaque pointers` before you write code that uses it.
- **Common mistake:** Using `Opaque pointers` by copy-paste without knowing what it owns or when it is valid.

Practice: open `examples/06_*.cpp`, predict the output, change one line, re-predict.

## 7. Ownership across boundary

### Plain English

Today's idea — **Ownership across boundary** — fits inside the wider theme of C interop. Read it as a tool: what job does it do, what rules does it enforce, and what breaks if you ignore those rules?

### Tiny code

```cpp
// Explore: Ownership across boundary
#include <iostream>
int main() {
  std::cout << "practice: Ownership across boundary\n";
  return 0;
}
```

- **Remember:** State one invariant for `Ownership across boundary` before you write code that uses it.
- **Common mistake:** Using `Ownership across boundary` by copy-paste without knowing what it owns or when it is valid.

Practice: open `examples/07_*.cpp`, predict the output, change one line, re-predict.

## 8. Exceptions across boundary

### Plain English

Exceptions separate the happy path from failure. Throw when a function cannot do its job; catch at a layer that can recover or report. RAII still cleans up during unwind.

### Tiny code

```cpp
try {
  throw std::runtime_error("boom");
} catch (const std::exception& e) {
  std::cerr << e.what() << '\n';
}
```

- **Remember:** Catch by `const` reference, not by value.
- **Common mistake:** Throwing raw pointers or catching by value (slicing).

Practice: open `examples/08_*.cpp`, predict the output, change one line, re-predict.

## 9. Header wrappers

### Plain English

Headers declare the interface; `.cpp` files define the bodies. Include guards stop a header from being pasted twice into one translation unit. The One Definition Rule says non-inline functions have exactly one definition in the whole program.

### Tiny code

```cpp
#pragma once
struct Widget;           // forward decl — enough for pointers/refs
void use(Widget*);
```

- **Remember:** Declarations in headers, definitions in `.cpp` (templates excepted).
- **Common mistake:** Defining a non-inline function in a header included by two `.cpp` files → multiple definition linker error.

Practice: open `examples/09_*.cpp`, predict the output, change one line, re-predict.

## 10. Wrap a C API

### Plain English

Today's idea — **Wrap a C API** — fits inside the wider theme of C interop. Read it as a tool: what job does it do, what rules does it enforce, and what breaks if you ignore those rules?

### Tiny code

```cpp
// Explore: Wrap a C API
#include <iostream>
int main() {
  std::cout << "practice: Wrap a C API\n";
  return 0;
}
```

- **Remember:** State one invariant for `Wrap a C API` before you write code that uses it.
- **Common mistake:** Using `Wrap a C API` by copy-paste without knowing what it owns or when it is valid.

Practice: open `examples/10_*.cpp`, predict the output, change one line, re-predict.

---

## What you should be able to do after Day 110

- Explain `C interop` to a peer without looking at notes.
- Compile and run all 10 examples with `-std=c++17 -Wall -Wextra` (use newer flags only when the day needs C++20+).
- Answer the 5 questions in `questions.md` before peeking at `answers.md`.
- Write one tiny extra program that combines at least 3 of today's concepts.

Or open this day in the **Badsha hub** (`python3 hub/server.py`) and use Learn / Practice / Quiz tabs.
