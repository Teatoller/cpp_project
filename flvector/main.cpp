#include <iostream>
#include <vector>
using namespace std;
/*Create a vector of floats called vFloat. 
* vFloat should have an iterator. 
*/

int main()
{
    vector<float> vFloat;

    cout << "vFloat has " << vFloat.size() << " elements\n";

    //Changing the size of vectorInts to 10
    vFloat.resize(10);

    cout << "\n\n vFloat now has " << vFloat.size() << " elements\n";

    return 0;
}
