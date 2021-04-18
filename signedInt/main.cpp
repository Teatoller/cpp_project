#include <iostream>
using namespace std;
/* This program shows the difference between
* signed and unsigned integers.
*/
int main()
{
    short int i;          // a signed short integer
    short unsigned int j; // an unsigned short integer
    j = 50000;
    i = j;
    cout <<"short int "<< i<<endl;
    cout <<"short unsigned int "<< j<<endl;
    return 0;
}