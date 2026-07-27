# Day 10 — STL Algorithms, Iterators & Lambdas

Aaj ka goal: haath se likhe loops ki jagah algorithm library use karna, iterators ko jodne wale gond ki tarah samajhna, aur lambdas se behaviour pass karna.

| # | Concept |
|--:|---------|
| 1 | Iterators — `begin()` / `end()` aur half-open range `[first, last)` |
| 2 | `std::sort` — elements ko jagah par order karna |
| 3 | `std::find` — linear search |
| 4 | `std::transform` — ek range ko doosri me badalna |
| 5 | Lambda expressions — bina naam ke function objects |
| 6 | Lambda capture — `[=]`, `[&]` aur naam se captures |
| 7 | `std::find_if` — predicate se search |
| 8 | Range-for aur algorithms — idiomatic jod |
| 9 | `std::count_if`, `std::accumulate` aur doosre aam algorithms |
| 10 | Ek algorithm pipeline banana |

---

## 1. Iterators — `begin()` / `end()`

Algorithms **iterator ranges** par chalte hain — half-open intervals `[first, last)`:

```cpp
std::vector<int> v = {3, 1, 4, 1, 5};
auto b = v.begin();   // pehle element par
auto e = v.end();     // aakhri ke ek aage (dereference NAHI kar sakte)
```

- `*b` element deta hai; `++b` aage badhata hai.
- `std::begin(v)` / `std::end(v)` arrays aur containers dono ke saath chalte hain (aur har us cheez ke saath jiske paas `.begin()` hai).
- Range-for iterators ke upar bas meethi syntax hai.

## 2. `std::sort` — elements ko jagah par order karna

```cpp
#include <algorithm>
std::sort(v.begin(), v.end());                    // badhta hua
std::sort(v.begin(), v.end(), std::greater<int>()); // ghatta hua
```

- Average complexity: `O(n log n)`.
- **Random-access iterators** chahiye (vector, deque, array — list nahi).
- `std::stable_sort` barabar elements ka aapsi order bachaata hai.

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

Na mile to `last` deta hai. Kisi bhi **forward iterator** ya usse behtar par chalta hai.

## 4. `std::transform` — ek range ko doosri me badalna

```cpp
std::vector<int> src = {1, 2, 3};
std::vector<int> dst(src.size());
std::transform(src.begin(), src.end(), dst.begin(),
               [](int x) { return x * x; });
// dst = {1, 4, 9}
```

Teesra argument **output** ki shuruaat hai. Output container itna bada hona chahiye (ya `back_inserter` use karo).

## 5. Lambda expressions — bina naam ke function objects

```cpp
auto square = [](int x) { return x * x; };
std::cout << square(5) << '\n';   // 25
```

Syntax: `[captures](params) { body }`

Optional trailing return type: `[](int x) -> int { return x * x; }`

Algorithms ko apna logic dene ka standard tarika lambdas hi hain.

## 6. Lambda capture — `[=]`, `[&]` aur naam se captures

```cpp
int threshold = 10;
auto is_big = [threshold](int x) { return x > threshold; };  // value se capture

int sum = 0;
std::for_each(v.begin(), v.end(), [&sum](int x) { sum += x; });  // reference se capture
```

| Capture | Matlab |
|---------|---------|
| `[]` | kuch capture nahi |
| `[=]` | istemaal hue saare locals value se |
| `[&]` | istemaal hue saare locals reference se |
| `[x]` | `x` value se |
| `[&x]` | `x` reference se |
| `[x = expr]` | C++14 init capture (move-friendly) |

Agar lambda scope se zyada jee sakta hai (async, store kiye callbacks) to `[&]` se bacho.

## 7. `std::find_if` — predicate se search

```cpp
auto it = std::find_if(v.begin(), v.end(),
                       [](int x) { return x > 100; });
```

`find` ka aam roop — koi bhi unary predicate jo `bool` deta ho.

Related: `std::find_if_not`, `std::all_of`, `std::any_of`, `std::none_of`.

## 8. Range-for aur algorithms — idiomatic jod

Range-for **padhne** ke liye badhiya hai; algorithms **badalne** ke liye:

```cpp
// filter kiye elements copy karo
std::vector<int> evens;
std::copy_if(v.begin(), v.end(), std::back_inserter(evens),
             [](int x) { return x % 2 == 0; });
```

`std::back_inserter(evens)` vector ko apne aap badha deta hai.

## 9. `std::count_if`, `std::accumulate` aur doosre aam algorithms

```cpp
int n = std::count_if(v.begin(), v.end(), [](int x) { return x > 5; });

#include <numeric>
int total = std::accumulate(v.begin(), v.end(), 0);
```

Kaam ki list:
- `count` / `count_if` — matches ginno
- `min_element` / `max_element` — sabse chhota/bada dhoondo
- `reverse` — jagah par ulta karo
- `unique` — aas-paas ke duplicates hatao (aksar `sort` ke saath)
- `remove` / `remove_if` — na-match wale aage khiskao (`erase` ke saath jodo)

## 10. Ek algorithm pipeline banana

Aam data-processing chain:

```cpp
std::vector<int> data = {5, 2, 8, 2, 9, 1, 5, 6};

std::sort(data.begin(), data.end());
data.erase(std::unique(data.begin(), data.end()), data.end());

int sum_of_evens = std::accumulate(data.begin(), data.end(), 0,
    [](int acc, int x) { return x % 2 == 0 ? acc + x : acc; });
```

Jab algorithms intent saaf batayein to raw loops se unhe upar rakho. Agar loop zyada saaf hai to loop hi likho.

---

## Day 10 ke baad aapko ye aana chahiye

- `sort`, `find`, `transform` aur `count_if` ko iterator ranges dena.
- Sahi capture ke saath lambdas likhna.
- Aam kaamon ke liye algorithms jodna (sort → unique → erase).
- Ye jaanna ki range-for kab saaf hai aur algorithm kab.

Ab `examples/` me jao aur har program chalao. Uske baad `questions.md` try karo.
