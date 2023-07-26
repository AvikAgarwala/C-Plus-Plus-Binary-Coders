#include <iostream>
using namespace std;
int main()
{
    string arr[3];

    for (auto i = 0; i < 3; i++)
        cin >> arr[i];

    for (auto i : arr)
        cout << i << " ";

    return 0;
}