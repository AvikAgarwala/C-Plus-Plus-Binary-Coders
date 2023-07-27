#include <iostream>
using namespace std;

class Student
{
public:
    string name;
    int roll;
};

void updateDetails(Student temp) // pass by value
{
    temp.name = "Binod";
    temp.roll = 404;
}

int main()
{
    Student s1;
    s1.name = "Alik";
    s1.roll = 75;

    updateDetails(s1);

    cout << s1.name << " " << s1.roll << endl;

    return 0;
}