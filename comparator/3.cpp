#include <iostream>
#include <vector>
using namespace std;

bool comparator(int a, int b)
{
    // if (a > b)
    //     return true;
    // else
    //     return false;

    return a > b;
}

int main()
{
    int n;
    cin >> n;

    vector<int> v(n);

    for (int i = 0; i < n; i++)
        cin >> v[i];

    sort(v.begin(), v.end(), comparator);

    for (auto i : v)
        cout << i << " ";

    cout << endl;

    return 0;
}
