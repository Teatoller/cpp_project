#include <string>
using namespace std;

class GradStudent
{
private:
    int studentId;

public:
    GradStudent();
    void setId(int input);
    int getId();
};

GradStudent::GradStudent()
{
    studentId = 000000;
}

void GradStudent::setId(int input)
{
    studentId = input;
}

int GradStudent::getId()
{
    return studentId;
}