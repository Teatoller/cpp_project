/*Goal: practice creating and using a class
** Use the class 'Dog' to create to 
** instances of the class, dog1 and dog2.
** Assign dog1 the name: Trixie
** Assign dog2 the name: Kali
** Assign dog1 the license #1234
** Assign dog2 the license #5678
** Print the information for each dog.
*/

#include "main.hpp"

int main()
{
    Dog dog1;
    Dog dog2;

    dog1.setName("Trixie");
    dog1.setLicenseNumber(1234);

    dog2.setName("Kali");
    dog2.setLicenseNumber(5678);

    cout << "Using the Dog::print function\n";
    cout << "dog1 = ";
    dog1.printInfo();
    cout << "\n\n";

    cout << "Using the Dog::print function\n";
    cout << "dog2 = ";
    dog2.printInfo();
    cout << "\n\n";

    //The second is to access each member of the class using the get functions
    cout << "Using the dog access functions\n";
    cout << "dog1 name = " << dog1.getName() << "\n";
    cout << "dog1 LicenseNumber = " << dog1.getLicenseNumber() << "\n";

    cout << "\n";
    cout << "dog2 name = " << dog2.getName() << "\n";
    cout << "dog2 LicenseNumber = " << dog2.getLicenseNumber() << "\n";
    return 0;
}