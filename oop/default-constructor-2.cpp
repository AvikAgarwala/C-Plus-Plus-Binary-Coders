// THIS CODE WILL GIVE AN ERROR!

#include <iostream>
using namespace std;

class Student
{
public:
    int roll;
    string name;

    // constructor
    Student(string name, int roll)
    {
        this->name = name;
        this->roll = roll;
    }
};

int main()
{
    Student s1("Avik", 12);    // constructor called
    Student s2("Poulami", 45); // constructor called

    Student s3; // error due to lack of suitable constructor

    return 0;
}