# Day 129 -- constexpr programming

Aaj ka goal: **constexpr programming** ko aasan Hinglish me samajhna, har idea ka chhota code sample dekhna, phir `examples/` me practice karna.

Is din ko padhne ka tarika:
1. Har concept ka **Aasan Bhasha** section padho.
2. Code sample par nazar daalo -- pehle predict karo ki output kya aayega.
3. `examples/` me us concept ki file chalao.
4. Uske baad hi `questions.md` kholo.

| # | Concept |
|--:|---------|
| 1 | What can be constexpr |
| 2 | Containers in constexpr (limits by standard) |
| 3 | Algorithms at compile time |
| 4 | Diagnostic static_assert |
| 5 | Lookup tables |
| 6 | Parsing at compile time |
| 7 | Performance of constexpr |
| 8 | if constexpr |
| 9 | Testing constexpr |
| 10 | Compile-time CRC sketch |

---

## 1. What can be constexpr

### Aasan Bhasha

Templates har type ke liye code generate karte hain. Ye errors ko compile time par le aate hain aur runtime virtual dispatch hata dete hain. Inhe padhne layak rakho; jahan ho sake parameters constrain karo.

### Chhota code

```cpp
template <typename T>
T clamp_pos(T x) {
  return x < T{0} ? T{0} : x;
}
```

- **Yaad rakho:** Templates aksar headers me rehte hain taaki har TU instantiate kar sake.
- **Aam galti:** Template ki definition sirf `.cpp` me rakhna aur phir linker error par hairan hona.

Practice: `examples/01_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 2. Containers in constexpr (limits by standard)

### Aasan Bhasha

Templates har type ke liye code generate karte hain. Ye errors ko compile time par le aate hain aur runtime virtual dispatch hata dete hain. Inhe padhne layak rakho; jahan ho sake parameters constrain karo.

### Chhota code

```cpp
template <typename T>
T clamp_pos(T x) {
  return x < T{0} ? T{0} : x;
}
```

- **Yaad rakho:** Templates aksar headers me rehte hain taaki har TU instantiate kar sake.
- **Aam galti:** Template ki definition sirf `.cpp` me rakhna aur phir linker error par hairan hona.

Practice: `examples/02_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 3. Algorithms at compile time

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

## 4. Diagnostic static_assert

### Aasan Bhasha

Templates har type ke liye code generate karte hain. Ye errors ko compile time par le aate hain aur runtime virtual dispatch hata dete hain. Inhe padhne layak rakho; jahan ho sake parameters constrain karo.

### Chhota code

```cpp
template <typename T>
T clamp_pos(T x) {
  return x < T{0} ? T{0} : x;
}
```

- **Yaad rakho:** Templates aksar headers me rehte hain taaki har TU instantiate kar sake.
- **Aam galti:** Template ki definition sirf `.cpp` me rakhna aur phir linker error par hairan hona.

Practice: `examples/04_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 5. Lookup tables

### Aasan Bhasha

Templates har type ke liye code generate karte hain. Ye errors ko compile time par le aate hain aur runtime virtual dispatch hata dete hain. Inhe padhne layak rakho; jahan ho sake parameters constrain karo.

### Chhota code

```cpp
template <typename T>
T clamp_pos(T x) {
  return x < T{0} ? T{0} : x;
}
```

- **Yaad rakho:** Templates aksar headers me rehte hain taaki har TU instantiate kar sake.
- **Aam galti:** Template ki definition sirf `.cpp` me rakhna aur phir linker error par hairan hona.

Practice: `examples/05_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 6. Parsing at compile time

### Aasan Bhasha

Templates har type ke liye code generate karte hain. Ye errors ko compile time par le aate hain aur runtime virtual dispatch hata dete hain. Inhe padhne layak rakho; jahan ho sake parameters constrain karo.

### Chhota code

```cpp
template <typename T>
T clamp_pos(T x) {
  return x < T{0} ? T{0} : x;
}
```

- **Yaad rakho:** Templates aksar headers me rehte hain taaki har TU instantiate kar sake.
- **Aam galti:** Template ki definition sirf `.cpp` me rakhna aur phir linker error par hairan hona.

Practice: `examples/06_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 7. Performance of constexpr

### Aasan Bhasha

Templates har type ke liye code generate karte hain. Ye errors ko compile time par le aate hain aur runtime virtual dispatch hata dete hain. Inhe padhne layak rakho; jahan ho sake parameters constrain karo.

### Chhota code

```cpp
template <typename T>
T clamp_pos(T x) {
  return x < T{0} ? T{0} : x;
}
```

- **Yaad rakho:** Templates aksar headers me rehte hain taaki har TU instantiate kar sake.
- **Aam galti:** Template ki definition sirf `.cpp` me rakhna aur phir linker error par hairan hona.

Practice: `examples/07_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 8. if constexpr

### Aasan Bhasha

Templates har type ke liye code generate karte hain. Ye errors ko compile time par le aate hain aur runtime virtual dispatch hata dete hain. Inhe padhne layak rakho; jahan ho sake parameters constrain karo.

### Chhota code

```cpp
template <typename T>
T clamp_pos(T x) {
  return x < T{0} ? T{0} : x;
}
```

- **Yaad rakho:** Templates aksar headers me rehte hain taaki har TU instantiate kar sake.
- **Aam galti:** Template ki definition sirf `.cpp` me rakhna aur phir linker error par hairan hona.

Practice: `examples/08_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 9. Testing constexpr

### Aasan Bhasha

Templates har type ke liye code generate karte hain. Ye errors ko compile time par le aate hain aur runtime virtual dispatch hata dete hain. Inhe padhne layak rakho; jahan ho sake parameters constrain karo.

### Chhota code

```cpp
template <typename T>
T clamp_pos(T x) {
  return x < T{0} ? T{0} : x;
}
```

- **Yaad rakho:** Templates aksar headers me rehte hain taaki har TU instantiate kar sake.
- **Aam galti:** Template ki definition sirf `.cpp` me rakhna aur phir linker error par hairan hona.

Practice: `examples/09_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 10. Compile-time CRC sketch

### Aasan Bhasha

Templates har type ke liye code generate karte hain. Ye errors ko compile time par le aate hain aur runtime virtual dispatch hata dete hain. Inhe padhne layak rakho; jahan ho sake parameters constrain karo.

### Chhota code

```cpp
template <typename T>
T clamp_pos(T x) {
  return x < T{0} ? T{0} : x;
}
```

- **Yaad rakho:** Templates aksar headers me rehte hain taaki har TU instantiate kar sake.
- **Aam galti:** Template ki definition sirf `.cpp` me rakhna aur phir linker error par hairan hona.

Practice: `examples/10_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

---

## Day 129 ke baad aapko ye aana chahiye

- `constexpr programming` ko bina notes dekhe kisi dost ko samjha sakna.
- Saare 10 examples `-std=c++17 -Wall -Wextra` ke saath compile aur run karna (naye flags sirf tab jab din ko C++20+ chahiye).
- `answers.md` dekhne se pehle `questions.md` ke 5 sawaal answer karna.
- Ek chhota extra program likhna jo aaj ke kam se kam 3 concepts jodta ho.

Ya is din ko **Badsha hub** me kholo (`python3 hub/server.py`) aur Learn / Practice / Quiz tabs use karo.
