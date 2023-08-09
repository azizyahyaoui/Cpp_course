// This line includes the input/output stream library in the program.
#include <iostream>
// This line allows the use of standard namespace, which contains many commonly used functions and objects.
using namespace std;

int main()
{
    string msg = "Welcome";
    string myName;
    string fullName;
    int age;

    // Displaying a welcome message to user using output statements:
    cout << "===================" << endl;
    cout << "Hello from C++ ! " << endl;
    cout << "===================" << endl;

    cout << "Enter your Name : " << endl;
    cin >> myName; // store the input from user
    cout << "Enter your age : " << endl;
    cin >> age;

    cout << msg << " Mr. " << myName << " your age is " << age << " ! ." << endl;
    cout << "------------------------------------------" << endl;

    cout << "Enter your Full Name : " << endl;
    /* cin.ignore(); --> function that clears the input stream buffer. It is typically used after using cin to read input from the user
    to ensure that any remaining newline characters or other unwanted characters in the input buffer are
    cleared before the program continues */
    cin.ignore();
    // get entire line
    getline(cin, fullName);
    cout << "you Full Name is : " << fullName << endl;
    return 0;
}