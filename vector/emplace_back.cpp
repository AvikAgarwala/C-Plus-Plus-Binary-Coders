#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> v;
    v.emplace_back(10);
    v.emplace_back(20);
    v.emplace_back(30);

    for (int i : v)
    {
        cout << i << " ";
    }

    cout << endl;

    return 0;
}

