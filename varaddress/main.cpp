/*
** every variable is a memory location 
** and every memory location has its address 
** which can be accessed using ampersand (&) operator
** which denotes an address in memory.
*/

#include <iostream>
using namespace std;
int main()
{
    int var1;
    char var2[10];
    cout << "Address of var1 variable: ";
    cout << &var1 << endl;
    cout << "Address of var2 variable: ";
    cout << &var2 << endl;
    return 0;
}