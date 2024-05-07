#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    // to sort a vector in ascending order

    int n;
    cin >> n;

    vector<int> v(n);

    for (int i = 0; i < n; i++)
        cin >> v[i];

    sort(v.begin(), v.end()); // by default ascending order

    for (auto i : v)
        cout << i << " ";

    cout << endl;

    return 0;
}
