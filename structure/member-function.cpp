#include <iostream>
using namespace std;
struct Student
{
    int roll;
    char sec;
    void printDetails()
    {
        cout << "Roll is " << roll << " & sec is " << sec << endl;
    }
};

int main()
{
    Student s1;
    s1.roll = 75;
    s1.sec = 'A';
    s1.printDetails();

    Student s2;
    s2.roll = 65;
    s1.sec = 'C';
    s1.printDetails();

    return 0;
}