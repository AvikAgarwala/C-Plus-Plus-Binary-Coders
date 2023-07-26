#include <iostream>
using namespace std;
int main()
{
    auto x = 5;
    auto ch = 'c';
    auto myVar = 4.56;

    cout << x << " " << ch << " " << myVar << endl;

    auto v = 2;
    auto ptr = &v;
    auto pptr = &ptr;
    cout << *ptr << endl;
    cout << **pptr << endl;
    
    return 0;
}