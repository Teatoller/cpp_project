#include <iostream>
using namespace std;

int main()
{
    auto x = 59;
    auto y = 35;
    auto a = x + y;
    std::cout << ++y + x++;
    return 0;
}