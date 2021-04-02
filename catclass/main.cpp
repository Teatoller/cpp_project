/*Goal: practice creating and using classes.
**Create a class called Cat.
**Create the following members:
**private members: name, breed, age
**public members: setName, setBreed,setAge
**getName, getBreed, getAge, printInfo*/
#include "main.hpp"

int main()
{
    Cat cat1;

    cat1.setName("Falffy");
    cat1.setBreed("feline");
    cat1.setAge(3);

    //The first is to call the print function we created.
    cout << "Using the Cat::print function\n";
    cout << setw(11) << "Name" << setw(8) << "Breed" << setw(5) << "Age" << '\n';
    cout << "Cat1 = ";
    cat1.printInfo();
    cout << "\n\n";

    //The second is to access each member of the class using the get functions
    cout << "Using the Cat access functions\n";
    cout << "cat name = " << cat1.getName() << "\n";
    cout << "cat breed = " << cat1.getBreed() << "\n";
    cout << "cat age = " << cat1.getAge() << "\n";

    return 0;
}
