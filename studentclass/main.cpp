#include <iostream>
using namespace std;

class Student
{
    string name;
    int id;
    int gradDate;

public:
    // setters
    Student();
    void setName(string nameIn);
    void setId(int idIn);
    void setGradDate(int gradDateIn);

    // getters
    string getName();
    int getId();
    int getGradDate();
    void print();
    ~Student();
};

int main()
{
    Student student1;

    student1.setName("Steven Ennis");
    // student1.setId(1682);
    // student1.setGradDate(2018);

    //There are two ways we can print the values of our class:
    //The first is to call the print function we created.
    cout << "Using the Student::print function\n";
    cout << "Student1 = ";
    student1.print();
    cout << "\n\n";

    //The second is to access each member of the class using the get functions
    cout << "Using the student access functions\n";
    cout << "Student1 name = " << student1.getName() << "\n";
    cout << "Student1 ID = " << student1.getId() << "\n";
    cout << "Student1 Grad Date = " << student1.getGradDate() << "\n";

    return 0;
}

Student::Student()
{
    cout<<"Assigning inital values in the constructor\n";
    name = "Unknown";
    id = 2488; //the initial value of the 
    gradDate = 2021; //the initial value of the age
}

Student::~Student()
{
    cout<<"Deleting Student\n";
}

// methods
void Student::setName(string nameIn)
{
    name = nameIn;
}
void Student::setId(int idIn)
{
    id = idIn;
}

void Student::setGradDate(int gradDateIn)
{
    gradDate = gradDateIn;
}

void Student::print()
{
    cout << name << " " << id << " " << gradDate;
}

string Student::getName()
{
    return name;
}

int Student::getId()
{
    return id;
}

int Student::getGradDate()
{
    return gradDate;
}