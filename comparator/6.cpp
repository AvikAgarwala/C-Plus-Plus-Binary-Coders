#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool comparator(pair<int, int> p1, pair<int, int> p2)
{
    return p1.second > p2.second;
}

int main()
{
    // sorting a vector of pairs
    // sorting based on the second element of the pair in descending order

    int n;
    cin >> n;

    cout << endl;

    vector<pair<int, int> > v;

    for (int i = 0; i < n; i++)
    {
        int x, y;
        cin >> x >> y;
        v.push_back(make_pair(x, y));
    }

    cout << endl;

    sort(v.begin(), v.end(), comparator);

    for (auto i : v)
        cout << i.first << " " << i.second << endl;

    return 0;
}
