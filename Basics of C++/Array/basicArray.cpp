#include <iostream>
using namespace std;

void printArray(int arr[], int array_size)
{
    cout << "Printing The array" << endl;
    for (int i = 0; i < array_size; i++)
    {
        cout << arr[i];
    }
    cout << " " << endl;
    cout << "Printing Done" << endl;
};

int main()
{
    // initializing an array
    int first_array[10] = {1, 20, 29};
    printArray(first_array, 100);

    cout << "size of array: " << sizeof(first_array) / sizeof(int);

    return 0;
}
