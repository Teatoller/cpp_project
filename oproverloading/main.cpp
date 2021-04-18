/*
** We can overload operators in C++.
** In the example we will use operators to overload the '+' sign.
*/

#include <iostream>

using namespace std;

class Shape
{
private:
    int length; // Length of a box
    int width;

public:
    // Constructor definition
    Shape(int l = 2, int w = 2)
    {
        length = l;
        width = w;
    }

    double Area()
    {
        return length * width;
    }

    //The function that overloads the '+' sign
    int operator+(Shape shapeIn)
    {
        return Area() + shapeIn.Area();
    }
};

int main(void)
{
    Shape sh1(4, 4); // Declare shape1
    Shape sh2(2, 6); // Declare shape2

    //  Use the overloaded '+' sign
    int total = sh1 + sh2;
    cout << "\nsh1.Area() = " << sh1.Area();
    cout << "\nsh2.Area() = " << sh2.Area();
    cout << "\nTotal = " << total<<'\n';
    return 0;
}
