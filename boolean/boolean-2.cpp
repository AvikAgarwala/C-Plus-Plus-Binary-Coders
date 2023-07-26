#include <iostream>
using namespace std;
int main()
{
    bool check;
    cin >> check;

    if (check) // if (0 != check)
        cout << "Check passed" << endl;
    else
        cout << "Check failed" << endl;

    return 0;
}