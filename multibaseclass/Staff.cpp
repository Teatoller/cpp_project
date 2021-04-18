#include <string>
using namespace std;

class Staff
{
private:
    string title;

public:
    Staff();
    void setTitle(string input);
    string getTitle();
};

Staff::Staff()
{
    title = "NA";
}

void Staff::setTitle(string input)
{
    title = input;
}

string Staff::getTitle()
{
    return title;
}