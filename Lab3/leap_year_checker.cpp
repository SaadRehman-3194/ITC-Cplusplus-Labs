/*
   Accept a year from the user. If it’s divisible by 4, display "This might be a leap year.", otherwise: “This is not a leap year.”
*/
#include <iostream>
using namespace std;
int main()
{
    int year;
    cout << "Enter a year: ";
    cin >> year;
    if (year % 4 == 0)
        cout << "This might be a leap year";
    else 
        cout << "This is not a leap year";
    return 0;
}