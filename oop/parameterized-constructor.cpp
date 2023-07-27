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

    cout << s1.name << " " << s1.roll << endl;
    cout << s2.name << " " << s2.roll << endl;

    return 0;
}