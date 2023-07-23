#include <iostream>

using namespace std;

int main()
{
    int number, reversedNumb = 0;

    cout << "Enter your number to reverse : \n";
    cin >> number;

    // number = 1.2.3 ==> reversedNumber = 312
    while (number != 0)
    {
        reversedNumb *= 10;
        //32
        reversedNumb += number % 10;
        //321
        number /= 10;
        //0
    }
    cout << "Reversed Number is: "<<reversedNumb<<endl;
    return 0;
}
