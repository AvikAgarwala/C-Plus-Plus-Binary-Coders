#include <iostream>
using namespace std;
int main()
{
    int row, col;
    cin >> row >> col; // taking row and coloumn numbers as input
    
    int **arr = new int *[row];

    for (int i = 0; i < row; i++)
        arr[i] = new int[col];

    for (int i = 0; i < row; i++) // taking array inputs
        for (int j = 0; j < col; j++)
            cin >> arr[i][j];

    for (int i = 0; i < row; i++) // printing the array elements
    {
        for (int j = 0; j < col; j++)
            cout << arr[i][j] << " ";
        cout << endl;
    }

    for (int i = 0; i < row; i++) // memory de-allocation
        delete arr[i];
    delete arr;

    return 0;
}
