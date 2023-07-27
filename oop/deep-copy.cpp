#include <iostream>
using namespace std;

class Test
{
public:
    int num;
    int *ptr;
    Test()
    {
        ptr = new int;
    }
    Test(Test &obj) // user defined copy constructor
    {
        num = obj.num;
        ptr = new int;
        *ptr = *(obj.ptr);
    }
    void setValues(int value1, int value2)
    {
        num = value1;
        *ptr = value2;
    }
    void display()
    {
        cout << "num = " << num << " and *ptr = " << *ptr << endl;
    }
};
int main()
{
    Test t1;

    t1.setValues(1, 2);

    t1.display();

    Test t2(t1); // user defined copy constructor will be invoked

    t2.setValues(5, 7);

    t2.display();
    t1.display();
    return 0;
}