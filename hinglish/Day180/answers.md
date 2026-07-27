# Day 180 -- Answers (try karne ke BAAD padho)

Theme: **Packaging & distributing C++**

---

### A1. `Headers + libs` ke aas-paas aam bug

Zyadatar log koi invariant chhod dete hain (ownership, lifetime, const, complexity, ya error checking). Bachne ka tarika: invariant ko comment me likho, jahan ho sake RAII / strong types use karo, aur ek assert/self-check add karo.

---

### A2. `vcpkg/conan mindset` kab jeetta hai

Ise tab chuno jab problem ki constraints iski strengths se match karein (clarity, safety, performance, ya API fit). Tab avoid karo jab Day 01-11 ka koi simple tool hi kaam kar deta ho (YAGNI).

---

### A3. `Platform matrices` ka failure mode

Failures ko soch-samajh kar classify karo:
- **Compile** -- type/constraint mismatch
- **Link** -- missing definition / ODR
- **Runtime** -- logic / state bug
- **UB** -- lifetime, overflow, data race, invalid iterator

Stage pata hone se fix ka focus mil jaata hai.

---

### A4. `License headers` ka cost

Seedha-saada use aksar allocations, copies, locks ya O(n²) patterns chhupa leta hai. Aise algorithms/containers chuno jo access pattern se match karein; micro-optimise karne se pehle naapo.

---

### A5. Integration sketch

Ek solid answer ye naam leta hai:
1. resources ka ownership,
2. errors kaise saamne aate hain,
3. har operation ke baad kya sach rehta hai,
4. ek assert-based check se aap ise kaise test karoge.

---

## Khud ki scoring

- 5/5: strong -- **Day 181** par badho.
- 3-4: kamzor concept ka example dobara chalao aur wahi sawaal dobara answer karo.
- 0-2: concepts 1, 3, 5 ke `notes.md` sections dobara padho aur ek extra mini-program likho.

Apna score khud ko batao; jo abhi bhi dhundhla hai uska chhota note rakho.
