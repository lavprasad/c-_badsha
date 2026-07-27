"""Hinglish teaching snippets — parallel to teach.BANK (same order, same keys).

Code samples are reused from teach.BANK; only the prose is Hinglish.
"""
from __future__ import annotations

from teach import BANK

# One entry per BANK entry, SAME ORDER. Keys/code come from BANK.
HI: list[dict[str, str]] = [
    {  # fstream / file i/o
        "plain": "Files aapke program ke band hone ke baad bhi data rakhte hain. C++ me aap ek stream kholte ho (`ifstream` padhne ke liye, `ofstream` likhne ke liye), use `cin`/`cout` ki tarah use karte ho, aur RAII object ke marte hi use apne aap band kar deta hai.",
        "remember": "Padhne se pehle hamesha check karo ki file khuli bhi hai (`if (!in)`).",
        "mistake": "Open fail hona ignore kar dena aur garbage padhte rehna / kharab stream par infinite loop.",
    },
    {  # enums
        "plain": "Enum chhote se choices ke set ko naam deta hai. `enum class` prefer karo taaki naam scoped rahein (`Color::Red`) aur chupke se int na ban jaayein.",
        "remember": "`enum class` hi use karo, jab tak purane C-style unscoped enum ki asli zaroorat na ho.",
        "mistake": "Enum par switch karna par saare cases ya `default` cover na karna.",
    },
    {  # operator overloading
        "plain": "Operator overloading aapke types ko jaane-pehchane symbols (`+`, `==`, `<<`) use karne deta hai — jab matlab obvious ho. Agar symbol padhne wale ko chaunka de, to named function likho.",
        "remember": "Overload tabhi karo jab matlab built-in intuition se match kare.",
        "mistake": "Chalaak operators jo mehnga kaam chhupa dete hain ya chupke se mutate kar dete hain.",
    },
    {  # copy control
        "plain": "Agar aapki class koi resource own karti hai (heap memory, file handle), to aapko batana padega ki wo copy, move aur destroy kaise hoti hai — ya copying delete kar do. Agar kuch special own nahi karti to kuch mat likho (rule of zero) aur aise members use karo jo khud ko sambhal lete hain.",
        "remember": "Pehle rule of zero; agar destructor chahiye to copy/move dobara socho.",
        "mistake": "Raw pointer ki shallow copy — do objects ek hi memory `delete` kar dete hain.",
    },
    {  # const correctness
        "plain": "`const` ek vaada hai: 'main is naam ke through ise nahi badlunga.' Ye bugs compile time par pakadta hai aur intent document karta hai. Observers par aur sirf-padhne wale parameters par `const` lagao.",
        "remember": "Machine word se bade read-only parameters ke liye `const T&` prefer karo.",
        "mistake": "`const` hata kar aisi cheez badalna jise callers fixed maan rahe the.",
    },
    {  # namespaces
        "plain": "Namespaces naamon ko group karte hain taaki graphics ka `draw` cards ke `draw` se na takraaye. `std::` likh kar qualify karna behtar hai; headers me `using namespace std;` mat likho.",
        "remember": "Header me kabhi bhi `using namespace std;` mat daalo.",
        "mistake": "Sab kuch global namespace me daal dena aur chupchap overload clash jhelna.",
    },
    {  # headers / ODR
        "plain": "Headers interface declare karte hain; `.cpp` files bodies define karti hain. Include guards ek header ko ek translation unit me do baar paste hone se rokte hain. One Definition Rule kehta hai ki non-inline functions ki poore program me exactly ek definition hoti hai.",
        "remember": "Declarations header me, definitions `.cpp` me (templates exception hain).",
        "mistake": "Non-inline function header me define karna jo do `.cpp` include karti hain → multiple definition linker error.",
    },
    {  # vector / array
        "plain": "`std::vector` contiguous memory me badhne wala array hai — aapka default sequence container. `reserve` baar-baar reallocation se bachata hai. Reallocation vector ke andar ke pointers/iterators ko invalid kar deta hai.",
        "remember": "Final size pehle se pata ho to `reserve` call karo.",
        "mistake": "Aise `push_back` ke aar-paar vector ka pointer/iterator pakde rakhna jo realloc kar de.",
    },
    {  # string
        "plain": "`std::string` character data own karta hai aur zaroorat par badhta hai. Safety ke liye ise raw `char*` se behtar samjho. `string_view` ek non-owning khidki hai — read-only parameters ke liye badhiya, lekin agar string se zyada jeeya to khatarnak.",
        "remember": "Local temporary ko point karta `string_view` kabhi return mat karo.",
        "mistake": "`getline` aur `>>` mix karna bina bache hue newline ko clear kiye.",
    },
    {  # optional / variant / any
        "plain": "`optional<T>` ya to T hai ya khaali — magic sentinel values se behtar. `variant` kai types me se ek rakhta hai. Clarity ke liye inhe raw unions ya `void*` se upar rakho.",
        "remember": "`value()` call karne se pehle `optional` check karo (ya `value_or` use karo).",
        "mistake": "Khaali optional par `opt.value()` call karna → exception.",
    },
    {  # filesystem
        "plain": "`std::filesystem` portable paths aur directory walks deta hai. Folder jodne ke liye haath se string concatenation ki jagah `path` objects use karo.",
        "remember": "`exists` check karo / errors handle karo — disks fail hote hain.",
        "mistake": "Har OS par `/` separator maan lena, bina `path` use kiye.",
    },
    {  # lambda
        "plain": "Lambda ek chhota bina-naam ka function object hai. `[=]` value se ya `[&]` reference se capture — dhyan se, kyunki reference wale locals lambda se zyada jeene chahiye.",
        "remember": "Locals ko reference se capture karke lambda ko upar return mat karo.",
        "mistake": "Stack frame khatam hone ke baad dangling captures.",
    },
    {  # iterators
        "plain": "Iterators container ke andar advanced pointers jaise hain. Algorithms `[begin, end)` half-open range lete hain. Ye jaano ki insert/erase inhe kab invalid karte hain.",
        "remember": "Erase ke baad wahi iterator use karo jo `erase` return karta hai.",
        "mistake": "Invalid ho chuke iterator ko increment karna → undefined behaviour.",
    },
    {  # algorithms
        "plain": "STL algorithms iterator ranges ke upar verbs hain. Jab intent match kare (`find`, `sort`, `transform`) to haath se likhe loops se inhe upar rakho. Erase-remove idiom sequence container se value/predicate se elements hatata hai.",
        "remember": "`remove` sirf elements khiskata hai — `erase` phir bhi karna padta hai.",
        "mistake": "`std::remove` call karna aur container ka `erase` bhool jaana.",
    },
    {  # map / unordered_map
        "plain": "`map` keys ko sorted rakhta hai (tree); `unordered_map` hash karta hai aur average O(1) lookup deta hai. Order chahiye to sorted chuno; speed chahiye aur acha hash hai to hash chuno.",
        "remember": "`operator[]` key na mile to default value insert kar deta hai.",
        "mistake": "Sirf lookup ke liye `[]` use karna — missing key error ho to `find` / `at` behtar hai.",
    },
    {  # smart pointers
        "plain": "`unique_ptr` exclusive ownership hai — sasta aur saaf. `shared_ptr` reference count ke saath ownership baantta hai. Jab tak shared lifetime ki sach me zaroorat na ho, `unique_ptr` hi use karo.",
        "remember": "`shared_ptr` ke cycles `weak_ptr` se todo.",
        "mistake": "Ek hi raw pointer se do `shared_ptr` banana → double free.",
    },
    {  # move semantics
        "plain": "Move deep-copy ki jagah us object se resources chura leta hai jiska kaam khatam ho chuka hai. `std::move` sirf ek cast hai jo churana allow karta hai; khud se move nahi karta.",
        "remember": "`std::move(x)` ke baad `x` me sirf assign karo ya use destroy karo — value mat padho.",
        "mistake": "Moved-from object ko aise use karna jaise usme purana data ab bhi ho.",
    },
    {  # exceptions
        "plain": "Exceptions happy path ko failure se alag karte hain. Jab function apna kaam na kar sake to throw karo; wahan catch karo jahan recover ya report ho sake. Unwinding ke dauraan bhi RAII cleanup karta hai.",
        "remember": "`const` reference se catch karo, value se nahi.",
        "mistake": "Raw pointers throw karna ya value se catch karna (slicing).",
    },
    {  # virtual / polymorphism
        "plain": "Virtual functions base pointer/reference ke through derived implementation call karne dete hain. Abstract classes (pure virtuals) interfaces banate hain. Polymorphic base ko hamesha virtual destructor do.",
        "remember": "`override` likho taaki signature ki galti compile time par pakdi jaaye.",
        "mistake": "Derived object ko non-virtual base destructor ke through delete karna.",
    },
    {  # inheritance vs composition
        "plain": "Inheritance 'is-a' model karta hai jab derived type base ki jagah le sake. Sirf implementation reuse karna ho to composition ('has-a') behtar hai.",
        "remember": "Gehre inheritance trees fragile ho jaate hain — shallow design rakho.",
        "mistake": "Sirf code reuse ke liye inherit karna jabki member object kaafi tha.",
    },
    {  # threads
        "plain": "Threads code ko saath-saath chalate hain. Shared mutable data ko mutex (ya atomics) chahiye. RAII locks (`lock_guard`) prefer karo taaki exception par bhi unlock ho jaaye.",
        "remember": "Non-atomic shared data par data race undefined behaviour hai.",
        "mistake": "Alag threads me do mutex ulte order me lock karna → deadlock.",
    },
    {  # chrono
        "plain": "`std::chrono` clocks aur durations se time naapta hai. Beeta hua time naapne ke liye `steady_clock`; wall-clock dates ke liye `system_clock`.",
        "remember": "`steady_clock` kabhi peeche nahi jaata — benchmarks ke liye badhiya.",
        "mistake": "Elapsed time ke liye `system_clock` use karna aur daylight-saving me phas jaana.",
    },
    {  # random
        "plain": "Serious kaam ke liye `rand()` mat use karo. `<random>` use karo: ek engine (`mt19937`) aur ek distribution. Reproducibility chahiye to seed dhyan se do.",
        "remember": "Engine ek baar banao aur reuse karo — har call par re-seed mat karo.",
        "mistake": "Har roll par `time(nullptr)` se seed karna → correlated results.",
    },
    {  # bits
        "plain": "Bit tricks ek integer ke andar alag-alag flags set, clear aur test karte hain. Shift-heavy code me unsigned types prefer karo. `std::bitset` fixed-width bit sets ko padhne layak banata hai.",
        "remember": "Signed ints par sign bit tak ya uske aage shift karna UB ho sakta hai.",
        "mistake": "Bitmasks ke liye signed `int` use karna aur sign bit me shift kar dena.",
    },
    {  # floating point
        "plain": "Floating-point numbers reals ka approximation hain. `==` se barabari aksar galat hoti hai; apne scale ke hisaab se tolerance se compare karo. NaN aur accumulation error par nazar rakho.",
        "remember": "`double` counters se loop chalakar exact sums ki umeed mat karo.",
        "mistake": "`if (f == 0.1)` jaise checks jo representation ki wajah se fail hote hain.",
    },
    {  # templates
        "plain": "Templates har type ke liye code generate karte hain. Ye errors ko compile time par le aate hain aur runtime virtual dispatch hata dete hain. Inhe padhne layak rakho; jahan ho sake parameters constrain karo.",
        "remember": "Templates aksar headers me rehte hain taaki har TU instantiate kar sake.",
        "mistake": "Template ki definition sirf `.cpp` me rakhna aur phir linker error par hairan hona.",
    },
    {  # modern C++20+
        "plain": "Modern C++ (20+) safer views (`span`, ranges), saaf comparisons (`<=>`) aur behtar formatting deta hai. Jab toolchain support kare tabhi use karo; warna pehle sikhe C++17 patterns par tike raho.",
        "remember": "In par bharosa karne se pehle apne compiler ka C++20/23 support check karo.",
        "mistake": "Ye maan lena ki class/CI ki har machine par poora C++20 library support hai.",
    },
    {  # sockets
        "plain": "Sockets network bytes ke liye OS endpoints hain. TCP reliable stream deta hai; messages ki framing phir bhi aapko khud karni padti hai. Return codes hamesha check karo aur partial read/write handle karo.",
        "remember": "Network data bytes hai; integers ko endian helpers se convert karo.",
        "mistake": "Ye maan lena ki ek `recv` poora ek application message deta hai.",
    },
    {  # big-o
        "plain": "Big-O batata hai ki input size ke saath cost kaise badhti hai. n bada hone par chalaak O(n²) ke bajaye saaf O(n log n) algorithm chuno. Jab constants matter karein tab naapo.",
        "remember": "Pehle asymptotics; micro-optimisations baad me profiler ke saath.",
        "mistake": "Cold path optimise karna aur O(n²) hot loop ko waise hi chhod dena.",
    },
    {  # binary search / two pointers
        "plain": "Ye patterns nested loops ko linear ya logarithmic pass me badal dete hain. Binary search ke liye monotonic predicate chahiye. Two pointers / sliding window ke liye saaf invariant chahiye.",
        "remember": "Loop likhne se pehle invariant likh kar rakho.",
        "mistake": "Binary search ke bounds (`lo`/`hi`) me off-by-one galti.",
    },
    {  # graphs
        "plain": "Graphs matlab nodes aur edges. Unweighted graph me BFS shortest path deta hai; Dijkstra non-negative weights sambhalta hai. Union-Find connected components efficiently track karta hai.",
        "remember": "Graph chhota aur dense na ho to adjacency lists chuno.",
        "mistake": "Nodes ko visited mark karna bhool jaana → infinite loop.",
    },
    {  # dp / greedy / backtracking
        "plain": "DP overlapping subproblems ko ek baar solve karke answers store karta hai. Greedy locally best choice leta hai jab proof allow kare. Backtracking choices explore karke unhe undo karta hai.",
        "remember": "Code likhne se pehle state aur transition shabdon me define karo.",
        "mistake": "Bina saaf state key ke memoise karna → galat answers.",
    },
    {  # projects
        "plain": "Projects skills ko jodte hain: saaf requirements, chhote modules, tests aur imaandaar docs. Ek chhoti vertical slice se shuru karo jo end-to-end chale, phir features mota karo.",
        "remember": "Edge cases chamkane se pehle ek chalne wala subset ship karo.",
        "mistake": "Hafton tak scaffolding banana jisme kuch chalta hi na ho.",
    },
    {  # assert / sanitizers / UB
        "plain": "Assertions invariants document karte hain. `assert` debug builds me runtime check hai; `static_assert` compile time par fail hota hai. Sanitizers bahut saare memory aur UB bugs jaldi pakad lete hain.",
        "remember": "Asserts user-facing error handling ke liye nahi hain.",
        "mistake": "Zaroori validation sirf `assert` me daalna — release (`NDEBUG`) me wo gayab ho jaata hai.",
    },
    {  # new / delete / heap
        "plain": "Heap tab tak jeeta hai jab tak aap use release na karo. Raw `new`/`delete` ki jagah smart pointers aur containers prefer karo. Agar raw ownership hi chahiye to har `new` ke liye har path par exactly ek matching `delete` ho.",
        "remember": "`new` ke saath `delete`, aur `new[]` ke saath `delete[]`.",
        "mistake": "`new[]` se aayi array memory par `delete` use karna.",
    },
    {  # class basics
        "plain": "Class data ko un operations ke saath bundle karti hai jo use valid rakhte hain. Constructors invariants banate hain; destructors resources chhodte hain. `struct` default public hai, `class` default private — bas yahi mukhya farak hai.",
        "remember": "Invariants matter karte hain to data private rakho; operations expose karo.",
        "mistake": "Public data fields jo callers ko class invariants todne dete hain.",
    },
]

assert len(HI) == len(BANK), f"HI has {len(HI)} entries, BANK has {len(BANK)}"


def teach_hi(concept: str, theme: str = "") -> dict[str, str]:
    """Hinglish version of teach.teach() — same matching, Hinglish prose."""
    blob = f"{concept} {theme}".lower()
    for entry, hi in zip(BANK, HI):
        for key in entry["keys"]:
            if key.lower() in blob:
                return {"code": entry["code"], **hi}
    return {
        "plain": (
            f"Aaj ka idea — **{concept}** — {theme or 'modern C++'} ke bade theme ke andar aata hai. "
            f"Ise ek tool ki tarah padho: ye kaam kya karta hai, kaunse rules enforce karta hai, "
            f"aur un rules ko ignore karne par kya tootta hai?"
        ),
        "code": (
            f'// Explore: {concept}\n'
            f'#include <iostream>\n'
            f'int main() {{\n'
            f'  std::cout << "practice: {concept}\\n";\n'
            f'  return 0;\n'
            f'}}'
        ),
        "remember": f"`{concept}` use karne wala code likhne se pehle ek invariant bolo.",
        "mistake": f"`{concept}` ko copy-paste se use karna bina jaane ki wo kya own karta hai ya kab valid hai.",
    }
