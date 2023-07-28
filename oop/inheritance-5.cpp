// THIS CODE WILL GIVE AN ERROR!

#include <iostream>
using namespace std;

class A // base class
{
public:
    A(int x)
    {
        cout << "class A constructor called" << endl;
    }
};

class B : public A // derived class
{
public:
    B(int temp)
    {
        cout << "class B constructor called" << endl;
    }
};

int main()
{
    B obj(12); // create object of class B

    return 0;
}