#include <iostream>
using namespace std;

class Student
{
public:
    // destructor
    ~Student()
    {
        cout << "destructor called" << endl;
    }
};

int main()
{
    Student s1, s2;

    cout << "end of main()" << endl;

    return 0;
}