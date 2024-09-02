// this program is about bubble sort
#include <iostream>
using namespace std;

int main()
{
    int arr[10] = {23, 53, 34, 5, 2, 1, 5, 343, 4, 6};

    for (int i = 1; i < 10; i++)
    {
        for (int j = 0; j < 10 - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                // swap arr[j] and arr[j + 1]
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }

        // print the array
        cout << "After pass " << i << ": ";
        for (int k = 0; k < 10; k++)
        {
            cout << arr[k] << " ";
        }
        cout << endl;
    }
    return 0;
}
