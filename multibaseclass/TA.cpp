#include <string>
using namespace std;
#include "Staff.cpp"
#include "GradStudent.cpp"

class TA : public Staff, public GradStudent
{
private:
    string supervisor;

public:
    TA();
    void setSupervisor(string input);
    string getSupervisor();
};

TA::TA()
{
    supervisor = "NA";
}

void TA::setSupervisor(string input)
{
    supervisor = input;
}

string TA::getSupervisor()
{
    return supervisor;
}