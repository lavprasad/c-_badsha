# Day 166 -- Greedy algorithms

Aaj ka goal: **Greedy algorithms** ko aasan Hinglish me samajhna, har idea ka chhota code sample dekhna, phir `examples/` me practice karna.

Is din ko padhne ka tarika:
1. Har concept ka **Aasan Bhasha** section padho.
2. Code sample par nazar daalo -- pehle predict karo ki output kya aayega.
3. `examples/` me us concept ki file chalao.
4. Uske baad hi `questions.md` kholo.

| # | Concept |
|--:|---------|
| 1 | Exchange argument idea |
| 2 | Interval scheduling |
| 3 | Huffman idea |
| 4 | Fractional knapsack |
| 5 | When greedy fails |
| 6 | Proof sketch habit |
| 7 | Sorting as preprocess |
| 8 | Priority greedy |
| 9 | Counterexamples |
| 10 | Practice set G |

---

## 1. Exchange argument idea

### Aasan Bhasha

STL algorithms iterator ranges ke upar verbs hain. Jab intent match kare (`find`, `sort`, `transform`) to haath se likhe loops se inhe upar rakho. Erase-remove idiom sequence container se value/predicate se elements hatata hai.

### Chhota code

```cpp
v.erase(std::remove(v.begin(), v.end(), 0), v.end());
std::sort(v.begin(), v.end());
```

- **Yaad rakho:** `remove` sirf elements khiskata hai — `erase` phir bhi karna padta hai.
- **Aam galti:** `std::remove` call karna aur container ka `erase` bhool jaana.

Practice: `examples/01_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 2. Interval scheduling

### Aasan Bhasha

STL algorithms iterator ranges ke upar verbs hain. Jab intent match kare (`find`, `sort`, `transform`) to haath se likhe loops se inhe upar rakho. Erase-remove idiom sequence container se value/predicate se elements hatata hai.

### Chhota code

```cpp
v.erase(std::remove(v.begin(), v.end(), 0), v.end());
std::sort(v.begin(), v.end());
```

- **Yaad rakho:** `remove` sirf elements khiskata hai — `erase` phir bhi karna padta hai.
- **Aam galti:** `std::remove` call karna aur container ka `erase` bhool jaana.

Practice: `examples/02_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 3. Huffman idea

### Aasan Bhasha

STL algorithms iterator ranges ke upar verbs hain. Jab intent match kare (`find`, `sort`, `transform`) to haath se likhe loops se inhe upar rakho. Erase-remove idiom sequence container se value/predicate se elements hatata hai.

### Chhota code

```cpp
v.erase(std::remove(v.begin(), v.end(), 0), v.end());
std::sort(v.begin(), v.end());
```

- **Yaad rakho:** `remove` sirf elements khiskata hai — `erase` phir bhi karna padta hai.
- **Aam galti:** `std::remove` call karna aur container ka `erase` bhool jaana.

Practice: `examples/03_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 4. Fractional knapsack

### Aasan Bhasha

STL algorithms iterator ranges ke upar verbs hain. Jab intent match kare (`find`, `sort`, `transform`) to haath se likhe loops se inhe upar rakho. Erase-remove idiom sequence container se value/predicate se elements hatata hai.

### Chhota code

```cpp
v.erase(std::remove(v.begin(), v.end(), 0), v.end());
std::sort(v.begin(), v.end());
```

- **Yaad rakho:** `remove` sirf elements khiskata hai — `erase` phir bhi karna padta hai.
- **Aam galti:** `std::remove` call karna aur container ka `erase` bhool jaana.

Practice: `examples/04_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 5. When greedy fails

### Aasan Bhasha

STL algorithms iterator ranges ke upar verbs hain. Jab intent match kare (`find`, `sort`, `transform`) to haath se likhe loops se inhe upar rakho. Erase-remove idiom sequence container se value/predicate se elements hatata hai.

### Chhota code

```cpp
v.erase(std::remove(v.begin(), v.end(), 0), v.end());
std::sort(v.begin(), v.end());
```

