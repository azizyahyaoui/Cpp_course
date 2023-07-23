#include <iostream>

using namespace std;

/*
In C++, templates provide a powerful mechanism for generic programming.
They allow you to write functions or classes that can operate on different data types without duplicating code.
Templates are defined using the template keyword.*/

template <typename T>
void Swap(T &a, T &b)
{
    T temp = a;
    a = b;
    b = temp;
}

int main()
{

    int x = 10, y = 20;
    cout<<"Befor Swapping:"<<"x= "<<x<<", y"<<y<<endl;
    Swap<int>(x, y);
    cout << "After swapping: "<< "X=" << x << ", Y =" << y << endl;

    char a='A', b='B';
    cout<<"Befor Swapping:"<<"A= "<<a<<", B="<<b<<endl;
    Swap<char>(a, b);
    cout<<"After Swapping:"<<"A= "<<a<<", B="<<b<<endl;

    return 0;
}