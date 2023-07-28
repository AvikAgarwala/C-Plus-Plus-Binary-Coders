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

class C : public B // derived class
{
public:
    C()
    {
        cout << "class C constructor called" << endl;
    }
};

int main()
{
    new C;

    return 0;
}