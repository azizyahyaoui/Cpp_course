#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int years[] = {1997, 2000, 2020, 2011, 2015, 2018, 1999, 2020, 2023};

    // Get an array size :
    //         9     =   36          /   4
    int arraySize = sizeof(years) / sizeof(int);
    cout << "array size is : " << arraySize << endl;
    for (int i = 0; i < arraySize; i++)
    {
        cout << "Year : " << years[i] << endl;
    }
    cout << "==========================================================" << endl;
    cout << "sorted years : \n";
    sort(begin(years), end(years));
    for (int year : years)
    {
        cout << "year : " << year << endl;
    }
    return 0;
}