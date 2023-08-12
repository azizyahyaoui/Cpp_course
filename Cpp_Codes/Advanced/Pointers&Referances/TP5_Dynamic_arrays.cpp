#include <iostream>

using namespace std;

int main()
{
    int size;
    cout << "Enter the number of elements: \n";
    cin >> size;

    // Allocate memory for a dynamic integer array
    int *dynamicArray = new int[size];

    // Fill the dynamic array with values based on its indices
    for (int i = 0; i < size; i++)
    {
        cout << "Add element [" << i+1 << "]" << endl;
        cin >> dynamicArray[i];
    }

    // Print out each element in the array
    cout << "add numbers are : \n";
    for (int i = 0; i < size; i++)
    {
        cout << *(dynamicArray + i)<<" ";
    }

    // Deallocate the memory for the dynamic array
    delete[] dynamicArray;
    /* Is the best practice to set the pointer to nullptr to avoid using a dangling pointer. */
    dynamicArray = nullptr;

    return 0;
}
