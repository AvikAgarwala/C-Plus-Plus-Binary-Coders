#include <iostream>
using namespace std;

class Parent
{
public:
    void display()
    {
        cout << "I am parent" << endl;
    }
};

class Child : public Parent
{
public:
    void display()
    {
        cout << "I am child" << endl;
    }
};

int main()
{
    Parent p1;
    Child c1;

    c1.Parent::display();
    c1.Child::display(); // c1.display();

    p1.Parent::display();

    p1.Child::display(); // this will throw an error
    
    return 0;
}