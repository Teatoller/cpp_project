#include "main.hpp"

int main()
{
    std::string stringLength, stringWidth;
    float length;
    float width;
    float area;

    std::cout << "Enter length of room: ";

    //get the length as a string
    std::getline(std::cin, stringLength);

    //convert to a float
    std::stringstream(stringLength) >> length;
    std::cout << "You entered " << length << " units\n";

    std::cout << "Enter width of room: ";
    //get the length as a string
    std::getline(std::cin, stringWidth);

    //convert to a float
    std::stringstream(stringWidth) >> width;
    std::cout << "You entered " << width << " units\n";

    area = length * width;
    std::cout << "Area is " << area<<" sq units\n";
    return 0;
}