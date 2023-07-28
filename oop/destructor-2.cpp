#include <iostream>
using namespace std;

class Student
{
public:
    // constructors
    Student()
    {

    }
    Student(int roll)
    {
        
    }

    // destructor
    ~Student()
    {
        cout << "destructor called" << endl;
    }
};

int main()
{
    Student s1;
    Student s2(12);

    cout << "end of main()" << endl;

    return 0;
}