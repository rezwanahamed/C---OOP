#include <iostream>
using namespace std;

int unique_element_in_array(int arr[], int array_size) // Change parameter to int arr[] and pass array_size
{
    int ans = 0; // Initialize ans to 0

    for (int i = 0; i < array_size; i++)
    {
        ans = ans ^ arr[i]; // XOR operation to find unique elements
    }
    return ans;
}

int main()
{
    int number_array[5] = {1, 1, 2, 24, 2};

    // Calculate array size
    int array_size = sizeof(number_array) / sizeof(number_array[0]);

    // Pass array and array size to the function
    cout << unique_element_in_array(number_array, array_size);

    return 0;
}
