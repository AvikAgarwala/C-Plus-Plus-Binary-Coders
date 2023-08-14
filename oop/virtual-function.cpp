#include <iostream>
using namespace std;

class Parent
{
public:
    virtual void display()
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
    Child c1;

    Parent *ptr = &c1;

    ptr->display(); // will follow the  late binding due to the use of virtual keyword
    
    return 0;
}