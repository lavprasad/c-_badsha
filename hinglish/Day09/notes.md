# Day 09 — STL Containers

Aaj ka goal: kaam ke hisaab se sahi container chunna, efficiently iterate karna, aur insert/erase idioms bina iterator-invalidation ke jhatkon ke seekhna.

| # | Concept |
|--:|---------|
| 1 | `std::vector` — dynamic array, default chunaav |
| 2 | Vector ka growth, `reserve`, aur iterator invalidation |
| 3 | `std::pair` — ek object me do values |
| 4 | `std::map` — sorted key-value store (red-black tree) |
| 5 | `std::set` — sorted unique elements |
| 6 | `std::unordered_map` — hash table, average O(1) lookup |
| 7 | Iteration ke tarike — index, range-for, iterators |
| 8 | Insert ke tarike — `insert`, `emplace`, `insert_or_assign` |
| 9 | Erase ke tarike — key se, iterator se, remove-erase idiom |
| 10 | Sahi container chunna |

---

## 1. `std::vector` — dynamic array, default chunaav

```cpp
std::vector<int> v = {1, 2, 3};
v.push_back(4);
v[0] = 10;
```

- Contiguous memory → cache-friendly, tez random access (`O(1)`).
- **Beech** me insert/erase `O(n)` hai (elements khiskate hain).
- `push_back` amortised `O(1)`.

Shak ho to `vector` use karo.

## 2. Vector ka growth, `reserve`, aur iterator invalidation

```cpp
v.reserve(1000);   // size badle bina capacity allocate karo
```

Jab `vector` apni capacity se aage badhta hai to wo **realloc** karta hai — elements ke saare iterators, pointers aur references **invalid** ho jaate hain.

Bahut saare `push_back` ke liye safe pattern: pehle `reserve`.

## 3. `std::pair` — ek object me do values

```cpp
std::pair<std::string, int> p{"Alice", 95};
std::cout << p.first << ' ' << p.second << '\n';

auto q = std::make_pair("Bob", 87);   // C++17: CTAD types deduce kar sakta hai
```

Pairs map entries aur function return values ki buniyadi eent hain.

## 4. `std::map` — sorted key-value store

```cpp
std::map<std::string, int> scores;
scores["Alice"] = 95;
scores.insert({"Bob", 87});
```

- Keys **unique** hoti hain aur **sorted order** me rehti hain (`operator<` ya custom comparator se).
- Lookup, insert, erase: `O(log n)`.
- Key na ho to `scores[key]` default-constructed value insert kar deta hai — dhyan rakho!

Anchahi insertion nahi chahiye to `find` + check prefer karo:

```cpp
auto it = scores.find("Charlie");
if (it != scores.end()) { /* it->second use karo */ }
```

## 5. `std::set` — sorted unique elements

```cpp
std::set<int> s = {3, 1, 4, 1, 5};
// s = {1, 3, 4, 5} — duplicates hate, sorted
```

`map` jaisa hi par sirf keys (alag value nahi). Jab uniqueness + ordering chahiye tab use karo.

## 6. `std::unordered_map` — hash table

```cpp
std::unordered_map<std::string, int> cache;
cache["page1"] = 42;
```

- Average `O(1)` lookup/insert/erase.
- **Koi ordering nahi** — iteration ka order arbitrary hai.
- Key type ke liye hash function chahiye (`std::string`, `int` waghairah ke liye built-in).

Jab tez lookup chahiye aur order se matlab na ho tab `unordered_map` chuno.

## 7. Iteration ke tarike

```cpp
// range-for (behtar)
for (const auto& [key, val] : my_map) { ... }   // C++17 structured bindings

// iterators
for (auto it = v.begin(); it != v.end(); ++it) { ... }

// index (sirf vectors ke liye)
for (std::size_t i = 0; i < v.size(); ++i) { ... }
```

Maps ke liye `const auto&` `pair` objects ki copy se bachata hai.

## 8. Insert ke tarike

| Container | Idiom |
|-----------|-------|
| `vector` | `push_back`, `emplace_back` |
| `map` | `insert({k,v})`, `emplace(k,v)`, `operator[]` (na ho to insert kar deta hai) |
| `set` | `insert(x)`, `emplace(x)` |
| `unordered_map` | map jaisa hi |

C++17 ke `try_emplace` / `insert_or_assign` gair-zaroori construction se bachate hain:

```cpp
m.try_emplace("key", expensive_to_build());
m.insert_or_assign("key", new_value);
```

## 9. Erase ke tarike

```cpp
// vector — index se (erase point se aage ke iterators invalid)
v.erase(v.begin() + 2);

// vector — erase-remove idiom (matching value sab hatao)
v.erase(std::remove(v.begin(), v.end(), 42), v.end());

// map/set — key se
scores.erase("Alice");

// map/set — iterator se (agla valid iterator return karta hai)
for (auto it = s.begin(); it != s.end(); ) {
    if (*it % 2 == 0) it = s.erase(it);
    else ++it;
}
```

Range-for se iterate karte hue container se **kabhi** erase mat karo — iterator loop ya erase-remove use karo.

## 10. Sahi container chunna

| Zaroorat | Container |
|------|-----------|
| Sequential data, tez access | `vector` |
| Key → value, sorted keys | `map` |
| Key → value, tez lookup | `unordered_map` |
| Unique sorted collection | `set` |
| Unique, tez membership test | `unordered_set` |
| Aage/peeche baar-baar insert/erase | `deque` |
| Beech me bahut insert/erase | `list` socho (kam hi) ya design dobara socho |

---

## Day 09 ke baad aapko ye aana chahiye

- `vector`, `map`, `set` aur `unordered_map` bharose ke saath use karna.
- Range-for aur structured bindings se iterate karna.
- Iterator-invalidation bugs ke bina insert aur erase karna.
- Diye gaye access pattern ke liye sahi container chunna.

Ab `examples/` me jao aur har program chalao. Uske baad `questions.md` try karo.
