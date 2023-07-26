#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> v;

    v.push_back(1);  // insert element
    v.push_back(2);
    v.push_back(3);

    cout << v.size() << endl; // 3

    v.pop_back(); // only shifts the end pointer

    cout << v.size() << endl; // 2

    for (auto i : v) // traverse from begin to end point only
        cout << i << " ";
    cout << endl;
    
    cout << v[2] << endl; // value remains same at the place, only end pointer get shifted
    
    return 0;
}