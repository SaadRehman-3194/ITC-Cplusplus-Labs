/*
  Write a C++ program that asks the user to enter a month number (1–12) and displays the name of the month using a switch statement. For any other number, display "Invalid month number."
*/
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter month number: ";
    cin >> n;
    switch (n)
        {
            case 1:
            cout << "Month:January";
            break;
            case 2:
            cout << "Month:February";
            break;
            case 3:
            cout << "Month:March";
            break;
            case 4:
            cout << "Month:April";
            break;
            case 5:
            cout << "Month:May";
            break;
            case 6:
            cout << "Month:June";
            break;
            case 7:
            cout << "Month:July";
            break;
            case 8:
            cout << "Month:August";
            break;
            case 9:
            cout << "Month:September";
            break;
            case 10:
            cout << "Month:October";
            break;
            case 11:
            cout << "Month:November";
            break;
            case 12:
            cout << "Month:December";
            break;
            default:
            cout << "Invalid month number.";
        }
    return 0;
}