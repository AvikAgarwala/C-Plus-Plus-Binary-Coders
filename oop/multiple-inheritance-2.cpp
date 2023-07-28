// THIS CODE WILL GIVE AN ERROR!

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
    cout << obj.var << endl; // 'var' is ambiguous

    return 0;
}

