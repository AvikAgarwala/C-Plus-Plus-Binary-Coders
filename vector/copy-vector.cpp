#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> v(3, 5);

    // method 1

    vector<int> v1 = v;

    for (int i : v1)
    {
        cout << i << " ";
    }

    cout << endl;

    // method 2

    vector<int> v2(v);

    for (int i : v2)
    {
        cout << i << " ";
    }

    cout << endl;

    // method 3

    vector<int> v3(v.begin(), v.end());

    for (int i : v3)
    {
        cout << i << " ";
    }

    cout << endl;

    return 0;
}


