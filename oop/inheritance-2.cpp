#include <iostream>
using namespace std;

class A // base class
{
public:
    A()
    {
        cout << "class A constructor called" << endl;
    }
};

class B : public A // derived class
{
public:
    B()
    {
        cout << "class B constructor called" << endl;
    }
};

int main()
{
    new B; // anonymous object
    // B();
    // B obj;

    return 0;
}