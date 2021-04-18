
/*
** One good use of goto is to exit from 
** a deeply nested routine.
*/

#include <iostream>
using namespace std;
int main()
{
    // Local variable declaration:
    int a = 10;
// do loop execution
LOOP:
    do
    {
        if (a == 12)
        {
            // skip the iteration.
            a = a + 1;
            goto LOOP;
        }
        cout << "value of a: " << a << endl;
        a = a + 1;
    } while (a < 20);
    return 0;
}