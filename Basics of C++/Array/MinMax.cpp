#include <iostream>
using namespace std;

int print_max(int array[], int size)
{
    int Maxi = array[0];
    for (int i = 0; i < size; i++)
    {
        Maxi = max(Maxi, array[i]);
        // if (Max < array[i])
        // {
        //     Max = array[i];
        // }
    }
    return Maxi;
}

int print_min(int array[], int size)
{
    int Mini = array[0];
    for (int i = 0; i < size; i++)
    {
        Mini = min(Mini, array[i]);
        // if (Min > array[i])
        // {
        //     Min = array[i];
        // }
    }
    return Mini;
}

int main()
{
    int size;
    cout << "Enter array size: ";
    cin >> size;

    int array[100];

    for (int i = 0; i < size; i++)
    {
        cout << "Enter Value: ";
        cin >> array[i];
    }

    cout << "Max Value is: " << print_max(array, size) << endl;
    cout << "Min Value is: " << print_min(array, size) << endl;

    return 0;
}
