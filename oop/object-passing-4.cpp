#include <iostream>
using namespace std;

class Student
{
public:
    string name;
    int roll;
    void printDetails()
    {
        cout << "Name is " << name << " & roll is " << roll << endl;
    }
};

void updateDetails(Student &ptr) // accepting as reference
{
    ptr.name = "TestName";
    ptr.roll = 404;
}

int main()
{
    Student s1;
    s1.name = "Alik";
    s1.roll = 75;

    s1.printDetails();

    updateDetails(s1);

    s1.printDetails();

    return 0;
}