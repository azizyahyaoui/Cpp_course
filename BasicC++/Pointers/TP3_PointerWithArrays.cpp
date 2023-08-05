#include <iostream>

using namespace std;


int main() {
    int numbers[5] = {10, 20, 30, 40, 50};

    // Using array name as a pointer to access elements
    cout << "First element: " << numbers[0] << endl; // Output: 10

    // Using a pointer to access elements
    int* ptr = numbers;
    cout << "First element using pointer: " << *ptr <<endl; // Output: 10

    // Accessing other elements using pointer arithmetic
    cout << "Third element using pointer: " << *(ptr + 2) << endl; // Output: 30

    // Looping through the array using pointers
    for (int i = 0; i < 5; i++) {
        cout << "Element " << i << ": " << *(ptr + i) << endl;
    }

    return 0;
}
