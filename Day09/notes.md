# Day 09 — STL Containers

Today's goal: pick the right container for the job, iterate efficiently, and master insert/erase idioms without iterator-invalidation surprises.

| # | Concept |
|--:|---------|
| 1 | `std::vector` — dynamic array, the default choice |
| 2 | Vector growth, `reserve`, and iterator invalidation |
| 3 | `std::pair` — two values in one object |
| 4 | `std::map` — sorted key-value store (red-black tree) |
| 5 | `std::set` — sorted unique elements |
| 6 | `std::unordered_map` — hash table, average O(1) lookup |
| 7 | Iteration patterns — index, range-for, iterators |
| 8 | Insert patterns — `insert`, `emplace`, `insert_or_assign` |
| 9 | Erase patterns — by key, by iterator, remove-erase idiom |
| 10 | Choosing the right container |

---

## 1. `std::vector` — dynamic array, the default choice

```cpp
std::vector<int> v = {1, 2, 3};
v.push_back(4);
v[0] = 10;
```

- Contiguous memory → cache-friendly, fast random access (`O(1)`).
- Insert/erase in the **middle** is `O(n)` (elements shift).
- `push_back` amortised `O(1)`.

When in doubt, use `vector`.

## 2. Vector growth, `reserve`, and iterator invalidation

```cpp
v.reserve(1000);   // allocate capacity without changing size
```

When `vector` grows beyond its capacity, it **reallocates** — all iterators, pointers, and references to elements are **invalidated**.

Safe pattern for many `push_back` calls: `reserve` first.

## 3. `std::pair` — two values in one object

```cpp
std::pair<std::string, int> p{"Alice", 95};
std::cout << p.first << ' ' << p.second << '\n';

auto q = std::make_pair("Bob", 87);   // C++17: CTAD may deduce types
```

Pairs are the building block of map entries and function return values.

## 4. `std::map` — sorted key-value store

```cpp
std::map<std::string, int> scores;
scores["Alice"] = 95;
scores.insert({"Bob", 87});
```

- Keys are **unique** and kept in **sorted order** (by `operator<` or custom comparator).
- Lookup, insert, erase: `O(log n)`.
- `scores[key]` inserts default-constructed value if key missing — watch out!

Prefer `find` + check when you don't want accidental insertion:

```cpp
auto it = scores.find("Charlie");
if (it != scores.end()) { /* use it->second */ }
```

## 5. `std::set` — sorted unique elements

```cpp
std::set<int> s = {3, 1, 4, 1, 5};
// s = {1, 3, 4, 5} — duplicates removed, sorted
```

Like `map` but keys only (no separate value). Use when you need uniqueness + ordering.

## 6. `std::unordered_map` — hash table

```cpp
std::unordered_map<std::string, int> cache;
cache["page1"] = 42;
```

- Average `O(1)` lookup/insert/erase.
- **No ordering** — iteration order is arbitrary.
- Requires hash function for key type (built-in for `std::string`, `int`, etc.).

Choose `unordered_map` when you need fast lookup and don't care about order.

## 7. Iteration patterns

```cpp
// range-for (preferred)
for (const auto& [key, val] : my_map) { ... }   // C++17 structured bindings

// iterators
for (auto it = v.begin(); it != v.end(); ++it) { ... }

// index (vectors only)
for (std::size_t i = 0; i < v.size(); ++i) { ... }
```

For maps, `const auto&` avoids copying `pair` objects.

## 8. Insert patterns

| Container | Idiom |
|-----------|-------|
| `vector` | `push_back`, `emplace_back` |
| `map` | `insert({k,v})`, `emplace(k,v)`, `operator[]` (inserts if missing) |
| `set` | `insert(x)`, `emplace(x)` |
| `unordered_map` | same as map |

C++17 `try_emplace` / `insert_or_assign` avoid unnecessary construction:

```cpp
m.try_emplace("key", expensive_to_build());
m.insert_or_assign("key", new_value);
```

## 9. Erase patterns

```cpp
// vector — by index (invalidates iterators at/after erase point)
v.erase(v.begin() + 2);

// vector — erase-remove idiom (erase all matching value)
v.erase(std::remove(v.begin(), v.end(), 42), v.end());

// map/set — by key
scores.erase("Alice");

// map/set — by iterator (returns next valid iterator)
for (auto it = s.begin(); it != s.end(); ) {
    if (*it % 2 == 0) it = s.erase(it);
    else ++it;
}
```

**Never** erase from a container while range-for iterating it directly — use iterator loop or erase-remove.

## 10. Choosing the right container

| Need | Container |
|------|-----------|
| Sequential data, fast access | `vector` |
| Key → value, sorted keys | `map` |
| Key → value, fast lookup | `unordered_map` |
| Unique sorted collection | `set` |
| Unique, fast membership test | `unordered_set` |
| Frequent insert/erase at front/back | `deque` |
| Many insert/erase in middle | consider `list` (rare) or rethink design |

---

## What you should be able to do after Day 09

- Use `vector`, `map`, `set`, and `unordered_map` confidently.
- Iterate with range-for and structured bindings.
- Insert and erase without iterator-invalidation bugs.
- Pick the right container for a given access pattern.

Now move to `examples/` and run each program. Then attempt `questions.md`.
