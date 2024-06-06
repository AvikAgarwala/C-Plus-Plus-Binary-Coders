#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<pair<int, int> > v;
    v.push_back(make_pair(10, 20));
    v.emplace_back(30, 40);

    for (auto i : v)
    {
        cout << i.first << " " << i.second << endl;
    }

    cout << endl;

    return 0;
}

