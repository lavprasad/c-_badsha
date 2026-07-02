#include <iostream>

int main()
{
    // int day = 3;

    // switch(day) {
    //     case 1 :
    //         std::cout << "Monday\n";
    //     case 2:
    //         std::cout << "Tuesday\n";
    //     case 3:
    //         std::cout << "Wednesday\n";

    //     case 4:
    //         std::cout << "Thurday\n";
    //         break;
    //     case 5:
    //         std::cout << "Friday\n";
    //     // case 6:
    //     //     std::cout << "Saturday\n"
    //     // case 7:
    //     //     std::cout << "Sunday\n"
    //     default:
    //         std::cout << "Weekend or invalid\n";
    //         break;
    // }

    // for loop 3

    // std::cout << "count 1 to 10\n";
    // for (int i = 1; i <= 10; ++i)
    // {
    //     std::cout << i << ' ';
    // }
    // std::cout << '\n';

    // std::cout << "sum 1 to 10\n";
    // int sum = 0;
    // for (int n = 1; n <= 10; ++n)
    // {
    //     sum += n;
    // }
    // std::cout << sum << '\n';

    // while loop 4
    // int n = 100;
    // int steps = 0;

    // while (n > 1)
    // {
    //     n /= 2;
    //     ++steps;
    // }

    // std::cout << "Halving 100 until <= 1 took " << steps << "steps\n";
    // std::cout << "Final value " << n << '\n';

    // do while loop 6
    // int count = 0;

    // do
    // {
    //     std::cout << "Iteration " << count << '\n';
    //     ++count;
    // }

    // while (count < 3);

    // 7 break and continue

    // std::cout << "Odd numbers from 1 to 10\n";

    // for (int i = 1; i <= 10; ++i)
    // {
    //     if (i % 2 == 0)
    //     {
    //         continue;
    //     }
    //     std::cout << i << '\n';
    // }

    // std::cout << "\n";
    // std::cout << "if multipile of 7 then break\n";
    // for (int k = 51;; ++k)
    // {
    //     if (k % 7 == 0)
    //     {
    //         std::cout << k << '\n';
    //         break;
    //     }
    // }

    // 8 nested loop

    // int size = 5;

    // std::cout << "Multiplication table 1 to " << size << ": \n";
    // for (int row = 1; row <= size; ++row)
    // {
    //     for (int col = 1; col <= size; ++col)
    //     {
    //         std::cout << col * row << "\t";
    //     }
    //     std::cout << '\n';
    // }

    // scope 9

    // int outer = 10;

    // if (outer > 0)
    // {
    //     int inner = 20;
    //     std::cout << "Inside if: outer = " << outer << " , inner = " << inner << '\n';
    // }

    // for (int i = 0; i < 3; ++i)
    // {
    //     int doubled = i * i;
    //     std::cout << "i = " << i << " , doubled is " << doubled << '\n';
    // }

    // std::cout << "outter is " << outer << '\n';

    // Pitfall 10

    // int x = 10;

    // if (x > 0)
    //     if (x < 10)
    //         std::cout << "x is between 1 to 10\n";
    //     else
    //         std::cout << "this else is inner\n";

    // char grade = 'B';
    // switch (grade)
    // {
    // case 'A':
    // case 'B':
    //     std::cout << " you got B\n";
    //     break;
    // }

    // pitfall 3
    // for (int i = 3; i >= 0; --i)
    // {
    //     std::cout << i << '\n';
    // }


    // Pitfall 1: dangling else — always use braces
    // int x = 5;
    // if (x > 0)
    //     if (x < 10)
    //         std::cout << "x is between 0 and 10\n";
    // else
    //     std::cout << "This else binds to the INNER if, not the outer one\n";

    // // Pitfall 2: switch fall-through without break
    // char grade = 'B';
    // switch (grade) {
    //     case 'A':
    //     case 'B':
    //         std::cout << "Good grade (A or B)\n";
    //         break;   // without break after case 'A', we'd fall through here too
    //     default:
    //         std::cout << "Other grade\n";
    //         break;
    // }

    // Pitfall 3: use int (not unsigned) when counting down to zero
    std::cout << "Safe countdown with int:\n";
    for (signed int i = 0; i >= 0; --i) {
        std::cout << i << ' ';
        // break;
    }
    
    std::cout << '\n';

    return 0;
}