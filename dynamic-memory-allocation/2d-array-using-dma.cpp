#include <iostream>
using namespace std;
int main()
{
    int row, col;
    cin >> row >> col; // taking input of row and coloumn nummber individually
    //memory allocating for rows
    int **arr = new int *[row]; // int** arr means pointer to pointer

    for (int i = 0; i < row; i++)
        arr[i] = new int[col]; // memory allocating for coloumns

    for (int i = 0; i < row; i++)
        for (int j = 0; j < col; j++)
            cin >> arr[i][j]; // taking input for the array

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
            cout << arr[i][j] << " "; // printing the whole array
        cout << endl;
    }

    for (int i = 0; i < row; i++)
        delete arr[i]; // to deallocate the individual array to prevent memory leakage
    delete arr; // to deallocate the main array

    return 0;
}
