#include <iostream>
#include <string>
using namespace std;

int main()
{
    struct Animal
    {
        virtual void sound() const { cout << "eek"; }
    };
    struct Human : Animal
    {
        void sound() const { cout << "hello"; }
    };
    struct Scientist : Human
    {
        void sound() const { cout << "greetings"; }
    };

    return 0;
}