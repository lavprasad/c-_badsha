# Day 130 -- if constexpr & fold expressions

Aaj ka goal: **if constexpr & fold expressions** ko aasan Hinglish me samajhna, har idea ka chhota code sample dekhna, phir `examples/` me practice karna.

Is din ko padhne ka tarika:
1. Har concept ka **Aasan Bhasha** section padho.
2. Code sample par nazar daalo -- pehle predict karo ki output kya aayega.
3. `examples/` me us concept ki file chalao.
4. Uske baad hi `questions.md` kholo.

| # | Concept |
|--:|---------|
| 1 | if constexpr branches |
| 2 | Discarded statements |
| 3 | Fold expressions |
| 4 | Unary/binary folds |
| 5 | Printing packs |
| 6 | Summing packs |
| 7 | Logical folds |
| 8 | Comma folds |
| 9 | Pack indexing idea |
| 10 | A print_all utility |

---

## 1. if constexpr branches

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

## 2. Discarded statements

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

## 3. Fold expressions

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

Practice: `examples/03_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 4. Unary/binary folds

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

## 5. Printing packs

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

## 6. Summing packs

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

## 7. Logical folds

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

## 8. Comma folds

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

## 9. Pack indexing idea

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

## 10. A print_all utility

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

## Day 130 ke baad aapko ye aana chahiye

- `if constexpr & fold expressions` ko bina notes dekhe kisi dost ko samjha sakna.
- Saare 10 examples `-std=c++17 -Wall -Wextra` ke saath compile aur run karna (naye flags sirf tab jab din ko C++20+ chahiye).
- `answers.md` dekhne se pehle `questions.md` ke 5 sawaal answer karna.
- Ek chhota extra program likhna jo aaj ke kam se kam 3 concepts jodta ho.

Ya is din ko **Badsha hub** me kholo (`python3 hub/server.py`) aur Learn / Practice / Quiz tabs use karo.
