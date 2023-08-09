#include <iostream>

using namespace std;


int main()
{
    int hostNumber,guestNumber;
    cout<<"Enter the host number to guess :"<<endl;
    cin>>hostNumber;
    system("cls");
    cout<<"\nGuess a Number between 0 and 10 :"<<endl;
    cin>>guestNumber;
    (guestNumber==hostNumber)? cout<<"Congratulations! You have won."<< endl : cout<<"Sorry ! You Failed to guess the correct number";

    return 0;
}
