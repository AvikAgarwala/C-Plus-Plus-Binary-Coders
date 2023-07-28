#include <iostream>
using namespace std;

class Student
{
public:
    // destructor
    ~Student();
};

Student::~Student() // destructor definition
{
    cout << "destructor called" << endl;
}

int main()
{
    Student s1;

    return 0;
}