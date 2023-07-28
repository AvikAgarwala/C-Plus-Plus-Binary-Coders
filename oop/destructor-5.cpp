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

void test(); // prototype

int main()
{
    test();

    cout << "end of main()" << endl;

    return 0;
}

void test()
{
    Student s1; // object created

    cout << "end of test()" << endl;

    // destructor will be called
}