- **Yaad rakho:** `remove` sirf elements khiskata hai — `erase` phir bhi karna padta hai.
- **Aam galti:** `std::remove` call karna aur container ka `erase` bhool jaana.

Practice: `examples/05_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 6. Proof sketch habit

### Aasan Bhasha

STL algorithms iterator ranges ke upar verbs hain. Jab intent match kare (`find`, `sort`, `transform`) to haath se likhe loops se inhe upar rakho. Erase-remove idiom sequence container se value/predicate se elements hatata hai.

### Chhota code

```cpp
v.erase(std::remove(v.begin(), v.end(), 0), v.end());
std::sort(v.begin(), v.end());
```

- **Yaad rakho:** `remove` sirf elements khiskata hai — `erase` phir bhi karna padta hai.
- **Aam galti:** `std::remove` call karna aur container ka `erase` bhool jaana.

Practice: `examples/06_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 7. Sorting as preprocess

### Aasan Bhasha

STL algorithms iterator ranges ke upar verbs hain. Jab intent match kare (`find`, `sort`, `transform`) to haath se likhe loops se inhe upar rakho. Erase-remove idiom sequence container se value/predicate se elements hatata hai.

### Chhota code

```cpp
v.erase(std::remove(v.begin(), v.end(), 0), v.end());
std::sort(v.begin(), v.end());
```

- **Yaad rakho:** `remove` sirf elements khiskata hai — `erase` phir bhi karna padta hai.
- **Aam galti:** `std::remove` call karna aur container ka `erase` bhool jaana.

Practice: `examples/07_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 8. Priority greedy

### Aasan Bhasha

STL algorithms iterator ranges ke upar verbs hain. Jab intent match kare (`find`, `sort`, `transform`) to haath se likhe loops se inhe upar rakho. Erase-remove idiom sequence container se value/predicate se elements hatata hai.

### Chhota code

```cpp
v.erase(std::remove(v.begin(), v.end(), 0), v.end());
std::sort(v.begin(), v.end());
```

- **Yaad rakho:** `remove` sirf elements khiskata hai — `erase` phir bhi karna padta hai.
- **Aam galti:** `std::remove` call karna aur container ka `erase` bhool jaana.

Practice: `examples/08_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 9. Counterexamples

### Aasan Bhasha

STL algorithms iterator ranges ke upar verbs hain. Jab intent match kare (`find`, `sort`, `transform`) to haath se likhe loops se inhe upar rakho. Erase-remove idiom sequence container se value/predicate se elements hatata hai.

### Chhota code

```cpp
v.erase(std::remove(v.begin(), v.end(), 0), v.end());
std::sort(v.begin(), v.end());
```

- **Yaad rakho:** `remove` sirf elements khiskata hai — `erase` phir bhi karna padta hai.
- **Aam galti:** `std::remove` call karna aur container ka `erase` bhool jaana.

Practice: `examples/09_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 10. Practice set G

### Aasan Bhasha

STL algorithms iterator ranges ke upar verbs hain. Jab intent match kare (`find`, `sort`, `transform`) to haath se likhe loops se inhe upar rakho. Erase-remove idiom sequence container se value/predicate se elements hatata hai.

### Chhota code

```cpp
v.erase(std::remove(v.begin(), v.end(), 0), v.end());
std::sort(v.begin(), v.end());
```

- **Yaad rakho:** `remove` sirf elements khiskata hai — `erase` phir bhi karna padta hai.
- **Aam galti:** `std::remove` call karna aur container ka `erase` bhool jaana.

Practice: `examples/10_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

---

## Day 166 ke baad aapko ye aana chahiye

- `Greedy algorithms` ko bina notes dekhe kisi dost ko samjha sakna.
- Saare 10 examples `-std=c++17 -Wall -Wextra` ke saath compile aur run karna (naye flags sirf tab jab din ko C++20+ chahiye).
- `answers.md` dekhne se pehle `questions.md` ke 5 sawaal answer karna.
- Ek chhota extra program likhna jo aaj ke kam se kam 3 concepts jodta ho.

Ya is din ko **Badsha hub** me kholo (`python3 hub/server.py`) aur Learn / Practice / Quiz tabs use karo.
