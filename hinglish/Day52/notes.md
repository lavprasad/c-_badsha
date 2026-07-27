# Day 52 -- Inheritance design

Aaj ka goal: **Inheritance design** ko aasan Hinglish me samajhna, har idea ka chhota code sample dekhna, phir `examples/` me practice karna.

Is din ko padhne ka tarika:
1. Har concept ka **Aasan Bhasha** section padho.
2. Code sample par nazar daalo -- pehle predict karo ki output kya aayega.
3. `examples/` me us concept ki file chalao.
4. Uske baad hi `questions.md` kholo.

| # | Concept |
|--:|---------|
| 1 | is-a vs has-a |
| 2 | Public inheritance contracts |
| 3 | Protected members wisely |
| 4 | Private inheritance |
| 5 | Composition over inheritance |
| 6 | Fragile base class |
| 7 | Interface segregation idea |
| 8 | Liskov substitution intuition |
| 9 | Deep hierarchies smell |
| 10 | Refactoring to composition |

---

## 1. is-a vs has-a

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

## 2. Public inheritance contracts

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

## 3. Protected members wisely

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

Practice: `examples/03_*.cpp` kholo, output predict karo, ek line badlo, phir se predict karo.

## 4. Private inheritance

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

## 5. Composition over inheritance

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

## 6. Fragile base class

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

## 7. Interface segregation idea

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

## 8. Liskov substitution intuition

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

## 9. Deep hierarchies smell

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

## 10. Refactoring to composition

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

## Day 52 ke baad aapko ye aana chahiye

- `Inheritance design` ko bina notes dekhe kisi dost ko samjha sakna.
- Saare 10 examples `-std=c++17 -Wall -Wextra` ke saath compile aur run karna (naye flags sirf tab jab din ko C++20+ chahiye).
- `answers.md` dekhne se pehle `questions.md` ke 5 sawaal answer karna.
- Ek chhota extra program likhna jo aaj ke kam se kam 3 concepts jodta ho.

Ya is din ko **Badsha hub** me kholo (`python3 hub/server.py`) aur Learn / Practice / Quiz tabs use karo.
