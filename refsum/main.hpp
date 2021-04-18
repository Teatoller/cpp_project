#include <iostream>
using namespace std;

void calculate(float input1, float input2, char operation, float &ans);
void printEquation(float input1, float input2, char operation, float result);

void calculate(float input1, float input2, char operation, float &ans)
{
    if (operation == '+')
    {
        ans = input1 + input2;
    }
    else if (operation == '*')
    {
        ans = input1 * input2;
    }
    else if (operation == '/')
    {
        ans = input1 / input2;
    }
    else if (operation == '-')
    {
        ans = input1 - input2;
    }
    else
    {
        cout << "Invalid operation"
             << "\n";
    }
}

void printEquation(float input1, float input2, char operation, float result)
{
    cout << input1 << "" << operation << "" << input2 << " = " << result << '\n';
}