/*
** When you define a function, you can specify 
** a default value for each of the last
** parameters. This value will be used if the 
** corresponding argument is left blank when calling to the function.
*/
#include <iostream>
using namespace std;
int sum(int, int b=20);

int main()
{
    // local variable declaration:
    int a = 100;
    int b = 200;
    int result;
    // calling a function to add the values.
    result = sum(a, b);
    cout << "Total value is :" << result << endl;
    // calling a function again as follows.
    result = sum(a);
    cout << "Total value is :" << result << endl;
    return 0;
}

int sum(int a, int b)
{
    int result;
    result = a + b;
    return (result);
}