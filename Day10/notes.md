# Day 10 — STL Algorithms, Iterators & Lambdas

Today's goal: use the algorithm library instead of hand-written loops, understand iterators as the glue, and pass behaviour with lambdas.

| # | Concept |
|--:|---------|
| 1 | Iterators — `begin()` / `end()` and the half-open range `[first, last)` |
| 2 | `std::sort` — ordering elements in-place |
| 3 | `std::find` — linear search |
| 4 | `std::transform` — map one range to another |
| 5 | Lambda expressions — anonymous function objects |
| 6 | Lambda capture — `[=]`, `[&]`, and named captures |
| 7 | `std::find_if` — search with a predicate |
| 8 | Range-for with algorithms — idiomatic combinations |
| 9 | `std::count_if`, `std::accumulate`, and other common algorithms |
| 10 | Building an algorithm pipeline |

---

## 1. Iterators — `begin()` / `end()`

Algorithms operate on **iterator ranges** — half-open intervals `[first, last)`:

```cpp
std::vector<int> v = {3, 1, 4, 1, 5};
auto b = v.begin();   // points to first element
auto e = v.end();     // one-past-the-last (NOT dereferenceable)
```

- `*b` gives the element; `++b` advances.
- `std::begin(v)` / `std::end(v)` work with arrays and containers (and anything with `.begin()`).
- Range-for is syntactic sugar over iterators.

## 2. `std::sort` — ordering elements in-place

```cpp
#include <algorithm>
std::sort(v.begin(), v.end());                    // ascending
std::sort(v.begin(), v.end(), std::greater<int>()); // descending
```

- Average complexity: `O(n log n)`.
- Requires **random-access iterators** (vector, deque, array — not list).
- `std::stable_sort` preserves relative order of equal elements.

Custom comparator:

```cpp
std::sort(v.begin(), v.end(), [](int a, int b) { return a > b; });
```

## 3. `std::find` — linear search

```cpp
auto it = std::find(v.begin(), v.end(), 42);
if (it != v.end()) {
    std::cout << "found at index " << (it - v.begin()) << '\n';
}
```

Returns `last` if not found. Works on any **forward iterator** or better.

## 4. `std::transform` — map one range to another

```cpp
std::vector<int> src = {1, 2, 3};
std::vector<int> dst(src.size());
std::transform(src.begin(), src.end(), dst.begin(),
               [](int x) { return x * x; });
// dst = {1, 4, 9}
```

Third argument is the **output** start. Output container must be large enough (or use `back_inserter`).

## 5. Lambda expressions — anonymous function objects

```cpp
auto square = [](int x) { return x * x; };
std::cout << square(5) << '\n';   // 25
```

Syntax: `[captures](params) { body }`

Optional trailing return type: `[](int x) -> int { return x * x; }`

Lambdas are the standard way to pass custom logic to algorithms.

## 6. Lambda capture — `[=]`, `[&]`, and named captures

```cpp
int threshold = 10;
auto is_big = [threshold](int x) { return x > threshold; };  // capture by value

int sum = 0;
std::for_each(v.begin(), v.end(), [&sum](int x) { sum += x; });  // capture by ref
```

| Capture | Meaning |
|---------|---------|
| `[]` | capture nothing |
| `[=]` | capture all used locals by value |
| `[&]` | capture all used locals by reference |
| `[x]` | capture `x` by value |
| `[&x]` | capture `x` by reference |
| `[x = expr]` | C++14 init capture (move-friendly) |

Avoid `[&]` if the lambda may outlive the scope (async, stored callbacks).

## 7. `std::find_if` — search with a predicate

```cpp
auto it = std::find_if(v.begin(), v.end(),
                       [](int x) { return x > 100; });
```

Generalises `find` — any unary predicate returning `bool`.

Related: `std::find_if_not`, `std::all_of`, `std::any_of`, `std::none_of`.

## 8. Range-for with algorithms — idiomatic combinations

Range-for is great for **reading**; algorithms for **transforming**:

```cpp
// copy filtered elements
std::vector<int> evens;
std::copy_if(v.begin(), v.end(), std::back_inserter(evens),
             [](int x) { return x % 2 == 0; });
```

`std::back_inserter(evens)` grows the vector automatically.

## 9. `std::count_if`, `std::accumulate`, and other common algorithms

```cpp
int n = std::count_if(v.begin(), v.end(), [](int x) { return x > 5; });

#include <numeric>
int total = std::accumulate(v.begin(), v.end(), 0);
```

Handy catalogue:
- `count` / `count_if` — count matches
- `min_element` / `max_element` — find extremum
- `reverse` — reverse in-place
- `unique` — collapse adjacent duplicates (often paired with `sort`)
- `remove` / `remove_if` — move non-matching to front (pair with `erase`)

## 10. Building an algorithm pipeline

Typical data-processing chain:

```cpp
std::vector<int> data = {5, 2, 8, 2, 9, 1, 5, 6};

std::sort(data.begin(), data.end());
data.erase(std::unique(data.begin(), data.end()), data.end());

int sum_of_evens = std::accumulate(data.begin(), data.end(), 0,
    [](int acc, int x) { return x % 2 == 0 ? acc + x : acc; });
```

Prefer algorithms over raw loops when they express intent clearly. If a loop is clearer, use a loop.

---

## What you should be able to do after Day 10

- Pass iterator ranges to `sort`, `find`, `transform`, and `count_if`.
- Write lambdas with appropriate capture.
- Combine algorithms (sort → unique → erase) for common tasks.
- Know when range-for vs an algorithm is clearer.

Now move to `examples/` and run each program. Then attempt `questions.md`.
