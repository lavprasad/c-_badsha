# Day 09 — Answers (read AFTER you've tried)

---

### A1. `operator[]` inserts missing keys

**Output:**

```
0
2
```

`scores["Bob"]` **inserts** `"Bob"` with value-initialized `int` (`0`) if the key doesn't exist, then returns a reference to it. We never wrote `insert` or `=` for Bob, but the map now has **2** entries.

**Safe alternative:**

```cpp
auto it = scores.find("Bob");
if (it != scores.end()) std::cout << it->second << '\n';
else std::cout << "not found\n";
```

Lesson: `operator[]` on maps is **not** read-only lookup.

---

### A2. Undefined behaviour — iterator invalidated by erase

**Not safe.** `v.erase(it)` invalidates `it`. Then `++it` in the for-loop is **undefined behaviour**. You may crash, skip elements, or get garbage.

**Correct pattern:**

```cpp
for (auto it = v.begin(); it != v.end(); ) {
    if (*it % 2 == 0) {
        it = v.erase(it);   // erase returns next valid iterator
    } else {
        ++it;
    }
}
```

Or use the erase-remove idiom if removing **all** matching values.

---

### A3. Only `map` is sorted

**No**, the lines will **not** match.

- **`map`**: keys printed in **sorted order** → `apple mango zebra`.
- **`unordered_map`**: iteration order is **unspecified** (depends on hash table layout). It may differ between runs or implementations.

Never rely on iteration order of `unordered_*` containers.

---

### A4. Set rejects duplicates

**Output: `1 0 1`**

- `ok1 = true` — first insert of `5` succeeded.
- `ok2 = false` — second insert of `5` failed (duplicate).
- `s.size() = 1` — only one element.

`set::insert` returns `pair<iterator, bool>`: iterator to element, and `bool` indicating whether insertion happened.

---

### A5. Erase-remove idiom

**Output: `1 3 4 5`**

`std::remove(v.begin(), v.end(), 2)` does **not** shrink the container. It **moves** all non-`2` elements to the front and returns an iterator to the new logical end. The vector still has the old **size** until `v.erase(...)` removes the trailing junk.

Steps:
1. `remove` → `[1, 3, 4, 5, ?, ?, ?]` (size still 7)
2. `erase(new_end, end)` → size becomes 4

Lesson: **remove + erase** is the standard way to delete all matching elements from a vector.

---

## Self-scoring

- 5/5: containers are solid — move to **Day 10 (algorithms & lambdas)**.
- 3–4: re-read insert/erase and iterator invalidation in `notes.md`.
- 0–2: re-run `examples/`, especially `08_insert_patterns.cpp` and `09_erase_patterns.cpp`.

Tell me your score and any concept you want me to deep-dive before Day 10.
