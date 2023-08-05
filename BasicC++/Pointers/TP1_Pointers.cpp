#include <iostream>

using namespace std;


void printIntNumber(int* numbPtr){
    cout << "the integer number is : " << *numbPtr << endl;
};

int main(){

int val = 21;

//print the memory address fo val var
cout << &val<<endl;

// creat a pointer 'll hold the memory address of the val
// the ptr should be the same type the var 'll hold
int *ptr= &val;
cout<<"The value of ptr is "<<ptr<<endl;
// print the value pointed by ptr or dereference the ptr.
cout <<"Value at location"<<*ptr<<endl;
// reassign the value of val variable using ptr
*ptr =345;
cout<<"New Value of Val:"<<val<<endl;

int* ptr = nullptr; // Initializing to null (recommended)

int number = 10;
printIntNumber(&number);




    return 0;
}