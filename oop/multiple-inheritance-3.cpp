#include <iostream>
using namespace std;

class A // base class
{
public:
    int var = 1;
};

class B // base class
{
public:
    int var = 2;
};

class C : public A, public B // derived class
{
    
};

int main()
{
    C obj;

    cout << obj.A::var << endl; // 1
    cout << obj.B::var << endl; // 2

    return 0;
}
