/*
   Write a C++ program that simulates a simple ATM withdrawal system.
*/
#include <iostream>
using namespace std;
int main()
{
    int bal = 10000,w;
    cout << "Current Balance = " << bal << endl;
    cout << "Enter amount you want to withdraw: ";
    cin >> w;
    if (w % 500 == 0)
        if (w <= bal)
        {
            cout << "Transaction successful!";
            cout << endl << "New Balace = " << bal - w;
        }
        else 
            cout << "Insufficient balance.";
    else
        cout << "Invalid amount. Enter multiples of 500.";
    return 0;
}