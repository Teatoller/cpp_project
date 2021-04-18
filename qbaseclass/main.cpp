/*Goal: practice class inheritance
*/

#include "main.hpp"

int main()
{
    Rose r1;
    Rose r2;
    r1.setBloomTime("spring");
    r1.setFragrance("strong");
    r2.setFragrance("sweet");

    cout << "r1 blooms in " << r1.getBloomTime() << ", " << r1.getFragrance()<<'\n';
    cout << "r2 blooms in " << r2.getBloomTime() << ", " << r2.getFragrance()<<'\n';
    return 0;
}