#include <iostream>
using namespace std;

class Student
{
public:
    string name;

    // constructor
    Student();
};

Student::Student() // defined outside
{
    cout << "constructor called" << endl;
}

int main()
{
    Student s1; // constructor called
    Student s2; // constructor called

    return 0;
}