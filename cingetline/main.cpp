#include "main.hpp"

int main()
{
    string userName;
    cout << "Tell me your nickname?: ";
    getline(cin, userName);
    cout << "Hello " << userName << "\n";
    return 0;
}