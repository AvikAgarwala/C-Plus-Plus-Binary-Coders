#include <iostream>
using namespace std;

class Student
{
public:
    string name;
    string univ = "ABC University";
};

int main()
{
    Student s1; // default constructor called
    s1.name = "Avik";

    Student s2; // default constructor called
    s2.name = "Sudipta";

    cout << s1.name << endl;
    cout << s1.univ << endl;

    cout << endl;

    cout << s2.name << endl;
    cout << s2.univ << endl;

    return 0;
}