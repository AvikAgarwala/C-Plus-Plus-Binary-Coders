// THIS CODE WILL GIVE AN ERROR!

#include <iostream>
using namespace std;

class Student
{
private: // not accessible outside the class
    int roll;
    char sec;

public:
    string name;
};

int main()
{
    Student s1;

    s1.name = "Avik"; // accessible

    s1.roll = 12; // not accessible
    s1.sec = 'A'; // not accessible

    return 0;
}