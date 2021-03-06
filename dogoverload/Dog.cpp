/*Create a class that has four constructors:
* one that accepts no input parameters
* one that accepts name
* one that accepts license number
* one that accepts name and license number
* The default values are:
name = NA
license = 0
*/

using namespace std;

class Dog
{
    string name;
    int license;

public:
    Dog();
    Dog(string nameIn);
    Dog(int licenseIn);
    Dog(string nameIn, int licenseIn);
    void setName(string nameIn);
    void setLicense(int licenseIn);
    string getName();
    int getLicense();
    void printInfo();
    ~Dog();
};

void Dog::setName(string nameIn)
{
    name = nameIn;
}

void Dog::setLicense(int licenseIn)
{
    license = licenseIn;
}

string Dog::getName()
{
    return name;
}

int Dog::getLicense()
{
    return license;
}

void Dog::printInfo()
{
    cout << name << " "
         << "#" << license;
}

Dog::Dog()
{
    name = "NA";
    license = 0;
}

Dog::Dog(int licenseIn)
{
    license = licenseIn;
    name = "NA";
}

Dog::Dog(string nameIn)
{
    name = nameIn;
    license = 0;
}

Dog::Dog(string nameIn, int licenseIn)
{
    name = nameIn;
    license = licenseIn;
}
Dog::~Dog()
{
    cout << "Deleting Dog\n";
}