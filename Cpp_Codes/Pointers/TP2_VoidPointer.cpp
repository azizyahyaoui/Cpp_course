#include <iostream>

using namespace std;

// This program demonstrates how to use pointers that point to objects of different types


int main() {

    int num = 10;
    double pi = 3.14159;
    char ch = 'A';

    // Declare a void pointer
    void* voidPtr;

    // Point the void pointer to an integer
    voidPtr = &num;

    // Dereference the void pointer and cast it back to an int pointer
    int intPtr1 = *((int*)voidPtr);
    // OR
    int* intPtr2 = static_cast<int*>(voidPtr);

    // Dereference the int pointer and access the value
    cout << "Integer value method 1 : " << intPtr1 << endl;
    cout << "Integer value method 2 : " << *intPtr2 << endl;

    // Point the void pointer to a double
    voidPtr = &pi;

    // Dereference the void pointer and cast it back to a double pointer
    double* doublePtr1 = ((double*)voidPtr);
    // OR
    double* doublePtr2 = static_cast<double*>(voidPtr);

    // Dereference the double pointer and access the value
    cout << "Double value method 1 :" << *(doublePtr1) << endl;
    cout << "Double value method 2 : " << *doublePtr2 << endl;

    // Point the void pointer to a char
    voidPtr = &ch;

    // Dereference the void pointer and cast it back to a char pointer
    char* charPtr = static_cast<char*>(voidPtr);

    // Dereference the char pointer and access the value
    cout << "Character value: " << *charPtr << endl;

    return 0;
}
