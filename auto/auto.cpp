#include <iostream>
using namespace std;
int main()
{
    auto x = 5; // int
    auto ch = 'c'; // char
    auto myVar = 4.56; // double

    cout << x << " " << ch << " " << myVar << endl;

    auto v = 2;
    auto ptr = &v; // int*
    auto pptr = &ptr; // int**
    cout << *ptr << endl;
    cout << **pptr << endl;

    return 0;
}
