#include <iostream>
using namespace std;
void change(int &);
int main()
{
    int x = 5;
    change(x);
    cout << x << endl;

    return 0;
}
void change(int &ref)
{
    ref = 10;
}