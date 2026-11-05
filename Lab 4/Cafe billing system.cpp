/*
  Write a C++ program for a small cafe billing system.
*/
#include <iostream>
using namespace std;
int main()
{
    int n,q;
    cout << "Menu" << endl << "1.Burger (Rs.350)" << endl << "2.Pizza (Rs.800)" << endl << "3.Fries (Rs.200)" << endl << "4.Cold Drink (Rs.100)";
    cout << endl << "Enter item number: ";
    cin >> n;
    cout << "Enter quantity: ";
    cin >> q;
    switch (n)
        {
            case 1:
            cout << "Total bill: Rs. " << 350*q;
            break;
            case 2:
            cout << "Total bill: Rs." << 800*q;
            break;
            case 3:
            cout << "Total bill: Rs." << 200*q;
            break;
            case 4:
            cout << "Total bill: Rs." << 100*q;
            break;
            default:
            cout << "Invalid choice.";
        }
    return 0;
}