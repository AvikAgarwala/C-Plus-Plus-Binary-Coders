#include <iostream>
using namespace std;
int main()
{
    int *arr = new int[3]; // dynamic integer array
    // arr[0], arr[1], arr[2]

    for (int i = 0; i < 3; i++)
    cin >> arr[i];
    cout << arr[i] << " ";
    
    return 0;
}
