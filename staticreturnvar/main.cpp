/*
** C++ does not advocate to return the address
** of a local variable to outside of the function 
** so you would have to define the local variable 
** as staticvariable.
*/
#include <iostream>
#include <ctime>
using namespace std;

int *getRandom();

// main function to call above defined function.
int main()
{
    // a pointer to an int.
    int *p;
    p = getRandom();
    for (int i = 0; i < 10; i++)
    {
        cout << "*(p + " << i << ") : ";
        cout << *(p + i) << endl;
    }
    return 0;
}

// function to generate and retrun random numbers.
int *getRandom()
{
    static int r[10];

    // set the seed
    srand((unsigned)time(NULL));
    for (int i = 0; i < 10; ++i)
    {
        r[i] = rand();
        cout << r[i] << endl;
    }
    return r;
}