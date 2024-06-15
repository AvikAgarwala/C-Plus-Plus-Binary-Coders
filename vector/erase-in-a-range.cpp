#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> v;

    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    v.push_back(5);

    // 1 2 3 4 5

    v.erase(v.begin() + 1, v.end() - 1);

    // 1 5

    for (int i : v)
    {
        cout << i << " ";
    }

    cout << endl;

    return 0;
}