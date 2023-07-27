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

    t1.setValues(5, 7);

    Test t2 = t1; // default copy constructor will be invoked

    t2.setValues(6, 9);

    t2.display();
    t1.display();
    return 0;
}