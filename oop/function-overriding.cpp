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

    p1.display();
    c1.display();
    
    return 0;
}