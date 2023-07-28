#include <iostream>
using namespace std;

class A // base class
{
public:
    int a;
};

class B : public A // derived class
{
public:
    int b;
};

class C : public B // derived class
{
public:
    int c;
};

int main()
{
    // YOUR CODE GOES HERE

    return 0;
}