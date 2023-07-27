#include <iostream>
using namespace std;

class Student
{
public:
    int studentID;
    Student()
    {
        studentID = 0;
    }
    Student(int studentID)
    {
        this->studentID = studentID;
    }
    Student(Student &obj) // copy constructor
    {
        cout << "Copy constructor called" << endl;
        studentID = obj.studentID;
    }
    void display()
    {
        cout << "Student ID is " << studentID << endl;
    }
};

int main()
{
    Student s1, s2(5);

    s1.display();
    s2.display();

    Student s3(s2); // invoking the copy constructor

    s3.display();

    return 0;
}