#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> v;
    cout << "Size is " << v.size() << " capacity is " << v.capacity() << endl;
    for (int i = 1; i <= 10; i++)
    {
        v.push_back(i);
        cout << "Size is " << v.size() << " capacity is " << v.capacity() << endl;
    }
    
    return 0;
}