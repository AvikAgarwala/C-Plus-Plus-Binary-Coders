#include <iostream>
using namespace std;

class Parent1
{
public:
    virtual void display()
    {
        cout << "Parent display" << endl;
    }
};

class Parent2
{
public:
    virtual void identity()
    {
        cout << "Parent identity" << endl;
    }
};

class Child : public Parent1, public Parent2
{
public:
    void display()
    {
        cout << "Child dispaly" << endl;
    }
    void identity()
    {
        cout << "Child identity" << endl;
    }
};

int main()
{
    Child c1;

    Parent1 *ptr1 = &c1;
    Parent2 *ptr2 = &c1;

    ptr1->display();
    ptr2->identity(); // can't use ptr1->identity() as identity() is not defined in Parent1

    return 0;
}
