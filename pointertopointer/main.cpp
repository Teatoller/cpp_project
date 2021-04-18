#include <iostream>
using namespace std;
int main()
{
    int var;
    int *ptr;
    //variable that is a pointer to a pointer must be declared as such.
    //This is done by placing an additional asterisk in front of its name
    int **pptr;
    var = 3000;
    // take the address of var
    ptr = &var;
    // take the address of ptr using address of operator &
    pptr = &ptr;
    // take the value using pptr
    cout << "Value of var :" << var << endl;
    cout << "Value available at *ptr :" << *ptr << endl;
    cout << "Value available at **pptr :" << **pptr << endl;
    return 0;
}