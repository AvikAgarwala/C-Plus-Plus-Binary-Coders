#include <iostream>
using namespace std;

int findTotalOccurrence(int *, int, int, bool);

int main()
{
    int n;
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++)
        cin >> arr[i];

    int key;
    cin >> key;

    cout << findTotalOccurrence(arr, n, key, false) - findTotalOccurrence(arr, n, key, true) + 1 << endl;

    return 0;
}

int findTotalOccurrence(int arr[], int n, int key, bool check)
{
    int low = 0, high = n - 1, result = n - 1;
    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        if (arr[mid] == key)
        {
            result = mid;
            if (check)
                high = mid - 1;
            else
                low = mid + 1;
        }
        else if (key < arr[mid])
            high = mid - 1;
        else
            low = mid + 1;
    }
    return result;
}