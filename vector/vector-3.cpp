#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> v;

    v.push_back(1);  // insert element
    v.push_back(2);
    v.push_back(3);

    cout << v.empty() << endl; // 0 means not empty

    v.clear();

    cout << v.empty() << endl; // 1 means empty
    
    return 0;
}
