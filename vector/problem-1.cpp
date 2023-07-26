#include <iostream>
#include <vector>
#include <climits>
using namespace std;
int main()
{
    vector<int> v;
    int n;
    cin >> n;
    int maxValue = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        int value;
        cin >> value;
        v.push_back(value);
        if (v[i] > maxValue)
            maxValue = v[i];
    }
    cout << maxValue;
    return 0;
}