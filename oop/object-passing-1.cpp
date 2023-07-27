#include <iostream>
using namespace std;

class Student
{
public:
    string name;
    int roll;
};

void printDetails(Student temp) // passing object
{
    cout << temp.name << " " << temp.roll << endl;
}
int main()
{
    Student s1;
    s1.name = "Alik";
    s1.roll = 75;
    printDetails(s1);

    return 0;
}