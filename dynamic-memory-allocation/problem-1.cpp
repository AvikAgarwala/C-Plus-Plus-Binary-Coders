#include <iostream>
using namespace std;
int main()
{
    // Declaring two pointer to pointer variables
    
    int **mat1 = new int *[3];
    int **mat2 = new int *[3];

    for (int i = 0; i < 3; i++)
    {
        // Creating individual 1D array
        mat1[i] = new int[3];
        mat2[i] = new int[3];
    }

    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            cin >> mat1[i][j]; // Taking input of matrix 1

    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            cin >> mat2[i][j]; // Taking input of matrix 2

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
            cout << mat1[i][j] + mat2[i][j] << " "; // Printing sum of matrices
        cout << endl;
    }

    for (int i = 0; i < 3; i++)
    {
        // Deallocating individual 1D array
        
        delete mat1[i]; 
        delete mat2[i];
    }

       // Memory Deallocation
    delete mat1;
    delete mat2;

    return 0;
}
