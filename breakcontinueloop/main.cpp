/*Goal: understand the break and conitnue statements*/

#include "main.hpp"

int main()
{
    int a = 0;
    std::cout << &a << "\n"; //This will print the LOCATION of 'a' Pointers

    while (a < 5)
    {
        std::cout << "a = " << a << "\n";
        a++;
        if (a == 3)
            break;
    }
    std::cout << "The first statement after the first while loop\n\n";

    while (a < 15)
    {
        a++;
        if (a == 10)
        {
            std::cout << "\tWhen a=10, go back to the top of the loop";
            std::cout << "\n\tThis means a=10 is skipped.\n";
            continue;
        }
        std::cout << "After continue a = " << a << "\n";
    }
    return 0;
}