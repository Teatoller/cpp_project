/*
** Read the & in these declarations as reference. 
** Thus, read the first declaration as "r is an 
** integer reference initialized to i" and read 
** the second declaration as "s is a double 
** reference initialized to d." Following example 
** makes use of references on int and double:
*/
#include <iostream>
using namespace std;
int main()
{
    // declare simple variables
    int i;
    double d;
    // declare reference variables
    int &r = i;
    double &s = d;
    i = 5;
    cout << "Value of i : " << i << endl;
    cout << "Value of i reference : " << r << endl;
    d = 11.7;
    cout << "Value of d : " << d << endl;
    cout << "Value of d reference : " << s << endl;
    return 0;
}