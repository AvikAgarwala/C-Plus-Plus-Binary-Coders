#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> v(3, 10); // vector of size 3 with all elements as 10
    for (int i : v)
    {
        cout << i << " ";
    }

    cout << endl;

    vector<int> v1(5); // initializion value will depend on the compiler

    for (int i : v1)
    {
        cout << i << " ";
    }

    cout << endl;

    
    return 0;
}