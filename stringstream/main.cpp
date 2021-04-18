#include "main.hpp"

int main()
{
    std::string stringLength;
    float meter = 0;
    float centimetre = 0;

    std::cout << "Enter number of meters: ";
    std::getline(std::cin, stringLength);
    std::stringstream(stringLength) >> meter;
    std::cout << "You entered " << meter << "\n";
    centimetre = meter * 100;
    std::cout << "centimetre is " << centimetre << '\n';
    return 0;
}