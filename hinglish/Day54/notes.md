# Day 54 -- Multiple inheritance

Aaj ka goal: **Multiple inheritance** ko aasan Hinglish me samajhna, har idea ka chhota code sample dekhna, phir `examples/` me practice karna.

Is din ko padhne ka tarika:
1. Har concept ka **Aasan Bhasha** section padho.
2. Code sample par nazar daalo -- pehle predict karo ki output kya aayega.
3. `examples/` me us concept ki file chalao.
4. Uske baad hi `questions.md` kholo.

| # | Concept |
|--:|---------|
| 1 | Why MI exists |
| 2 | Ambiguity |
| 3 | Virtual base classes |
| 4 | Diamond problem |
| 5 | Interface MI |
| 6 | Layout intuition |
| 7 | When to avoid MI |
| 8 | Mixin idea |
| 9 | Casting across bases |
| 10 | A device+logger mix |

---

## 1. Why MI exists

### Aasan Bhasha

Inheritance 'is-a' model karta hai jab derived type base ki jagah le sake. Sirf implementation reuse karna ho to composition ('has-a') behtar hai.

### Chhota code

```cpp
struct Engine { void start(); };
struct Car {  // has-an Engine
  Engine engine;
  void start() { engine.start(); }
};
```

- **Yaad rakho:** Gehre inheritance trees fragile ho jaate hain — shallow design rakho.
- **Aam galti:** Sirf code reuse ke liye inherit karna jabki member object kaafi tha.

Practice: `examples/01_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 2. Ambiguity

### Aasan Bhasha

Inheritance 'is-a' model karta hai jab derived type base ki jagah le sake. Sirf implementation reuse karna ho to composition ('has-a') behtar hai.

### Chhota code

```cpp
struct Engine { void start(); };
struct Car {  // has-an Engine
  Engine engine;
  void start() { engine.start(); }
};
```

- **Yaad rakho:** Gehre inheritance trees fragile ho jaate hain — shallow design rakho.
- **Aam galti:** Sirf code reuse ke liye inherit karna jabki member object kaafi tha.

Practice: `examples/02_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 3. Virtual base classes

### Aasan Bhasha

Virtual functions base pointer/reference ke through derived implementation call karne dete hain. Abstract classes (pure virtuals) interfaces banate hain. Polymorphic base ko hamesha virtual destructor do.

### Chhota code

```cpp
struct Shape {
  virtual ~Shape() = default;
  virtual double area() const = 0;
};
struct Circle : Shape {
  double r;
  double area() const override { return 3.14 * r * r; }
};
```

- **Yaad rakho:** `override` likho taaki signature ki galti compile time par pakdi jaaye.
- **Aam galti:** Derived object ko non-virtual base destructor ke through delete karna.

Practice: `examples/03_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 4. Diamond problem

### Aasan Bhasha

Inheritance 'is-a' model karta hai jab derived type base ki jagah le sake. Sirf implementation reuse karna ho to composition ('has-a') behtar hai.

### Chhota code

```cpp
struct Engine { void start(); };
struct Car {  // has-an Engine
  Engine engine;
  void start() { engine.start(); }
};
```

- **Yaad rakho:** Gehre inheritance trees fragile ho jaate hain — shallow design rakho.
- **Aam galti:** Sirf code reuse ke liye inherit karna jabki member object kaafi tha.

Practice: `examples/04_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 5. Interface MI

### Aasan Bhasha

Inheritance 'is-a' model karta hai jab derived type base ki jagah le sake. Sirf implementation reuse karna ho to composition ('has-a') behtar hai.

### Chhota code

```cpp
struct Engine { void start(); };
struct Car {  // has-an Engine
  Engine engine;
  void start() { engine.start(); }
};
```

- **Yaad rakho:** Gehre inheritance trees fragile ho jaate hain — shallow design rakho.
- **Aam galti:** Sirf code reuse ke liye inherit karna jabki member object kaafi tha.

Practice: `examples/05_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 6. Layout intuition

### Aasan Bhasha

Inheritance 'is-a' model karta hai jab derived type base ki jagah le sake. Sirf implementation reuse karna ho to composition ('has-a') behtar hai.

### Chhota code

```cpp
struct Engine { void start(); };
struct Car {  // has-an Engine
  Engine engine;
  void start() { engine.start(); }
};
```

- **Yaad rakho:** Gehre inheritance trees fragile ho jaate hain — shallow design rakho.
- **Aam galti:** Sirf code reuse ke liye inherit karna jabki member object kaafi tha.

Practice: `examples/06_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 7. When to avoid MI

### Aasan Bhasha

Inheritance 'is-a' model karta hai jab derived type base ki jagah le sake. Sirf implementation reuse karna ho to composition ('has-a') behtar hai.

### Chhota code

```cpp
struct Engine { void start(); };
struct Car {  // has-an Engine
  Engine engine;
  void start() { engine.start(); }
};
```

- **Yaad rakho:** Gehre inheritance trees fragile ho jaate hain — shallow design rakho.
- **Aam galti:** Sirf code reuse ke liye inherit karna jabki member object kaafi tha.

Practice: `examples/07_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 8. Mixin idea

### Aasan Bhasha

Inheritance 'is-a' model karta hai jab derived type base ki jagah le sake. Sirf implementation reuse karna ho to composition ('has-a') behtar hai.

### Chhota code

```cpp
struct Engine { void start(); };
struct Car {  // has-an Engine
  Engine engine;
  void start() { engine.start(); }
};
```

- **Yaad rakho:** Gehre inheritance trees fragile ho jaate hain — shallow design rakho.
- **Aam galti:** Sirf code reuse ke liye inherit karna jabki member object kaafi tha.

Practice: `examples/08_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 9. Casting across bases

### Aasan Bhasha

Inheritance 'is-a' model karta hai jab derived type base ki jagah le sake. Sirf implementation reuse karna ho to composition ('has-a') behtar hai.

### Chhota code

```cpp
struct Engine { void start(); };
struct Car {  // has-an Engine
  Engine engine;
  void start() { engine.start(); }
};
```

- **Yaad rakho:** Gehre inheritance trees fragile ho jaate hain — shallow design rakho.
- **Aam galti:** Sirf code reuse ke liye inherit karna jabki member object kaafi tha.

Practice: `examples/09_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 10. A device+logger mix

### Aasan Bhasha

Inheritance 'is-a' model karta hai jab derived type base ki jagah le sake. Sirf implementation reuse karna ho to composition ('has-a') behtar hai.

### Chhota code

```cpp
struct Engine { void start(); };
struct Car {  // has-an Engine
  Engine engine;
  void start() { engine.start(); }
};
```

- **Yaad rakho:** Gehre inheritance trees fragile ho jaate hain — shallow design rakho.
- **Aam galti:** Sirf code reuse ke liye inherit karna jabki member object kaafi tha.

Practice: `examples/10_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

---

## Day 54 ke baad aapko ye aana chahiye

- `Multiple inheritance` ko bina notes dekhe kisi dost ko samjha sakna.
- Saare 10 examples `-std=c++17 -Wall -Wextra` ke saath compile aur run karna (naye flags sirf tab jab din ko C++20+ chahiye).
- `answers.md` dekhne se pehle `questions.md` ke 5 sawaal answer karna.
- Ek chhota extra program likhna jo aaj ke kam se kam 3 concepts jodta ho.

Ya is din ko **Badsha hub** me kholo (`python3 hub/server.py`) aur Learn / Practice / Quiz tabs use karo.
