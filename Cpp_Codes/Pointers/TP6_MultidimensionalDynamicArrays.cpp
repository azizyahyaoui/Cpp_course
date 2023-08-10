#include <iostream>

using namespace std;

// Here I'll use pointer to pointer.

int main() {
    int rows, cols;
    cout << "Enter the number of rows and columns: "<<endl;
    cin >> rows >> cols;

    // Allocate memory for an array of pointers to int
    int **table = new int *[rows];

    // Allocate memory for each row of the 2D array
    for (int i = 0; i < rows; i++) {
        table[i] = new int[cols];
    }

    // Input values for the 2D array
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; ++j) {
            cout << "Enter the element [" << i + 1 << "][" << j + 1 << "] : ";
            cin >> table[i][j];
        }
    }

    // Print out the elements of the 2D array
    cout << "Elements of the table:\n";
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            cout << table[i][j] << " ";
        }
        cout << endl;
    }

    // Deallocate the memory for the multidimensional dynamic array.
    for (int i = 0; i < rows; i++) {
        delete[] table[i];
    }
    delete[] table;
    table = nullptr;

    return 0;
}
