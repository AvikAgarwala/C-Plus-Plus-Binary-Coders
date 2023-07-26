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

    v.clear();

    v.shrink_to_fit();

    cout << v[3] << endl; // can't access this value
    
    return 0;
}