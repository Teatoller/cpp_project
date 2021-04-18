/*Goal: Practice writing generic functions*/

#include "main.hpp"

template <typename T> //tell the compiler we are using a template
T sumTwo(T a, T b);

int main()
{
    int a = 90;
    int b = 1;
    std::cout << a << " + " << b << " = " << sumTwo(a, b)<<'\n';
    return 0;
}

template <typename T>
T sumTwo(T a, T b)
{
    T sum;
    sum = a + b;
    return sum;
}