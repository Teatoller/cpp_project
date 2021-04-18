
/*
** A pointer that is assigned NULL is called a null pointer.
** The NULL pointer is a constant with a value of zero 
** defined in several standard libraries, including iostream
*/

#include <iostream>
using namespace std;
int main()
{
    int
        *ptr = NULL;
    cout << "The value of ptr is " << ptr << endl;
    return 0;
}