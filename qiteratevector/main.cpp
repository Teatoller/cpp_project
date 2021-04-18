// Goal: pracitce constructing vectors
// and their iterators
// Call the vector vFloat
// Call the iterator it

#include <iostream>
#include <vector>
#include <string>
using namespace std;
#include "main.hpp"

int main()
{
    vector<float> vFloat;

    std::cout << "vFloat has " << vFloat.size() << " elements\n";
    vFloat.resize(10);

    std::cout << "\n\nAdding 10 elements to the vector\n";

    vFloat.assign(10, 8.8);

    std::cout << "vFloat has " << vFloat.size() << " elements\n";

    // Call the function here to print out each element of vFloat
    printVector(vFloat);

    return 0;
}
