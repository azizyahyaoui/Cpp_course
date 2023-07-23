#include <iostream>

using namespace std;

void SayHello(string name)
{
    cout << "Hello again Mr. " << name << " !.\n";
}

//Function Signature.
int calcCube(int numb);


int main()
{
    string myName;
    cout << "Enter your Name: \n";
    cin >> myName;
    SayHello(myName); // calling the function with argument as string variable 'myName'
    cout << "---------------------- Function with return :----------------------------\n";
    int cube = calcCube(5); // calling a function to calculate and store value
    cout << "cube of 5 : " << cube << endl;

    return 0;
}

int calcCube(int numb)
{
    return numb * numb * numb;
}/*Func.cpp:17:26: error: 'calcCube' was not declared in this scope
     int cube = calcCube(5); // calling a function to calculate and store value*/