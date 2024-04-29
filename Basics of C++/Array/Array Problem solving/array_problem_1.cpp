#include <iostream>
using namespace std;

void alter_array(int arr[], int size) // Pass array size as a separate argument
{
    int previous_array_element_holder;
    int next_array_element_holder;

    // swapping arrays
    for (int i = 0; i < size; i++) // Loop up to size
    {
        if (i + 1 < size)
        {
            previous_array_element_holder = arr[i];
            next_array_element_holder = arr[i + 1];

            arr[i] = next_array_element_holder;
            arr[i + 1] = previous_array_element_holder;
        }
        i = i + 1;
    }
}

void print_array(int arr[], int size) // Pass array size as a separate argument
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " "; // Add space for better visualization
    }
    cout << endl; // Print newline after printing the array
}

int main()
{
    int a[6] = {2, 6, 7, 32, 2,6};

    // array before altering
    print_array(a, 6); // Pass array size as a separate argument

    alter_array(a, 6); // Pass array size as a separate argument

    // array after alter
    print_array(a, 6); // Pass array size as a separate argument

    return 0;
}
