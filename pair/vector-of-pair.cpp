#include <iostream>
#include <vector>
using namespace std;
int main()
{
    // to store n no. of cartesian pairs
    int n;
    cin >> n;

    vector<pair<int, int> > v; // vector of pairs

    for (int i = 0; i < n; i++)
    {
        // pair<int, int> p;
        // cin >> p.first >> p.second;
        // v.push_back(p);

        // alternative way

        int x, y;
        cin >> x >> y;
        v.push_back(make_pair(x, y));
    }

    // display using iterator

    for (auto i : v)
        cout << i.first << " " << i.second << endl;
    
    return 0;
}
