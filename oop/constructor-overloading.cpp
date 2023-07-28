#include <iostream>
using namespace std;

class Student
{
public:
    int roll;
    string name;

    // constructor 1
    Student(string name)
    {
        cout << "constructor 1 called" << endl;

        this->name = name;
    }

    // constructor 2
    Student(int roll)
    {
        cout << "constructor 2 called" << endl;

        this->roll = roll;
    }

    // constructor 3
    Student(string name, int roll)
    {
        cout << "constructor 3 called" << endl;

        this->name = name;
        this->roll = roll;
    }

    // constructor 4
    Student(int roll, string name)
    {
        cout << "constructor 4 called" << endl;

        this->roll = roll;
        this->name = name;
    }

    // constructor 5
    Student()
    {
        cout << "constructor 5 called" << endl;
    }
};

int main()
{
    Student s1("Avik");        // constructor 1 called
    Student s2(12);            // constructor 2 called
    Student s3("Poulami", 45); // constructor 3 called
    Student s4(26, "Rahul");   // constructor 4 called
    Student s5;                // constructor 5 called
    return 0;
}