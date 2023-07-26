#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> v;

    v.push_back(1);  // insert element
    v.push_back(2);
    v.push_back(3);

    v.clear();

    cout << v.size() << endl << endl;

    for (int i = 0; i < 3; i++)
        cout << v[i] << " ";
    
    return 0;
}