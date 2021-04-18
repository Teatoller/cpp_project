#include <iostream>
using namespace std;

class Box
{
private:
    double width;

public:
    double length;
    void setWidth(double wid);
    double getWidth(void);
};

// Member functions definitions
double Box::getWidth(void)
{
    return width;
}

void Box::setWidth(double wid)
{
    width = wid;
}

// Main function for the program
int main()
{
    Box box;
    // set box length without member function
    double len;
    len= box.length = 10.0; // OK: len length is public
    cout << "Length of box : " << len << endl;
    // set box width without member function
    // box.width = 10.0; // Error: because width is private
    box.setWidth(10.0);
    // Use member function to set it.
    cout << "Width of box : " << box.getWidth() << endl;
    return 0;
}