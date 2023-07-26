#include <iostream>
using namespace std;
int main()
{
    int x;
    int &ref = x;
    cout << &x << endl;
    cout << &ref << endl;

    return 0;
}