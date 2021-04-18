/*
** There are many cases where you will wish to generate 
** a random number.
** There are actually two functions you will need to know 
** about random number generation. 
** The first is rand(), this function will only return a 
** pseudo random number. The way to fix this is to first 
** call the srand() function.
** This example makes use of time() function to get the 
** number of seconds on your system time, to randomly seed 
** the rand() function:
*/

#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;
int main()
{
    int i, j;
    // set the seed
    srand((unsigned)time(NULL));
    /* generate 10 random numbers. */
    for (i = 0; i < 10; i++)
    {
        // generate actual random number
        j = rand();
        cout << " Random Number : " << j << endl;
    }
    return 0;
}