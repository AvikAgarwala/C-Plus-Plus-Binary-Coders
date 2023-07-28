// THIS CODE WILL GIVE AN ERROR!

#include <iostream>
using namespace std;

class Student
{
public:
    // destructor 1
    ~Student()
    {
        cout << "destructor 1 called" << endl;
    }

    // destructor 2
    ~Student() // error as destructor cannot be overloaded
    {
        cout << "destructor 2 called" << endl;
    }
};

int main()
{
    Student s1;

    return 0;
}