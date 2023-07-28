// THIS CODE WILL GIVE AN ERROR!

#include <iostream>
using namespace std;

class Parent
{
private:
    int a;

protected:
    int b;

public:
    int c;
};

class Child : private Parent
{
    
};

int main()
{
    Child obj;
    cout << obj.c << endl; // obj.c is not accessible

    return 0;
}