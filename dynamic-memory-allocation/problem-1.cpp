#include <iostream>
using namespace std;
int main()
{
    int **mat1 = new int *[3];
    int **mat2 = new int *[3];

    for (int i = 0; i < 3; i++)
    {
        mat1[i] = new int[3];
        mat2[i] = new int[3];
    }

    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            cin >> mat1[i][j];

    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            cin >> mat2[i][j];

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
            cout << mat1[i][j] + mat2[i][j] << " ";
        cout << endl;
    }

    for (int i = 0; i < 3; i++)
    {
        delete mat1[i];
        delete mat2[i];
    }

    delete mat1;
    delete mat2;

    return 0;
}