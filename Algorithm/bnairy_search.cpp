#include <iostream>
using namespace std;

int binarySearch(int *arr, int size, int key)
{
    int start = 0;
    int end = size - 1;
    int mid;

    while (start <= end)
    {
        mid = (start + end) / 2;

        if (arr[mid] == key)
        {
            cout << "Search index is " << mid << endl;
            return 1;
        }

        if (arr[mid] < key)
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }

    cout << "Element not found in array" << endl;
    return -1;
}

int main()
{
    int arr[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8};
    int size = sizeof(arr) / sizeof(arr[0]);

    binarySearch(arr, size, 7);

    return 0;
}
