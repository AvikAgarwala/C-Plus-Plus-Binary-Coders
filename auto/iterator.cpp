#include <iostream>
using namespace std;
int main()
{
    int intArray[5] = {1, 2, 3, 4, 5};
    char charArray[3] = {'a', 'b', 'c'};

    for (int i : intArray)
        cout << i << " ";

    cout << endl;

    for (auto i : intArray)
        cout << i << " ";

    cout << endl;

    for (auto i : charArray)
        cout << i << " ";

    return 0;
}