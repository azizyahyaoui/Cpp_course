#include <iostream>

using namespace std;

void ShowMenu()
{
    cout << "==========================Welcome=To=Our=ATM=machine===============================" << endl;
    cout << "-------------- MENU--------------" << endl;
    cout << "1. Balance Enquiry" << endl;
    cout << "2. Cash Withdrawal" << endl;
    cout << "3. Deposit Money   " << endl;
    cout << "4. Exit            " << endl;
    cout << "---------------------------------" << endl;
}

int main()
{
    int choice, depMoney;
    double balance = 50000, amount_withdrawn;

    do
    {

        ShowMenu();
        cout << "Choice option :" << endl;
        cin >> choice;
        system("cls");
        switch (choice)
        {
        case 1:
            // balance enquiry
            if (balance > 0)
            {
                cout << "Your current account balance is " << balance << " $" << endl;
            }
            else
            {
                cout << "Sorry! Your Account has been blocked due to low funds." << endl;
            }
            break;
        case 2:
            // cash withdraw from the ATM machine
            cout << "Enter Amount you want to withdraw :" << endl;
            cin >> amount_withdrawn;
            if (amount_withdrawn <= balance)
            {
                balance -= amount_withdrawn; // deducting cash withdrawal form user's bank
                cout << "Amount successfully deducted!! Current balance of your account is:" << balance << "$." << endl;
            }
            else
            {
                cout << "Invalid input or insufficient fund available in your account!" << endl;
            }
            break;
        case 3:
            // deposit money into our atm card.
            cout << "\t\tDeposit Money" << endl;
            cout << "Please enter the amount that needs to be added : " << endl;
            cin >> depMoney;
            balance += depMoney;
            cout << "Current Balance = " << fixed << balance << " $" << endl;
            break;
        case 4:
            // Exit Condition
            cout << "Thank You For Using Our Services!"<<endl;
            cout << "Exiting..." << endl;
            break;
        default:
            cout << "Invalid Input, Please try again.." << endl;
        }
    } while (choice != 4);

    return 0;
}