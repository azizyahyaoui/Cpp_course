#include <iostream>
#include <ctime>
#include <unistd.h>

using namespace std;

int SendPINCode()
{
    int PIN;
    // Seed the random number generator with the current time
    srand(time(nullptr));
    // Generate a random number between 1000 and 9999
    PIN = (rand() % 9000 + 1000);
    cout << "Random Number: " << PIN << endl;
    // Sleep for 5 seconds
    sleep(5);
    system("cls");
    return PIN;
}

int main(int argc, char const *argv[])
{
    int PIN, userInputPIN, numbOfErrors = 0, limitNumber = 3;
    cout << "==========================================================" << endl;
    cout << "----- Code PIN checking: -----" << endl;

    PIN = SendPINCode();

    do
    {
        cout << "Type the PIN code you received : " << endl;
        cin >> userInputPIN;
        numbOfErrors++;
    } while (numbOfErrors < limitNumber && userInputPIN != PIN);

    if (numbOfErrors < limitNumber)
    {
        cout << "--------------------------------------------------" << endl;
        cout << "Congratulations!, You have successfully logged in." << endl;
        cout << "--------------------------------------------------" << endl;
    }
    else
    {
        cout << "-------------------------------" << endl;
        cout << "Failed !,  Invalid PIN entered." << endl;
        cout << "-------------------------------" << endl;
    }

    cout << "==========================================================" << endl;

    system("pause>0");
    return 0;
}
